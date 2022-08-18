// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGameInstance.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlineExternalUIInterface.h"
#include "OnlineSubsystem.h"

UMasterGameInstance::UMasterGameInstance()
{
	
}

void UMasterGameInstance::Init()
{
	Super::Init();
	Subsystem = IOnlineSubsystem::Get();

	if (Subsystem != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found Subsystem %s"), *Subsystem->GetSubsystemName().ToString());
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Subsystem"));
	}
}

void UMasterGameInstance::GetAllFriends()
{
	
	IOnlineFriendsPtr FriendsPtr = Subsystem->GetFriendsInterface();
	if (Subsystem)
	{

		if (!FriendsPtr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid friends pointer"));
			
		}
		else
		{
			FriendsPtr->ReadFriendsList(0, FString(""), FOnReadFriendsListComplete::CreateUObject(this, &UMasterGameInstance::OnGetAllFriendsComplete));
		}
		
	}
}

void UMasterGameInstance::OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr)
{
	
	if (bWasSuccessful)
	{
		if (Subsystem)
		{
			if (IOnlineFriendsPtr FriendsPtr = Subsystem->GetFriendsInterface())
			{
				
				TArray<TSharedRef<FOnlineFriend>> FriendsList;
				if (FriendsPtr->GetFriendsList(0, ListName, FriendsList))
				{

					for (TSharedRef<FOnlineFriend> Friend : FriendsList)
					{
						FString FriendName = Friend.Get().GetRealName();
						UE_LOG(LogTemp, Warning, TEXT("Friend: %s"), *FriendName);
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Failted to get Friends list"));
				}
			}
		}
	}
}

void UMasterGameInstance::ShowInviteUI()
{
	if (Subsystem)
	{
		IOnlineExternalUIPtr UIPtr = Subsystem->GetExternalUIInterface();
		if (UIPtr)
		{
			UIPtr->ShowInviteUI(0);
		}
	}
}
