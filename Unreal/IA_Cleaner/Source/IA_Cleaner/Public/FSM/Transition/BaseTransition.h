// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseTransition.generated.h"

class UBaseState;
class UFSM;
/**
 *
 */
UCLASS(Abstract, Blueprintable)
class IA_CLEANER_API UBaseTransition : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UBaseState> nextState = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UFSM> currentFSM = nullptr;

public:
	FORCEINLINE TSubclassOf<UBaseState> GetNextState() { return nextState; }
	virtual void InitTransition(UFSM* _fsm);
	virtual bool IsValidTransition();
};
