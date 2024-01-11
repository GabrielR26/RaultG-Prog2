// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "Wait_FinishCleanTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UWait_FinishCleanTransition : public UBaseTransition
{
	GENERATED_BODY()
	
	bool isFinishCleaning = false;

	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void FinishCleaning();
};
