// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_AmmoPickup_generated_h
#error "AmmoPickup.generated.h already included, missing '#pragma once' in AmmoPickup.h"
#endif
#define FPS_AmmoPickup_generated_h

#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_SPARSE_DATA
#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup)


#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public:


#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoPickup)


#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_13_PROLOG
#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_SPARSE_DATA \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_INCLASS \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_SPARSE_DATA \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Pickups_AmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Pickups_AmmoPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
