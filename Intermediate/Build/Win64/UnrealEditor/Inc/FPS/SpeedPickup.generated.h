// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_SpeedPickup_generated_h
#error "SpeedPickup.generated.h already included, missing '#pragma once' in SpeedPickup.h"
#endif
#define FPS_SpeedPickup_generated_h

#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedPickup(); \
	friend struct Z_Construct_UClass_ASpeedPickup_Statics; \
public: \
	DECLARE_CLASS(ASpeedPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ASpeedPickup)


#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpeedPickup(); \
	friend struct Z_Construct_UClass_ASpeedPickup_Statics; \
public: \
	DECLARE_CLASS(ASpeedPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ASpeedPickup)


#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeedPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedPickup(ASpeedPickup&&); \
	NO_API ASpeedPickup(const ASpeedPickup&); \
public:


#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeedPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeedPickup(ASpeedPickup&&); \
	NO_API ASpeedPickup(const ASpeedPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeedPickup)


#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_12_PROLOG
#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_INCLASS \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Pickups_SpeedPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ASpeedPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Pickups_SpeedPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
