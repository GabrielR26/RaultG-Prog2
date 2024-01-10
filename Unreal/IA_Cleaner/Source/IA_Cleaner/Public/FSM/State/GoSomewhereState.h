// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "GoSomewhereState.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UGoSomewhereState : public UBaseState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (UMin = 100, ClampMin = 100, UMax = 5000, ClampMax = 5000))
	float maxRangeMovement = 2000;

	FVector targetLocation;
	
public:
	virtual void Enter(UFSM* _fsm) override;
	virtual void Update() override;
	virtual void Exit() override;
};
