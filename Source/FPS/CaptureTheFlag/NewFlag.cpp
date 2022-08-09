// Fill out your copyright notice in the Description page of Project Settings.


#include "NewFlag.h"

// Sets default values
ANewFlag::ANewFlag()
{
	PrimaryActorTick.bCanEverTick = true;

	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag Mesh"));

}


void ANewFlag::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANewFlag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

