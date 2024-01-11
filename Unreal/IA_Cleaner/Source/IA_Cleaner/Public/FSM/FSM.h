// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State/BaseState.h"
#include "FSM.generated.h"

class UFSMComponent;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class IA_CLEANER_API UFSM : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UBaseState> StartingState = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UBaseState> currentState = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> owner = nullptr;
	
public:
	FORCEINLINE TObjectPtr<UFSMComponent> GetOwner() { return owner; }
	FORCEINLINE TObjectPtr<UBaseState> GetCurrentState() { return currentState; }

	virtual void StartFSM(UFSMComponent* _owner);
	virtual void UpdateFSM();
	virtual void StopFSM();
	void SetNextState(TSubclassOf<UBaseState> _state);
	TObjectPtr<AActor> GetActor();
};
