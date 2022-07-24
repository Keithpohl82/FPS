// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MasterGameMode.h"
#include "TeamDeathMatchrGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API ATeamDeathMatchrGameMode : public AMasterGameMode
{
	GENERATED_BODY()
	
public:
	
	ATeamDeathMatchrGameMode();
	virtual void PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController) override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual float CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage) override;

protected:

	virtual void HandleMatchHasStarted() override;

};
