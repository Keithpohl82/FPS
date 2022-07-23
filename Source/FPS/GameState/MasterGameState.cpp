// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGameState.h"
#include "Net/UnrealNetwork.h"
#include "FPS/PlayerState/MasterPlayerState.h"

void AMasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMasterGameState, TopScoringPlayers);
	DOREPLIFETIME(AMasterGameState, RedTeamScore);
	DOREPLIFETIME(AMasterGameState, BlueTeamScore);
}

void AMasterGameState::UpdateTopScore(class AMasterPlayerState* ScoringPlayer)
{
	if (TopScoringPlayers.Num() == 0)
	{
		TopScoringPlayers.Add(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
	else if (ScoringPlayer->GetScore() == TopScore)
	{
		TopScoringPlayers.AddUnique(ScoringPlayer);
	}
	else if (ScoringPlayer->GetScore() > TopScore)
	{
		TopScoringPlayers.Empty();
		TopScoringPlayers.AddUnique(ScoringPlayer);
		TopScore = ScoringPlayer->GetScore();
	}
}

void AMasterGameState::OnRep_RedTeamScore()
{
	
}

void AMasterGameState::OnRep_BlueTeamScore()
{

}
