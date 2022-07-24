// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FPS/TypeClasses/Team.h"

#include "MasterPlayerState.generated.h"




/**
 * 
 */
UCLASS()
class FPS_API AMasterPlayerState : public APlayerState
{
	GENERATED_BODY()
		
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnRep_Score() override;
	UFUNCTION()
	virtual void OnRep_Deaths();
	void AddToScore(float ScoreAmount);
	void AddToDeaths(int32 Deaths);

private:

	UPROPERTY()
	class AMasterCharacter* MasterCharacter;
	UPROPERTY()
	class AMasterPlayerController* MasterPlayerController;

	UPROPERTY(ReplicatedUsing = OnRep_Deaths)
	int32 NumDeaths;

	UPROPERTY(ReplicatedUsing = OnRep_Team)
	ETeam Team = ETeam::ET_Spectator;

	UFUNCTION()
	void OnRep_Team();

public:

	FORCEINLINE ETeam GetTeam() const { return Team; }
	void SetTeam(ETeam TeamToSet);
};
