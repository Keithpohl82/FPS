// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/PlayerState/MasterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterPlayerState() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMasterPlayerState::StaticRegisterNativesAMasterPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterPlayerState);
	UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister()
	{
		return AMasterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMasterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/MasterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterPlayerState_Statics::ClassParams = {
		&AMasterPlayerState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton, Z_Construct_UClass_AMasterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterPlayerState>()
	{
		return AMasterPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPlayerState);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPlayerState, AMasterPlayerState::StaticClass, TEXT("AMasterPlayerState"), &Z_Registration_Info_UClass_AMasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPlayerState), 3794971726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_1331485234(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
