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
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	FPS_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMasterGameMode_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics
	{
		struct _Script_FPS_eventHighPingDelegate_Parms
		{
			bool bPingTooHigh;
		};
		static void NewProp_bPingTooHigh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPingTooHigh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit(void* Obj)
	{
		((_Script_FPS_eventHighPingDelegate_Parms*)Obj)->bPingTooHigh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh = { "bPingTooHigh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FPS_eventHighPingDelegate_Parms), &Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::NewProp_bPingTooHigh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "HighPingDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::_Script_FPS_eventHighPingDelegate_Parms), Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execServerReportPingStatus)
	{
		P_GET_UBOOL(Z_Param_bHighPing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReportPingStatus_Implementation(Z_Param_bHighPing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execOnRep_ShowTeamScores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShowTeamScores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterPlayerController::execClientJoinMidGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_Match,Z_Param_StartingTime,Z_Param_Cooldown);
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
	DEFINE_FUNCTION(AMasterPlayerController::execClientElimAnnouncement)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Killer);
		P_GET_OBJECT(APlayerState,Z_Param_Victim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientElimAnnouncement_Implementation(Z_Param_Killer,Z_Param_Victim);
		P_NATIVE_END;
	}
	static FName NAME_AMasterPlayerController_ClientElimAnnouncement = FName(TEXT("ClientElimAnnouncement"));
	void AMasterPlayerController::ClientElimAnnouncement(APlayerState* Killer, APlayerState* Victim)
	{
		MasterPlayerController_eventClientElimAnnouncement_Parms Parms;
		Parms.Killer=Killer;
		Parms.Victim=Victim;
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ClientElimAnnouncement),&Parms);
	}
	static FName NAME_AMasterPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
	void AMasterPlayerController::ClientJoinMidGame(FName StateOfMatch, float Warmup, float Match, float StartingTime, float Cooldown)
	{
		MasterPlayerController_eventClientJoinMidGame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.Warmup=Warmup;
		Parms.Match=Match;
		Parms.StartingTime=StartingTime;
		Parms.Cooldown=Cooldown;
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
	static FName NAME_AMasterPlayerController_ServerReportPingStatus = FName(TEXT("ServerReportPingStatus"));
	void AMasterPlayerController::ServerReportPingStatus(bool bHighPing)
	{
		MasterPlayerController_eventServerReportPingStatus_Parms Parms;
		Parms.bHighPing=bHighPing ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMasterPlayerController_ServerReportPingStatus),&Parms);
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
			{ "ClientElimAnnouncement", &AMasterPlayerController::execClientElimAnnouncement },
			{ "ClientJoinMidGame", &AMasterPlayerController::execClientJoinMidGame },
			{ "ClientReportServerTime", &AMasterPlayerController::execClientReportServerTime },
			{ "OnRep_MatchState", &AMasterPlayerController::execOnRep_MatchState },
			{ "OnRep_ShowTeamScores", &AMasterPlayerController::execOnRep_ShowTeamScores },
			{ "ServerCheckMatchState", &AMasterPlayerController::execServerCheckMatchState },
			{ "ServerReportPingStatus", &AMasterPlayerController::execServerReportPingStatus },
			{ "ServerRequestServerTime", &AMasterPlayerController::execServerRequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientElimAnnouncement_Parms, Killer), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientElimAnnouncement_Parms, Victim), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Killer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::NewProp_Victim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ClientElimAnnouncement", nullptr, nullptr, sizeof(MasterPlayerController_eventClientElimAnnouncement_Parms), Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterPlayerController_eventClientJoinMidGame_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Warmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown,
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
	struct Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "OnRep_ShowTeamScores", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics
	{
		static void NewProp_bHighPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit(void* Obj)
	{
		((MasterPlayerController_eventServerReportPingStatus_Parms*)Obj)->bHighPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing = { "bHighPing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MasterPlayerController_eventServerReportPingStatus_Parms), &Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::NewProp_bHighPing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterPlayerController, nullptr, "ServerReportPingStatus", nullptr, nullptr, sizeof(MasterPlayerController_eventServerReportPingStatus_Parms), Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTeamScores_MetaData[];
#endif
		static void NewProp_bShowTeamScores_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTeamScores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InGameMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenu;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckPingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckPingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighPingThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterPlayerController_ClientElimAnnouncement, "ClientElimAnnouncement" }, // 2556023944
		{ &Z_Construct_UFunction_AMasterPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 2537358399
		{ &Z_Construct_UFunction_AMasterPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 189248043
		{ &Z_Construct_UFunction_AMasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 2393187143
		{ &Z_Construct_UFunction_AMasterPlayerController_OnRep_ShowTeamScores, "OnRep_ShowTeamScores" }, // 454831770
		{ &Z_Construct_UFunction_AMasterPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 2435528204
		{ &Z_Construct_UFunction_AMasterPlayerController_ServerReportPingStatus, "ServerReportPingStatus" }, // 1058657363
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores_SetBit(void* Obj)
	{
		((AMasterPlayerController*)Obj)->bShowTeamScores = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores = { "bShowTeamScores", "OnRep_ShowTeamScores", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMasterPlayerController), &Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenuWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "/*\n\x09Return to MainMenu\n*/" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
		{ "ToolTip", "Return to MainMenu" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenuWidget = { "InGameMenuWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, InGameMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenu = { "InGameMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, InGameMenu), Z_Construct_UClass_UInGameMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenu_MetaData)) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MasterGameMode = { "MasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, MasterGameMode), Z_Construct_UClass_AMasterGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MasterGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MasterGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingDuration_MetaData[] = {
		{ "Category", "MasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingDuration = { "HighPingDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, HighPingDuration), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData[] = {
		{ "Category", "MasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_CheckPingFrequency = { "CheckPingFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, CheckPingFrequency), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_CheckPingFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData[] = {
		{ "Category", "MasterPlayerController" },
		{ "ModuleRelativePath", "PlayerController/MasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingThreshold = { "HighPingThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPlayerController, HighPingThreshold), METADATA_PARAMS(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_bShowTeamScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_InGameMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_PlayerOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_MasterGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_CheckPingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPlayerController_Statics::NewProp_HighPingThreshold,
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
		static const FName Name_bShowTeamScores(TEXT("bShowTeamScores"));
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_bShowTeamScores == ClassReps[(int32)ENetFields_Private::bShowTeamScores].Property->GetFName()
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMasterPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPlayerController);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPlayerController, AMasterPlayerController::StaticClass, TEXT("AMasterPlayerController"), &Z_Registration_Info_UClass_AMasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPlayerController), 1380420660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_3379247589(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_PlayerController_MasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
