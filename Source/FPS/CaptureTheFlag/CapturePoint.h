// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPS/TypeClasses/Team.h"
#include "CapturePoint.generated.h"

UCLASS()
class FPS_API ACapturePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACapturePoint();

	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	class ANewFlag* FlagInstance;
protected:
	
	virtual void BeginPlay() override;

	void RespawnFlag();

	UFUNCTION(Server, Reliable)
	void ServerSpawnFlag();

	void GiveFlag(class AMasterCharacter* Character);

	UPROPERTY(EditAnywhere, Category = Flag)
	TSubclassOf<class ANewFlag> FlagClass;



	UPROPERTY(EditAnywhere)
	class USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* BaseMesh;



	FTimerHandle RespawnTimer;


public:	
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere)
	ETeam Team;

	FORCEINLINE ETeam GetTeam() const {return Team;}
};
