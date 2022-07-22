// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ElimAnnouncment.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UElimAnnouncment : public UUserWidget
{
	GENERATED_BODY()
	

public:

	void SetElimAnnouncementText(FString KillerName, FString VictimName);

	UPROPERTY(meta = (BindWidget))
	class UHorizontalBox* AnnouncementBox;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* AnnouncementText;

};
