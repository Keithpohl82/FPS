// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/UI/ElimAnnouncment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElimAnnouncment() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UElimAnnouncment_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UElimAnnouncment();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FPS();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UElimAnnouncment::StaticRegisterNativesUElimAnnouncment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElimAnnouncment);
	UClass* Z_Construct_UClass_UElimAnnouncment_NoRegister()
	{
		return UElimAnnouncment::StaticClass();
	}
	struct Z_Construct_UClass_UElimAnnouncment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnouncementText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElimAnnouncment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ElimAnnouncment.h" },
		{ "ModuleRelativePath", "UI/ElimAnnouncment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ElimAnnouncment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementBox = { "AnnouncementBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElimAnnouncment, AnnouncementBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ElimAnnouncment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementText = { "AnnouncementText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElimAnnouncment, AnnouncementText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElimAnnouncment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElimAnnouncment_Statics::NewProp_AnnouncementText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElimAnnouncment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElimAnnouncment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UElimAnnouncment_Statics::ClassParams = {
		&UElimAnnouncment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElimAnnouncment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncment_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElimAnnouncment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElimAnnouncment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElimAnnouncment()
	{
		if (!Z_Registration_Info_UClass_UElimAnnouncment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElimAnnouncment.OuterSingleton, Z_Construct_UClass_UElimAnnouncment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UElimAnnouncment.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UElimAnnouncment>()
	{
		return UElimAnnouncment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElimAnnouncment);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_ElimAnnouncment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_ElimAnnouncment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UElimAnnouncment, UElimAnnouncment::StaticClass, TEXT("UElimAnnouncment"), &Z_Registration_Info_UClass_UElimAnnouncment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElimAnnouncment), 4130990305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_ElimAnnouncment_h_2306385321(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_ElimAnnouncment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_ElimAnnouncment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
