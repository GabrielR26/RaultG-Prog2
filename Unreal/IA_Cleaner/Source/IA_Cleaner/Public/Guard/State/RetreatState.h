// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "RetreatState.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API URetreatState : public UBaseState
{
	GENERATED_BODY()
	
	virtual void Enter(UFSM* _fsm) override;
};
