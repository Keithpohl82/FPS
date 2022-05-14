// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/PlayerController/MasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterPlayerController() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMasterPlayerController::StaticRegisterNativesAMasterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterPlayerController);
	UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister()
	{
		return AMasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/MasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterPlayerController_Statics::ClassParams = {
		&AMasterPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton, Z_Construct_UClass_AMasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterPlayerController>()
	{
		return AMasterPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPlayerController);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPlayerController, AMasterPlayerController::StaticClass, TEXT("AMasterPlayerController"), &Z_Registration_Info_UClass_AMasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPlayerController), 964145368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_3431153323(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
