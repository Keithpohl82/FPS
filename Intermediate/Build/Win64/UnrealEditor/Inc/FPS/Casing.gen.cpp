// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Weapons/Projectiles/Casing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasing() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ACasing_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ACasing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void ACasing::StaticRegisterNativesACasing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACasing);
	UClass* Z_Construct_UClass_ACasing_NoRegister()
	{
		return ACasing::StaticClass();
	}
	struct Z_Construct_UClass_ACasing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACasing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACasing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Projectiles/Casing.h" },
		{ "ModuleRelativePath", "Weapons/Projectiles/Casing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACasing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACasing_Statics::ClassParams = {
		&ACasing::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACasing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACasing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACasing()
	{
		if (!Z_Registration_Info_UClass_ACasing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACasing.OuterSingleton, Z_Construct_UClass_ACasing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACasing.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ACasing>()
	{
		return ACasing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACasing);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Projectiles_Casing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Projectiles_Casing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACasing, ACasing::StaticClass, TEXT("ACasing"), &Z_Registration_Info_UClass_ACasing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACasing), 3956916349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Projectiles_Casing_h_2244767403(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Projectiles_Casing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Projectiles_Casing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
