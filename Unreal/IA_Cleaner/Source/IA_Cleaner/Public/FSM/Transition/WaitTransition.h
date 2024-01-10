// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "WaitTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UWaitTransition : public UBaseTransition
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	float waitTime = 3;

	FTimerHandle waitTimer;
	bool timerFinished = false;

public:
	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	void FinishTime();
};
