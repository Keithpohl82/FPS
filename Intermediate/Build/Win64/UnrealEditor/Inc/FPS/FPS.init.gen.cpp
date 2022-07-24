// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_init() {}
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_OnLeftGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPS()
	{
		if (!Z_Registration_Info_UPackage__Script_FPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_HighPingDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_OnLeftGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC70926C7,
				0xEE42203D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS(Z_Construct_UPackage__Script_FPS, TEXT("/Script/FPS"), Z_Registration_Info_UPackage__Script_FPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC70926C7, 0xEE42203D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
