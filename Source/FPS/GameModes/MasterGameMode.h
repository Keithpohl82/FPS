// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MasterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AMasterGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AMasterGameMode();
	virtual void Tick(float DeltaSeconds) override;

	virtual void PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController);
	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);

	UPROPERTY(EditDefaultsOnly)
		float WarmupTime = 10.f;

	float LevelStartingTime = 0.f;

protected:

	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;

private:
	float CountdownTime = 0.f;
};
