// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem.h"
#include "AttackSkills.generated.h"

/**
 * 
 */
UCLASS()
class BOSSBATTLER_API UAttackSkills : public UAbilitySystem
{
	GENERATED_BODY()

	
public:

	float Damage;
	
	void CastSkill()override;
	
	
};
