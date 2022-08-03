// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagPickup.h"
#include "FPS/Character/MasterCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

AFlagPickup::AFlagPickup()
{
	if (PickupMesh)
	{
		PickupMesh->AddWorldRotation(FRotator(0.f, 0.f, 0.f));
	}
}

void AFlagPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(OtherActor);

	//FName Socket = MasterCharacter->FlagSocket;
	AttachToComponent(MasterCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, MasterCharacter->FlagSocket);
}
