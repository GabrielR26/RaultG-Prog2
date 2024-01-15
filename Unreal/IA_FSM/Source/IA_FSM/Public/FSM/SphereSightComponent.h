// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/SightComponent.h"
#include "SphereSightComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IA_FSM_API USphereSightComponent : public USightComponent
{
	GENERATED_BODY()
	
protected:
	virtual void SightBehaviour() override;
	float GetVectorAngle(const FVector& _u, const FVector& _v);
};
