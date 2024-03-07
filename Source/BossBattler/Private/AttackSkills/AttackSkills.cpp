// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackSkills/AttackSkill.h"


void UAttackSkill::CastSkill()
{
	Super::CastSkill();
	//Damage
	if(GEngine)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("ParentClass"));
	}
}
