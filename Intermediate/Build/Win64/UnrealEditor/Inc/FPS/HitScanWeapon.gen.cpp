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
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSpher_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSpher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseScatter_MetaData[];
#endif
		static void NewProp_bUseScatter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScatter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle = { "BeamParticle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, BeamParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSpher_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "Comment", "/*\n\x09\x09Trace End with Scatter\n\x09*/" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
		{ "ToolTip", "Trace End with Scatter" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSpher = { "DistanceToSpher", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, DistanceToSpher), METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSpher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSpher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_MetaData[] = {
		{ "Category", "Weapon Scatter" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_SetBit(void* Obj)
	{
		((AHitScanWeapon*)Obj)->bUseScatter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter = { "bUseScatter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHitScanWeapon), &Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "Weapons/HitScanWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitScanWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_BeamParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_DistanceToSpher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_bUseScatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_ImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_Damage,
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
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 3222979785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_3019449061(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_HitScanWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
