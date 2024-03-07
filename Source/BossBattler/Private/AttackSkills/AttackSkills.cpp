// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackSkills/AttackSkills.h"


void UAttackSkills::CastSkill()
{
	Super::CastSkill();
	//Damage
	if(GEngine)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ParentClass"));
	}
}
