// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem.h"

#include "Character/TurnedBasedCharacter.h"

// Sets default values for this component's properties
UAbilitySystem::UAbilitySystem()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void UAbilitySystem::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<ATurnedBasedCharacter>(GetOwner());
}


void UAbilitySystem::CastSkill()
{
	if (!Character) return;
	Character->Mana -= ManaCost;
	Character->Heat -= HeatCost;
	//EnemyHealth -= Skill.Damage;
	if(GEngine)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("GrandParentClass"));
	}
}


void UAbilitySystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

