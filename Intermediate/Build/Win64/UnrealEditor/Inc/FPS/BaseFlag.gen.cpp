// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/CaptureTheFlag/BaseFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlag() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ABaseFlag_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ABaseFlag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseFlag::execServerDetachFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDetachFlag_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFlag::execServerAttachFlagToPlayer)
	{
		P_GET_OBJECT(AMasterCharacter,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAttachFlagToPlayer_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	static FName NAME_ABaseFlag_ServerAttachFlagToPlayer = FName(TEXT("ServerAttachFlagToPlayer"));
	void ABaseFlag::ServerAttachFlagToPlayer(AMasterCharacter* Player)
	{
		BaseFlag_eventServerAttachFlagToPlayer_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFlag_ServerAttachFlagToPlayer),&Parms);
	}
	static FName NAME_ABaseFlag_ServerDetachFlag = FName(TEXT("ServerDetachFlag"));
	void ABaseFlag::ServerDetachFlag()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFlag_ServerDetachFlag),NULL);
	}
	void ABaseFlag::StaticRegisterNativesABaseFlag()
	{
		UClass* Class = ABaseFlag::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerAttachFlagToPlayer", &ABaseFlag::execServerAttachFlagToPlayer },
			{ "ServerDetachFlag", &ABaseFlag::execServerDetachFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFlag_eventServerAttachFlagToPlayer_Parms, Player), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/BaseFlag.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFlag, nullptr, "ServerAttachFlagToPlayer", nullptr, nullptr, sizeof(BaseFlag_eventServerAttachFlagToPlayer_Parms), Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CaptureTheFlag/BaseFlag.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFlag, nullptr, "ServerDetachFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFlag_ServerDetachFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseFlag_ServerDetachFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseFlag);
	UClass* Z_Construct_UClass_ABaseFlag_NoRegister()
	{
		return ABaseFlag::StaticClass();
	}
	struct Z_Construct_UClass_ABaseFlag_Statics
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
	UObject* (*const Z_Construct_UClass_ABaseFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseFlag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseFlag_ServerAttachFlagToPlayer, "ServerAttachFlagToPlayer" }, // 2379885537
		{ &Z_Construct_UFunction_ABaseFlag_ServerDetachFlag, "ServerDetachFlag" }, // 2952203509
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureTheFlag/BaseFlag.h" },
		{ "ModuleRelativePath", "CaptureTheFlag/BaseFlag.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "BaseFlag" },
		{ "ModuleRelativePath", "CaptureTheFlag/BaseFlag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFlag, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team_MetaData)) }; // 722182970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFlag_Statics::NewProp_FlagMesh_MetaData[] = {
		{ "Category", "BaseFlag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlag/BaseFlag.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFlag_Statics::NewProp_FlagMesh = { "FlagMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFlag, FlagMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFlag_Statics::NewProp_FlagMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFlag_Statics::NewProp_FlagMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFlag_Statics::NewProp_Team,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFlag_Statics::NewProp_FlagMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseFlag_Statics::ClassParams = {
		&ABaseFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFlag_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseFlag()
	{
		if (!Z_Registration_Info_UClass_ABaseFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseFlag.OuterSingleton, Z_Construct_UClass_ABaseFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseFlag.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<ABaseFlag>()
	{
		return ABaseFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseFlag);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseFlag, ABaseFlag::StaticClass, TEXT("ABaseFlag"), &Z_Registration_Info_UClass_ABaseFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseFlag), 3162983029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_1156412687(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_CaptureTheFlag_BaseFlag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
