// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Projectiles/ProjectileBase.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);


	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	UWorld* World = GetWorld();

	if (MuzzleFlashSocket && World)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		//From MuzzleFlashSocket to hit location from TraceUnderCrosshairs
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = InstigatorPawn;

		AProjectileBase* SpawnedProjectile = nullptr;

		if (bUserServerSideRewind)
		{
			if (InstigatorPawn->HasAuthority()) // Server
			{
				if (InstigatorPawn->IsLocallyControlled()) // Server, Host - use replicated projectile.
				{
					SpawnedProjectile = World->SpawnActor<AProjectileBase>(ProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
					SpawnedProjectile->Damage = Damage;
					SpawnedProjectile->HeadShotDamage = HeadshotDamage;
				}
				else // Server, Not locally controlled - Spawn Non-Replicated Projectile, SSR. 
				{
					SpawnedProjectile = World->SpawnActor<AProjectileBase>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
					SpawnedProjectile->Damage = Damage;
				}
			}
			else // Client, using SSR
			{
				if (InstigatorPawn->IsLocallyControlled()) // Client, locally controlled - Spawn Non-replicated Projectile, use SSR
				{
					SpawnedProjectile = World->SpawnActor<AProjectileBase>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = true;
					SpawnedProjectile->TraceStart = SocketTransform.GetLocation();
					SpawnedProjectile->InitialVelocity = SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
				}
				else // Client, not locally controlled - Spawn Non-Replicated projectile, no SSR
				{
					SpawnedProjectile = World->SpawnActor<AProjectileBase>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					SpawnedProjectile->bUseServerSideRewind = false;
					
				}
			}
		}
		else // Weapon not using SSR
		{
			if (InstigatorPawn->HasAuthority())
			{
				SpawnedProjectile = World->SpawnActor<AProjectileBase>(ProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
				SpawnedProjectile->bUseServerSideRewind = false;
				SpawnedProjectile->Damage = Damage;
				SpawnedProjectile->HeadShotDamage = HeadshotDamage;
			}
		}
	}
}
