// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../TaskNode.h"
#include "MoveToLocationTask.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API UMoveToLocationTask : public UTaskNode
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FName BBKey_Vector_MoveToLocation = "MoveToLocation";
	UPROPERTY(EditAnywhere)
	float range = 5;
	UPROPERTY(EditAnywhere)
	int speed = 200;

	FVector targetLocation;
	UBehaviorTreeComponent* BTCompo;
	bool moveTo = true;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual void MoveToLocation(float DeltaSeconds);
	virtual void IsOnLocation();
	virtual void DispayDebug();
};
