// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/LagCompensationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLagCompensationComponent() {}
// Cross Module References
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FFramePackage();
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxInformation;
class UScriptStruct* FBoxInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxInformation, Z_Construct_UPackage__Script_FPS(), TEXT("BoxInformation"));
	}
	return Z_Registration_Info_UScriptStruct_BoxInformation.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FBoxInformation>()
{
	return FBoxInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxInformation, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxInformation_Statics::NewProp_BoxExtent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"BoxInformation",
		sizeof(FBoxInformation),
		alignof(FBoxInformation),
		Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton, Z_Construct_UScriptStruct_FBoxInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FramePackage;
class UScriptStruct* FFramePackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePackage, Z_Construct_UPackage__Script_FPS(), TEXT("FramePackage"));
	}
	return Z_Registration_Info_UScriptStruct_FramePackage.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FFramePackage>()
{
	return FFramePackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFramePackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxInfo_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoxInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitBoxInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBoxInformation, METADATA_PARAMS(nullptr, 0) }; // 1821991443
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp = { "HitBoxInfo_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo = { "HitBoxInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFramePackage, HitBoxInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_MetaData)) }; // 1821991443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePackage_Statics::NewProp_HitBoxInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"FramePackage",
		sizeof(FFramePackage),
		alignof(FFramePackage),
		Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFramePackage()
	{
		if (!Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton, Z_Construct_UScriptStruct_FFramePackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FramePackage.InnerSingleton;
	}
	void ULagCompensationComponent::StaticRegisterNativesULagCompensationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULagCompensationComponent);
	UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister()
	{
		return ULagCompensationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULagCompensationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LagCompensationComponent.h" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagCompensationComponent, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData[] = {
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController = { "MasterController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULagCompensationComponent, MasterController), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULagCompensationComponent_Statics::NewProp_MasterController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULagCompensationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagCompensationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams = {
		&ULagCompensationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULagCompensationComponent()
	{
		if (!Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton, Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ULagCompensationComponent>()
	{
		return ULagCompensationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULagCompensationComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo[] = {
		{ FBoxInformation::StaticStruct, Z_Construct_UScriptStruct_FBoxInformation_Statics::NewStructOps, TEXT("BoxInformation"), &Z_Registration_Info_UScriptStruct_BoxInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxInformation), 1821991443U) },
		{ FFramePackage::StaticStruct, Z_Construct_UScriptStruct_FFramePackage_Statics::NewStructOps, TEXT("FramePackage"), &Z_Registration_Info_UScriptStruct_FramePackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePackage), 1071163598U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULagCompensationComponent, ULagCompensationComponent::StaticClass, TEXT("ULagCompensationComponent"), &Z_Registration_Info_UClass_ULagCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagCompensationComponent), 1711832312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_1499218151(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
