// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/GameState/MasterGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterGameState() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterGameState_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMasterGameState::StaticRegisterNativesAMasterGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterGameState);
	UClass* Z_Construct_UClass_AMasterGameState_NoRegister()
	{
		return AMasterGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMasterGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/MasterGameState.h" },
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterGameState_Statics::ClassParams = {
		&AMasterGameState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterGameState()
	{
		if (!Z_Registration_Info_UClass_AMasterGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterGameState.OuterSingleton, Z_Construct_UClass_AMasterGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterGameState.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterGameState>()
	{
		return AMasterGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterGameState);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterGameState, AMasterGameState::StaticClass, TEXT("AMasterGameState"), &Z_Registration_Info_UClass_AMasterGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterGameState), 1982432141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_1916415499(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
