// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MasterGameInstance_generated_h
#error "MasterGameInstance.generated.h already included, missing '#pragma once' in MasterGameInstance.h"
#endif
#define FPS_MasterGameInstance_generated_h

#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllFriends);


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllFriends);


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMasterGameInstance(); \
	friend struct Z_Construct_UClass_UMasterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMasterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UMasterGameInstance)


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMasterGameInstance(); \
	friend struct Z_Construct_UClass_UMasterGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMasterGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UMasterGameInstance)


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMasterGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMasterGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMasterGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMasterGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMasterGameInstance(UMasterGameInstance&&); \
	NO_API UMasterGameInstance(const UMasterGameInstance&); \
public:


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMasterGameInstance(UMasterGameInstance&&); \
	NO_API UMasterGameInstance(const UMasterGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMasterGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMasterGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMasterGameInstance)


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_12_PROLOG
#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_INCLASS \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UMasterGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
