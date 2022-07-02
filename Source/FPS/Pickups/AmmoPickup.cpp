// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoPickup.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/Components/CombatComponent.h"

void AAmmoPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(OtherActor);
	if (MasterCharacter)
	{
		UCombatComponent* Combat = MasterCharacter->GetCombat();
		if (Combat)
		{
			Combat->PickupAmmo(WeaponType, AmmoAmount);
			
		}
	}
	Destroy();
}
