// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "FindSomethingTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UFindSomethingTransition : public UBaseTransition
{
	GENERATED_BODY()
	
	bool isFindTrash = false;

	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void FindTrash();
};
