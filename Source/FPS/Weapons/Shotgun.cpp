// Fill out your copyright notice in the Description page of Project Settings.


#include "Shotgun.h"
#include "Engine/SkeletalMeshSocket.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/Components/LagCompensationComponent.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/KismetMathLibrary.h"



void AShotgun::FireShotgun(const TArray<FVector_NetQuantize>& HitTargets)
{
	AWeaponBase::Fire(FVector());

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr) return;
	AController* InstigatorController = OwnerPawn->GetController();

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if (MuzzleFlashSocket)
	{
		const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		const FVector Start = SocketTransform.GetLocation();


		TMap<AMasterCharacter*, uint32> HitMap;
		TMap<AMasterCharacter*, uint32> HeadShotHitMap;
		for (FVector_NetQuantize HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			AMasterCharacter* MasterCharacter = Cast<AMasterCharacter>(FireHit.GetActor());
			if (MasterCharacter)
			{

				const bool bHeadShot = FireHit.BoneName.ToString() == FString("head");

				if (bHeadShot)
				{
					if (HeadShotHitMap.Contains(MasterCharacter)) HeadShotHitMap[MasterCharacter]++;
					else HeadShotHitMap.Emplace(MasterCharacter, 1);
				}
				else
				{
					if (HitMap.Contains(MasterCharacter)) HitMap[MasterCharacter]++;
					else HitMap.Emplace(MasterCharacter, 1);
				}



				if (ImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, FireHit.ImpactPoint, FireHit.ImpactNormal.Rotation());
				}
				if (ImpactSound)
				{
					UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, FireHit.ImpactPoint, .5f, FMath::FRandRange(-.5f, .5f));
				}
			}
		}
		TArray<AMasterCharacter*> HitCharacters;

		TMap<AMasterCharacter*, float> DamageMap;

		for (auto HitPair : HitMap)
		{
			if (HitPair.Key)
			{
				DamageMap.Emplace(HitPair.Key, HitPair.Value * Damage);

				HitCharacters.AddUnique(HitPair.Key);
			}
		}
		for (auto HeadShotHitPair : HeadShotHitMap)
		{
			if (HeadShotHitPair.Key )
			{
				if (DamageMap.Contains(HeadShotHitPair.Key)) DamageMap[HeadShotHitPair.Key] += HeadShotHitPair.Value * HeadshotDamage;
				else DamageMap.Emplace(HeadShotHitPair.Key, HeadShotHitPair.Value * HeadshotDamage);
				HitCharacters.AddUnique(HeadShotHitPair.Key);
			}
		}
		for (auto DamagePair : DamageMap)
		{
			if (DamagePair.Key && InstigatorController)
			{
				bool bCauseAuthDamage = !bUserServerSideRewind || OwnerPawn->IsLocallyControlled();

				if (HasAuthority() && bCauseAuthDamage)
				{
					UGameplayStatics::ApplyDamage(DamagePair.Key, DamagePair.Value, InstigatorController, this, UDamageType::StaticClass());
				}
			}
		}







		if (!HasAuthority() && bUserServerSideRewind)
		{
			OwnerCharacter = OwnerCharacter == nullptr ? Cast<AMasterCharacter>(OwnerPawn) : OwnerCharacter;
			OwnerPlayerController = OwnerPlayerController == nullptr ? Cast<AMasterPlayerController>(InstigatorController) : OwnerPlayerController;

			if (OwnerPlayerController && OwnerCharacter && OwnerCharacter->GetLagCompensation() && OwnerCharacter->IsLocallyControlled())
			{
				OwnerCharacter->GetLagCompensation()->ShotgunServerScoreRequest(HitCharacters, Start, HitTargets, OwnerPlayerController->GetServerTime() - OwnerPlayerController->SingleTripTime);
			}
		}
	}
}

void AShotgun::ShotgunTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");

	if (MuzzleFlashSocket == nullptr) return;

	const FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
	const FVector TraceStart = SocketTransform.GetLocation() + 50.f;

	const FVector ToTargetNormalized = (HitTarget - TraceStart).GetSafeNormal();
	const FVector SphereCenter = TraceStart + ToTargetNormalized * DistanceToSpher;


	for (uint32 i = 0; i < NumberOfPellets; i++)
	{
		const FVector RandVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
		const FVector EndLoc = SphereCenter + RandVec;
		FVector ToEndLoc = EndLoc - TraceStart;
		ToEndLoc = TraceStart + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size();
		HitTargets.Add(ToEndLoc);
	}
}
