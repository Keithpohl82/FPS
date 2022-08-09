// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagPickup.h"
#include "FPS/Character/MasterCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

AFlagPickup::AFlagPickup()
{
	if (PickupMesh)
	{
		PickupMesh->AddWorldRotation(FRotator(0.f, 0.f, 0.f));
	}
}

void AFlagPickup::BeginPlay()
{
	Super::BeginPlay();

	InitialTransform = GetActorTransform();
	
}

void AFlagPickup::AttachFlagToPlayer(AMasterCharacter* Character)
{
	if (Team != Character->GetTeam())
	{
		AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, Character->FlagSocket);
		SetOwner(Character);
	}
}

void AFlagPickup::ResetFlag()
{
	AMasterCharacter* FlagBearer = Cast<AMasterCharacter>(GetOwner());

	//if (FlagBearer)
	//{
		//FlagBearer->SetHoldingFlag(false);
		//FlagBearer->SetOverlappingWeapon(nullptr);
	//}

	if (!HasAuthority()) return;

	FDetachmentTransformRules DetachRules(EDetachmentRule::KeepWorld, true);
	PickupMesh->DetachFromComponent(DetachRules);
	//SetWeaponState(EWeaponState::EWS_Initial);
	//GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//GetAreaSphere()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	SetOwner(nullptr);
	OwnerCharacter = nullptr;
	OwnerPlayerController = nullptr;

	SetActorTransform(InitialTransform);
}

void AFlagPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(OtherActor);

	if (MasterCharacter)
	{
		AttachFlagToPlayer(MasterCharacter);
	}

}
