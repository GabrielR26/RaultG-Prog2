// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraMovements.h"

ACameraMovements::ACameraMovements()
{
	PrimaryActorTick.bCanEverTick = true;

#if WITH_EDITOR
	PrimaryActorTick.bStartWithTickEnabled = true;
#endif
}

void ACameraMovements::BeginPlay()
{
	Super::BeginPlay();
}

void ACameraMovements::Tick(float _deltaTime)
{
	Super::Tick(_deltaTime);
	if (GetWorld()->IsPlayInEditor())
		UpdateCameraPosition();
	DrawDebugMovement();
}

bool ACameraMovements::ShouldTickIfViewportsOnly() const
{
	return useDebug;
}

void ACameraMovements::UpdateCameraPosition()
{
}

void ACameraMovements::DrawDebugMovement()
{
}
