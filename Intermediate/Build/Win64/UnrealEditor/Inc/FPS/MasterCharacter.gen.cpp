// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Character/MasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterCharacter() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMasterCharacter::execReceivedDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatorController);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivedDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatorController,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterCharacter::execUpdateDissolveMaterial)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DissolveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDissolveMaterial(Z_Param_DissolveValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterCharacter::execOnRep_Health)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LastHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_LastHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeaponBase,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterCharacter::execMulticastElim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastElim_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMasterCharacter_MulticastElim = FName(TEXT("MulticastElim"));
	void AMasterCharacter::MulticastElim()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterCharacter_MulticastElim),NULL);
	}
	static FName NAME_AMasterCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void AMasterCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterCharacter_ServerEquipButtonPressed),NULL);
	}
	static FName NAME_AMasterCharacter_ShowSniperScopeWidget = FName(TEXT("ShowSniperScopeWidget"));
	void AMasterCharacter::ShowSniperScopeWidget(bool bShowScopeWidget)
	{
		MasterCharacter_eventShowSniperScopeWidget_Parms Parms;
		Parms.bShowScopeWidget=bShowScopeWidget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMasterCharacter_ShowSniperScopeWidget),&Parms);
	}
	void AMasterCharacter::StaticRegisterNativesAMasterCharacter()
	{
		UClass* Class = AMasterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastElim", &AMasterCharacter::execMulticastElim },
			{ "OnRep_Health", &AMasterCharacter::execOnRep_Health },
			{ "OnRep_OverlappingWeapon", &AMasterCharacter::execOnRep_OverlappingWeapon },
			{ "ReceivedDamage", &AMasterCharacter::execReceivedDamage },
			{ "ServerEquipButtonPressed", &AMasterCharacter::execServerEquipButtonPressed },
			{ "UpdateDissolveMaterial", &AMasterCharacter::execUpdateDissolveMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "MulticastElim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_MulticastElim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_MulticastElim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics
	{
		struct MasterCharacter_eventOnRep_Health_Parms
		{
			float LastHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::NewProp_LastHealth = { "LastHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventOnRep_Health_Parms, LastHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::NewProp_LastHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::MasterCharacter_eventOnRep_Health_Parms), Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct MasterCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeaponBase* LastWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::MasterCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics
	{
		struct MasterCharacter_eventReceivedDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatorController;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventReceivedDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventReceivedDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventReceivedDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventReceivedDamage_Parms, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventReceivedDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_InstigatorController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "ReceivedDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::MasterCharacter_eventReceivedDamage_Parms), Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_ReceivedDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_ReceivedDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics
	{
		static void NewProp_bShowScopeWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScopeWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScopeWidget_SetBit(void* Obj)
	{
		((MasterCharacter_eventShowSniperScopeWidget_Parms*)Obj)->bShowScopeWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScopeWidget = { "bShowScopeWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MasterCharacter_eventShowSniperScopeWidget_Parms), &Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScopeWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::NewProp_bShowScopeWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "ShowSniperScopeWidget", nullptr, nullptr, sizeof(MasterCharacter_eventShowSniperScopeWidget_Parms), Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics
	{
		struct MasterCharacter_eventUpdateDissolveMaterial_Parms
		{
			float DissolveValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DissolveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue = { "DissolveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterCharacter_eventUpdateDissolveMaterial_Parms, DissolveValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::NewProp_DissolveValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterCharacter, nullptr, "UpdateDissolveMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::MasterCharacter_eventUpdateDissolveMaterial_Parms), Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterCharacter);
	UClass* Z_Construct_UClass_AMasterCharacter_NoRegister()
	{
		return AMasterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMasterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableGameplay_MetaData[];
#endif
		static void NewProp_bDisableGameplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableGameplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPPCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TPPCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPPCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FPPCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Buff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireWeaponMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireWeaponMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitReactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowGrenadeMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowGrenadeMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayercontroller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterPlayercontroller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTimeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicDissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimBotSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimBotSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedGrenade_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedGrenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterCharacter_MulticastElim, "MulticastElim" }, // 3551899359
		{ &Z_Construct_UFunction_AMasterCharacter_OnRep_Health, "OnRep_Health" }, // 1595230739
		{ &Z_Construct_UFunction_AMasterCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 823773337
		{ &Z_Construct_UFunction_AMasterCharacter_ReceivedDamage, "ReceivedDamage" }, // 3740417203
		{ &Z_Construct_UFunction_AMasterCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 1891842035
		{ &Z_Construct_UFunction_AMasterCharacter_ShowSniperScopeWidget, "ShowSniperScopeWidget" }, // 27566159
		{ &Z_Construct_UFunction_AMasterCharacter_UpdateDissolveMaterial, "UpdateDissolveMaterial" }, // 4117495447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MasterCharacter.h" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay_MetaData[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay_SetBit(void* Obj)
	{
		((AMasterCharacter*)Obj)->bDisableGameplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay = { "bDisableGameplay", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMasterCharacter), &Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_TPPCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_TPPCamera = { "TPPCamera", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, TPPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_TPPCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_TPPCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FPPCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FPPCamera = { "FPPCamera", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, FPPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FPPCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FPPCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, OverlappingWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Combat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Combat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Combat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Buff_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Buff = { "Buff", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, Buff), Z_Construct_UClass_UBuffComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Buff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Buff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FireWeaponMontage = { "FireWeaponMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, FireWeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FireWeaponMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_HitReactMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_HitReactMontage = { "HitReactMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, HitReactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_HitReactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_HitReactMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimMontage = { "ElimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ElimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ThrowGrenadeMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ThrowGrenadeMontage = { "ThrowGrenadeMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ThrowGrenadeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ThrowGrenadeMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ThrowGrenadeMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_CameraThreshold_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_CameraThreshold = { "CameraThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, CameraThreshold), METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_CameraThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_CameraThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "Comment", "/*\n\x09 * Player Health\n\x09 */" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
		{ "ToolTip", "* Player Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayercontroller_MetaData[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayercontroller = { "MasterPlayercontroller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, MasterPlayercontroller), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayercontroller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayercontroller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_RespawnTimeDelay_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_RespawnTimeDelay = { "RespawnTimeDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, RespawnTimeDelay), METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_RespawnTimeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_RespawnTimeDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveTimeline_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "Comment", "/*\n\x09 * Dissolve Effect\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
		{ "ToolTip", "* Dissolve Effect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveTimeline = { "DissolveTimeline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, DissolveTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveTimeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveCurve_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveCurve = { "DissolveCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, DissolveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance = { "DynamicDissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, DynamicDissolveMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData[] = {
		{ "Category", "Elim" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveMaterialInstance = { "DissolveMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, DissolveMaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotEffect_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "Comment", "/*\n\x09 *Elim bot. Does not need to be used if wanted\n\x09 */" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
		{ "ToolTip", "*Elim bot. Does not need to be used if wanted" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotEffect = { "ElimBotEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ElimBotEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotComponent_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotComponent = { "ElimBotComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ElimBotComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotSound_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotSound = { "ElimBotSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, ElimBotSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayerState = { "MasterPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, MasterPlayerState), Z_Construct_UClass_AMasterPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::NewProp_AttachedGrenade_MetaData[] = {
		{ "Category", "MasterCharacter" },
		{ "Comment", "/*\n\x09  Grenade\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
		{ "ToolTip", "Grenade" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterCharacter_Statics::NewProp_AttachedGrenade = { "AttachedGrenade", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterCharacter, AttachedGrenade), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_AttachedGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::NewProp_AttachedGrenade_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_bDisableGameplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_TPPCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FPPCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Combat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Buff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_FireWeaponMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_HitReactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ThrowGrenadeMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_CameraThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayercontroller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_RespawnTimeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DynamicDissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_DissolveMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_ElimBotSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_MasterPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterCharacter_Statics::NewProp_AttachedGrenade,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMasterCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractWithCrosshairsInterface_NoRegister, (int32)VTABLE_OFFSET(AMasterCharacter, IInteractWithCrosshairsInterface), false },  // 3718564808
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterCharacter_Statics::ClassParams = {
		&AMasterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterCharacter()
	{
		if (!Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton, Z_Construct_UClass_AMasterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterCharacter>()
	{
		return AMasterCharacter::StaticClass();
	}

	void AMasterCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDisableGameplay(TEXT("bDisableGameplay"));
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_bDisableGameplay == ClassReps[(int32)ENetFields_Private::bDisableGameplay].Property->GetFName()
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMasterCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterCharacter);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterCharacter, AMasterCharacter::StaticClass, TEXT("AMasterCharacter"), &Z_Registration_Info_UClass_AMasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterCharacter), 3142347514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_1008157875(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
