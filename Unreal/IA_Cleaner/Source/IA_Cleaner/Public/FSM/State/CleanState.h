// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "CleanState.generated.h"

class ATrash;
/**
 * 
 */
UCLASS()
class IA_CLEANER_API UCleanState : public UBaseState
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishClean);
	FOnFinishClean onFinishClean;

	UPROPERTY(EditAnywhere, meta = (UMin = 1, ClampMin = 1, UMax = 5, ClampMax = 5))
	float timeToClean = 3;

	FTimerHandle cleanTimer;
	ATrash* trashToClean = nullptr;

public:
	FORCEINLINE FOnFinishClean& OnFinishClean() { return onFinishClean; }

	virtual void Enter(UFSM* _fsm) override;
	UFUNCTION() void BeginClean();
	void FinishClean();
};
