// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPS_WeaponBase_generated_h

#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_SPARSE_DATA
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_RPC_WRAPPERS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
 \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientAddAmmo_Implementation(int32 AmmoToAdd); \
	virtual void ClientUpdateAmmo_Implementation(int32 ServerAmmo); \
 \
	DECLARE_FUNCTION(execClientAddAmmo); \
	DECLARE_FUNCTION(execClientUpdateAmmo); \
	DECLARE_FUNCTION(execOnRep_WeaponState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_EVENT_PARMS \
	struct WeaponBase_eventClientAddAmmo_Parms \
	{ \
		int32 AmmoToAdd; \
	}; \
	struct WeaponBase_eventClientUpdateAmmo_Parms \
	{ \
		int32 ServerAmmo; \
	};


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_31_PROLOG \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_EVENT_PARMS


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_INCLASS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_WeaponBase_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Initial) \
	op(EWeaponState::EWS_Equipped) \
	op(EWeaponState::EWS_EquippedSecondary) \
	op(EWeaponState::EWS_Dropped) 

enum class EWeaponState : uint8;
template<> FPS_API UEnum* StaticEnum<EWeaponState>();

#define FOREACH_ENUM_EFIRETYPE(op) \
	op(EFireType::EFT_HitScan) \
	op(EFireType::EFT_Projectile) \
	op(EFireType::EFT_Shotgun) 

enum class EFireType : uint8;
template<> FPS_API UEnum* StaticEnum<EFireType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
