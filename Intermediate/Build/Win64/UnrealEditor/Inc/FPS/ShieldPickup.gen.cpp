// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Pickups/ShieldPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldPickup() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AShieldPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AShieldPickup();
	FPS_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AShieldPickup::StaticRegisterNativesAShieldPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldPickup);
	UClass* Z_Construct_UClass_AShieldPickup_NoRegister()
	{
		return AShieldPickup::StaticClass();
	}
	struct Z_Construct_UClass_AShieldPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldReplenishAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldReplenishAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldReplenishTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldReplenishTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShieldPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/ShieldPickup.h" },
		{ "ModuleRelativePath", "Pickups/ShieldPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "Pickups/ShieldPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount = { "ShieldReplenishAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShieldPickup, ShieldReplenishAmount), METADATA_PARAMS(Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime_MetaData[] = {
		{ "Category", "ShieldPickup" },
		{ "ModuleRelativePath", "Pickups/ShieldPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime = { "ShieldReplenishTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShieldPickup, ShieldReplenishTime), METADATA_PARAMS(Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldPickup_Statics::NewProp_ShieldReplenishTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShieldPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldPickup_Statics::ClassParams = {
		&AShieldPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShieldPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShieldPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShieldPickup()
	{
		if (!Z_Registration_Info_UClass_AShieldPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldPickup.OuterSingleton, Z_Construct_UClass_AShieldPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShieldPickup.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AShieldPickup>()
	{
		return AShieldPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldPickup);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Pickups_ShieldPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Pickups_ShieldPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShieldPickup, AShieldPickup::StaticClass, TEXT("AShieldPickup"), &Z_Registration_Info_UClass_AShieldPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldPickup), 3404666781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Pickups_ShieldPickup_h_2721340085(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Pickups_ShieldPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Pickups_ShieldPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
