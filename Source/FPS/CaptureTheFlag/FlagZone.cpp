// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagZone.h"
#include "Components/SphereComponent.h"
#include "FPS/GameModes/CTFGameMode.h"
#include "FPS/Character/MasterCharacter.h"
#include "NewFlag.h"


// Sets default values
AFlagZone::AFlagZone()
{
	PrimaryActorTick.bCanEverTick = false;

	ZoneSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Zone Sphere"));
	SetRootComponent(ZoneSphere);
	ZoneSphere->OnComponentBeginOverlap.AddDynamic(this, &AFlagZone::OnSphereOverlap);
}


void AFlagZone::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Zone BeginPlay"));
	
}

void AFlagZone::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Flag = Cast<ANewFlag>(OtherActor);

	//Flag = Flag == nullptr ? Cast<ANewFlag>(OtherActor) : Flag;

	//if (Flag == nullptr)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Flag is a nullptr"));
	//	return;
	//}

	//UE_LOG(LogTemp, Warning, TEXT("Sphere overlap on zone outside if check"));

	//if (Flag->GetTeam() != Team)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Sphere overlap on zone if check"));
	//	ACTFGameMode* GameMode = GetWorld()->GetAuthGameMode<ACTFGameMode>();
	//	if (GameMode)
	//	{
	//		//GameMode->FlagCaptured(Flag, this);
	//		
	//	}
	//	Flag->ResetFlag();
	//}
}



