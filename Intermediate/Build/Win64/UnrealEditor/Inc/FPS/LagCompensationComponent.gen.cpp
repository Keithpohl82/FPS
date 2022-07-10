// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/LagCompensationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLagCompensationComponent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ULagCompensationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void ULagCompensationComponent::StaticRegisterNativesULagCompensationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULagCompensationComponent);
	UClass* Z_Construct_UClass_ULagCompensationComponent_NoRegister()
	{
		return ULagCompensationComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULagCompensationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULagCompensationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LagCompensationComponent.h" },
		{ "ModuleRelativePath", "Components/LagCompensationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULagCompensationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULagCompensationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams = {
		&ULagCompensationComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULagCompensationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULagCompensationComponent()
	{
		if (!Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton, Z_Construct_UClass_ULagCompensationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULagCompensationComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ULagCompensationComponent>()
	{
		return ULagCompensationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULagCompensationComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULagCompensationComponent, ULagCompensationComponent::StaticClass, TEXT("ULagCompensationComponent"), &Z_Registration_Info_UClass_ULagCompensationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULagCompensationComponent), 674354986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_3641102891(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_LagCompensationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
