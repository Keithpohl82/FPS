// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPS()
	{
		if (!Z_Registration_Info_UPackage__Script_FPS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6211EE03,
				0x5FE4807B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS(Z_Construct_UPackage__Script_FPS, TEXT("/Script/FPS"), Z_Registration_Info_UPackage__Script_FPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6211EE03, 0x5FE4807B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
