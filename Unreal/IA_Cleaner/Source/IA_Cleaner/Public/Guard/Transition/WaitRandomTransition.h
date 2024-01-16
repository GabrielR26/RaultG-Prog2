// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "WaitRandomTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UWaitRandomTransition : public UBaseTransition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float maxWaitTimeOnWaypoint = 3;

	FTimerHandle waitTimer;
	bool isWaiting = false;
	bool isWaitingEnd = false;
	
	virtual void InitTransition(UFSM* _fsm) override;
	UFUNCTION() void WaitOnWaypoint();
	virtual bool IsValidTransition() override;
	UFUNCTION() void WaitEnd();
};
