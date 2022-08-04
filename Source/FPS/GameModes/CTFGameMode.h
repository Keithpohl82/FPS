// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeamDeathMatchrGameMode.h"
#include "CTFGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API ACTFGameMode : public ATeamDeathMatchrGameMode
{
	GENERATED_BODY()
	
public:
	virtual void PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController) override;

	void FlagCaptured(class AFlagPickup* Flag, class AFlagZone* Zone);
};
