// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS/Pickups/Pickup.h"
#include "FlagPickup.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFlagPickup : public APickup
{
	GENERATED_BODY()
	
public:

	AFlagPickup();


protected:

	
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
