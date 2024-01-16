// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "WaitRetreatTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UWaitRetreatTransition : public UBaseTransition
{
	GENERATED_BODY()

	bool isRetreat = false;
	
	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void OnRetreat();
};
