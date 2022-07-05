// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPickup.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/Components/BuffComponent.h"



void AJumpPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(OtherActor);
	if (MasterCharacter)
	{
		UBuffComponent* Buff = MasterCharacter->GetBuff();
		if (Buff)
		{
			Buff->BuffJump(JumpZVelocityBuff, JumpBuffTime);
		}
	}
	Destroy();
}