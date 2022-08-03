// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMasterCharacter;
#ifdef FPS_BaseFlag_generated_h
#error "BaseFlag.generated.h already included, missing '#pragma once' in BaseFlag.h"
#endif
#define FPS_BaseFlag_generated_h

#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_SPARSE_DATA
#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_RPC_WRAPPERS \
	virtual void ServerDetachFlag_Implementation(); \
	virtual void ServerAttachFlagToPlayer_Implementation(AMasterCharacter* Player); \
 \
	DECLARE_FUNCTION(execServerDetachFlag); \
	DECLARE_FUNCTION(execServerAttachFlagToPlayer);


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerDetachFlag_Implementation(); \
	virtual void ServerAttachFlagToPlayer_Implementation(AMasterCharacter* Player); \
 \
	DECLARE_FUNCTION(execServerDetachFlag); \
	DECLARE_FUNCTION(execServerAttachFlagToPlayer);


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_EVENT_PARMS \
	struct BaseFlag_eventServerAttachFlagToPlayer_Parms \
	{ \
		AMasterCharacter* Player; \
	};


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseFlag(); \
	friend struct Z_Construct_UClass_ABaseFlag_Statics; \
public: \
	DECLARE_CLASS(ABaseFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseFlag(); \
	friend struct Z_Construct_UClass_ABaseFlag_Statics; \
public: \
	DECLARE_CLASS(ABaseFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseFlag(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFlag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFlag(ABaseFlag&&); \
	NO_API ABaseFlag(const ABaseFlag&); \
public:


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseFlag(ABaseFlag&&); \
	NO_API ABaseFlag(const ABaseFlag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseFlag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_10_PROLOG \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_EVENT_PARMS


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_RPC_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_INCLASS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ABaseFlag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
