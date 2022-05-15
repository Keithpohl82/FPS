// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MasterPlayerController_generated_h
#error "MasterPlayerController.generated.h already included, missing '#pragma once' in MasterPlayerController.h"
#endif
#define FPS_MasterPlayerController_generated_h

#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_SPARSE_DATA
#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_RPC_WRAPPERS \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime);


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime);


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_EVENT_PARMS \
	struct MasterPlayerController_eventClientReportServerTime_Parms \
	{ \
		float TimeOfClientRequest; \
		float TimeServerReceivedClientRequest; \
	}; \
	struct MasterPlayerController_eventServerRequestServerTime_Parms \
	{ \
		float TimeOfClientRequest; \
	};


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterPlayerController(); \
	friend struct Z_Construct_UClass_AMasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMasterPlayerController(); \
	friend struct Z_Construct_UClass_AMasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterPlayerController(AMasterPlayerController&&); \
	NO_API AMasterPlayerController(const AMasterPlayerController&); \
public:


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterPlayerController(AMasterPlayerController&&); \
	NO_API AMasterPlayerController(const AMasterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterPlayerController)


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_12_PROLOG \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_EVENT_PARMS


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_RPC_WRAPPERS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_INCLASS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_SPARSE_DATA \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AMasterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
