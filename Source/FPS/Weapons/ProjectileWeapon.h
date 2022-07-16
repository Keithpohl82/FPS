// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AProjectileWeapon : public AWeaponBase
{
	GENERATED_BODY()
	
private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileBase> ProjectileClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileBase> ServerSideRewindProjectileClass;

public:
	virtual void Fire(const FVector& HitTarget) override;
};
