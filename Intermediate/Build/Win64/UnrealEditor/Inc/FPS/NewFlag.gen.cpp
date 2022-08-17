// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/CaptureTheFlag/NewFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewFlag() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ANewFlag_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ANewFlag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANewFlag::execServerAttachFlag)
	{
		P_GET_OBJECT(AMasterCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAttachFlag_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	static FName NAME_ANewFlag_ServerAttachFlag = FName(TEXT("ServerAttachFlag"));
	void ANewFlag::ServerAttachFlag(AMasterCharacter* Character)
	{
		NewFlag_eventServerAttachFlag_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_ANewFlag_ServerAttachFlag),&Parms);
	}
	void ANewFlag::StaticRegisterNativesANewFlag()
	{
		UClass* Class = ANewFlag::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerAttachFlag", &ANewFlag::execServerAttachFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewFlag_eventServerAttachFlag_Parms, Character), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/NewFlag.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewFlag, nullptr, "ServerAttachFlag", nullptr, nullptr, sizeof(NewFlag_eventServerAttachFlag_Parms), Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewFlag_ServerAttachFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANewFlag_ServerAttachFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewFlag);
	UClass* Z_Construct_UClass_ANewFlag_NoRegister()
	{
		return ANewFlag::StaticClass();
	}
	struct Z_Construct_UClass_ANewFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlagMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANewFlag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewFlag_ServerAttachFlag, "ServerAttachFlag" }, // 1515827692
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureTheFlag/NewFlag.h" },
		{ "ModuleRelativePath", "CaptureTheFlag/NewFlag.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANewFlag_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewFlag_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "NewFlag" },
		{ "ModuleRelativePath", "CaptureTheFlag/NewFlag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANewFlag_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewFlag, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_ANewFlag_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewFlag_Statics::NewProp_Team_MetaData)) }; // 722182970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewFlag_Statics::NewProp_FlagMesh_MetaData[] = {
		{ "Category", "NewFlag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlag/NewFlag.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewFlag, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewFlag_Statics::NewProp_FlagMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewFlag_Statics::NewProp_FlagMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewFlag_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewFlag_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewFlag_Statics::NewProp_FlagMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewFlag_Statics::ClassParams = {
		&ANewFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANewFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewFlag_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewFlag()
	{
		if (!Z_Registration_Info_UClass_ANewFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewFlag.OuterSingleton, Z_Construct_UClass_ANewFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANewFlag.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ANewFlag>()
	{
		return ANewFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewFlag);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANewFlag, ANewFlag::StaticClass, TEXT("ANewFlag"), &Z_Registration_Info_UClass_ANewFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewFlag), 9507184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_3407253163(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_NewFlag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
