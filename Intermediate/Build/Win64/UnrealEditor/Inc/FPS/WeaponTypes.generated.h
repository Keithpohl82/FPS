// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_WeaponTypes_generated_h
#error "WeaponTypes.generated.h already included, missing '#pragma once' in WeaponTypes.h"
#endif
#define FPS_WeaponTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_Weapons_WeaponTypes_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_AssaultRifle) 

enum class EWeaponType : uint8;
template<> FPS_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
