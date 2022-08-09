// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPS/TypeClasses/Team.h"
#include "NewFlag.generated.h"

UCLASS()
class FPS_API ANewFlag : public AActor
{
	GENERATED_BODY()
	
public:	

	ANewFlag();

	UPROPERTY(EditAnywhere)
	ETeam Team;

private:
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FlagMesh;

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

};
