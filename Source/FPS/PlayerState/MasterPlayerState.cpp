// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/PlayerController/MasterPlayerController.h"

void AMasterPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMasterPlayerState, NumDeaths);
}

void AMasterPlayerState::OnRep_Score()
{
	Super::OnRep_Score();

	MasterCharacter = MasterCharacter == nullptr ? Cast<AMasterCharacter>(GetPawn()) : MasterCharacter;
	if (MasterCharacter)
	{
		MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
		if (MasterPlayerController)
		{
			MasterPlayerController->SetHUDScore(GetScore());
		}
	}
}

void AMasterPlayerState::OnRep_Deaths()
{
	MasterCharacter = MasterCharacter == nullptr ? Cast<AMasterCharacter>(GetPawn()) : MasterCharacter;
	if (MasterCharacter)
	{
		MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
		if (MasterPlayerController)
		{
			MasterPlayerController->SetHUDDeaths(NumDeaths);
		}
	}
}

void AMasterPlayerState::AddToScore(float ScoreAmount)
{
	SetScore(GetScore() + ScoreAmount);
	MasterCharacter = MasterCharacter == nullptr ? Cast<AMasterCharacter>(GetPawn()) : MasterCharacter;
	if (MasterCharacter)
	{
		MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
		if (MasterPlayerController)
		{
			MasterPlayerController->SetHUDScore(GetScore());
		}
	}
}

void AMasterPlayerState::AddToDeaths(int32 Deaths)
{
	NumDeaths += Deaths;
	MasterCharacter = MasterCharacter == nullptr ? Cast<AMasterCharacter>(GetPawn()) : MasterCharacter;
	if (MasterCharacter)
	{
		MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
		if (MasterPlayerController)
		{
			MasterPlayerController->SetHUDDeaths(NumDeaths);
		}
	}
}
