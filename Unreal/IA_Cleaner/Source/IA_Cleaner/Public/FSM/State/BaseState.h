// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSM/Transition/BaseTransition.h"
#include "BaseState.generated.h"

class UFSM;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class IA_CLEANER_API UBaseState : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TSubclassOf<UBaseTransition>> baseTransitions = {};
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TArray<TObjectPtr<UBaseTransition>> transitions = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UFSM> currentFSM = nullptr;

public:
	virtual void Enter(UFSM* _fsm);
	virtual void Update();
	virtual void Exit();

protected:
	virtual void InitTransitions();
	virtual void CheckIsValidTransition();
};
