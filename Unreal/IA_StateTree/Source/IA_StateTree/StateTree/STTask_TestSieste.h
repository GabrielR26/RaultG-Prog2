// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "StateTreeEvents.h"
#include "STTask_TestSieste.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API USTTask_TestSieste : public UStateTreeTaskBlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Event")
	FStateTreeEvent treeEvent;
	
protected:
	EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;
	void ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;

	void StateCompleted(FStateTreeExecutionContext& Context, const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates& CompletedActiveStates) override;
	EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) override;
};
