// Fill out your copyright notice in the Description page of Project Settings.


#include "Skill.h"

#include "Character/TurnedBasedCharacter.h"

// Sets default values for this component's properties
USkill::USkill()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void USkill::BeginPlay()
{
	Super::BeginPlay();

	Character = Cast<ATurnedBasedCharacter>(GetOwner());
}


void USkill::CastSkill()
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


void USkill::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

