// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/UI/PlayerOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOverlay() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UPlayerOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UPlayerOverlay::StaticRegisterNativesUPlayerOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerOverlay);
	UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister()
	{
		return UPlayerOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/PlayerOverlay.h" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams = {
		&UPlayerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerOverlay()
	{
		if (!Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton, Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UPlayerOverlay>()
	{
		return UPlayerOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOverlay);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerOverlay, UPlayerOverlay::StaticClass, TEXT("UPlayerOverlay"), &Z_Registration_Info_UClass_UPlayerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerOverlay), 2766695663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_1905048699(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
