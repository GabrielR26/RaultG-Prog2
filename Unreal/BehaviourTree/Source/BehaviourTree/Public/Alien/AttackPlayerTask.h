// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../TaskNode.h"
#include "AttackPlayerTask.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API UAttackPlayerTask : public UTaskNode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int attackRange = 200;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	void AttackPlayer();
};
