// Fill out your copyright notice in the Description page of Project Settings.


#include "CapturePoint.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "NewFlag.h"
#include "FPS/Character/MasterCharacter.h"


ACapturePoint::ACapturePoint()
{
	PrimaryActorTick.bCanEverTick = true;
	//bReplicates = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
	SetRootComponent(SphereComp);


	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Capture Point Base"));
}


void ACapturePoint::BeginPlay()
{
	Super::BeginPlay();
	RespawnFlag();
}


void ACapturePoint::RespawnFlag()
{

		if (FlagClass == nullptr) return;
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		FlagInstance = GetWorld()->SpawnActor<ANewFlag>(FlagClass, GetTransform(), SpawnParams);

}

void ACapturePoint::ServerSpawnFlag_Implementation()
{
	RespawnFlag();
}

void ACapturePoint::GiveFlag(class AMasterCharacter* Character)
{
	if (FlagInstance)
	{
		FlagInstance->AttachFlagToPlayer(Character);
	}
}

void ACapturePoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AMasterCharacter* Player = Cast<AMasterCharacter>(OtherActor);
	if (Player)
	{
		if (Player->GetTeam() != Team)
		{
			GiveFlag(Player);
		}
		else if (FlagInstance->GetTeam() != Team)
		{
			FlagInstance->CaptureFlag(Player);
		}
	}
}

void ACapturePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACapturePoint, FlagInstance);
	
}

