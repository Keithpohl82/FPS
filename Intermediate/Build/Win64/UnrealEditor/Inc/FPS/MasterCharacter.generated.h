// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MasterCharacter_generated_h
#error "MasterCharacter.generated.h already included, missing '#pragma once' in MasterCharacter.h"
#endif
#define FPS_MasterCharacter_generated_h

#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_SPARSE_DATA
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterCharacter(); \
	friend struct Z_Construct_UClass_AMasterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterCharacter)


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMasterCharacter(); \
	friend struct Z_Construct_UClass_AMasterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterCharacter)


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterCharacter(AMasterCharacter&&); \
	NO_API AMasterCharacter(const AMasterCharacter&); \
public:


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterCharacter(AMasterCharacter&&); \
	NO_API AMasterCharacter(const AMasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasterCharacter)


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_9_PROLOG
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_SPARSE_DATA \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_INCLASS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_SPARSE_DATA \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AMasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Character_MasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
