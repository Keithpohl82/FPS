// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/GameModes/TeamDeathMatchrGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamDeathMatchrGameMode() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ATeamDeathMatchrGameMode_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ATeamDeathMatchrGameMode();
	FPS_API UClass* Z_Construct_UClass_AMasterGameMode();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void ATeamDeathMatchrGameMode::StaticRegisterNativesATeamDeathMatchrGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamDeathMatchrGameMode);
	UClass* Z_Construct_UClass_ATeamDeathMatchrGameMode_NoRegister()
	{
		return ATeamDeathMatchrGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMasterGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/TeamDeathMatchrGameMode.h" },
		{ "ModuleRelativePath", "GameModes/TeamDeathMatchrGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamDeathMatchrGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::ClassParams = {
		&ATeamDeathMatchrGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeamDeathMatchrGameMode()
	{
		if (!Z_Registration_Info_UClass_ATeamDeathMatchrGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamDeathMatchrGameMode.OuterSingleton, Z_Construct_UClass_ATeamDeathMatchrGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeamDeathMatchrGameMode.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ATeamDeathMatchrGameMode>()
	{
		return ATeamDeathMatchrGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamDeathMatchrGameMode);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_TeamDeathMatchrGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_TeamDeathMatchrGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeamDeathMatchrGameMode, ATeamDeathMatchrGameMode::StaticClass, TEXT("ATeamDeathMatchrGameMode"), &Z_Registration_Info_UClass_ATeamDeathMatchrGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamDeathMatchrGameMode), 3241811793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_TeamDeathMatchrGameMode_h_680864827(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_TeamDeathMatchrGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameModes_TeamDeathMatchrGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
