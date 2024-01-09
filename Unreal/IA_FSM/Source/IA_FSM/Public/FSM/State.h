// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Transition.h"
#include "State.generated.h"

class UFSMObject;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class IA_FSM_API UState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UFSMObject> currentFSM = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TSubclassOf<UTransition>> transitions = {};
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TArray<TObjectPtr<UTransition>> runningTransitions = {};
	
public:
	virtual void Enter(UFSMObject* _owner);
	virtual void Update();
	virtual void Exit();

protected:
	virtual void InitTransitions();
	void CheckForValidTransition();
};
