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
				0xFE3876A6,
				0x4B2E583A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS(Z_Construct_UPackage__Script_FPS, TEXT("/Script/FPS"), Z_Registration_Info_UPackage__Script_FPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE3876A6, 0x4B2E583A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
