// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MasterGameState.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AMasterGameState : public AGameState
{
	GENERATED_BODY()
	

public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdateTopScore(class AMasterPlayerState* ScoringPlayer);

	UPROPERTY(Replicated)
	TArray<class AMasterPlayerState*> TopScoringPlayers;


	/*
		TEAMS
	*/

	TArray<AMasterPlayerState*> RedTeam;
	TArray<AMasterPlayerState*> BlueTeam;

	UPROPERTY(ReplicatedUsing = OnRep_RedTeamScore)
	float RedTeamScore = 0.f;
	UFUNCTION()
	void OnRep_RedTeamScore();

	UPROPERTY(ReplicatedUsing = OnRep_BlueTeamScore)
	float BlueTeamScore = 0.f;
	UFUNCTION()
	void OnRep_BlueTeamScore();


private:

	float TopScore = 0.f;
};
