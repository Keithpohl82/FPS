// Fill out your copyright notice in the Description page of Project Settings.


#include "ElimAnnouncment.h"
#include "Components/TextBlock.h"

void UElimAnnouncment::SetElimAnnouncementText(FString KillerName, FString VictimName)
{
	FString ElimAnnouncementText = FString::Printf(TEXT("%s Killed %s"), *KillerName, *VictimName);
	if (AnnouncementText)
	{
		AnnouncementText->SetText(FText::FromString(ElimAnnouncementText));
	}
}
