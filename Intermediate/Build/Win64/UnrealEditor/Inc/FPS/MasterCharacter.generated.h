// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
class AWeaponBase;
#ifdef FPS_MasterCharacter_generated_h
#error "MasterCharacter.generated.h already included, missing '#pragma once' in MasterCharacter.h"
#endif
#define FPS_MasterCharacter_generated_h

#define FID_FPS_Source_FPS_Character_MasterCharacter_h_14_DELEGATE \
static inline void FOnLeftGame_DelegateWrapper(const FMulticastScriptDelegate& OnLeftGame) \
{ \
	OnLeftGame.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_SPARSE_DATA
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_RPC_WRAPPERS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void ServerLeaveGame_Implementation(); \
	virtual void MulticastElim_Implementation(bool bPlayerLeftGame); \
 \
	DECLARE_FUNCTION(execReceivedDamage); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execServerLeaveGame); \
	DECLARE_FUNCTION(execMulticastElim);


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void ServerLeaveGame_Implementation(); \
	virtual void MulticastElim_Implementation(bool bPlayerLeftGame); \
 \
	DECLARE_FUNCTION(execReceivedDamage); \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execServerLeaveGame); \
	DECLARE_FUNCTION(execMulticastElim);


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_EVENT_PARMS \
	struct MasterCharacter_eventMulticastElim_Parms \
	{ \
		bool bPlayerLeftGame; \
	}; \
	struct MasterCharacter_eventShowSniperScopeWidget_Parms \
	{ \
		bool bShowScopeWidget; \
	};


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_CALLBACK_WRAPPERS
#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterCharacter(); \
	friend struct Z_Construct_UClass_AMasterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		Health, \
		Shield, \
		NETFIELD_REP_END=Shield	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMasterCharacter(); \
	friend struct Z_Construct_UClass_AMasterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AMasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		Health, \
		Shield, \
		NETFIELD_REP_END=Shield	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_STANDARD_CONSTRUCTORS \
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


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterCharacter(AMasterCharacter&&); \
	NO_API AMasterCharacter(const AMasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasterCharacter)


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_16_PROLOG \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_EVENT_PARMS


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_SPARSE_DATA \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_RPC_WRAPPERS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_INCLASS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FPS_Source_FPS_Character_MasterCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_SPARSE_DATA \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_CALLBACK_WRAPPERS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_FPS_Source_FPS_Character_MasterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AMasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Character_MasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
