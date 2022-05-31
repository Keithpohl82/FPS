// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MasterGameState_generated_h
#error "MasterGameState.generated.h already included, missing '#pragma once' in MasterGameState.h"
#endif
#define FPS_MasterGameState_generated_h

#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_RPC_WRAPPERS
#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterGameState(); \
	friend struct Z_Construct_UClass_AMasterGameState_Statics; \
public: \
	DECLARE_CLASS(AMasterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=TopScoringPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMasterGameState(); \
	friend struct Z_Construct_UClass_AMasterGameState_Statics; \
public: \
	DECLARE_CLASS(AMasterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TopScoringPlayers=NETFIELD_REP_START, \
		NETFIELD_REP_END=TopScoringPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterGameState(AMasterGameState&&); \
	NO_API AMasterGameState(const AMasterGameState&); \
public:


#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterGameState(AMasterGameState&&); \
	NO_API AMasterGameState(const AMasterGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterGameState)


#define FID_FPS_Source_FPS_GameState_MasterGameState_h_12_PROLOG
#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_INCLASS \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_GameState_MasterGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_GameState_MasterGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AMasterGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_GameState_MasterGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
