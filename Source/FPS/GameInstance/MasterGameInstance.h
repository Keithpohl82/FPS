// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MasterGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API UMasterGameInstance : public UGameInstance
{
	GENERATED_BODY()
	


public:
	
	UFUNCTION(BlueprintCallable)
	void GetAllFriends();

	void OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);


};
