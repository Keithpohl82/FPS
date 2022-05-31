// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/GameModes/MasterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterGameMode() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterGameMode_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMasterGameMode::StaticRegisterNativesAMasterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterGameMode);
	UClass* Z_Construct_UClass_AMasterGameMode_NoRegister()
	{
		return AMasterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMasterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/MasterGameMode.h" },
		{ "ModuleRelativePath", "GameModes/MasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameMode_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "MasterGameMode" },
		{ "ModuleRelativePath", "GameModes/MasterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGameMode_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameMode, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameMode_Statics::NewProp_MatchTime_MetaData[] = {
		{ "Category", "MasterGameMode" },
		{ "ModuleRelativePath", "GameModes/MasterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGameMode_Statics::NewProp_MatchTime = { "MatchTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameMode, MatchTime), METADATA_PARAMS(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_MatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_MatchTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameMode_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "MasterGameMode" },
		{ "ModuleRelativePath", "GameModes/MasterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGameMode_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameMode, CooldownTime), METADATA_PARAMS(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_CooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::NewProp_CooldownTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameMode_Statics::NewProp_WarmupTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameMode_Statics::NewProp_MatchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameMode_Statics::NewProp_CooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterGameMode_Statics::ClassParams = {
		&AMasterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMasterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterGameMode()
	{
		if (!Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton, Z_Construct_UClass_AMasterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterGameMode>()
	{
		return AMasterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterGameMode);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_MasterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_MasterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterGameMode, AMasterGameMode::StaticClass, TEXT("AMasterGameMode"), &Z_Registration_Info_UClass_AMasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterGameMode), 2119262682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_MasterGameMode_h_1209383854(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_MasterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_MasterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
