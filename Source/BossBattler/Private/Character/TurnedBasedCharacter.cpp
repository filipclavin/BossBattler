// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/TurnedBasedCharacter.h"

ATurnedBasedCharacter::ATurnedBasedCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	

}


void ATurnedBasedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Mana = MaxMana;
}

float ATurnedBasedCharacter::RegenMana(float CurrentMana, float ManaRegen, float Max)
{
	CurrentMana += ManaRegen; 
	
	CurrentMana = FMath::Clamp(CurrentMana, 0.f, Max);
    if(GEngine)
    {
    	FString ManaString = FString::SanitizeFloat(CurrentMana);
    	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Current Mana: ") + ManaString);
    }
    	
	return CurrentMana;
}


float ATurnedBasedCharacter::DealDamage(float Damage, float EnemyHealth)
{
	return EnemyHealth -= Damage;
}

float ATurnedBasedCharacter::AddHeat(float CurrentHeat, float HeatRegen, float Max)
{
	CurrentHeat += HeatRegen;
	CurrentHeat = FMath::Clamp(CurrentHeat,0, Max);
	if(GEngine)
	{
		FString HeatString = FString::SanitizeFloat(CurrentHeat);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Current Heat: ") + HeatString);
	}
	return CurrentHeat;
}

float ATurnedBasedCharacter::ReduceMana(float CurrentMana, float ManaCost, float Min)
{
	CurrentMana -= ManaCost;

	CurrentMana = FMath::Clamp(CurrentMana,Min, MaxMana);
	if(GEngine)
	{
		FString ManaString = FString::SanitizeFloat(CurrentMana);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Current Mana: ") + ManaString);
	}
	
	return CurrentMana;
}

float ATurnedBasedCharacter::RemoveHeat(float CurrentHeat, float HeatCost, float Min)
{
	CurrentHeat -= HeatCost;
	CurrentHeat = FMath::Clamp(CurrentHeat,Min,MaxHeat);
	if(GEngine)
	{
		FString HeatString = FString::SanitizeFloat(CurrentHeat);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Current Heat: ") + HeatString);
	}
	
	
	return CurrentHeat;
}

void ATurnedBasedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATurnedBasedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

