// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UCombatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	FPS_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ECombatState();
// End Cross Module References
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CombatState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CombatState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_CarriedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CarriedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerThrowGrenade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerThrowGrenade_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execMulticastFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_TraceHitTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerFire)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceHitTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation(Z_Param_TraceHitTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execOnRep_EquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execServerSetAiming)
	{
		P_GET_UBOOL(Z_Param_bIsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAiming_Implementation(Z_Param_bIsAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execThrowGrenadeFished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowGrenadeFished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execShotgunShellReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShotgunShellReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponent::execFinishReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReloading();
		P_NATIVE_END;
	}
	static FName NAME_UCombatComponent_MulticastFire = FName(TEXT("MulticastFire"));
	void UCombatComponent::MulticastFire(FVector_NetQuantize const& TraceHitTarget)
	{
		CombatComponent_eventMulticastFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_MulticastFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerFire = FName(TEXT("ServerFire"));
	void UCombatComponent::ServerFire(FVector_NetQuantize const& TraceHitTarget)
	{
		CombatComponent_eventServerFire_Parms Parms;
		Parms.TraceHitTarget=TraceHitTarget;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerFire),&Parms);
	}
	static FName NAME_UCombatComponent_ServerReload = FName(TEXT("ServerReload"));
	void UCombatComponent::ServerReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerReload),NULL);
	}
	static FName NAME_UCombatComponent_ServerSetAiming = FName(TEXT("ServerSetAiming"));
	void UCombatComponent::ServerSetAiming(bool bIsAiming)
	{
		CombatComponent_eventServerSetAiming_Parms Parms;
		Parms.bIsAiming=bIsAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerSetAiming),&Parms);
	}
	static FName NAME_UCombatComponent_ServerThrowGrenade = FName(TEXT("ServerThrowGrenade"));
	void UCombatComponent::ServerThrowGrenade()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCombatComponent_ServerThrowGrenade),NULL);
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
		UClass* Class = UCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishReloading", &UCombatComponent::execFinishReloading },
			{ "MulticastFire", &UCombatComponent::execMulticastFire },
			{ "OnRep_CarriedAmmo", &UCombatComponent::execOnRep_CarriedAmmo },
			{ "OnRep_CombatState", &UCombatComponent::execOnRep_CombatState },
			{ "OnRep_EquippedWeapon", &UCombatComponent::execOnRep_EquippedWeapon },
			{ "ServerFire", &UCombatComponent::execServerFire },
			{ "ServerReload", &UCombatComponent::execServerReload },
			{ "ServerSetAiming", &UCombatComponent::execServerSetAiming },
			{ "ServerThrowGrenade", &UCombatComponent::execServerThrowGrenade },
			{ "ShotgunShellReload", &UCombatComponent::execShotgunShellReload },
			{ "ThrowGrenadeFished", &UCombatComponent::execThrowGrenadeFished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "FinishReloading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_FinishReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_FinishReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatComponent_eventMulticastFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget_MetaData)) }; // 1408259225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::NewProp_TraceHitTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "MulticastFire", nullptr, nullptr, sizeof(CombatComponent_eventMulticastFire_Parms), Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CarriedAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_CombatState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_CombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_CombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget = { "TraceHitTarget", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatComponent_eventServerFire_Parms, TraceHitTarget), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget_MetaData)) }; // 1408259225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::NewProp_TraceHitTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerFire", nullptr, nullptr, sizeof(CombatComponent_eventServerFire_Parms), Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics
	{
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((CombatComponent_eventServerSetAiming_Parms*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CombatComponent_eventServerSetAiming_Parms), &Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::NewProp_bIsAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerSetAiming", nullptr, nullptr, sizeof(CombatComponent_eventServerSetAiming_Parms), Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerSetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerSetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ServerThrowGrenade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ShotgunShellReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ShotgunShellReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ShotgunShellReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent, nullptr, "ThrowGrenadeFished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CarriedAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingARAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingARAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingRocketAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingRocketAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingPistolAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingPistolAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingSMGAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSMGAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingShotgunAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingShotgunAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingSniperAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingSniperAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingGrenadeLauncherAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingGrenadeLauncherAmmo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_FinishReloading, "FinishReloading" }, // 448357869
		{ &Z_Construct_UFunction_UCombatComponent_MulticastFire, "MulticastFire" }, // 1177720214
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CarriedAmmo, "OnRep_CarriedAmmo" }, // 2605463445
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_CombatState, "OnRep_CombatState" }, // 2546102585
		{ &Z_Construct_UFunction_UCombatComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 318280251
		{ &Z_Construct_UFunction_UCombatComponent_ServerFire, "ServerFire" }, // 278319863
		{ &Z_Construct_UFunction_UCombatComponent_ServerReload, "ServerReload" }, // 3382802192
		{ &Z_Construct_UFunction_UCombatComponent_ServerSetAiming, "ServerSetAiming" }, // 1853333694
		{ &Z_Construct_UFunction_UCombatComponent_ServerThrowGrenade, "ServerThrowGrenade" }, // 4256355321
		{ &Z_Construct_UFunction_UCombatComponent_ShotgunShellReload, "ShotgunShellReload" }, // 965009109
		{ &Z_Construct_UFunction_UCombatComponent_ThrowGrenadeFished, "ThrowGrenadeFished" }, // 2922569920
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CombatComponent.h" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_MasterPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MasterPlayerController = { "MasterPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, MasterPlayerController), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_MasterPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_MasterPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, HUD), Z_Construct_UClass_APlayerHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, EquippedWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UCombatComponent*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed = { "BaseWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, BaseWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed = { "AimWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, AimWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "CombatAiming" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, ZoomedFOV), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterSpeed_MetaData[] = {
		{ "Category", "CombatAiming" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterSpeed = { "ZoomInterSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, ZoomInterSpeed), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData[] = {
		{ "Comment", "// Carried Ammo for the Currently-Equipped Weapon.\n" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
		{ "ToolTip", "Carried Ammo for the Currently-Equipped Weapon." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo = { "CarriedAmmo", "OnRep_CarriedAmmo", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, CarriedAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "Comment", "// Starting Reserve ammo. Set to 0 after testing\n" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
		{ "ToolTip", "Starting Reserve ammo. Set to 0 after testing" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo = { "StartingARAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingARAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo = { "StartingRocketAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingRocketAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo = { "StartingPistolAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingPistolAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo = { "StartingSMGAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingSMGAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo = { "StartingShotgunAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingShotgunAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo = { "StartingSniperAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingSniperAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo_MetaData[] = {
		{ "Category", "CombatComponent" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo = { "StartingGrenadeLauncherAmmo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, StartingGrenadeLauncherAmmo), METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState = { "CombatState", "OnRep_CombatState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, CombatState), Z_Construct_UEnum_FPS_ECombatState, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_MetaData)) }; // 1170974792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MasterPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_BaseWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_AimWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_ZoomInterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CarriedAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingARAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingRocketAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingPistolAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSMGAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingShotgunAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingSniperAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_StartingGrenadeLauncherAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_CombatState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}

	void UCombatComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_bAiming(TEXT("bAiming"));
		static const FName Name_CarriedAmmo(TEXT("CarriedAmmo"));
		static const FName Name_CombatState(TEXT("CombatState"));

		const bool bIsValid = true
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_bAiming == ClassReps[(int32)ENetFields_Private::bAiming].Property->GetFName()
			&& Name_CarriedAmmo == ClassReps[(int32)ENetFields_Private::CarriedAmmo].Property->GetFName()
			&& Name_CombatState == ClassReps[(int32)ENetFields_Private::CombatState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCombatComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 3319068748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_CombatComponent_h_3486406516(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
