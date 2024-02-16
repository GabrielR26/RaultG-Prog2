// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone/DroneMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UDroneMovementComponent::UDroneMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UDroneMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDroneMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckIsNearTarget();
	if (isNearTarget)
		DroneOrbit();
	else
		DroneMovement();
	DroneFloating();
}

void UDroneMovementComponent::DroneOrbit()
{
	if (!target)
		return;
	float _x = FMath::Cos(FMath::DegreesToRadians(rotationAngle)) * droneDistance;
	float _y = FMath::Sin(FMath::DegreesToRadians(rotationAngle)) * droneDistance;
	FVector _orbit = target->GetActorLocation() + FVector(_x, _y, droneHeight);
	rotationAngle = rotationAngle >= 360.f ? -360.f : rotationAngle + .5f;

	//DrawDebugSphere(GetWorld(), _orbit, 50, 12, FColor::Blue);
	FVector _location = FMath::VInterpConstantTo(GetOwnerLocation(), _orbit, GetWorld()->DeltaTimeSeconds, droneOrbitSpeed * 100);
	GetOwner()->SetActorLocation(_location);
}

void UDroneMovementComponent::DroneMovement()
{
	if (!target)
		return;
	FVector _target = GetClosestOrbit() + FVector::UpVector * droneHeight;
	//DrawDebugSphere(GetWorld(), _target, 50, 12, FColor::Red);
	FVector _location = FMath::VInterpConstantTo(GetOwnerLocation(), _target, GetWorld()->DeltaTimeSeconds, droneMovementSpeed * 100);
	GetOwner()->SetActorLocation(_location);
}

void UDroneMovementComponent::DroneFloating()
{
	FVector _offset = FVector::UpVector * FMath::Cos(GetWorld()->RealTimeSeconds * DRONE_OSCILATION_FREQUENCE) * DRONE_OSCILATION_HEIGHT;
	GetOwner()->AddActorWorldOffset(_offset);
}

void UDroneMovementComponent::CheckIsNearTarget()
{
	if (!target)
		return;
	float _dist = FVector::Dist(target->GetActorLocation(), GetOwnerLocation() * FVector(1, 1, 0));
	isNearTarget = _dist <= droneDistance + MAGIC_VALUE;
}

FVector UDroneMovementComponent::GetClosestOrbit()
{
	FVector _closest = FVector(INFINITY);
	FVector _origin = GetOwnerLocation() * FVector(1, 1, 0);
	for (size_t i = 0; i < 360; i++)
	{
		float _x = FMath::Cos(FMath::DegreesToRadians(i)) * droneDistance;
		float _y = FMath::Sin(FMath::DegreesToRadians(i)) * droneDistance;
		FVector _orbit = target->GetActorLocation() + FVector(_x, _y, 0);
		double _dist1 = FVector::Dist(_origin, _orbit);
		double _dist2 = FVector::Dist(_origin, _closest);
		if (_dist1 < _dist2)
		{
			_closest = _orbit;
			rotationAngle = i;
		}
	}
	return _closest;
}
