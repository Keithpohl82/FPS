// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Weapons/Flag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlag() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFlag_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFlag();
	FPS_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFlag::StaticRegisterNativesAFlag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlag);
	UClass* Z_Construct_UClass_AFlag_NoRegister()
	{
		return AFlag::StaticClass();
	}
	struct Z_Construct_UClass_AFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Flag.h" },
		{ "ModuleRelativePath", "Weapons/Flag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh_MetaData[] = {
		{ "Category", "Flag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Flag.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlag, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlag_Statics::NewProp_FlagMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlag_Statics::ClassParams = {
		&AFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlag()
	{
		if (!Z_Registration_Info_UClass_AFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlag.OuterSingleton, Z_Construct_UClass_AFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlag.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AFlag>()
	{
		return AFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlag);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Flag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Flag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlag, AFlag::StaticClass, TEXT("AFlag"), &Z_Registration_Info_UClass_AFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlag), 2226769498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Flag_h_548516498(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Flag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Weapons_Flag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
