// Fill out your copyright notice in the Description page of Project Settings.


#include "Projection.h"

AProjection::AProjection()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void AProjection::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProjection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//MoveTargetWithMouse();
	MoveTargetAtViewportLocation();
}

void AProjection::MoveTargetWithMouse()
{
	if (!target)
		return;
	FVector _worldLocation, _worldDirection;
	GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(_worldLocation, _worldDirection);
	target->SetActorLocation(_worldLocation + _worldDirection * depth);
}

void AProjection::MoveTargetAtViewportLocation()
{
	if (!target)
		return;
	int _x, _y;
	FVector _worldLocation, _worldDirection;
	GetWorld()->GetFirstPlayerController()->GetViewportSize(_x, _y);
	float _xPart = screenLocation.X * (float)_x,
		_yPart = screenLocation.Y * (float)_y;
	GetWorld()->GetFirstPlayerController()->DeprojectScreenPositionToWorld(_xPart, _yPart, _worldLocation, _worldDirection);
	target->SetActorLocation(_worldLocation + _worldDirection * depth);
}
