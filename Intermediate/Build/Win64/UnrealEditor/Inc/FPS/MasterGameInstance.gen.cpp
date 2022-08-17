// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/GameInstance/MasterGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterGameInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UMasterGameInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UMasterGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	DEFINE_FUNCTION(UMasterGameInstance::execGetAllFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFriends();
		P_NATIVE_END;
	}
	void UMasterGameInstance::StaticRegisterNativesUMasterGameInstance()
	{
		UClass* Class = UMasterGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllFriends", &UMasterGameInstance::execGetAllFriends },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInstance/MasterGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMasterGameInstance, nullptr, "GetAllFriends", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMasterGameInstance_GetAllFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMasterGameInstance_GetAllFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMasterGameInstance);
	UClass* Z_Construct_UClass_UMasterGameInstance_NoRegister()
	{
		return UMasterGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMasterGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMasterGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMasterGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMasterGameInstance_GetAllFriends, "GetAllFriends" }, // 3466624460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasterGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameInstance/MasterGameInstance.h" },
		{ "ModuleRelativePath", "GameInstance/MasterGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMasterGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasterGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMasterGameInstance_Statics::ClassParams = {
		&UMasterGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMasterGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMasterGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMasterGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMasterGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMasterGameInstance.OuterSingleton, Z_Construct_UClass_UMasterGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMasterGameInstance.OuterSingleton;
	}
	template<> FPS_API UClass* StaticClass<UMasterGameInstance>()
	{
		return UMasterGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMasterGameInstance);
	struct Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMasterGameInstance, UMasterGameInstance::StaticClass, TEXT("UMasterGameInstance"), &Z_Registration_Info_UClass_UMasterGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMasterGameInstance), 3757908279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_2468328415(TEXT("/Script/FPS"),
		Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Source_FPS_GameInstance_MasterGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
