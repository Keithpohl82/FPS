// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamDeathMatchrGameMode.h"
#include "FPS/GameState/MasterGameState.h"
#include "FPS/PlayerState/MasterPlayerState.h"
#include "Kismet/GameplayStatics.h"


void ATeamDeathMatchrGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	AMasterGameState* MasterGameState = Cast<AMasterGameState>(UGameplayStatics::GetGameState(this));
	if (MasterGameState)
	{
		AMasterPlayerState* MPState = NewPlayer->GetPlayerState<AMasterPlayerState>();
		if (MPState && MPState->GetTeam() == ETeam::ET_Spectator)
		{
			if (MasterGameState->BlueTeam.Num() >= MasterGameState->RedTeam.Num())
			{
				MasterGameState->RedTeam.AddUnique(MPState);
				MPState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				MasterGameState->BlueTeam.AddUnique(MPState);
				MPState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
}

void ATeamDeathMatchrGameMode::Logout(AController* Exiting)
{
	AMasterGameState* MasterGameState = Cast<AMasterGameState>(UGameplayStatics::GetGameState(this));
	AMasterPlayerState* MPState = Exiting->GetPlayerState<AMasterPlayerState>();
	if (MasterGameState && MPState)
	{
		if (MasterGameState->RedTeam.Contains(MPState))
		{
			MasterGameState->RedTeam.Remove(MPState);
		}
		if (MasterGameState->BlueTeam.Contains(MPState))
		{
			MasterGameState->BlueTeam.Remove(MPState);
		}
	}
}

void ATeamDeathMatchrGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	AMasterGameState* MasterGameState = Cast<AMasterGameState>(UGameplayStatics::GetGameState(this));
	if (MasterGameState)
	{
		for (auto PState : MasterGameState->PlayerArray)
		{
			AMasterPlayerState* MPState = Cast<AMasterPlayerState>(PState.Get());
			if (MPState && MPState->GetTeam() == ETeam::ET_Spectator)
			{
				if (MasterGameState->BlueTeam.Num() >= MasterGameState->RedTeam.Num())
				{
					MasterGameState->RedTeam.AddUnique(MPState);
					MPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					MasterGameState->BlueTeam.AddUnique(MPState);
					MPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}
