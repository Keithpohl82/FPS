// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPS/TypeClasses/Team.h"
#include "BaseFlag.generated.h"

UCLASS()
class FPS_API ABaseFlag : public AActor
{
	GENERATED_BODY()
	
public:	
	virtual void Tick(float DeltaTime) override;

	ABaseFlag();

	UPROPERTY(EditAnywhere)
	ETeam Team;

	void AttachFlagToPlayer(class AMasterCharacter* Player);
	UFUNCTION(Server, Reliable)
	void ServerAttachFlagToPlayer(AMasterCharacter* Player);

	void DetchFlag();
	UFUNCTION(Server, Reliable)
	void ServerDetachFlag();

protected:

		virtual void BeginPlay() override;
		
		class AFlagZone* CapturePoint;
	
		void OnDestinationReached(AMasterCharacter* FlagCarrier);

		class AMasterCharacter* MasterCharacter;
private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FlagMesh;
public:	
	
	

};
