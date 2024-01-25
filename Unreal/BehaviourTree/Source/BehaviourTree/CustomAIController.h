// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Public/Alien/DetectionComponent.h"
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
	UPROPERTY()
	TObjectPtr<APawn> controlledPawn = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UDetectionComponent> detection = nullptr;
	UPROPERTY(EditAnywhere)
	FName patrolLocKeyName = "PatrolLocation";
	UPROPERTY(EditAnywhere)
	FName keyTarget = "Target";
	UPROPERTY(EditAnywhere)
	FName keyTargetDetected = "TargetDetected";
	UPROPERTY(EditAnywhere)
	FName keyIsInRange = "IsInRange";
	//FBlackboardKeySelector debugKeyVector;
	
public:
	ACustomAIController();
	FORCEINLINE TObjectPtr<APawn> GetControlledPawn() const { return controlledPawn; }
	FORCEINLINE FName GetKeyTarget() const { return keyTarget; }
	FORCEINLINE FName GetKeyTargetDetected() const { return keyTargetDetected; }
	FORCEINLINE FName GetKeyIsInRange() const { return keyIsInRange; }

	UFUNCTION() void ReceiveTarget(AActor* _target);
	UFUNCTION() void ReceiveTargetDetected(bool _value);
	UFUNCTION() void ReceiveIsInRange(bool _value);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void Init();
	virtual void InitBlackboard();
	void Debug();
};
