// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMasterCharacter;
#ifdef FPS_NewFlag_generated_h
#error "NewFlag.generated.h already included, missing '#pragma once' in NewFlag.h"
#endif
#define FPS_NewFlag_generated_h

#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_SPARSE_DATA
#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_RPC_WRAPPERS \
	virtual void ServerAttachFlag_Implementation(AMasterCharacter* Character); \
 \
	DECLARE_FUNCTION(execServerAttachFlag);


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerAttachFlag_Implementation(AMasterCharacter* Character); \
 \
	DECLARE_FUNCTION(execServerAttachFlag);


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_EVENT_PARMS \
	struct NewFlag_eventServerAttachFlag_Parms \
	{ \
		AMasterCharacter* Character; \
	};


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewFlag(); \
	friend struct Z_Construct_UClass_ANewFlag_Statics; \
public: \
	DECLARE_CLASS(ANewFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ANewFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANewFlag(); \
	friend struct Z_Construct_UClass_ANewFlag_Statics; \
public: \
	DECLARE_CLASS(ANewFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ANewFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewFlag(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewFlag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewFlag(ANewFlag&&); \
	NO_API ANewFlag(const ANewFlag&); \
public:


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewFlag(ANewFlag&&); \
	NO_API ANewFlag(const ANewFlag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewFlag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewFlag)


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_10_PROLOG \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_EVENT_PARMS


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_RPC_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_INCLASS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ANewFlag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
