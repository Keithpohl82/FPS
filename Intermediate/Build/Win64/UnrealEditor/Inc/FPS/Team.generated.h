// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_Team_generated_h
#error "Team.generated.h already included, missing '#pragma once' in Team.h"
#endif
#define FPS_Team_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Source_FPS_TypeClasses_Team_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::ET_RedTeam) \
	op(ETeam::ET_BlueTeam) \
	op(ETeam::ET_GreenTeam) \
	op(ETeam::ET_BlackTeam) \
	op(ETeam::ET_OrangeTeam) \
	op(ETeam::ET_Spectator) 

enum class ETeam : uint8;
template<> FPS_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
