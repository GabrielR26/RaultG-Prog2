// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraOrbit.h"
#include "CameraOrbitSettings.h"

void ACameraOrbit::UpdateCameraPosition()
{
	SetActorLocation(FinalPosition());
}

void ACameraOrbit::DrawDebugMovement()
{
	UCameraOrbitSettings* _set = Cast<UCameraOrbitSettings>(cameraSettings);
	DrawDebugCircle(GetWorld(), TargetPosition(), _set ? _set->Radius() : 100, 100, FColor::Blue, false, -1, 0, 3, FVector(1,0,0), FVector(0,1,0));
	const FColor _color = IsValid() ? validDebugColor : noValidDebugColor;
	DrawDebugBox(GetWorld(), CurrentPosition(), FVector(100), _color, false, -1, 0, 3);
}

FVector ACameraOrbit::RotatePoint()
{
	UCameraOrbitSettings* _set = Cast<UCameraOrbitSettings>(cameraSettings);
	float _radius = _set ? _set->Radius() : 100;
	angle = ComputeAngle();
	float _x = FMath::Cos(FMath::DegreesToRadians(angle)) * _radius;
	float _y = FMath::Sin(FMath::DegreesToRadians(angle)) * _radius;
	return FVector(_x, _y, 0);
}

float ACameraOrbit::ComputeAngle()
{
	UCameraOrbitSettings* _set = Cast<UCameraOrbitSettings>(cameraSettings);
	return _set ? _set->Expression()->GetFloatValue(GetWorld()->TimeSeconds) * 360.f : 0;
}
