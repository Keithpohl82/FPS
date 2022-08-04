// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/CaptureTheFlag/FlagPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlagPickup() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFlagPickup_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFlagPickup();
	FPS_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
// End Cross Module References
	void AFlagPickup::StaticRegisterNativesAFlagPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlagPickup);
	UClass* Z_Construct_UClass_AFlagPickup_NoRegister()
	{
		return AFlagPickup::StaticClass();
	}
	struct Z_Construct_UClass_AFlagPickup_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlagPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CaptureTheFlag/FlagPickup.h" },
		{ "ModuleRelativePath", "CaptureTheFlag/FlagPickup.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "FlagPickup" },
		{ "ModuleRelativePath", "CaptureTheFlag/FlagPickup.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlagPickup, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team_MetaData)) }; // 722182970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/FlagPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlagPickup, OwnerCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/FlagPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerPlayerController = { "OwnerPlayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlagPickup, OwnerPlayerController), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerPlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlagPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagPickup_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlagPickup_Statics::NewProp_OwnerPlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlagPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlagPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlagPickup_Statics::ClassParams = {
		&AFlagPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlagPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlagPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlagPickup()
	{
		if (!Z_Registration_Info_UClass_AFlagPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlagPickup.OuterSingleton, Z_Construct_UClass_AFlagPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlagPickup.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AFlagPickup>()
	{
		return AFlagPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlagPickup);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlagPickup, AFlagPickup::StaticClass, TEXT("AFlagPickup"), &Z_Registration_Info_UClass_AFlagPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlagPickup), 3059163930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_2461521285(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_FlagPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
