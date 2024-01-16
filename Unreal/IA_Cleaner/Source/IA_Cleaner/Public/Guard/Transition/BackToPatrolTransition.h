// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "BackToPatrolTransition.generated.h"

class AGuard;
/**
 * 
 */
UCLASS()
class IA_CLEANER_API UBackToPatrolTransition : public UBaseTransition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float timer = 3;

	bool backToPatrol = false;
	FTimerHandle customTimer;
	
	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void BackToPatrol();
};
