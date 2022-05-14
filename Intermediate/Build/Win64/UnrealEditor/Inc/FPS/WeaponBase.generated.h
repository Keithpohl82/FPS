// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPS_WeaponBase_generated_h

#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_SPARSE_DATA
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_STANDARD_CONSTRUCTORS \
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


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_9_PROLOG
#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_INCLASS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_WeaponBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
