// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "FPS/TypeClasses/Team.h"
#include "Flag.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFlag : public AWeaponBase
{
	GENERATED_BODY()
	
public:

	AFlag();

	virtual void Dropped() override;

protected:

	virtual void OnEquipped() override;

	virtual void OnDropped() override;

private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FlagMesh;

public:

	
};
