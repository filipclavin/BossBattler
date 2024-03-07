// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackSkills/AttackSkills.h"
#include "FireBall.generated.h"

/**
 * 
 */
UCLASS()
class BOSSBATTLER_API UFireBall : public UAttackSkills
{
	GENERATED_BODY()

	void CastSkill()override;
	
};
