// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../TaskNode.h"
#include "FindPlayerTask.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API UFindPlayerTask : public UTaskNode
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FName BBKey_Vector_MoveToLocation = "MoveToLocation";

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
