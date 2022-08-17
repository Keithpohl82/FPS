// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGameInstance.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "OnlineSubsystem.h"

void UMasterGameInstance::GetAllFriends()
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		if (IOnlineFriendsPtr FriendsPtr = Subsystem->GetFriendsInterface())
		{
			FriendsPtr->ReadFriendsList(0, FString(""), FOnReadFriendsListComplete::CreateUObject(this, &UMasterGameInstance::OnGetAllFriendsComplete));
		}
	}
}

void UMasterGameInstance::OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr)
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		if (IOnlineFriendsPtr FriendsPtr = Subsystem->GetFriendsInterface())
		{
			
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Get Friends List"));
}
