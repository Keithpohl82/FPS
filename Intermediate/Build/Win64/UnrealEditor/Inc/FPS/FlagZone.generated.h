// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_FlagZone_generated_h
#error "FlagZone.generated.h already included, missing '#pragma once' in FlagZone.h"
#endif
#define FPS_FlagZone_generated_h

#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_SPARSE_DATA
#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlagZone(); \
	friend struct Z_Construct_UClass_AFlagZone_Statics; \
public: \
	DECLARE_CLASS(AFlagZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFlagZone)


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFlagZone(); \
	friend struct Z_Construct_UClass_AFlagZone_Statics; \
public: \
	DECLARE_CLASS(AFlagZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFlagZone)


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlagZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlagZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlagZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlagZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlagZone(AFlagZone&&); \
	NO_API AFlagZone(const AFlagZone&); \
public:


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlagZone(AFlagZone&&); \
	NO_API AFlagZone(const AFlagZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlagZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlagZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlagZone)


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_10_PROLOG
#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_RPC_WRAPPERS \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_INCLASS \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFlagZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_CaptureTheFlag_FlagZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
