// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Character/MasterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterCharacter() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMasterCharacter::StaticRegisterNativesAMasterCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterCharacter);
	UClass* Z_Construct_UClass_AMasterCharacter_NoRegister()
	{
		return AMasterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMasterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MasterCharacter.h" },
		{ "ModuleRelativePath", "Character/MasterCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterCharacter_Statics::ClassParams = {
		&AMasterCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterCharacter()
	{
		if (!Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton, Z_Construct_UClass_AMasterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterCharacter.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterCharacter>()
	{
		return AMasterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterCharacter);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterCharacter, AMasterCharacter::StaticClass, TEXT("AMasterCharacter"), &Z_Registration_Info_UClass_AMasterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterCharacter), 2081379536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_3168056166(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Character_MasterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
