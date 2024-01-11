// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "Reached_DestinationTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UReached_DestinationTransition : public UBaseTransition
{
	GENERATED_BODY()

	bool isReachedDestination = false;
	
	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void ReachedDestination();
};
