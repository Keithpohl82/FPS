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
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreAmount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathsAmount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathsAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarriedAmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedAmmoAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchCountdownText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchCountdownText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadesText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadesText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthText = { "HealthText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, HealthText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldBar = { "ShieldBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, ShieldBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldText = { "ShieldText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, ShieldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ScoreAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ScoreAmount = { "ScoreAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, ScoreAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ScoreAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ScoreAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_DeathsAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_DeathsAmount = { "DeathsAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, DeathsAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_DeathsAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_DeathsAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_WeaponAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_WeaponAmmoAmount = { "WeaponAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, WeaponAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_WeaponAmmoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_WeaponAmmoAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_CarriedAmmoAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_CarriedAmmoAmount = { "CarriedAmmoAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, CarriedAmmoAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_CarriedAmmoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_CarriedAmmoAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_MatchCountdownText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_MatchCountdownText = { "MatchCountdownText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, MatchCountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_MatchCountdownText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_MatchCountdownText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_GrenadesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_GrenadesText = { "GrenadesText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerOverlay, GrenadesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_GrenadesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_GrenadesText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ShieldText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ScoreAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_DeathsAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_WeaponAmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_CarriedAmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_MatchCountdownText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_GrenadesText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams = {
		&UPlayerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPlayerOverlay, UPlayerOverlay::StaticClass, TEXT("UPlayerOverlay"), &Z_Registration_Info_UClass_UPlayerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerOverlay), 1324247993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_1720901208(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
