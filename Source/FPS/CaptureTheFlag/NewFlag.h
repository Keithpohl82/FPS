// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPS/TypeClasses/Team.h"
#include "NewFlag.generated.h"

UCLASS()
class FPS_API ANewFlag : public AActor
{
	GENERATED_BODY()
	
public:	

	ANewFlag();

	UPROPERTY(EditAnywhere)
	ETeam Team = ETeam::ET_MAX;

	void AttachFlagToPlayer(class AMasterCharacter* Character);
	void DropFlag();
	void CaptureFlag(AMasterCharacter* FlagCarrier);
	bool bFlagAtHome = true;
private:
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* FlagMesh;

	FTransform InitialTransform;

	class ACapturePoint* CapturePoint;

protected:

	virtual void BeginPlay() override;
	
	UFUNCTION(Server, Reliable)
	void ServerAttachFlag(AMasterCharacter* Character);

	

public:	

	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	void ResetFlag();
	FORCEINLINE ETeam GetTeam() const { return Team; }
};
