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

	void FireButtonPressed(bool bPressed);

	void Reload();

	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	UFUNCTION(BlueprintCallable)
	void ShotgunShellReload();

	void JumpToShotgunEnd();

	UFUNCTION(BlueprintCallable)
	void ThrowGrenadeFished();

protected:

	virtual void BeginPlay() override;

	void SetAiming(bool bIsAiming);

	UFUNCTION(Server, Reliable)
	void ServerSetAiming(bool bIsAiming);

	UFUNCTION()
	void OnRep_EquippedWeapon();

	void TraceUnderCrosshairs(FHitResult& TraceHitResult);

	void SetHUDCrosshairs(float DeltaTime);

	void DropEquippedWeapon();

	void AttachActorToRightHand(AActor* ActorToAttach);

	void AttachActorToLeftHand(AActor* ActorToAttach);

	void UpdateCarriedAmmo();
	
	void PlayEquipWeaponSound();

	void ReloadEmptyWeapon();

	void Fire();

	UFUNCTION(Server, Reliable)
	void ServerFire(const FVector_NetQuantize& TraceHitTarget);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(const FVector_NetQuantize& TraceHitTarget);

	void ThrowGrenade();

	UFUNCTION(Server, Reliable)
	void ServerThrowGrenade();

	UFUNCTION(Server, Reliable)
	void ServerReload();

	void HandleReload();

	int32 AmountToReload();

private:

	AMasterCharacter* MasterCharacter;
	UPROPERTY()
	class AMasterPlayerController* MasterPlayerController;
	UPROPERTY()
	class APlayerHUD* HUD;
	UPROPERTY(ReplicatedUsing = OnRep_EquippedWeapon)
	AWeaponBase* EquippedWeapon;
	UPROPERTY(Replicated)
	bool bAiming;
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


	void InitializeCarriedAmmo();

	UPROPERTY(ReplicatedUsing = OnRep_CombatState)
	ECombatState CombatState = ECombatState::ECS_Unoccupied;

	UFUNCTION()
	void OnRep_CombatState();

	void UpdateAmmoValues();
	void UpdateShotgunAmmoValues();

public:	

	

		
};
