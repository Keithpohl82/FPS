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


private:

	float TopScore = 0.f;
};
