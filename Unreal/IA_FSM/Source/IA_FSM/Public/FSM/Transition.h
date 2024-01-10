// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Transition.generated.h"

class UState;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class IA_FSM_API UTransition : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UState> nextState = nullptr;
	
public:
	FORCEINLINE TSubclassOf<UState> GetNextState() const { return nextState; }
	virtual void InitTransition();
	virtual bool IsValidTransition();
};