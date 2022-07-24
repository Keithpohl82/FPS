// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MasterPlayerState_generated_h
#error "MasterPlayerState.generated.h already included, missing '#pragma once' in MasterPlayerState.h"
#endif
#define FPS_MasterPlayerState_generated_h

#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_SPARSE_DATA
#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execOnRep_Deaths);


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execOnRep_Deaths);


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterPlayerState(); \
	friend struct Z_Construct_UClass_AMasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumDeaths=NETFIELD_REP_START, \
		Team, \
		NETFIELD_REP_END=Team	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMasterPlayerState(); \
	friend struct Z_Construct_UClass_AMasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumDeaths=NETFIELD_REP_START, \
		Team, \
		NETFIELD_REP_END=Team	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterPlayerState(AMasterPlayerState&&); \
	NO_API AMasterPlayerState(const AMasterPlayerState&); \
public:


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterPlayerState(AMasterPlayerState&&); \
	NO_API AMasterPlayerState(const AMasterPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterPlayerState)


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_17_PROLOG
#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_SPARSE_DATA \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_RPC_WRAPPERS \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_INCLASS \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_SPARSE_DATA \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AMasterPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
