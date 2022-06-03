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
	virtual void Destroyed() override;


protected:

	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
	virtual void BeginPlay() override;
	void DestroyTimerFinished();

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* TrailSystem;
	UPROPERTY()
	class UNiagaraComponent* TrailSystemComponent;

	UPROPERTY(EditAnywhere)
	USoundCue* ProjectileLoop;

	UPROPERTY()
	class UAudioComponent* ProjectileLoopComponent;

	UPROPERTY(EditAnywhere)
	USoundAttenuation* LoopingSoundAttenuation;

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RocketMesh;

	FTimerHandle DestroyTimer;

	UPROPERTY(VisibleAnywhere)
	float DestroyTime = 3.f;

};
