// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Weapons/HitScanWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitScanWeapon() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AHitScanWeapon();
	FPS_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AHitScanWeapon::StaticRegisterNativesAHitScanWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitScanWeapon);
	UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister()
	{
		return AHitScanWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AHitScanWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/HitScanWeapon.h" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle = { "BeamParticle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, BeamParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitScanWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitScanWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams = {
		&AHitScanWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitScanWeapon()
	{
		if (!Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton, Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AHitScanWeapon>()
	{
		return AHitScanWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitScanWeapon);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 2973841772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_3945151048(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS