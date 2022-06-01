// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileBase.h"
#include "ProjectileRocket.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AProjectileRocket : public AProjectileBase
{
	GENERATED_BODY()
	
public:
	AProjectileRocket();

protected:


	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RocketMesh;

};
