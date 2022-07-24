// Fill out your copyright notice in the Description page of Project Settings.


#include "HitScanWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "WeaponTypes.h"
#include "DrawDebugHelpers.h"
#include "FPS/Components/LagCompensationComponent.h"


void AHitScanWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr) return;
	AController* InstigatorController = OwnerPawn->GetController();

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if (MuzzleFlashSocket && InstigatorController)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector Start = SocketTransform.GetLocation();

		FHitResult FireHit;
		WeaponTraceHit(Start, HitTarget, FireHit);
		AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(FireHit.GetActor());
		if (MasterCharacter && InstigatorController)
		{
			
			bool bCauseAuthDamage = !bUserServerSideRewind || OwnerPawn->IsLocallyControlled();
			if (HasAuthority() && bCauseAuthDamage)
			{
				const float DamageToCause = FireHit.BoneName.ToString() == FString("head") ? HeadshotDamage : Damage;
	
				UGameplayStatics::ApplyDamage(MasterCharacter, DamageToCause, InstigatorController, this, UDamageType::StaticClass());
			}
			if (!HasAuthority() && bUserServerSideRewind)
			{
				OwnerCharacter = OwnerCharacter == nullptr ? Cast<AMasterCharacter>(OwnerPawn) : OwnerCharacter;
				OwnerPlayerController = OwnerPlayerController == nullptr ? Cast<AMasterPlayerController>(InstigatorController) : OwnerPlayerController;
				if (OwnerPlayerController && OwnerCharacter && OwnerCharacter->GetLagCompensation() && OwnerPawn->IsLocallyControlled())
				{
					OwnerCharacter->GetLagCompensation()->ServerScoreRequest(
					MasterCharacter, 
					Start, 
					HitTarget, 
					OwnerPlayerController->GetServerTime() - OwnerPlayerController->SingleTripTime);
				}
			}
			
		}
		if (ImpactParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, FireHit.ImpactPoint, FireHit.ImpactNormal.Rotation());
		}
		if (ImpactSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, FireHit.ImpactPoint);
		}
		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
		}
		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}
	}
}



void AHitScanWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHit)
{
	
	UWorld* World = GetWorld();
	if (World)
	{
		FVector End =  TraceStart + (HitTarget - TraceStart) * 1.25f;
		World->LineTraceSingleByChannel(OutHit, TraceStart, End, ECollisionChannel::ECC_Visibility);
		FVector BeamEnd = End;
		if (OutHit.bBlockingHit)
		{
			BeamEnd = OutHit.ImpactPoint;

		}
		else
		{
			OutHit.ImpactPoint = End;
		}

		DrawDebugSphere(World, BeamEnd, 16.f, 12, FColor::Orange, true);

		if (BeamParticle)
		{
			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(World, BeamParticle, TraceStart, FRotator::ZeroRotator, true);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEnd);
			}
		}
	}
}
