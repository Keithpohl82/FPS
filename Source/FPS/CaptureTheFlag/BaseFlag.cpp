// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseFlag.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "Engine/SkeletalMeshSocket.h"


ABaseFlag::ABaseFlag()
{
	PrimaryActorTick.bCanEverTick = true;

	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMesh"));
	SetRootComponent(FlagMesh);

	FlagMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ABaseFlag::AttachFlagToPlayer(class AMasterCharacter* Player)
{
	if (HasAuthority())
	{
		if (Player)
		{
			const USkeletalMeshSocket* FlagSocket = Player->GetMesh()->GetSocketByName("FlagSocket");
			//FName FlagSocket = Player->GetMesh()->GetSocketByName("FlagSocket");
			if (FlagSocket)
			{
				FlagSocket->AttachActor(this, Player->GetMesh());
				SetOwner(Player);
			}
		}
	}
	else
	{
		ServerAttachFlagToPlayer(Player);
	}
}

void ABaseFlag::ServerAttachFlagToPlayer_Implementation(AMasterCharacter* Player)
{
	AttachFlagToPlayer(Player);
}

void ABaseFlag::DetchFlag()
{

}

void ABaseFlag::ServerDetachFlag_Implementation()
{

}

void ABaseFlag::BeginPlay()
{
	Super::BeginPlay();
}


void ABaseFlag::OnDestinationReached(AMasterCharacter* FlagCarrier)
{

}

void ABaseFlag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

