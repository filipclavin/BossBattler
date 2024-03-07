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
USTRUCT(BlueprintType)
struct FSkillData
{
	GENERATED_BODY()
	
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ManaCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatCost;
	
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , Blueprintable)
class BOSSBATTLER_API UAbilitySystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UAbilitySystem();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float ManaCost = 20.f;
	float RemoveHeat = 20.f;
	
protected:
	virtual void BeginPlay() override;
	
	
	UFUNCTION(BlueprintCallable)
	void AttackSkill(const FSkillData& Skill, float& EnemyHealth);



private:

	ATurnedBasedCharacter* Character;


		
};
