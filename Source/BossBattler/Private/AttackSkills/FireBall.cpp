// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackSkills/FireBall.h"

void UFireBall::CastSkill()
{
	Super::CastSkill();

	if(GEngine)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Child"));
	}
}
