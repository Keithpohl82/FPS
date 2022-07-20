// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "FPS/PlayerState/MasterPlayerState.h"
#include "FPS/GameState/MasterGameState.h"

namespace MatchState
{
	const FName Cooldown = FName("Cooldown");
}


AMasterGameMode::AMasterGameMode()
{
	bDelayedStart = true;
}

void AMasterGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (MatchState == MatchState::WaitingToStart)
	{
		CountdownTime = WarmupTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CountdownTime <= 0.f)
		{
			StartMatch();
		}
	}
	else if (MatchState == MatchState::InProgress)
	{
		CountdownTime = WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CountdownTime <= 0.f)
		{
			SetMatchState(MatchState::Cooldown);
		}
	}
	else if (MatchState == MatchState::Cooldown)
	{
		CountdownTime = CountdownTime + WarmupTime + MatchTime - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		if (CountdownTime <= 0.f)
		{
			RestartGame();
		}
	}
}

void AMasterGameMode::PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController)
{
	if (KillerController == nullptr || KillerController->PlayerState == nullptr) return;
	if (VictimController == nullptr || VictimController->PlayerState == nullptr) return;
	
	AMasterPlayerState* KillerPlayerState = KillerController ? Cast<AMasterPlayerState>(KillerController->PlayerState) : nullptr;
	AMasterPlayerState* VictimPlayerState = VictimController ? Cast<AMasterPlayerState>(VictimController->PlayerState) : nullptr;

	AMasterGameState* MasterGameState = GetGameState<AMasterGameState>();

	if (KillerPlayerState && KillerPlayerState != VictimPlayerState && MasterGameState)
	{
		KillerPlayerState->AddToScore(1.f);
		MasterGameState->UpdateTopScore(KillerPlayerState);
	}
	if (VictimPlayerState)
	{
		VictimPlayerState->AddToDeaths(1);
	}
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Elim(false);
	}
}

void AMasterGameMode::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Reset();
		ElimmedCharacter->Destroy();
	}
	if (ElimmedController)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
	}
}

void AMasterGameMode::PlayerLeftGame(AMasterPlayerState* PlayerLeaving)
{
	if (PlayerLeaving == nullptr) return;
	AMasterGameState* MasterGameState = GetGameState<AMasterGameState>();
	if (MasterGameState && MasterGameState->TopScoringPlayers.Contains(PlayerLeaving))
	{
		MasterGameState->TopScoringPlayers.Remove(PlayerLeaving);
	}
	AMasterCharacter* CharacterLeaving = Cast<AMasterCharacter>(PlayerLeaving->GetPawn());
	if (CharacterLeaving)
	{
		CharacterLeaving->Elim(true);
	}
}

void AMasterGameMode::BeginPlay()
{
	Super::BeginPlay();

	LevelStartingTime = GetWorld()->GetTimeSeconds();
}

void AMasterGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AMasterPlayerController* MasterPlayerController = Cast<AMasterPlayerController>(*It);
		if (MasterPlayerController)
		{
			MasterPlayerController->OnMatchStateSet(MatchState);
		}
	}
}
