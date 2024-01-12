// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "FollowState.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UFollowState : public UBaseState
{
	GENERATED_BODY()
	
public:
	virtual void Enter(UFSM* _fsm) override;
	virtual void Update() override;
};
