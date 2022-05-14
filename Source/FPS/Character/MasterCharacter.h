// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MasterCharacter.generated.h"

UCLASS()
class FPS_API AMasterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	AMasterCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:

	
protected:
	
	virtual void BeginPlay() override;
	

public:	
	
	

};
