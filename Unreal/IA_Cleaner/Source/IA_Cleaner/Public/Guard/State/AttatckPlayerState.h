// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State/BaseState.h"
#include "AttatckPlayerState.generated.h"

class AGuard;
/**
 * 
 */
UCLASS()
class IA_CLEANER_API UAttatckPlayerState : public UBaseState
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AGuard> currentGuard = nullptr;
	
	virtual void Enter(UFSM* _fsm) override;
	virtual void Update() override;
};
