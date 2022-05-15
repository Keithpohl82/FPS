// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterPlayerController.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/GameMode.h"
#include "Net/UnrealNetwork.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/UI/PlayerHUD.h"
#include "FPS/UI/PlayerOverlay.h"


void AMasterPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMasterPlayerController, MatchState)
}

void AMasterPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetHUDTime();
	CheckTimeSync(DeltaSeconds);
	PoolInit();
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

void AMasterPlayerController::OnMatchStateSet(FName State)
{
	MatchState = State;

	if (MatchState == MatchState::InProgress)
	{
		HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
		if (HUD)
		{
			HUD->AddCharacterOverlay();
		}
	}
}

void AMasterPlayerController::BeginPlay()
{
	Super::BeginPlay();
	HUD = Cast<APlayerHUD>(GetHUD());
}

void AMasterPlayerController::SetHUDTime()
{
	uint32 SecondsLeft = FMath::CeilToInt(MatchTime - GetWorld()->GetTimeSeconds());

	if (CountdownInt != SecondsLeft)
	{
		SetHUDMatchCountdown(MatchTime - GetWorld()->GetTimeSeconds());
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
				SetHUDHealth(HUDHealth, HUDMaxHealth);
				SetHUDScore(HUDScore);
				SetHUDDeaths(HUDDeaths);
			}
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
	float CurrentServerTime = TimeServerReceivedClientRequest + (0.5f * RoundTripTime);
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

void AMasterPlayerController::OnRep_MatchState()
{

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
		bInitializeCharacterOverlay = true;
		HUDHealth = Health;
		HUDMaxHealth = MaxHealth;
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
		bInitializeCharacterOverlay = true;
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
		bInitializeCharacterOverlay = true;
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
}

void AMasterPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	HUD = HUD == nullptr ? Cast<APlayerHUD>(GetHUD()) : HUD;
	bool bHUDValid = HUD && HUD->PlayerOverlay && HUD->PlayerOverlay->MatchCountdownText;
	if (bHUDValid)
	{
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;

		FString CountdownText = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
		HUD->PlayerOverlay->MatchCountdownText->SetText(FText::FromString(CountdownText));
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
