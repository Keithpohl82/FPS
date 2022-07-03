// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Components/BuffComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffComponent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UBuffComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UBuffComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
// End Cross Module References
	void UBuffComponent::StaticRegisterNativesUBuffComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuffComponent);
	UClass* Z_Construct_UClass_UBuffComponent_NoRegister()
	{
		return UBuffComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuffComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuffComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BuffComponent.h" },
		{ "ModuleRelativePath", "Components/BuffComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/BuffComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBuffComponent, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffComponent_Statics::NewProp_MasterCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuffComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffComponent_Statics::ClassParams = {
		&UBuffComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuffComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuffComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuffComponent()
	{
		if (!Z_Registration_Info_UClass_UBuffComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffComponent.OuterSingleton, Z_Construct_UClass_UBuffComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuffComponent.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UBuffComponent>()
	{
		return UBuffComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffComponent);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuffComponent, UBuffComponent::StaticClass, TEXT("UBuffComponent"), &Z_Registration_Info_UClass_UBuffComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffComponent), 2086645143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_1479343196(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_Components_BuffComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
