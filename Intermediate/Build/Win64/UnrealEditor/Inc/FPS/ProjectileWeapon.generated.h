// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_ProjectileWeapon_generated_h
#error "ProjectileWeapon.generated.h already included, missing '#pragma once' in ProjectileWeapon.h"
#endif
#define FPS_ProjectileWeapon_generated_h

#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileWeapon(); \
	friend struct Z_Construct_UClass_AProjectileWeapon_Statics; \
public: \
	DECLARE_CLASS(AProjectileWeapon, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileWeapon)


#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileWeapon(); \
	friend struct Z_Construct_UClass_AProjectileWeapon_Statics; \
public: \
	DECLARE_CLASS(AProjectileWeapon, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileWeapon)


#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileWeapon(AProjectileWeapon&&); \
	NO_API AProjectileWeapon(const AProjectileWeapon&); \
public:


#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileWeapon(AProjectileWeapon&&); \
	NO_API AProjectileWeapon(const AProjectileWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileWeapon)


#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_12_PROLOG
#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_INCLASS \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AProjectileWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS