// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/GameState/MasterGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterGameState() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterGameState_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMasterGameState::execOnRep_BlueTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlueTeamScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterGameState::execOnRep_RedTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RedTeamScore();
		P_NATIVE_END;
	}
	void AMasterGameState::StaticRegisterNativesAMasterGameState()
	{
		UClass* Class = AMasterGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BlueTeamScore", &AMasterGameState::execOnRep_BlueTeamScore },
			{ "OnRep_RedTeamScore", &AMasterGameState::execOnRep_RedTeamScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterGameState, nullptr, "OnRep_BlueTeamScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterGameState, nullptr, "OnRep_RedTeamScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterGameState);
	UClass* Z_Construct_UClass_AMasterGameState_NoRegister()
	{
		return AMasterGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMasterGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScoringPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopScoringPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopScoringPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RedTeamScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueTeamScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueTeamScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterGameState_OnRep_BlueTeamScore, "OnRep_BlueTeamScore" }, // 2448519928
		{ &Z_Construct_UFunction_AMasterGameState_OnRep_RedTeamScore, "OnRep_RedTeamScore" }, // 2064909441
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/MasterGameState.h" },
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers_Inner = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMasterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers_MetaData[] = {
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameState, TopScoringPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameState_Statics::NewProp_RedTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGameState_Statics::NewProp_RedTeamScore = { "RedTeamScore", "OnRep_RedTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameState, RedTeamScore), METADATA_PARAMS(Z_Construct_UClass_AMasterGameState_Statics::NewProp_RedTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::NewProp_RedTeamScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterGameState_Statics::NewProp_BlueTeamScore_MetaData[] = {
		{ "ModuleRelativePath", "GameState/MasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterGameState_Statics::NewProp_BlueTeamScore = { "BlueTeamScore", "OnRep_BlueTeamScore", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterGameState, BlueTeamScore), METADATA_PARAMS(Z_Construct_UClass_AMasterGameState_Statics::NewProp_BlueTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::NewProp_BlueTeamScore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameState_Statics::NewProp_TopScoringPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameState_Statics::NewProp_RedTeamScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterGameState_Statics::NewProp_BlueTeamScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterGameState_Statics::ClassParams = {
		&AMasterGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterGameState()
	{
		if (!Z_Registration_Info_UClass_AMasterGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterGameState.OuterSingleton, Z_Construct_UClass_AMasterGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterGameState.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterGameState>()
	{
		return AMasterGameState::StaticClass();
	}

	void AMasterGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TopScoringPlayers(TEXT("TopScoringPlayers"));
		static const FName Name_RedTeamScore(TEXT("RedTeamScore"));
		static const FName Name_BlueTeamScore(TEXT("BlueTeamScore"));

		const bool bIsValid = true
			&& Name_TopScoringPlayers == ClassReps[(int32)ENetFields_Private::TopScoringPlayers].Property->GetFName()
			&& Name_RedTeamScore == ClassReps[(int32)ENetFields_Private::RedTeamScore].Property->GetFName()
			&& Name_BlueTeamScore == ClassReps[(int32)ENetFields_Private::BlueTeamScore].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMasterGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterGameState);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterGameState, AMasterGameState::StaticClass, TEXT("AMasterGameState"), &Z_Registration_Info_UClass_AMasterGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterGameState), 3275980144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_889790787(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameState_MasterGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
