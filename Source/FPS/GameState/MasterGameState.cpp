// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGameState.h"
#include "Net/UnrealNetwork.h"
#include "FPS/PlayerController/MasterPlayerController.h"
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

void AMasterGameState::RedTeamScores()
{
	++RedTeamScore;

	AMasterPlayerController* MasterController = Cast<AMasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MasterController)
	{
		MasterController->SetHUDRedTeamScore(RedTeamScore);
	}
}

void AMasterGameState::BlueTeamScores()
{
	++BlueTeamScore;

	AMasterPlayerController* MasterController = Cast<AMasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MasterController)
	{
		MasterController->SetHUDBuleTeamScore(BlueTeamScore);
	}
}

void AMasterGameState::OnRep_RedTeamScore()
{
	AMasterPlayerController* MasterController = Cast<AMasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MasterController)
	{
		MasterController->SetHUDRedTeamScore(RedTeamScore);
	}
}

void AMasterGameState::OnRep_BlueTeamScore()
{
	AMasterPlayerController* MasterController = Cast<AMasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if (MasterController)
	{
		MasterController->SetHUDBuleTeamScore(BlueTeamScore);
	}
}
