// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/TimelineComponent.h"
#include "FPS/TypeClasses/CombatState.h"
#include "FPS/TypeClasses/TurningInPlace.h"
#include "FPS/Interfaces/InteractWithCrosshairsInterface.h"
#include "FPS/TypeClasses/Team.h"

#include "MasterCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftGame);

UCLASS()
class FPS_API AMasterCharacter : public ACharacter, public IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	
	AMasterCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;
	virtual void OnRep_ReplicatedMovement() override;
	virtual void Destroyed() override;

	/*
		Animations Montages
	*/
	void PlayFireMontage(bool bAiming);
	void PlayReloadMontage();
	void PlayHitReactMontage();
	void PlayElimMontage();
	void PlayThrowGrenadeMontage();
	void PlaySwapMontage();


	void UpdateHUDHealth();
	void UpdateHUDShield();
	void UpdateHUDAmmo();

	void Elim(bool bPlayerLeftGame);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastElim(bool bPlayerLeftGame);

	UFUNCTION(Server, Reliable)
	void ServerLeaveGame();

	FOnLeftGame OnLeftGame;

	UPROPERTY(Replicated)
	bool bDisableGameplay = false;

	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScopeWidget);

	void SpawnDefaultWeapon();

	UPROPERTY()
	TMap<FName, class UBoxComponent*>  HitCollisionBoxes;

	bool bFinishedSwapping = false;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastGainedTheLead();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastLostTheLead();

	void SetTeamColor(ETeam Team);

	UPROPERTY(EditAnywhere, Category = Flag)
	FName FlagSocket;

private:
	
	UPROPERTY(EditDefaultsOnly, Category = Camera)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditDefaultsOnly, Category = Camera)
	class UCameraComponent* TPPCamera;

	UPROPERTY(EditDefaultsOnly, Category = Camera)
	class UCameraComponent* FPPCamera;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	class AWeaponBase* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeaponBase* LastWeapon);

	/*
		Components
	*/

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UCombatComponent* Combat;

	UPROPERTY(VisibleAnywhere)
	class UBuffComponent* Buff;

	UPROPERTY(VisibleAnywhere)
	class ULagCompensationComponent* LagCompensation;

	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();

	void TurnInPlace(float DeltaTime);
	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	FRotator StartingAimRotation;
	ETurningInPlace TurningInPlace;
	UPROPERTY(EditAnywhere, Category = Combat)
	class UAnimMontage* FireWeaponMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ElimMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* ThrowGrenadeMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* SwapWeaponMontage;

	UPROPERTY(EditAnywhere)
	float CameraThreshold = 200.f;

	bool bRotateRootBone;
	float TurnThreshold = 0.5f;
	FRotator ProxyRotationLastFrame;
	FRotator ProxyRotation;
	float Proxy_Yaw;
	float TimeSinceLastMovementReplication;
	float CalculateSpeed();

	/*
	 * Player Health
	 */

	UPROPERTY(EditAnywhere, Category = PlayerStats)
	float MaxHealth = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = PlayerStats)
	float Health = 100.f;

	UFUNCTION()
	void OnRep_Health(float LastHealth);

	/*
		PlayerShield
	*/

	UPROPERTY(EditAnywhere, Category = PlayerStats)
	float MaxShield = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Shield, EditAnywhere, Category = PlayerStats)
	float Shield = 100.f;

	UFUNCTION()
	void OnRep_Shield(float LastShield);

	bool bElimmed = false;
	
	UPROPERTY()
	class AMasterPlayerController* MasterPlayercontroller;

	FTimerHandle RespawnTimer;

	UPROPERTY(EditDefaultsOnly)
	float RespawnTimeDelay = 2.f;

	void RespawnTimerFinished();

	bool bLeftGame = false;


	/*
	 * Dissolve Effect
	 */

	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;

	FOnTimelineFloat DissolveTrack;

	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);

	void StartDissolve();

	UPROPERTY(EditAnywhere)
	UCurveFloat* DissolveCurve;

	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstance* DissolveMaterialInstance;

	/*
		Team Colors
	*/

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* RedMaterial1;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* RedMaterial2;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* BlueMaterial1;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* BlueMaterial2;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* GreenMaterial1;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* GreenMaterial2;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* BlackMaterial1;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* BlackMaterial2;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* DefaultMaterial1;

	UPROPERTY(EditAnywhere, Category = Teams)
	UMaterialInstance* DefaultMaterial2;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* RedDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlueDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* BlackDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* GreenDissolveMatInst;

	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* DefaultDissolveMatInst;

	/*
	 *Elim bot. Does not need to be used if wanted
	 */

	UPROPERTY(EditAnywhere)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere)
	class USoundCue* ElimBotSound;

	UPROPERTY()
	class AMasterPlayerState* MasterPlayerState;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* CrownSystem;

	UPROPERTY()
	class UNiagaraComponent* CrownComponent;



	/*
	  Grenade
	*/

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedGrenade;

	/*
		Default Weapon
	*/

	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeaponBase> DefaultWeaponClass;

	UPROPERTY()
	class AMasterGameMode* MasterGameMode;
	
protected:
	
	virtual void BeginPlay() override;
	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookUp(float Value);
	void Turn(float Value);
	void EquipButtonPressed();
	void CrouchButtonPressed();
	void CrouchButtonReleased();
	void AimButtonPressed();
	void AimButtonReleased();
	void ReloadWeapon();
	virtual void Jump() override;
	void FireButtonPressed();
	void FireButtonReleased();
	void GrenadeButtonPressed();
	void RotateInPlace(float DeltaTime);
	void HideCameraIfCharacterClose();

	// Poll for any relevent classes and init our hud
	void PollInit();
	void CalculateAO_Pitch();
	void AimOffset(float DeltaTime);
	void SimProxyTurn();

	void SetSpawnPoint();
	void OnPlayerStateInitialized();

	void PickupFlag(class ABaseFlag* FlagToPickup);

	UFUNCTION()
	void ReceivedDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* InstigatorController, AActor* DamageCauser);
	
	void DropOrDestroyWeapon(AWeaponBase* Weapon);
	void DropOrDestroyWeapons();

	/*
	Hitboxes user for serverside-rewind
*/

	UPROPERTY(EditAnywhere)
		class UBoxComponent* Head;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Pelvis;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Spine_02;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Spine_03;

	UPROPERTY(EditAnywhere)
		UBoxComponent* UpperArm_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* UpperArm_R;

	UPROPERTY(EditAnywhere)
		UBoxComponent* LowerArm_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* LowerArm_R;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Hand_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Hand_R;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Thigh_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Thigh_R;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Calf_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Calf_R;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Foot_L;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Foot_R;

public:	
	
	void SetOverlappingWeapon(AWeaponBase* Weapon);
	bool IsWeaponEquipped();
	bool IsAiming();
	AWeaponBase* GetEquippedWeapon();
	FVector GetHitTarget() const;

	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return TPPCamera; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	FORCEINLINE bool IsElimmed() const { return bElimmed; }
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float Amount) { Health = Amount; }
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE void SetShield(float Amount) { Shield = Amount; }
	FORCEINLINE float GetMaxShield() const { return MaxShield; }
	ECombatState GetCombatState() const;
	FORCEINLINE UCombatComponent* GetCombat() const { return Combat; }
	FORCEINLINE bool GetDisableGameplay() const { return bDisableGameplay; }
	FORCEINLINE UAnimMontage* GetReloadMontage() const { return ReloadMontage; }
	FORCEINLINE UStaticMeshComponent* GetAttachedGrenade() const { return AttachedGrenade; }
	FORCEINLINE UBuffComponent* GetBuff() const { return Buff; }
	bool IsLocallyReloading();
	FORCEINLINE ULagCompensationComponent* GetLagCompensation() const { return LagCompensation; }
	FORCEINLINE bool IsHoldingFlag() const;
	ETeam GetTeam();
	void SetHoldingFlag(bool bHolding);
};
