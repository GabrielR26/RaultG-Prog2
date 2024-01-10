// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "IdleState.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UIdleState : public UBaseState
{
	GENERATED_BODY()
	
public:
	virtual void Enter(UFSM* _fsm);
};
