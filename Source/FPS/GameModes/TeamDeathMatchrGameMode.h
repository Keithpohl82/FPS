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

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

protected:

	virtual void HandleMatchHasStarted() override;

};
