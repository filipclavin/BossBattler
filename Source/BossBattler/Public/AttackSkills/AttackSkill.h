// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skill.h"
#include "AttackSkill.generated.h"

/**
 * 
 */
UCLASS()
class BOSSBATTLER_API UAttackSkill : public USkill
{
	GENERATED_BODY()

	
public:

	float Damage;
	
	void CastSkill()override;
	
	
};
