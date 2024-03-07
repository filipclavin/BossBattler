// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystem.generated.h"

// Forward declaration
class ATurnedBasedCharacter;

// UENUM(BlueprintType)
// enum class EAbilityType : uint8
// {
// 	EA_AttackSkill,
// 	EA_DefenceSkill,
// 	EA_SupportSkill
// };



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , Blueprintable)
class BOSSBATTLER_API UAbilitySystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UAbilitySystem();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ManaCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatCost;
	
	UFUNCTION(BlueprintCallable)
	virtual void CastSkill();



private:

	ATurnedBasedCharacter* Character;
};
