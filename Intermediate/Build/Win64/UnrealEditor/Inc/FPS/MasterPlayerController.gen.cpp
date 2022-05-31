// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/PlayerController/MasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterPlayerController() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMasterPlayerController::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execClientJoinMidGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_Match,Z_Param_StartingTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execServerCheckMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckMatchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeServerReceivedClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_TimeOfClientRequest,Z_Param_TimeServerReceivedClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execServerRequestServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestServerTime_Implementation(Z_Param_TimeOfClientRequest);
		P_NATIVE_END;
	}
	static FName NAME_AMasterPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
	void AMasterPlayerController::ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float StartingTime)
	{
		MasterPlayerController_eventClientJoinMidGame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.Warmup=Warmup;
		Parms.Match=Match;
		Parms.StartingTime=StartingTime;
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ClientJoinMidGame),&Parms);
	}
	static FName NAME_AMasterPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void AMasterPlayerController::ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
	{
		MasterPlayerController_eventClientReportServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		Parms.TimeServerReceivedClientRequest=TimeServerReceivedClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ClientReportServerTime),&Parms);
	}
	static FName NAME_AMasterPlayerController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
	void AMasterPlayerController::ServerCheckMatchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ServerCheckMatchState),NULL);
	}
	static FName NAME_AMasterPlayerController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
	void AMasterPlayerController::ServerRequestServerTime(float TimeOfClientRequest)
	{
		MasterPlayerController_eventServerRequestServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ServerRequestServerTime),&Parms);
	}
	void AMasterPlayerController::StaticRegisterNativesAMasterPlayerController()
	{
		UClass* Class = AMasterPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientJoinMidGame", &AMasterPlayerController::execClientJoinMidGame },
			{ "ClientReportServerTime", &AMasterPlayerController::execClientReportServerTime },
			{ "OnRep_MatchState", &AMasterPlayerController::execOnRep_MatchState },
			{ "ServerCheckMatchState", &AMasterPlayerController::execServerCheckMatchState },
			{ "ServerRequestServerTime", &AMasterPlayerController::execServerRequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientJoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientJoinMidGame_Parms, Warmup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientJoinMidGame_Parms, Match), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartingTime = { "StartingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientJoinMidGame_Parms, StartingTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartingTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ClientJoinMidGame", nullptr, nullptr, sizeof(MasterPlayerController_eventClientJoinMidGame_Parms), Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeServerReceivedClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientReportServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest = { "TimeServerReceivedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientReportServerTime_Parms, TimeServerReceivedClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ClientReportServerTime", nullptr, nullptr, sizeof(MasterPlayerController_eventClientReportServerTime_Parms), Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "OnRep_MatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ServerCheckMatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventServerRequestServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Sync time between client and server.\n\x09 */" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
		{ "ToolTip", "* Sync time between client and server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ServerRequestServerTime", nullptr, nullptr, sizeof(MasterPlayerController_eventServerRequestServerTime_Parms), Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterPlayerController);
	UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister()
	{
		return AMasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 3610744005
		{ &Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 189248043
		{ &Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 2393187143
		{ &Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 2435528204
		{ &Z_Construct_UFunction_AMasterPlayerController_ServerRequestServerTime, "ServerRequestServerTime" }, // 1427345142
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/MasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "MasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, TimeSyncFrequency), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, HUD), Z_Construct_UClass_APlayerHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, MatchState), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay = { "PlayerOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, PlayerOverlay), Z_Construct_UClass_UPlayerOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterPlayerController_Statics::ClassParams = {
		&AMasterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton, Z_Construct_UClass_AMasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterPlayerController.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<AMasterPlayerController>()
	{
		return AMasterPlayerController::StaticClass();
	}

	void AMasterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMasterPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPlayerController);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPlayerController, AMasterPlayerController::StaticClass, TEXT("AMasterPlayerController"), &Z_Registration_Info_UClass_AMasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPlayerController), 4068041340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_2898910961(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
