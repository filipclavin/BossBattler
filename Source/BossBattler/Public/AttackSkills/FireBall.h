// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackSkills/AttackSkill.h"
#include "FireBall.generated.h"

/**
 * 
 */
UCLASS()
class BOSSBATTLER_API UFireBall : public UAttackSkill
{
	GENERATED_BODY()

	void CastSkill()override;
	
};
