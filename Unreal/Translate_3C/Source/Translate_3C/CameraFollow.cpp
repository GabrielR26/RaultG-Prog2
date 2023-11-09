// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraFollow.h"

FVector ACameraFollow::Offset() const
{
	return GetLocaloffset(0, 0, 0);
}

void ACameraFollow::UpdateCameraPosition()
{
	FVector _loc = FVector(0);
	//FVector _loc = FMath::Lerp(CurrentPosition(), FinalPosition(), GetWorld()->DeltaTimeSeconds * 2);
	_loc = FMath::VInterpConstantTo(CurrentPosition(), FinalPosition(), GetWorld()->DeltaTimeSeconds, 200);
	SetActorLocation(_loc);
}

void ACameraFollow::DrawDebugMovement()
{
	Super::DrawDebugMovement();
	const UWorld* _world = GetWorld();
	const FColor _color = IsValid() ? validDebugColor : noValidDebugColor;
	DrawDebugBox(_world, CurrentPosition(), FVector(100), _color, false, -1, 0, 3);
	if (!IsValid())
		return;
	DrawDebugLine(_world, CurrentPosition(), TargetPosition(), FColor::Magenta, false, -1, 0, 3);
	DrawDebugLine(_world, FinalPosition(), TargetPosition(), FColor::Magenta, false, -1, 0, 3);
	DrawDebugBox(_world, FinalPosition(), FVector(50), FColor::Magenta, false, -1, 0, 3);
	DrawDebugSphere(_world, TargetPosition(), 50, 10, FColor::Magenta, false, -1, 0, 2);
}
