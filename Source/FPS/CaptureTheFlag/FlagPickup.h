// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS/Pickups/Pickup.h"
#include "FPS/TypeClasses/Team.h"
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

	virtual void BeginPlay() override;

	void AttachFlagToPlayer(class AMasterCharacter* Character);

	void ResetFlag();

private:

	UPROPERTY(EditAnywhere)
	ETeam Team;

	FTransform InitialTransform;

protected:

	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY()
	class AMasterCharacter* OwnerCharacter;
	UPROPERTY()
	class AMasterPlayerController* OwnerPlayerController;

public:

	FORCEINLINE ETeam GetTeam() const {return Team;}
};
