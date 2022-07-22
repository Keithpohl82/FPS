// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Weapons/Shotgun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AShotgun();
	FPS_API UClass* Z_Construct_UClass_AHitScanWeapon();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AShotgun::StaticRegisterNativesAShotgun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShotgun);
	UClass* Z_Construct_UClass_AShotgun_NoRegister()
	{
		return AShotgun::StaticClass();
	}
	struct Z_Construct_UClass_AShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPellets_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPellets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitScanWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Shotgun.h" },
		{ "ModuleRelativePath", "Weapons/Shotgun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ModuleRelativePath", "Weapons/Shotgun.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets = { "NumberOfPellets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShotgun, NumberOfPellets), METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShotgun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShotgun_Statics::NewProp_NumberOfPellets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShotgun_Statics::ClassParams = {
		&AShotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShotgun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgun()
	{
		if (!Z_Registration_Info_UClass_AShotgun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShotgun.OuterSingleton, Z_Construct_UClass_AShotgun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShotgun.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AShotgun>()
	{
		return AShotgun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Shotgun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Shotgun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShotgun, AShotgun::StaticClass, TEXT("AShotgun"), &Z_Registration_Info_UClass_AShotgun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShotgun), 1095002221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Shotgun_h_2351844396(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Shotgun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Shotgun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
