// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition.h"
#include "WaitTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_FSM_API UWaitTransition : public UTransition
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	float waitTime = 3;

	bool isDone = false;
	FTimerHandle waitTimer;

public:
	virtual void InitTransition() override;
	virtual bool IsValidTransition() override;
	void Wait();
};
