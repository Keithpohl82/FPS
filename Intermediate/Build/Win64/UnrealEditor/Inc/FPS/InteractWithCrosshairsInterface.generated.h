// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_InteractWithCrosshairsInterface_generated_h
#error "InteractWithCrosshairsInterface.generated.h already included, missing '#pragma once' in InteractWithCrosshairsInterface.h"
#endif
#define FPS_InteractWithCrosshairsInterface_generated_h

#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_SPARSE_DATA
#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_RPC_WRAPPERS
#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UInteractWithCrosshairsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractWithCrosshairsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UInteractWithCrosshairsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractWithCrosshairsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UInteractWithCrosshairsInterface(UInteractWithCrosshairsInterface&&); \
	FPS_API UInteractWithCrosshairsInterface(const UInteractWithCrosshairsInterface&); \
public:


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UInteractWithCrosshairsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UInteractWithCrosshairsInterface(UInteractWithCrosshairsInterface&&); \
	FPS_API UInteractWithCrosshairsInterface(const UInteractWithCrosshairsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UInteractWithCrosshairsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractWithCrosshairsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractWithCrosshairsInterface)


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractWithCrosshairsInterface(); \
	friend struct Z_Construct_UClass_UInteractWithCrosshairsInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractWithCrosshairsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPS"), FPS_API) \
	DECLARE_SERIALIZER(UInteractWithCrosshairsInterface)


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractWithCrosshairsInterface() {} \
public: \
	typedef UInteractWithCrosshairsInterface UClassType; \
	typedef IInteractWithCrosshairsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractWithCrosshairsInterface() {} \
public: \
	typedef UInteractWithCrosshairsInterface UClassType; \
	typedef IInteractWithCrosshairsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_10_PROLOG
#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_SPARSE_DATA \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UInteractWithCrosshairsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Interfaces_InteractWithCrosshairsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
