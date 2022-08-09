// Fill out your copyright notice in the Description page of Project Settings.


#include "CTFGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FPS/CaptureTheFlag/FlagPickup.h"
#include "FPS/CaptureTheFlag/FlagZone.h"
#include "FPS/GameState/MasterGameState.h"

void ACTFGameMode::PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController)
{
	AMasterGameMode::PlayerEliminated(ElimmedCharacter, VictimController, KillerController);
}

void ACTFGameMode::FlagCaptured(AFlagPickup* Flag, AFlagZone* Zone)
{
	bool bValidCapture = Flag->GetTeam() != Zone->Team;

	AMasterGameState* MGameState = Cast<AMasterGameState>(GameState);

	if (MGameState)
	{
		if (Zone->Team == ETeam::ET_BlueTeam)
		{
			MGameState->BlueTeamScores();
		}
		if (Zone->Team == ETeam::ET_RedTeam)
		{
			MGameState->RedTeamScores();
		}
	}
}
