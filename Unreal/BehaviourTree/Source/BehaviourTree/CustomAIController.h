// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviourTree.h"
#include "CustomAIController.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API ACustomAIController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UBehaviorTree> tree = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<APawn> controlledPawn = nullptr;
	
public:
	ACustomAIController();
	FORCEINLINE TObjectPtr<APawn> GetControlledPawn() const { return controlledPawn; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Init();
	virtual void InitBlackboard();
};
