// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/PlayerState/MasterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterPlayerState() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	FPS_API UEnum* Z_Construct_UEnum_FPS_ETeam();
// End Cross Module References
	DEFINE_FUNCTION(AMasterPlayerState::execOnRep_Deaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Deaths();
		P_NATIVE_END;
	}
	void AMasterPlayerState::StaticRegisterNativesAMasterPlayerState()
	{
		UClass* Class = AMasterPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Deaths", &AMasterPlayerState::execOnRep_Deaths },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerState, nullptr, "OnRep_Deaths", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterPlayerState);
	UClass* Z_Construct_UClass_AMasterPlayerState_NoRegister()
	{
		return AMasterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMasterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDeaths_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDeaths;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterPlayerState_OnRep_Deaths, "OnRep_Deaths" }, // 33450309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/MasterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterCharacter_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterCharacter = { "MasterCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerState, MasterCharacter), Z_Construct_UClass_AMasterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterPlayerController = { "MasterPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerState, MasterPlayerController), Z_Construct_UClass_AMasterPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterPlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_NumDeaths_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_NumDeaths = { "NumDeaths", "OnRep_Deaths", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerState, NumDeaths), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_NumDeaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_NumDeaths_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/MasterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerState, Team), Z_Construct_UEnum_FPS_ETeam, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team_MetaData)) }; // 722182970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_MasterPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_NumDeaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerState_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterPlayerState_Statics::ClassParams = {
		&AMasterPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton, Z_Construct_UClass_AMasterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterPlayerState.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterPlayerState>()
	{
		return AMasterPlayerState::StaticClass();
	}

	void AMasterPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NumDeaths(TEXT("NumDeaths"));
		static const FName Name_Team(TEXT("Team"));

		const bool bIsValid = true
			&& Name_NumDeaths == ClassReps[(int32)ENetFields_Private::NumDeaths].Property->GetFName()
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMasterPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPlayerState);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPlayerState, AMasterPlayerState::StaticClass, TEXT("AMasterPlayerState"), &Z_Registration_Info_UClass_AMasterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPlayerState), 3887040482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_303215819(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerState_MasterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
