// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State.h"
#include "FSMObject.generated.h"

class UFSMComponent;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class IA_FSM_API UFSMObject : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UState> startingState = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UState> currentState = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> owner = nullptr;

public:
	FORCEINLINE TObjectPtr<UFSMComponent> GetOwner() { return owner; }

	void StartFSM(UFSMComponent* _owner);
	void SetNextState(TSubclassOf<UState> _state);
	virtual void UpdateFSM();
	virtual void StopFSM();
};
