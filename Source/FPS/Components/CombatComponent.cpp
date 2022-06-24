// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "FPS/Character/MasterCharacter.h"
#include "FPS/PlayerController/MasterPlayerController.h"
#include "FPS/Weapons/WeaponBase.h"
#include "TimerManager.h"
#include "Sound/SoundCue.h"
#include "FPS/UI/PlayerHUD.h"


UCombatComponent::UCombatComponent()
{

	PrimaryComponentTick.bCanEverTick = true;
	BaseWalkSpeed = 600.f;
	AimWalkSpeed = 450.f;

}

void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	if (MasterCharacter)
	{
		MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;

		if (MasterCharacter->GetFollowCamera())
		{
			DefaultFOV = MasterCharacter->GetFollowCamera()->FieldOfView;
			CurrentFOV = DefaultFOV;
		}
		if (MasterCharacter->HasAuthority())
		{
			InitializeCarriedAmmo();
		}
	}
	
}

void UCombatComponent::SetAiming(bool bIsAiming)
{
	bAiming = bIsAiming;
	ServerSetAiming(bIsAiming);
	if (MasterCharacter)
	{
		MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}

void UCombatComponent::ServerSetAiming_Implementation(bool bIsAiming)
{
	bAiming = bIsAiming;
	if (MasterCharacter)
	{
		MasterCharacter->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}

void UCombatComponent::OnRep_EquippedWeapon()
{
	if (EquippedWeapon && MasterCharacter)
	{

		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
		const USkeletalMeshSocket* HandSocket = MasterCharacter->GetMesh()->GetSocketByName(FName("WeaponSocket"));
		if (HandSocket)
		{
			HandSocket->AttachActor(EquippedWeapon, MasterCharacter->GetMesh());
		}

		MasterCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		MasterCharacter->bUseControllerRotationYaw = true;
		if (EquippedWeapon->EquipSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, EquippedWeapon->EquipSound, MasterCharacter->GetActorLocation());
		}
	}
}

void UCombatComponent::Fire()
{
	if (CanFire())
	{
		bCanFire = false;
		ServerFire(HitTarget);
		if (EquippedWeapon)
		{
			CrosshairShootingFactor = 1.75f;
		}
		StartFireTimer();
	}
}

void UCombatComponent::FireButtonPressed(bool bPressed)
{
	bFireButtonPressed = bPressed;

	if (bFireButtonPressed && EquippedWeapon)
	{
		Fire();
	}
}

void UCombatComponent::ServerFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	MulticastFire(TraceHitTarget);
}

void UCombatComponent::MulticastFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	if (EquippedWeapon == nullptr) return;

	if (MasterCharacter && CombatState == ECombatState::ECS_Unoccupied)
	{
		MasterCharacter->PlayFireMontage(bAiming);
		EquippedWeapon->Fire(TraceHitTarget);
	}
}

void UCombatComponent::TraceUnderCrosshairs(FHitResult& TraceHitResult)
{
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation, CrosshairWorldPosition, CrosshairWorldDirection
	);
	if (bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;

		if (MasterCharacter)
		{
			float DistanceToCharacter = (MasterCharacter->GetActorLocation() - Start).Size();
			Start += CrosshairWorldDirection * (DistanceToCharacter + 100.f);
		}

		FVector End = Start + CrosshairWorldDirection * TRACE_LENGTH;
		GetWorld()->LineTraceSingleByChannel(TraceHitResult, Start, End, ECollisionChannel::ECC_Visibility);
		if (TraceHitResult.GetActor() && TraceHitResult.GetActor()->Implements<UInteractWithCrosshairsInterface>())
		{
			HUDPackage.CrosshairColor = FLinearColor::Red;
		}
		else
		{
			HUDPackage.CrosshairColor = FLinearColor::White;
		}
	}
}

void UCombatComponent::SetHUDCrosshairs(float DeltaTime)
{
	if (MasterCharacter == nullptr || MasterCharacter->Controller == nullptr) return;
	MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
	if (MasterPlayerController)
	{

		HUD = HUD == nullptr ? Cast<APlayerHUD>(MasterPlayerController->GetHUD()) : HUD;
		if (HUD)
		{
			if (EquippedWeapon)
			{
				HUDPackage.CrosshairsCenter = EquippedWeapon->CrosshairsCenter;
				HUDPackage.CrosshairsLeft = EquippedWeapon->CrosshairsLeft;
				HUDPackage.CrosshairsRight = EquippedWeapon->CrosshairsRight;
				HUDPackage.CrosshairsTop = EquippedWeapon->CrosshairsTop;
				HUDPackage.CrosshairsBottom = EquippedWeapon->CrosshairsBottom;

			}
			else
			{
				HUDPackage.CrosshairsCenter = nullptr;
				HUDPackage.CrosshairsLeft = nullptr;
				HUDPackage.CrosshairsRight = nullptr;
				HUDPackage.CrosshairsTop = nullptr;
				HUDPackage.CrosshairsBottom = nullptr;

			}
			// Calculate Crosshair Spread

			// [0, 600] -> [0, 1]
			FVector2D WalkSpeedRange(0.f, MasterCharacter->GetCharacterMovement()->MaxWalkSpeed);
			FVector2D VelocityMultiplierRange(0.f, 1.f);
			FVector Velocity = MasterCharacter->GetVelocity();
			Velocity.Z = 0.f;

			CrosshairVelociyFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange, Velocity.Size());

			if (MasterCharacter->GetCharacterMovement()->IsFalling())
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
			}
			else
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
			}

			if (bAiming)
			{
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, .58f, DeltaTime, 30.f);
			}
			else
			{
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.f, DeltaTime, 30.f);
			}
			CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.f, DeltaTime, 60.f);
			HUDPackage.CrosshairSpread = 0.5f + CrosshairVelociyFactor + CrosshairInAirFactor - CrosshairAimFactor + CrosshairShootingFactor;
			HUD->SetHUDPackage(HUDPackage);
		}
	}
}

void UCombatComponent::ServerReload_Implementation()
{
	if (MasterCharacter == nullptr || EquippedWeapon == nullptr) return;
	CombatState = ECombatState::ECS_Reloading;
	HandleReload();
}

void UCombatComponent::HandleReload()
{
	MasterCharacter->PlayReloadMontage();
}

int32 UCombatComponent::AmountToReload()
{
	if (EquippedWeapon == nullptr) return 0;
	int32 RoomInMag = EquippedWeapon->GetMagCapacity() - EquippedWeapon->GetAmmo();

	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		int32 AmmountCarried = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
		int32 Least = FMath::Min(RoomInMag, AmmountCarried);
		return FMath::Clamp(RoomInMag, 0, Least);
	}
	return 0;
}

void UCombatComponent::InterpFOV(float DeltaTime)
{
	if (EquippedWeapon == nullptr) return;

	if (bAiming)
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, EquippedWeapon->GetZoomedFOV(), DeltaTime, EquippedWeapon->GetZoomedInterpSpeed());
	}
	else
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV, DefaultFOV, DeltaTime, ZoomInterSpeed);
	}

	if (MasterCharacter && MasterCharacter->GetFollowCamera())
	{
		MasterCharacter->GetFollowCamera()->SetFieldOfView(CurrentFOV);
	}
}

void UCombatComponent::FireTimerFinished()
{
	if (EquippedWeapon == nullptr) return;
	bCanFire = true;
	if (bFireButtonPressed && EquippedWeapon->bAutomatic)
	{
		Fire();
	}
	if (EquippedWeapon->IsEmpty())
	{
		Reload();
	}
}

void UCombatComponent::StartFireTimer()
{
	if (EquippedWeapon == nullptr || MasterCharacter == nullptr) return;

	MasterCharacter->GetWorldTimerManager().SetTimer(
		FireTimer, this, &UCombatComponent::FireTimerFinished, EquippedWeapon->FireDelay);
}

bool UCombatComponent::CanFire()
{
	if (EquippedWeapon == nullptr) return false;
	return !EquippedWeapon->IsEmpty() && bCanFire && CombatState == ECombatState::ECS_Unoccupied;
}

void UCombatComponent::OnRep_CarriedAmmo()
{
	MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
	if (MasterPlayerController)
	{
		MasterPlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}
}

void UCombatComponent::InitializeCarriedAmmo()
{
	CarriedAmmoMap.Emplace(EWeaponType::EWT_AssaultRifle, StartingARAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_RocketLauncher, StartingRocketAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_Pistol, StartingPistolAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_SubMachineGun, StartingSMGAmmo);
}

void UCombatComponent::OnRep_CombatState()
{
	switch (CombatState)
	{
	case ECombatState::ECS_Reloading:
		HandleReload();
		break;
	case ECombatState::ECS_Unoccupied:
		if (bFireButtonPressed)
		{
			Fire();
		}
		break;
	}
}

void UCombatComponent::UpdateAmmoValues()
{
	if (MasterCharacter == nullptr || EquippedWeapon == nullptr) return;
	int32 ReloadAmount = AmountToReload();
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= ReloadAmount;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}
	MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
	if (MasterPlayerController)
	{
		MasterPlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}
	EquippedWeapon->AddAmmo(-ReloadAmount);
}

void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (MasterCharacter && MasterCharacter->IsLocallyControlled())
	{
		FHitResult HitResult;
		TraceUnderCrosshairs(HitResult);
		HitTarget = HitResult.ImpactPoint;
		SetHUDCrosshairs(DeltaTime);
		InterpFOV(DeltaTime);
	}
}

void UCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, bAiming);
	DOREPLIFETIME(UCombatComponent, CombatState);
	DOREPLIFETIME_CONDITION(UCombatComponent, CarriedAmmo, COND_OwnerOnly);
}

void UCombatComponent::EquipWeapon(class AWeaponBase* WeaponToEquip)
{
	if (MasterCharacter == nullptr || WeaponToEquip == nullptr) return;
	if (EquippedWeapon)
	{
		EquippedWeapon->Dropped();
	}
	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	const USkeletalMeshSocket* HandSocket = MasterCharacter->GetMesh()->GetSocketByName(FName("WeaponSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(EquippedWeapon, MasterCharacter->GetMesh());
	}
	EquippedWeapon->SetOwner(MasterCharacter);
	EquippedWeapon->SetHUDAmmo();
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}
	MasterPlayerController = MasterPlayerController == nullptr ? Cast<AMasterPlayerController>(MasterCharacter->Controller) : MasterPlayerController;
	if (MasterPlayerController)
	{
		MasterPlayerController->SetHUDCarriedAmmo(CarriedAmmo);
	}
	if (EquippedWeapon->EquipSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, EquippedWeapon->EquipSound, MasterCharacter->GetActorLocation());
	}
	if (EquippedWeapon->IsEmpty())
	{
		Reload();
	}
	MasterCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
	MasterCharacter->bUseControllerRotationYaw = true;
}

void UCombatComponent::Reload()
{
	if (CarriedAmmo > 0 && CombatState != ECombatState::ECS_Reloading)
	{
		ServerReload();
	}
}

void UCombatComponent::FinishReloading()
{
	if (MasterCharacter == nullptr) return;
	if (MasterCharacter->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
		UpdateAmmoValues();
	}
	if (bFireButtonPressed)
	{
		Fire();
	}
}

