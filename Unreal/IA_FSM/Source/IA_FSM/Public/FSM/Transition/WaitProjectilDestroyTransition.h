// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/Transition.h"
#include "WaitProjectilDestroyTransition.generated.h"

class UShootState;
/**
 * 
 */
UCLASS()
class IA_FSM_API UWaitProjectilDestroyTransition : public UTransition
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<AActor> currentProjectile = nullptr;
	
public:
	virtual bool IsValidTransition() override;
	void SendProjectile(TObjectPtr<AActor> _projectile);
};
