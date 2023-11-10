// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraMovements.h"
#include "CameraOrbit.generated.h"

/**
 *
 */
UCLASS()
class TRANSLATE_3C_API ACameraOrbit : public ACameraMovements
{
	GENERATED_BODY()

public:
	float angle = 0;

	FORCEINLINE virtual FVector FinalPosition() override { return RotatePoint() + TargetPosition(); };

protected:
	virtual void UpdateCameraPosition() override;
	virtual void DrawDebugMovement() override;

	FVector RotatePoint();
	float ComputeAngle();
};
