// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone/DroneMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

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
	DroneMovement();
	DroneBehaviour();
	CheckDrone();
}

void UDroneMovementComponent::DroneMovement()
{
	if (!target)
		return;
	FVector _location;
	if (isOnTarget)
	{
		float _x = FMath::Cos(FMath::DegreesToRadians(rotationAngle)) * droneDistance;
		float _y = FMath::Sin(FMath::DegreesToRadians(rotationAngle)) * droneDistance;
		_location = target->GetActorLocation() + FVector(_x, _y, 0);
		rotationAngle = rotationAngle >= 360.f ? -360.f : rotationAngle + 0.5;
	}
	else
		_location = FMath::VInterpConstantTo(GetOwnerLocation(), target->GetActorLocation(), GetWorld()->DeltaTimeSeconds, droneSpeed);

	GetOwner()->SetActorLocation(_location);
	//FRotator _rotation = UKismetMathLibrary::FindLookAtRotation(_location, target->GetActorLocation());
	//GetOwner()->SetActorRotation(_rotation); // TODO dans attack
}

void UDroneMovementComponent::DroneBehaviour()
{
	if (!target)
		return;
	FVector _offset = FVector::UpVector * droneHeight + FVector::UpVector * FMath::Cos(GetWorld()->RealTimeSeconds * 3) * 30;
	GetOwner()->AddActorWorldOffset(_offset);
}

void UDroneMovementComponent::CheckDrone()
{
	if (!target)
		return;
	FVector _distance = (target->GetActorLocation() - GetOwnerLocation()).GetAbs();
	isOnTarget = _distance.Length() <= 1; //TODO here
}
