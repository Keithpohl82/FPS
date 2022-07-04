// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "FPS/Character/MasterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


UBuffComponent::UBuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UBuffComponent::SetInitialSpeeds(float BaseSpeed, float CrouchSpeed)
{
	InitialBaseSpeed = BaseSpeed;
	InitialCrouchSpeed = CrouchSpeed;
}

void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealRampUp(DeltaTime);
}

void UBuffComponent::Heal(float HealAmount, float HealingTime)
{
	bHealing = true;
	HealingRate = HealAmount / HealingTime;
	AmountToHeal += HealAmount;
}

void UBuffComponent::HealRampUp(float DeltaTime)
{
	if (!bHealing || MasterCharacter == nullptr || MasterCharacter->IsElimmed()) return;
	
	const float HealThisFrame = HealingRate * DeltaTime;

	MasterCharacter->SetHealth(FMath::Clamp(MasterCharacter->GetHealth() + HealThisFrame, 0.f, MasterCharacter->GetMaxHealth()));
	MasterCharacter->UpdateHUDHealth();
	AmountToHeal -= HealThisFrame;
	if (AmountToHeal <= 0 || MasterCharacter->GetHealth() >= MasterCharacter->GetMaxHealth())
	{
		bHealing = false;
		AmountToHeal = 0.f;
	}
}

void UBuffComponent::ResetSpeeds()
{
	if (MasterCharacter == nullptr || MasterCharacter->GetCharacterMovement() == nullptr) return;

	MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = InitialBaseSpeed;
	MasterCharacter->GetCharacterMovement()->MaxWalkSpeedCrouched = InitialCrouchSpeed;
	MulticastSpeedBuff(InitialBaseSpeed, InitialCrouchSpeed);
}

void UBuffComponent::MulticastSpeedBuff_Implementation(float BaseSpeed, float CrouchSpeed)
{
	MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = BaseSpeed;
	MasterCharacter->GetCharacterMovement()->MaxWalkSpeedCrouched = CrouchSpeed;
}

void UBuffComponent::BuffSpeed(float BuffBaseSpeed, float BuffCrouchSpeed, float BuffTime)
{
	if (MasterCharacter == nullptr) return;
	
	MasterCharacter->GetWorldTimerManager().SetTimer(SpeedBuffTimer, this, &UBuffComponent::ResetSpeeds, BuffTime);

	if (MasterCharacter->GetCharacterMovement())
	{
		MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = BuffBaseSpeed;
		MasterCharacter->GetCharacterMovement()->MaxWalkSpeedCrouched = BuffCrouchSpeed;
	}
	MulticastSpeedBuff(BuffBaseSpeed, BuffCrouchSpeed);
}