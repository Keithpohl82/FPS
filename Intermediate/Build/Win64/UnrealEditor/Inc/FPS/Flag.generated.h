// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_Flag_generated_h
#error "Flag.generated.h already included, missing '#pragma once' in Flag.h"
#endif
#define FPS_Flag_generated_h

#define FID_FPS_Source_FPS_Weapons_Flag_h_16_SPARSE_DATA
#define FID_FPS_Source_FPS_Weapons_Flag_h_16_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Weapons_Flag_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Weapons_Flag_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlag(); \
	friend struct Z_Construct_UClass_AFlag_Statics; \
public: \
	DECLARE_CLASS(AFlag, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFlag)


#define FID_FPS_Source_FPS_Weapons_Flag_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFlag(); \
	friend struct Z_Construct_UClass_AFlag_Statics; \
public: \
	DECLARE_CLASS(AFlag, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFlag)


#define FID_FPS_Source_FPS_Weapons_Flag_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlag(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlag(AFlag&&); \
	NO_API AFlag(const AFlag&); \
public:


#define FID_FPS_Source_FPS_Weapons_Flag_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlag(AFlag&&); \
	NO_API AFlag(const AFlag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlag)


#define FID_FPS_Source_FPS_Weapons_Flag_h_13_PROLOG
#define FID_FPS_Source_FPS_Weapons_Flag_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_INCLASS \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Weapons_Flag_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_SPARSE_DATA \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Weapons_Flag_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFlag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_Flag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
