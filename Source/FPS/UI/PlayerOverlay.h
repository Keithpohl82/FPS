// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerOverlay.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UPlayerOverlay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* HealthText;
	UPROPERTY(meta = (BindWidget))
		class UImage* HighPingImage;
	UPROPERTY(meta = (BindWidget))
		 UProgressBar* ShieldBar;
	UPROPERTY(meta = (BindWidget))
		 UTextBlock* ShieldText;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* ScoreAmount;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* DeathsAmount;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* WeaponAmmoAmount;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* CarriedAmmoAmount;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* MatchCountdownText;
	UPROPERTY(meta = (BindWidget))
		UTextBlock* GrenadesText;
	UPROPERTY(meta = (BindWidgetAnim), Transient)
		UWidgetAnimation* HighPingAnimation;
};
