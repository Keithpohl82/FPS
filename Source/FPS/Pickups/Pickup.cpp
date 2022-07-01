// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"


APickup::APickup()
{
 
	PrimaryActorTick.bCanEverTick = true;

}


void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}


void APickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

