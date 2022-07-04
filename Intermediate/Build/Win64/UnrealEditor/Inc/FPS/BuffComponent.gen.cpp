// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/BuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UBuffComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBuffComponent::execMulticastSpeedBuff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CrouchSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSpeedBuff_Implementation(Z_Param_BaseSpeed,Z_Param_CrouchSpeed);
		P_NATIVE_END;
	}
	static FName NAME_UBuffComponent_MulticastSpeedBuff = FName(TEXT("MulticastSpeedBuff"));
	void UBuffComponent::MulticastSpeedBuff(float BaseSpeed, float CrouchSpeed)
	{
		BuffComponent_eventMulticastSpeedBuff_Parms Parms;
		Parms.BaseSpeed=BaseSpeed;
		Parms.CrouchSpeed=CrouchSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UBuffComponent_MulticastSpeedBuff),&Parms);
	}
	void UBuffComponent::StaticRegisterNativesUBuffComponent()
	{
		UClass* Class = UBuffComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastSpeedBuff", &UBuffComponent::execMulticastSpeedBuff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, BaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuffComponent_eventMulticastSpeedBuff_Parms, CrouchSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_BaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::NewProp_CrouchSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuffComponent, nullptr, "MulticastSpeedBuff", nullptr, nullptr, sizeof(BuffComponent_eventMulticastSpeedBuff_Parms), Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuffComponent);
	UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
	{
		return UBuffComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuffComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuffComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuffComponent_MulticastSpeedBuff, "MulticastSpeedBuff" }, // 2994027458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BuffComponent.h" },
		{ "ModuleRelativePath", "Components/BuffComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBuffComponent, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuffComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
		&UBuffComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuffComponent()
	{
		if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UBuffComponent>()
	{
		return UBuffComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 2585715575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_246110179(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
