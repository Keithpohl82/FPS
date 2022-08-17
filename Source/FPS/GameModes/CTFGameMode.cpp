// Fill out your copyright notice in the Description page of Project Settings.


#include "CTFGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "FPS/CaptureTheFlag/NewFlag.h"
#include "FPS/CaptureTheFlag/CapturePoint.h"
#include "FPS/GameState/MasterGameState.h"

void ACTFGameMode::PlayerEliminated(class AMasterCharacter* ElimmedCharacter, class AMasterPlayerController* VictimController, AMasterPlayerController* KillerController)
{
	AMasterGameMode::PlayerEliminated(ElimmedCharacter, VictimController, KillerController);
}

void ACTFGameMode::FlagCaptured(ACapturePoint* Zone, ANewFlag* Flag)
{
	bool bValidCapture = Flag->GetTeam() != Zone->Team;
	
	AMasterGameState* MGameState = Cast<AMasterGameState>(GameState);

	if (MGameState)
	{
		if (Zone->Team == ETeam::ET_BlueTeam)
		{
			MGameState->BlueTeamScores();
			Flag->CaptureFlag(ScoringPlayer);
		}
		if (Zone->Team == ETeam::ET_RedTeam)
		{
			MGameState->RedTeamScores();
			Flag->CaptureFlag(ScoringPlayer);
		}
	}
}
