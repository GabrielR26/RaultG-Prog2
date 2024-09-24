// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraFollow.h"
#include "CameraFollowSettings.h"

FVector ACameraFollow::Offset() const
{
	UCameraFollowSettings* _set = Cast<UCameraFollowSettings>(cameraSettings);
	if (!_set)
		return FVector(0);
	if (_set->OffsetType() == OffsetType::Local)
		return GetLocaloffset(_set->OffsetX(), _set->OffsetY(), _set->OffsetZ());
	else
		return FVector(_set->OffsetX(), _set->OffsetY(), _set->OffsetZ());
}

void ACameraFollow::UpdateCameraPosition()
{
	FVector _loc = FVector(0);
	UCameraFollowSettings* _set = Cast<UCameraFollowSettings>(cameraSettings);
	if (!_set)
		return;
	if (_set->MovementType() == EMovementType::Lerp)
		_loc = FMath::Lerp(CurrentPosition(), FinalPosition(),
			GetWorld()->DeltaTimeSeconds * _set->CameraSpeed());
	else
		_loc = FMath::VInterpConstantTo(CurrentPosition(), FinalPosition(),
			GetWorld()->DeltaTimeSeconds, _set->CameraSpeed());
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
	DrawDebugSphere(_world, TargetPosition(), 75, 10, FColor::Magenta, false, -1, 0, 2);
}
