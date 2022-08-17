// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_CapturePoint_generated_h
#error "CapturePoint.generated.h already included, missing '#pragma once' in CapturePoint.h"
#endif
#define FPS_CapturePoint_generated_h

#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_SPARSE_DATA
#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_RPC_WRAPPERS \
	virtual void ServerSpawnFlag_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSpawnFlag);


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSpawnFlag_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSpawnFlag);


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_EVENT_PARMS
#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePoint(); \
	friend struct Z_Construct_UClass_ACapturePoint_Statics; \
public: \
	DECLARE_CLASS(ACapturePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ACapturePoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FlagInstance=NETFIELD_REP_START, \
		NETFIELD_REP_END=FlagInstance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACapturePoint(); \
	friend struct Z_Construct_UClass_ACapturePoint_Statics; \
public: \
	DECLARE_CLASS(ACapturePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ACapturePoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FlagInstance=NETFIELD_REP_START, \
		NETFIELD_REP_END=FlagInstance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapturePoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapturePoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePoint(ACapturePoint&&); \
	NO_API ACapturePoint(const ACapturePoint&); \
public:


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePoint(ACapturePoint&&); \
	NO_API ACapturePoint(const ACapturePoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapturePoint)


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_10_PROLOG \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_EVENT_PARMS


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_RPC_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_INCLASS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ACapturePoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_CaptureTheFlag_CapturePoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
