// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "FPS/Weapons/WeaponBase.h"
#include "FPS/TypeClasses/CombatState.h"
#include "FPS/Character/MasterCharacter.h"

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	MasterCharacter = Cast<AMasterCharacter>(TryGetPawnOwner());
}

void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (MasterCharacter == nullptr)
	{
		MasterCharacter = Cast<AMasterCharacter>(TryGetPawnOwner());
	}
	if (MasterCharacter == nullptr) return;

	FVector Velocity = MasterCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Speed = Velocity.Size();

	bIsInAir = MasterCharacter->GetCharacterMovement()->IsFalling();

	bIsAccelerating = MasterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;

	bWeaponEquipped = MasterCharacter->IsWeaponEquipped();
	EquippedWeapon = MasterCharacter->GetEquippedWeapon();
	bElimmed = MasterCharacter->IsElimmed();

	bIsCrouched = MasterCharacter->bIsCrouched;
	bAiming = MasterCharacter->IsAiming();
	TurningInPlace = MasterCharacter->GetTurningInPlace();
	bRotateRootBone = MasterCharacter->ShouldRotateRootBone();

	// Offset Yaw for Strafing.
	FRotator AimRotation = MasterCharacter->GetBaseAimRotation();
	FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(MasterCharacter->GetVelocity());
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaSeconds, 6.f);
	YawOffset = DeltaRotation.Yaw;

	CharacterRotationLastFrame = CharacterRotation;
	CharacterRotation = MasterCharacter->GetActorRotation();
	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame);
	const float Target = Delta.Yaw / DeltaSeconds;
	const float Interp = FMath::FInterpTo(Lean, Target, DeltaSeconds, 6.f);
	Lean = FMath::Clamp(Interp, -90.f, 90.f);

	AO_Yaw = MasterCharacter->GetAO_Yaw();
	AO_Pitch = MasterCharacter->GetAO_Pitch();

	if (bWeaponEquipped && EquippedWeapon && EquippedWeapon->GetWeaponMesh() && MasterCharacter->GetMesh())
	{
		LeftHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("LeftHandSocket"), ERelativeTransformSpace::RTS_World);
		FVector OutPosition;
		FRotator OutRotation;
		MasterCharacter->GetMesh()->TransformToBoneSpace(FName("hand_r"), LeftHandTransform.GetLocation(), FRotator::ZeroRotator, OutPosition, OutRotation);
		LeftHandTransform.SetLocation(OutPosition);
		LeftHandTransform.SetRotation(FQuat(OutRotation));

		if (MasterCharacter->IsLocallyControlled())
		{
			bLocallyControlled = true;
			FTransform RightHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("hand_r"), ERelativeTransformSpace::RTS_World);
			FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation(), RightHandTransform.GetLocation() + (RightHandTransform.GetLocation() - MasterCharacter->GetHitTarget()));
			RightHandRotation = FMath::RInterpTo(RightHandRotation, LookAtRotation, DeltaSeconds, 30.f);
		}
	}
	bUseFABRIK = MasterCharacter->GetCombatState() == ECombatState::ECS_Unoccupied;

	bool bFABRIKOverride = MasterCharacter->IsLocallyControlled() && MasterCharacter->GetCombatState() != ECombatState::ECS_ThrowingGrenade && MasterCharacter->bFinishedSwapping;

	if (bFABRIKOverride)
	{
		bUseFABRIK = !MasterCharacter->IsLocallyReloading();
	}

	bUseAimOffsets = MasterCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !MasterCharacter->GetDisableGameplay();
	bTransformRightHand = MasterCharacter->GetCombatState() == ECombatState::ECS_Unoccupied && !MasterCharacter->GetDisableGameplay();
}
