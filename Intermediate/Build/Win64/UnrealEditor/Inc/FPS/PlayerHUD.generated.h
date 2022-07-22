// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UElimAnnouncment;
#ifdef FPS_PlayerHUD_generated_h
#error "PlayerHUD.generated.h already included, missing '#pragma once' in PlayerHUD.h"
#endif
#define FPS_PlayerHUD_generated_h

#define FID_FPS_Source_FPS_UI_PlayerHUD_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHUDPackage_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FHUDPackage>();

#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_SPARSE_DATA
#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execElimAnnouncementTimerFinished);


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execElimAnnouncementTimerFinished);


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerHUD(); \
	friend struct Z_Construct_UClass_APlayerHUD_Statics; \
public: \
	DECLARE_CLASS(APlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(APlayerHUD)


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public:


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerHUD(APlayerHUD&&); \
	NO_API APlayerHUD(const APlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerHUD)


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_27_PROLOG
#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_SPARSE_DATA \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_RPC_WRAPPERS \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_INCLASS \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_UI_PlayerHUD_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_SPARSE_DATA \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_UI_PlayerHUD_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class APlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_UI_PlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
