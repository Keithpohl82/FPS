// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/CaptureTheFlag/FlagPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagPickup() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFlagPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFlagPickup();
	FPS_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AFlagPickup::StaticRegisterNativesAFlagPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlagPickup);
	UClass* Z_Construct_UClass_AFlagPickup_NoRegister()
	{
		return AFlagPickup::StaticClass();
	}
	struct Z_Construct_UClass_AFlagPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlagPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CaptureTheFlag/FlagPickup.h" },
		{ "ModuleRelativePath", "CaptureTheFlag/FlagPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlagPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlagPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlagPickup_Statics::ClassParams = {
		&AFlagPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlagPickup()
	{
		if (!Z_Registration_Info_UClass_AFlagPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlagPickup.OuterSingleton, Z_Construct_UClass_AFlagPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlagPickup.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AFlagPickup>()
	{
		return AFlagPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlagPickup);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlagPickup, AFlagPickup::StaticClass, TEXT("AFlagPickup"), &Z_Registration_Info_UClass_AFlagPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlagPickup), 3942429423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_4177198042(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
