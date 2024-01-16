// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition/BaseTransition.h"
#include "PlayerInSightTransition.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UPlayerInSightTransition : public UBaseTransition
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AGuard> guard = nullptr;

	bool isPlayerInSight = false;
	
	virtual void InitTransition(UFSM* _fsm) override;
	virtual bool IsValidTransition() override;
	UFUNCTION() void PlayerInSight(bool _isPlayerInSight);
};
