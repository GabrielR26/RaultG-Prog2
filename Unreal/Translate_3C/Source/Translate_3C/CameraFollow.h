// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CameraMovements.h"
#include "CameraFollow.generated.h"

/**
 *
 */
UCLASS()
class TRANSLATE_3C_API ACameraFollow : public ACameraMovements
{
	GENERATED_BODY()

public:
	virtual FVector Offset() const override;

protected:
	virtual void UpdateCameraPosition() override;
	virtual void DrawDebugMovement() override;

};
