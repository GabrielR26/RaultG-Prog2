// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State.h"
#include "ThrowState.generated.h"

class UWaitProjectilDestroyTransition;
/**
 * 
 */
UCLASS()
class IA_FSM_API UThrowState : public UState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> projectileRef = nullptr;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UWaitProjectilDestroyTransition> waitForKill = nullptr;
	
public:
	virtual void Enter(UFSMObject* _owner) override;
	virtual void InitTransitions() override;
};
