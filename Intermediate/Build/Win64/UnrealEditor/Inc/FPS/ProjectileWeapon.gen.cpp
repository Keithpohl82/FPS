// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Weapons/ProjectileWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileWeapon() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AProjectileWeapon();
	FPS_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPS_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
// End Cross Module References
	void AProjectileWeapon::StaticRegisterNativesAProjectileWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileWeapon);
	UClass* Z_Construct_UClass_AProjectileWeapon_NoRegister()
	{
		return AProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/ProjectileWeapon.h" },
		{ "ModuleRelativePath", "Weapons/ProjectileWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileWeapon" },
		{ "ModuleRelativePath", "Weapons/ProjectileWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileWeapon, ProjectileClass), Z_Construct_UClass_AProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileWeapon_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams = {
		&AProjectileWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileWeapon()
	{
		if (!Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton, Z_Construct_UClass_AProjectileWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileWeapon.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AProjectileWeapon>()
	{
		return AProjectileWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileWeapon);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileWeapon, AProjectileWeapon::StaticClass, TEXT("AProjectileWeapon"), &Z_Registration_Info_UClass_AProjectileWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileWeapon), 165387922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_2400191240(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_ProjectileWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
