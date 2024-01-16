// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SightComponent.h"
#include "GuardSightComponent.generated.h"

class AGuard;
/**
 * 
 */
UCLASS()
class IA_CLEANER_API UGuardSightComponent : public USightComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInSight, bool, _isPlayerInSight);
	FOnPlayerInSight onPlayerInSight;
	
public:
	FORCEINLINE FOnPlayerInSight& OnPlayerInSight() { return onPlayerInSight; }

protected:
	virtual void SightBehaviour() override;
	float GetVectorAngle(const FVector& _u, const FVector& _v);
};
