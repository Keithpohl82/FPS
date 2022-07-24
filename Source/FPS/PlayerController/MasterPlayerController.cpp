// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterPlayerController.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/GameMode.h"
#include "Net/UnrealNetwork.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/UI/PlayerHUD.h"
#include "FPS/UI/PlayerOverlay.h"
#include "FPS/UI/Announcement.h"
#include "Kismet/GameplayStatics.h"
#include "FPS/GameModes/MasterGameMode.h"
#include "FPS/Components/CombatComponent.h"
#include "FPS/GameState/MasterGameState.h"
#include "FPS/PlayerState/MasterPlayerState.h"
#include "Components/Image.h"
#include "FPS/UI/InGameMenu.h"


void AMasterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (InputComponent == nullptr) return;

	InputComponent->BindAction("InGameMenu", IE_Pressed, this, &AMasterPlayerController::ShowIngameMenu);

}

void AMasterPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMasterPlayerController, MatchState);
	DOREPLIFETIME(AMasterPlayerController, bShowTeamScores);
}

void AMasterPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetHUDTime();
	CheckTimeSync(DeltaSeconds);

	PoolInit();
	CheckPing(DeltaSeconds);
}

void AMasterPlayerController::CheckPing(float DeltaSeconds)
{
	HighPingRunningTime += DeltaSeconds;
	if (HighPingRunningTime > CheckPingFrequency)
	{
		PlayerState = PlayerState == nullptr ? GetPlayerState<APlayerState>() : PlayerState;
		if (PlayerState)
		{

			UE_LOG(LogTemp, Warning, TEXT("PlayerState->GetCompressedPing() * 4: %d"), PlayerState->GetCompressedPing() * 4)

			if (PlayerState->GetCompressedPing() * 4 > HighPingThreshold) //Ping is compressed by 4
			{
				HighPingWarning();
				PingAnimationRunningTime = 0.f;
				ServerReportPingStatus(true);
			}
			else
			{
				ServerReportPingStatus(false);
			}
		}
		HighPingRunningTime = 0.f;
	}
	bool bHighPingAnimationPlaying = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->HighPingAnimation && HUD->PlayerOverlay->IsAnimationPlaying(HUD->PlayerOverlay->HighPingAnimation);
	if (bHighPingAnimationPlaying)
	{
		PingAnimationRunningTime += DeltaSeconds;
		if (PingAnimationRunningTime > HighPingDuration)
		{
			StopHighPingWarning();
		}
	}
}

void AMasterPlayerController::ShowIngameMenu()
{
	if (InGameMenuWidget == nullptr) return;
	if (InGameMenu == nullptr)
	{
		InGameMenu = CreateWidget<UInGameMenu>(this, InGameMenuWidget);
	}
	if (InGameMenu)
	{
		bIngameMenuOpen = !bIngameMenuOpen;
		if (bIngameMenuOpen)
		{
			InGameMenu->MenuSetup();
		}
		else
		{
			InGameMenu->MenuTearDown();
		}
	}
}

void AMasterPlayerController::ClientElimAnnouncement_Implementation(APlayerState* Killer, APlayerState* Victim)
{
	APlayerState* Self = GetPlayerState<APlayerState>();
	if (Killer && Victim && Self)
	{
		HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
		if (HUD)
		{
			if (Killer == Self && Victim != Self)
			{
				HUD->AddElimAnnouncement("You", Victim->GetPlayerName());
				return;
			}
			if (Victim == Self && Killer != Self)
			{
				HUD->AddElimAnnouncement(Killer->GetPlayerName(), "You");
				return;
			}
			if (Killer == Victim && Killer == Self)
			{
				HUD->AddElimAnnouncement("You" , "Yourself");
				return;
			}
			if (Killer == Victim && Killer != Self)
			{
				HUD->AddElimAnnouncement(Killer->GetPlayerName(), "ThemSelves");
				return;
			}
			HUD->AddElimAnnouncement(Killer->GetPlayerName(), Victim->GetPlayerName());
		}
	}
}

void AMasterPlayerController::BroadcastElim(APlayerState* Killer, APlayerState* Victim)
{
	ClientElimAnnouncement(Killer, Victim);
}

// Is the Ping Too High?
void AMasterPlayerController::ServerReportPingStatus_Implementation(bool bHighPing)
{
	HighPingDelegate.Broadcast(bHighPing);
}

float AMasterPlayerController::GetServerTime()
{
	if (HasAuthority()) return GetWorld()->GetTimeSeconds();
	else return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}

void AMasterPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
	if (IsLocalController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}

void AMasterPlayerController::OnMatchStateSet(FName State, bool bTeamsMatch)
{
	MatchState = State;

	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted(bTeamsMatch);
	}
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldown();
	}
}

void AMasterPlayerController::HandleCooldown()
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	if (HUD)
	{
		HUD->PlayerOverlay->RemoveFromParent();
		bool bHUDValid = HUD->Announcement && HUD->Announcement->AnnouncementText && HUD->Announcement->InfoText;
		if (bHUDValid)
		{
			HUD->Announcement->SetVisibility(ESlateVisibility::Visible);
			FString AnnouncementText("New Match Starts In :");
			HUD->Announcement->AnnouncementText->SetText(FText::FromString(AnnouncementText));

			AMasterGameState* MasterGameState = Cast<AMasterGameState>(UGameplayStatics::GetGameState(this));
			AMasterPlayerState* MasterPlayerState = GetPlayerState<AMasterPlayerState>();
			if (MasterGameState && MasterPlayerState)
			{
				TArray<AMasterPlayerState*> TopPlayers = MasterGameState->TopScoringPlayers;
				FString InfoTextString;
				if (TopPlayers.Num() == 0)
				{
				InfoTextString = FString("No Winner!");
				}
				else if (TopPlayers.Num() == 1 && TopPlayers[0] == MasterPlayerState)
				{
					InfoTextString = FString("You Are the Winner!");
				}
				else if (TopPlayers.Num() == 1)
				{
					InfoTextString = FString::Printf(TEXT("Winner: \n%s"), *TopPlayers[0]->GetPlayerName());
				}
				else if (TopPlayers.Num() > 1)
				{
					InfoTextString = FString("Players tied for the win:\n");
					for (auto TiedPlayer : TopPlayers)
					{
						InfoTextString.Append(FString::Printf(TEXT("%s\n"), *TiedPlayer->GetPlayerName()));
					}
				}

				HUD->Announcement->InfoText->SetText(FText::FromString(InfoTextString));
			}
		}
	}
	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(GetPawn());
	if (MasterCharacter && MasterCharacter->GetCombat())
	{
		MasterCharacter->bDisableGameplay = true;
		MasterCharacter->GetCombat()->FireButtonPressed(false);
	}
}

void AMasterPlayerController::HideTeamScores()
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->RedTeamScore && HUD->PlayerOverlay->BlueTeamScore;
	if (bHUDValid)
	{
		HUD->PlayerOverlay->RedTeamScore->SetText(FText());
		HUD->PlayerOverlay->BlueTeamScore->SetText(FText());
	}
}

void AMasterPlayerController::InitTeamScores()
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->RedTeamScore && HUD->PlayerOverlay->BlueTeamScore;
	if (bHUDValid)
	{
		FString Zero("0");
		HUD->PlayerOverlay->RedTeamScore->SetText(FText::FromString(Zero));
		HUD->PlayerOverlay->BlueTeamScore->SetText(FText::FromString(Zero));
	}
}

void AMasterPlayerController::SetHUDRedTeamScore(int32 RedScore)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->RedTeamScore;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), RedScore);
		HUD->PlayerOverlay->RedTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void AMasterPlayerController::SetHUDBuleTeamScore(int32 BlueScore)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->BlueTeamScore;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), BlueScore);
		HUD->PlayerOverlay->BlueTeamScore->SetText(FText::FromString(ScoreText));
	}
}

void AMasterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	HUD = Cast<APlayerHUD>(GetHUD());

	ServerCheckMatchState();
}

void AMasterPlayerController::HandleMatchHasStarted(bool bTeamsMatch)
{
	if (HasAuthority()) bShowTeamScores = bTeamsMatch;
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	if (HUD)
	{
		if (HUD->PlayerOverlay == nullptr) HUD->AddCharacterOverlay();
		if (HUD->Announcement)
		{
			HUD->Announcement->SetVisibility(ESlateVisibility::Hidden);
		}

		if (!HasAuthority()) return;

		if (bTeamsMatch)
		{
			InitTeamScores();
		}
		else
		{
			HideTeamScores();
		}
	}
}

void AMasterPlayerController::SetHUDTime()
{
	
	float TimeLeft = 0.f;

	if (MatchState == MatchState::WaitingToStart) TimeLeft = WarmupTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::InProgress) TimeLeft = WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::Cooldown) TimeLeft = CooldownTime + WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;

	
	uint32 SecondsLeft = FMath::CeilToInt(TimeLeft);

	if (HasAuthority())
	{
		MasterGameMode = MasterGameMode == nullptr ? Cast<AMasterGameMode>(UGameplayStatics::GetGameMode(this)) : MasterGameMode;
		if (MasterGameMode)
		{
			SecondsLeft = FMath::CeilToInt(MasterGameMode->GetCountdownTime() + LevelStartingTime);
		}
	}

	if (CountdownInt != SecondsLeft)
	{
		if (MatchState == MatchState::WaitingToStart || MatchState == MatchState::Cooldown)
		{
			SetHUDAnnouncementCountdown(TimeLeft);
		}
		if (MatchState == MatchState::InProgress)
		{
			SetHUDMatchCountdown(TimeLeft);
		}
	}
	CountdownInt = SecondsLeft;
}

void AMasterPlayerController::PoolInit()
{
	if (PlayerOverlay == nullptr)
	{
		if (HUD && HUD->PlayerOverlay)
		{
			PlayerOverlay = HUD->PlayerOverlay;
			if (PlayerOverlay)
			{
				if (bInitializeHealth) SetHUDHealth(HUDHealth, HUDMaxHealth);
				if (bInitializeShield) SetHUDShield(HUDShield, HUDMaxShield);
				if (bInitializeScore) SetHUDScore(HUDScore);
				if (bInitializeDeaths) SetHUDDeaths(HUDDeaths);
				if (bInitializeCarriedAmmo) SetHUDCarriedAmmo(HUDCarriedAmmo);
				if (bInitializeWeaponAmmo) SetHUDWeaponAmmo(HUDWeaponAmmo);

				AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(GetPawn());
				if (MasterCharacter && MasterCharacter->GetCombat())
				{
					if (bInitializeGrenades) SetHUDNades(MasterCharacter->GetCombat()->GetGrenades());
				}
			}
		}
	}
}

void AMasterPlayerController::HighPingWarning()
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->HighPingImage && HUD->PlayerOverlay->HighPingAnimation;
	if (bHUDValid)
	{
		HUD->PlayerOverlay->HighPingImage->SetOpacity(1.f);
		HUD->PlayerOverlay->PlayAnimation(HUD->PlayerOverlay->HighPingAnimation, 0.f, 5);
	}
}

void AMasterPlayerController::StopHighPingWarning()
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->HighPingImage && HUD->PlayerOverlay->HighPingAnimation;
	if (bHUDValid)
	{
		HUD->PlayerOverlay->HighPingImage->SetOpacity(0.f);
		if (HUD->PlayerOverlay->IsAnimationPlaying(HUD->PlayerOverlay->HighPingAnimation))
		{
			HUD->PlayerOverlay->StopAnimation(HUD->PlayerOverlay->HighPingAnimation);
		}
	}
}

void AMasterPlayerController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	float ServerTimeOfRequest = GetWorld()->GetTimeSeconds();
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfRequest);
}

void AMasterPlayerController::ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
	SingleTripTime = 0.5f * RoundTripTime;
	float CurrentServerTime = TimeServerReceivedClientRequest + SingleTripTime;
	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}

void AMasterPlayerController::CheckTimeSync(float DeltaTime)
{
	TimeSyncRunningTime += DeltaTime;
	if (IsLocalController() && TimeSyncRunningTime > TimeSyncFrequency)
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}

void AMasterPlayerController::ServerCheckMatchState_Implementation()
{
	AMasterGameMode* GameMode = Cast<AMasterGameMode>(UGameplayStatics::GetGameMode(this));

	if (GameMode)
	{
		WarmupTime = GameMode->WarmupTime;
		MatchTime = GameMode->MatchTime;
		CooldownTime = GameMode->CooldownTime;
		LevelStartingTime = GameMode->LevelStartingTime;
		MatchState = GameMode->GetMatchState();
		ClientJoinMidGame(MatchState, WarmupTime, MatchTime, LevelStartingTime, CooldownTime);

		if (HUD && MatchState == MatchState::WaitingToStart)
		{
			HUD->AddAnnouncement();
		}
	}
}

void AMasterPlayerController::ClientJoinMidGame_Implementation(FName StateOfMatch, float Warmup, float Match, float StartingTime, float Cooldown)
{
	MatchState = StateOfMatch;
	WarmupTime = Warmup;
	MatchTime = Match;
	CooldownTime = Cooldown;
	LevelStartingTime = StartingTime;
	OnMatchStateSet(MatchState);

	if (HUD && MatchState == MatchState::WaitingToStart)
	{
		HUD->AddAnnouncement();
	}
}

void AMasterPlayerController::OnRep_ShowTeamScores()
{
	if (bShowTeamScores)
	{
		InitTeamScores();
	}
	else
	{
		HideTeamScores();
	}
}

void AMasterPlayerController::OnRep_MatchState()
{
	if (MatchState == MatchState::InProgress)
	{
		HandleMatchHasStarted();
	}
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldown();
	}
}

void AMasterPlayerController::SetHUDHealth(float Health, float MaxHealth)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->HealthBar && HUD->PlayerOverlay->HealthText;
	if (bHUDValid)
	{
		const float HealthPercent = Health / MaxHealth;
		HUD->PlayerOverlay->HealthBar->SetPercent(HealthPercent);
		FString HealthText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		HUD->PlayerOverlay->HealthText->SetText(FText::FromString(HealthText));
	}
	else
	{
		bInitializeHealth = true;
		HUDHealth = Health;
		HUDMaxHealth = MaxHealth;
	}
}

void AMasterPlayerController::SetHUDShield(float Shield, float MaxShield)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->ShieldBar && HUD->PlayerOverlay->ShieldText;
	if (bHUDValid)
	{
		const float ShieldPercent = Shield / MaxShield;
		HUD->PlayerOverlay->ShieldBar->SetPercent(ShieldPercent);
		FString ShieldText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Shield), FMath::CeilToInt(MaxShield));
		HUD->PlayerOverlay->ShieldText->SetText(FText::FromString(ShieldText));
	}
	else
	{
		bInitializeShield = true;
		HUDShield = Shield;
		HUDMaxShield = MaxShield;
	}
}

void AMasterPlayerController::SetHUDScore(float Score)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->ScoreAmount;
	if (bHUDValid)
	{
		FString ScoreText = FString::Printf(TEXT("%d"), FMath::FloorToInt(Score));
		HUD->PlayerOverlay->ScoreAmount->SetText(FText::FromString(ScoreText));
	}
	else
	{
		bInitializeScore = true;
		HUDScore = Score;
	}
}

void AMasterPlayerController::SetHUDDeaths(int32 Deaths)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->DeathsAmount;
	if (bHUDValid)
	{
		FString DeathsText = FString::Printf(TEXT("%d"), Deaths);
		HUD->PlayerOverlay->DeathsAmount->SetText(FText::FromString(DeathsText));
	}
	else
	{
		bInitializeDeaths = true;
		HUDDeaths = Deaths;
	}
}

void AMasterPlayerController::SetHUDWeaponAmmo(int32 Ammo)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->WeaponAmmoAmount;
	if (bHUDValid)
	{
		FString WeaponAmmoText = FString::Printf(TEXT("%d"), Ammo);
		HUD->PlayerOverlay->WeaponAmmoAmount->SetText(FText::FromString(WeaponAmmoText));
	}
	else
	{
		bInitializeWeaponAmmo = true;
		HUDWeaponAmmo = Ammo;
	}
}

void AMasterPlayerController::SetHUDCarriedAmmo(int32 Ammo)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->CarriedAmmoAmount;
	if (bHUDValid)
	{
		FString CarriedAmmoText = FString::Printf(TEXT("%d"), Ammo);
		HUD->PlayerOverlay->CarriedAmmoAmount->SetText(FText::FromString(CarriedAmmoText));
	}
	else
	{
		bInitializeCarriedAmmo = true;
		HUDCarriedAmmo = Ammo;
	}
}

void AMasterPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->MatchCountdownText;
	if (bHUDValid)
	{

	if (CountdownTime < 0.f)
	{
		HUD->PlayerOverlay->MatchCountdownText->SetText(FText());
		return;
	}
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		HUD->PlayerOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));
	}
}

void AMasterPlayerController::SetHUDAnnouncementCountdown(float CountdownTime)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->Announcement && HUD->Announcement->WarmupTime;
	if (bHUDValid)
	{

	if (CountdownTime < 0.f)
	{
		HUD->Announcement->WarmupTime->SetText(FText());
		return;
	}

		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		HUD->Announcement->WarmupTime->SetText(FText::FromString(CountdownText));
	}
}

void AMasterPlayerController::SetHUDNades(int32 Grenades)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->GrenadesText;
	if (bHUDValid)
	{
		FString GrenadesText = FString::Printf(TEXT("%d"), Grenades);
		HUD->PlayerOverlay->GrenadesText->SetText(FText::FromString(GrenadesText));
	}
	else
	{
		bInitializeGrenades = true;
		HUDGrenades = Grenades;
	}
}

void AMasterPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(InPawn);
	if (MasterCharacter)
	{
		SetHUDHealth(MasterCharacter->GetHealth(), MasterCharacter->GetMaxHealth());
	}
}

