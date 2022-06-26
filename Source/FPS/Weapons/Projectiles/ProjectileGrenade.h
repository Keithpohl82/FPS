// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileGrenade.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AProjectileGrenade : public AProjectileBase
{
	GENERATED_BODY()
	

public:

	AProjectileGrenade();

	virtual void Destroyed() override;

protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);

private:

	UPROPERTY(EditAnywhere)
	class USoundCue* BounceSound;
};
