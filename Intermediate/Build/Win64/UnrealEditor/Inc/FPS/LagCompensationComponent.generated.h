// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMasterCharacter;
struct FVector_NetQuantize;
class AWeaponBase;
#ifdef FPS_LagCompensationComponent_generated_h
#error "LagCompensationComponent.generated.h already included, missing '#pragma once' in LagCompensationComponent.h"
#endif
#define FPS_LagCompensationComponent_generated_h

#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxInformation_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FBoxInformation>();

#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePackage_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FFramePackage>();

#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerSideRewindResult_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FServerSideRewindResult>();

#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotgunServerSideRewindResult_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FShotgunServerSideRewindResult>();

#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_SPARSE_DATA
#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_RPC_WRAPPERS \
	virtual void ShotgunServerScoreRequest_Implementation(TArray<AMasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void ServerScoreRequest_Implementation(AMasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeaponBase* DamageCauser); \
 \
	DECLARE_FUNCTION(execShotgunServerScoreRequest); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShotgunServerScoreRequest_Implementation(TArray<AMasterCharacter*> const& HitCharacters, FVector_NetQuantize const& TraceStart, TArray<FVector_NetQuantize> const& HitLocations, float HitTime); \
	virtual void ServerScoreRequest_Implementation(AMasterCharacter* HitCharacter, FVector_NetQuantize const& TraceStart, FVector_NetQuantize const& HitLocation, float HitTime, AWeaponBase* DamageCauser); \
 \
	DECLARE_FUNCTION(execShotgunServerScoreRequest); \
	DECLARE_FUNCTION(execServerScoreRequest);


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_EVENT_PARMS \
	struct LagCompensationComponent_eventServerScoreRequest_Parms \
	{ \
		AMasterCharacter* HitCharacter; \
		FVector_NetQuantize TraceStart; \
		FVector_NetQuantize HitLocation; \
		float HitTime; \
		AWeaponBase* DamageCauser; \
	}; \
	struct LagCompensationComponent_eventShotgunServerScoreRequest_Parms \
	{ \
		TArray<AMasterCharacter*> HitCharacters; \
		FVector_NetQuantize TraceStart; \
		TArray<FVector_NetQuantize> HitLocations; \
		float HitTime; \
	};


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULagCompensationComponent(); \
	friend struct Z_Construct_UClass_ULagCompensationComponent_Statics; \
public: \
	DECLARE_CLASS(ULagCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ULagCompensationComponent)


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_INCLASS \
private: \
	static void StaticRegisterNativesULagCompensationComponent(); \
	friend struct Z_Construct_UClass_ULagCompensationComponent_Statics; \
public: \
	DECLARE_CLASS(ULagCompensationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ULagCompensationComponent)


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULagCompensationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULagCompensationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagCompensationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULagCompensationComponent(ULagCompensationComponent&&); \
	NO_API ULagCompensationComponent(const ULagCompensationComponent&); \
public:


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULagCompensationComponent(ULagCompensationComponent&&); \
	NO_API ULagCompensationComponent(const ULagCompensationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULagCompensationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULagCompensationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULagCompensationComponent)


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_64_PROLOG \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_EVENT_PARMS


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_SPARSE_DATA \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_INCLASS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_SPARSE_DATA \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Components_LagCompensationComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ULagCompensationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Components_LagCompensationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
