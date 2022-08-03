// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/TeamPlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamPlayerStart() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ATeamPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
// End Cross Module References
	void ATeamPlayerStart::StaticRegisterNativesATeamPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamPlayerStart);
	UClass* Z_Construct_UClass_ATeamPlayerStart_NoRegister()
	{
		return ATeamPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_ATeamPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeamPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "TeamPlayerStart.h" },
		{ "ModuleRelativePath", "TeamPlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "TeamPlayerStart" },
		{ "ModuleRelativePath", "TeamPlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeamPlayerStart, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_MetaData)) }; // 722182970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerStart_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeamPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamPlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams = {
		&ATeamPlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeamPlayerStart()
	{
		if (!Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton, Z_Construct_UClass_ATeamPlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeamPlayerStart.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ATeamPlayerStart>()
	{
		return ATeamPlayerStart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamPlayerStart);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_TeamPlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_TeamPlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeamPlayerStart, ATeamPlayerStart::StaticClass, TEXT("ATeamPlayerStart"), &Z_Registration_Info_UClass_ATeamPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamPlayerStart), 1033724748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_TeamPlayerStart_h_794985012(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_TeamPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_TeamPlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
