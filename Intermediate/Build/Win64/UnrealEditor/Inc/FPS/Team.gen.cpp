// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/TypeClasses/Team.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam() {}
// Cross Module References
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
	static UEnum* ETeam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPS_ETeam, Z_Construct_UPackage__Script_FPS(), TEXT("ETeam"));
		}
		return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
	}
	template<> FPS_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	struct Z_Construct_UEnum_FPS_ETeam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPS_ETeam_Statics::Enumerators[] = {
		{ "ETeam::ET_RedTeam", (int64)ETeam::ET_RedTeam },
		{ "ETeam::ET_BlueTeam", (int64)ETeam::ET_BlueTeam },
		{ "ETeam::ET_GreenTeam", (int64)ETeam::ET_GreenTeam },
		{ "ETeam::ET_BlackTeam", (int64)ETeam::ET_BlackTeam },
		{ "ETeam::ET_OrangeTeam", (int64)ETeam::ET_OrangeTeam },
		{ "ETeam::ET_Spectator", (int64)ETeam::ET_Spectator },
		{ "ETeam::ET_MAX", (int64)ETeam::ET_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPS_ETeam_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ET_BlackTeam.DisplayName", "BlackTeam" },
		{ "ET_BlackTeam.Name", "ETeam::ET_BlackTeam" },
		{ "ET_BlueTeam.DisplayName", "BlueTeam" },
		{ "ET_BlueTeam.Name", "ETeam::ET_BlueTeam" },
		{ "ET_GreenTeam.DisplayName", "GreenTeam" },
		{ "ET_GreenTeam.Name", "ETeam::ET_GreenTeam" },
		{ "ET_MAX.DisplayName", "DefaultMAX" },
		{ "ET_MAX.Name", "ETeam::ET_MAX" },
		{ "ET_OrangeTeam.DisplayName", "OrangeTeam" },
		{ "ET_OrangeTeam.Name", "ETeam::ET_OrangeTeam" },
		{ "ET_RedTeam.DisplayName", "RedTeam" },
		{ "ET_RedTeam.Name", "ETeam::ET_RedTeam" },
		{ "ET_Spectator.DisplayName", "Spectator" },
		{ "ET_Spectator.Name", "ETeam::ET_Spectator" },
		{ "ModuleRelativePath", "TypeClasses/Team.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPS_ETeam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		"ETeam",
		"ETeam",
		Z_Construct_UEnum_FPS_ETeam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPS_ETeam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FPS_ETeam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FPS_ETeam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FPS_ETeam()
	{
		if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_FPS_ETeam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_TypeClasses_Team_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_TypeClasses_Team_h_Statics::EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722182970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_TypeClasses_Team_h_1003181768(TEXT("/Script/FPS"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_TypeClasses_Team_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_TypeClasses_Team_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
