// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeEvaluatorBlueprintBase.h"
#include "STEvaluator_PlayerPosition.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API USTEvaluator_PlayerPosition : public UStateTreeEvaluatorBlueprintBase
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "Output")
	FVector playerLocation = FVector();
	
protected:
	void TreeStart(FStateTreeExecutionContext& Context) override;
	void TreeStop(FStateTreeExecutionContext& Context) override;
	void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) override;
};
