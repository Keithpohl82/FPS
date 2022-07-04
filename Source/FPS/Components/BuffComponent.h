// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_API UBuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	friend class AMasterCharacter;
	UBuffComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Heal(float HealAmount, float HealingTime);
protected:

	virtual void BeginPlay() override;

	void HealRampUp(float DeltaTime);

private:

	UPROPERTY()
	class AMasterCharacter* MasterCharacter;

	bool bHealing = false;
	float HealingRate = 0.f;
	float AmountToHeal = 0.f;

public:	

	

		
};
