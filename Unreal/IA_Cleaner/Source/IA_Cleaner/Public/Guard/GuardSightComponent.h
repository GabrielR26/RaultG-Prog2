// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SightComponent.h"
#include "GuardSightComponent.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UGuardSightComponent : public USightComponent
{
	GENERATED_BODY()
	
protected:
	virtual void SightBehaviour() override;
};
