// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TurnedBasedCharacter.generated.h"

UCLASS()
class BOSSBATTLER_API ATurnedBasedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATurnedBasedCharacter();
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditDefaultsOnly ,BlueprintReadWrite, Category = Health)
	float Health = 100.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Mana)
	float MaxMana = 100.f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,  Category = Mana)
	float Mana;
	UPROPERTY(EditDefaultsOnly,  BlueprintReadWrite, Category = Heat)
	float Heat;
	UPROPERTY(EditDefaultsOnly,  BlueprintReadWrite, Category = Heat)
	float MaxHeat = 100;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Attributes)
	float PlayerDamage = 20.f;

	


protected:
	virtual void BeginPlay() override;

	
	

	UFUNCTION(BlueprintCallable)
	float RegenMana(float CurrentMana, float ManaRegen, float Max);
	
	UFUNCTION(BlueprintCallable)
	float DealDamage(float Damage, float EnemyHealth);
	
	UFUNCTION(BlueprintCallable)
	float AddHeat(float CurrentHeat, float HeatRegen, float Max);
	
	UFUNCTION(BlueprintCallable)
	float ReduceMana(float CurrentMana, float ManaCost, float Min);
	
	UFUNCTION(BlueprintCallable)
	float RemoveHeat(float CurrentHeat, float HeatCost, float Min);
};
