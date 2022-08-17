// Fill out your copyright notice in the Description page of Project Settings.


#include "NewFlag.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "FPS/Character/MasterCharacter.h"
#include "FlagZone.h"
#include "GameFramework/Actor.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "FPS/GameModes/CTFGameMode.h"
#include "CapturePoint.h"

// Sets default values
ANewFlag::ANewFlag()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag Mesh"));
	SetRootComponent(FlagMesh);
}


void ANewFlag::ResetFlag()
{
	SetActorTransform(InitialTransform);
}

void ANewFlag::BeginPlay()
{
	Super::BeginPlay();
	
	InitialTransform = GetActorTransform();
}


void ANewFlag::ServerAttachFlag_Implementation(AMasterCharacter* Character)
{
	AttachFlagToPlayer(Character);
}

void ANewFlag::CaptureFlag(AMasterCharacter* FlagCarrier)
{
	
	ACTFGameMode* GameMode = GetWorld()->GetAuthGameMode<ACTFGameMode>();
	if (GameMode)
	{
		GameMode->FlagCaptured(CapturePoint, this);
	}
	bFlagAtHome = true;
	Destroy();
	UE_LOG(LogTemp, Warning, TEXT("Flag->CaptureFlag"));
}

void ANewFlag::DropFlag()
{
	AMasterCharacter* FlagCarrier = Cast<AMasterCharacter>(this->GetOwner());
	if (FlagCarrier->IsElimmed())
	{
		FlagMesh->SetSimulatePhysics(true);
		FlagMesh->SetEnableGravity(true);
		FlagMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		SetOwner(nullptr);
	}
}

void ANewFlag::AttachFlagToPlayer(class AMasterCharacter* Character)
{
	if (HasAuthority())
	{
		if (Character)
		{
			FName Socket = Character->FlagSocket;
			this->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, Socket);
			SetOwner(Character);
			Character->FlagBeingCarried = this;
			bFlagAtHome = false;
		}
	}
	else
	{
		ServerAttachFlag(Character);
	}
}

void ANewFlag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANewFlag::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ACapturePoint* Base = Cast<ACapturePoint>(OtherActor);
	if (CapturePoint)
	{
		if (CapturePoint->GetTeam() == Team)
		{
			UE_LOG(LogTemp, Warning, TEXT("Flag Captured"));
		}
	}
}

