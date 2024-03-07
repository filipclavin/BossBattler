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


void UAbilitySystem::AttackSkill(const FSkillData& Skill, float& EnemyHealth)
{
	if (!Character) return;
	Character->Mana -= Skill.ManaCost;
	Character->Heat -= Skill.HeatCost;
	EnemyHealth -= Skill.Damage;
}


void UAbilitySystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

