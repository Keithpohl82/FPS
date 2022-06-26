// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef FPS_ProjectileGrenade_generated_h
#error "ProjectileGrenade.generated.h already included, missing '#pragma once' in ProjectileGrenade.h"
#endif
#define FPS_ProjectileGrenade_generated_h

#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBounce);


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBounce);


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
public: \
	DECLARE_CLASS(AProjectileGrenade, AProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
public: \
	DECLARE_CLASS(AProjectileGrenade, AProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileGrenade(AProjectileGrenade&&); \
	NO_API AProjectileGrenade(const AProjectileGrenade&); \
public:


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileGrenade(AProjectileGrenade&&); \
	NO_API AProjectileGrenade(const AProjectileGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileGrenade)


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_12_PROLOG
#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_INCLASS \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AProjectileGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_Projectiles_ProjectileGrenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
