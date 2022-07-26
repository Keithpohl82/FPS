// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPS/UI/PlayerHUD.h"
#include "FPS/TypeClasses/CombatState.h"
#include "FPS/Weapons/WeaponTypes.h"
#include "CombatComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	friend class AMasterCharacter;
	UCombatComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void EquipWeapon(class AWeaponBase* WeaponToEquip);

	void SwapWeapons();

	void FireButtonPressed(bool bPressed);

	void Reload();

	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	UFUNCTION(BlueprintCallable)
	void FinishSwap();

	UFUNCTION(BlueprintCallable)
	void FinishSwapAttachWeapons();

	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();

	void JumpToShotgunEnd();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFished();

	UFUNCTION(BlueprintCallable)
	void LaunchGrenade();

	UFUNCTION(Server, Reliable)
	void ServerLaunchGrenade(const FVector_NetQuantize& Target);

	void PickupAmmo(EWeaponType WeaponType, int32 AmmoAmount);

	bool bLocallyReloading = false;

protected:

	virtual void BeginPlay() override;

	void SetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);

	UFUNCTION()
	void OnRep_EquippedWeapon();

	UFUNCTION()
	void OnRep_SecondaryWeapon();

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	void SetHUDCrosshairs(float DeltaTime);

	void DropEquippedWeapon();

	void AttachActorToRightHand(AActor* ActorToAttach);

	void AttachActorToLeftHand(AActor* ActorToAttach);

	void AttachActorToBackpack(AActor* ActorToAttach);

	void UpdateCarriedAmmo();
	
	void PlayEquipWeaponSound(AWeaponBase* WeaponToEquip);

	void Fire();
	void FireProjectileWeapon();
	void FireHitScanWeapon();
	void FireShotgunWeapon();
	void LocalFire(const FVector_NetQuantize& TraceHitTarget);
	void LocalShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets, float FireDelay);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShotgunFire(const TArray<FVector_NetQuantize>& TraceHitTargets);

	void ThrowGrenade();

	void ShowAttachedGrenade(bool bShowGrenade);

	UFUNCTION(Server, Reliable)
	void ServerThrowGrenade();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileBase> GrenadeClass;

	UFUNCTION(Server, Reliable)
	void ServerReload();

	void HandleReload();

	void ReloadEmptyWeapon();

	int32 AmountToReload();

	void EquipPrimaryWeapon(AWeaponBase* WeaponToEquip);

	void EquipSecondaryWeapon(AWeaponBase* WeaponToEquip);

private:

	AMasterCharacter* MasterCharacter;

	UPROPERTY()
	class AMasterPlayerController* MasterPlayerController;

	UPROPERTY()
	class APlayerHUD* HUD;

	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeaponBase* EquippedWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_SecondaryWeapon)
	AWeaponBase*SecondaryWeapon;

	UPROPERTY(ReplicatedUsing = OnRep_Aiming)
	bool bAiming = false;

	bool bAimButtonPressed = false;

	UFUNCTION()
	void OnRep_Aiming();

	UPROPERTY(EditAnywhere)
	float BaseWalkSpeed;

	UPROPERTY(EditAnywhere)
	float AimWalkSpeed;

	bool bFireButtonPressed;

	FVector HitTarget;

	/**
	 * HUD and Crosshairs
	 */
	float CrosshairVelociyFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;
	FHUDPackage HUDPackage;

	/*
	 * Aiming and FOV
	 */

	 // Field of view when not aiming. set to camera's base FOV in BeginPlay
	float DefaultFOV;

	UPROPERTY(EditAnywhere, Category = CombatAiming)
	float ZoomedFOV = 30.f;

	UPROPERTY(EditAnywhere, Category = CombatAiming)
	float ZoomInterSpeed = 20.f;

	float CurrentFOV;

	void InterpFOV(float DeltaTime);

	/*
	 *Automatic Fire
	 */

	FTimerHandle FireTimer;

	bool bCanFire = true;

	void FireTimerFinished();

	void StartFireTimer();

	bool CanFire();

	// Carried Ammo for the Currently-Equipped Weapon.
	UPROPERTY(ReplicatedUsing = OnRep_CarriedAmmo)
	int32 CarriedAmmo;

	UFUNCTION()
	void OnRep_CarriedAmmo();

	TMap<EWeaponType, int32> CarriedAmmoMap;

	UPROPERTY(EditAnywhere)
	int32 MaxCarriedAmmo = 90;

	// Starting Reserve ammo. Set to 0 after testing
	UPROPERTY(EditAnywhere)
	int32 StartingARAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingRocketAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingPistolAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingSMGAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingShotgunAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingSniperAmmo = 0;

	UPROPERTY(EditAnywhere)
	int32 StartingGrenadeLauncherAmmo = 0;
	
	UFUNCTION()
	void OnRep_Grenades();

	UPROPERTY(ReplicatedUsing = OnRep_Grenades, EditAnywhere)
	int32 Grenades = 2;

	UPROPERTY(EditAnywhere)
	int32 MaxGrenades = 2;

	void UpdateHUDGrenades();

	void InitializeCarriedAmmo();

	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	UFUNCTION()
	void OnRep_CombatState();

	void UpdateAmmoValues();

	void UpdateShotgunAmmoValues();

	bool bHoldingFlag = false;

public:	

	FORCEINLINE int32 GetGrenades() const { return Grenades; }

	bool ShouldSwapWeapons();
};
