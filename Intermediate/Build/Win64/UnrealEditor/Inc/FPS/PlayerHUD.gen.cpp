// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/UI/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_APlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	FPS_API UClass* Z_Construct_UClass_UElimAnnouncment_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UAnnouncement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HUDPackage;
class UScriptStruct* FHUDPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHUDPackage, Z_Construct_UPackage__Script_FPS(), TEXT("HUDPackage"));
	}
	return Z_Registration_Info_UScriptStruct_HUDPackage.OuterSingleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FHUDPackage>()
{
	return FHUDPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHUDPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHUDPackage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"HUDPackage",
		sizeof(FHUDPackage),
		alignof(FHUDPackage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHUDPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHUDPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton, Z_Construct_UScriptStruct_FHUDPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HUDPackage.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerHUD::execElimAnnouncementTimerFinished)
	{
		P_GET_OBJECT(UElimAnnouncment,Z_Param_MsgToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElimAnnouncementTimerFinished(Z_Param_MsgToRemove);
		P_NATIVE_END;
	}
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
		UClass* Class = APlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ElimAnnouncementTimerFinished", &APlayerHUD::execElimAnnouncementTimerFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics
	{
		struct PlayerHUD_eventElimAnnouncementTimerFinished_Parms
		{
			UElimAnnouncment* MsgToRemove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MsgToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MsgToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove = { "MsgToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUD_eventElimAnnouncementTimerFinished_Parms, MsgToRemove), Z_Construct_UClass_UElimAnnouncment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::NewProp_MsgToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerHUD, nullptr, "ElimAnnouncementTimerFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::PlayerHUD_eventElimAnnouncementTimerFinished_Parms), Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerHUD);
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnnouncementClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Announcement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Announcement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ElimAnnouncmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimAnnouncementTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElimAnnouncementTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElimMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElimMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ElimMessages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerHUD_ElimAnnouncementTimerFinished, "ElimAnnouncementTimerFinished" }, // 3954010835
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/PlayerHUD.h" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass = { "PlayerOverlayClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, PlayerOverlayClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay = { "PlayerOverlay", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, PlayerOverlay), Z_Construct_UClass_UPlayerOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_AnnouncementClass_MetaData[] = {
		{ "Category", "Announcements" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_AnnouncementClass = { "AnnouncementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, AnnouncementClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_AnnouncementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_AnnouncementClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_Announcement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_Announcement = { "Announcement", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, Announcement), Z_Construct_UClass_UAnnouncement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_Announcement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_Announcement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_OwningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_OwningPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_CrosshairSpreadMax_MetaData[] = {
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_CrosshairSpreadMax = { "CrosshairSpreadMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, CrosshairSpreadMax), METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_CrosshairSpreadMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_CrosshairSpreadMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncmentClass_MetaData[] = {
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncmentClass = { "ElimAnnouncmentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, ElimAnnouncmentClass), Z_Construct_UClass_UElimAnnouncment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncementTime_MetaData[] = {
		{ "Category", "PlayerHUD" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncementTime = { "ElimAnnouncementTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, ElimAnnouncementTime), METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncementTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncementTime_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages_Inner = { "ElimMessages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UElimAnnouncment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages = { "ElimMessages", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerHUD, ElimMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_PlayerOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_AnnouncementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_Announcement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_CrosshairSpreadMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimAnnouncementTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerHUD_Statics::NewProp_ElimMessages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerHUD_Statics::ClassParams = {
		&APlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		if (!Z_Registration_Info_UClass_APlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerHUD.OuterSingleton, Z_Construct_UClass_APlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerHUD.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<APlayerHUD>()
	{
		return APlayerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ScriptStructInfo[] = {
		{ FHUDPackage::StaticStruct, Z_Construct_UScriptStruct_FHUDPackage_Statics::NewStructOps, TEXT("HUDPackage"), &Z_Registration_Info_UScriptStruct_HUDPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHUDPackage), 1559767089U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerHUD, APlayerHUD::StaticClass, TEXT("APlayerHUD"), &Z_Registration_Info_UClass_APlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerHUD), 2333394391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_781152997(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_UI_PlayerHUD_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
