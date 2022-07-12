// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LagCompensationComponent.generated.h"


USTRUCT(BlueprintType)
struct FBoxInformation
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FRotator Rotation;

	UPROPERTY()
	FVector BoxExtent;
};

USTRUCT(BlueprintType)
struct   FFramePackage
{
	GENERATED_BODY()

	UPROPERTY()
	float Time;

	UPROPERTY()
	TMap<FName, FBoxInformation> HitBoxInfo;

	UPROPERTY()
	AMasterCharacter* Character;
};

USTRUCT(BlueprintType)
struct FServerSideRewindResult 
{
	GENERATED_BODY()

	UPROPERTY()
	bool bHitConfirmed;

	UPROPERTY()
	bool bHeadshot;
};

USTRUCT(BlueprintType)
struct FShotgunServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<AMasterCharacter*, uint32> HeadShots;
	UPROPERTY()
	TMap<AMasterCharacter*, uint32> BodyShots;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API ULagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	ULagCompensationComponent();
	friend class AMasterCharacter;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ShowFramePackage(const FFramePackage& Package, const FColor& Color);

	FServerSideRewindResult ServerSideRewind(class AMasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation, float HitTime);

	UFUNCTION(Server, Reliable)
	void ServerScoreRequest(AMasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation, float HitTime, class AWeaponBase* DamageCauser);

protected:
	virtual void BeginPlay() override;

	void SaveFramePackage(FFramePackage& Package);

	FFramePackage InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime);

	FServerSideRewindResult ConfirmHit(const FFramePackage& Package, AMasterCharacter* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation);

	void CacheBoxPositions(AMasterCharacter* HitCharacter, FFramePackage& OutFramePackage);
	void MoveBoxes(AMasterCharacter* HitCharacter, const FFramePackage& Package);
	void ResetHitBoxes(AMasterCharacter* HitCharacter, const FFramePackage& Package);
	void EnableCharacterMeshCollision(AMasterCharacter* HitCharacter, ECollisionEnabled::Type CollisionEnabled);
	void SaveFramePackage();
	FFramePackage GetFrameToCheck(AMasterCharacter* HitCharacter, float HitTime);
	/*
		Shotgun 
	*/
	
	FShotgunServerSideRewindResult ShotgunServerSideRewind(const TArray<AMasterCharacter*>& HitCharacters, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, float HitTime);

	FShotgunServerSideRewindResult ShotgunConfirmHit(const TArray<FFramePackage>& FramePackages, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations);

private:

	UPROPERTY()
	AMasterCharacter* MasterCharacter;

	UPROPERTY()
	class AMasterPlayerController* MasterController;

	TDoubleLinkedList<FFramePackage> FrameHistory;

	UPROPERTY(EditAnywhere)
	float MaxRecordTime = 4.f;

public:	
	
};
