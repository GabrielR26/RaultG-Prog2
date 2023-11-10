// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraSettings.h"
#include "CameraOrbitSettings.generated.h"

/**
 * 
 */
UCLASS()
class TRANSLATE_3C_API UCameraOrbitSettings : public UCameraSettings
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category="Settings", meta = (UMin = 0, Umax = 1000, ClampMin = 0, ClampMax = 1000))
    float radius = 200;

    UPROPERTY(EditAnywhere)
    TObjectPtr<UCurveFloat> expression = nullptr;

public:
    FORCEINLINE float Radius() const { return radius; }
    FORCEINLINE TObjectPtr<UCurveFloat> Expression() { return expression; }
};
