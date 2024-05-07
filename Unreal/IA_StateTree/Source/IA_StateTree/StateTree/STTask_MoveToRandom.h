// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "STTask_MoveToRandom.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API USTTask_MoveToRandom : public UStateTreeTaskBlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Input")
	FVector location = FVector();
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<AActor> owner = nullptr;
	
protected:
	EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;
	void ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) override;
	void StateCompleted(FStateTreeExecutionContext& Context, const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates& CompletedActiveStates) override;
	EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) override;
};
