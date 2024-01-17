// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Guard/GuardGameMode.h"
#include "Guard/Guard.h"

UGuardMovementComponent::UGuardMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGuardMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	if (path)
		GetNextWaypoint();
}

void UGuardMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	MoveToTarget();
	IsReachedDestination();
	onMove.Broadcast(velocity);
}

void UGuardMovementComponent::GetNextWaypoint()
{
	if (!path)
		return;
	SetNewTarget(path->GetNextWaypoint());
}

void UGuardMovementComponent::GetClosestWaypoint()
{
	if (!path)
		return;
	AGuardPath* _closestPath = GetWorld()->GetAuthGameMode<AGuardGameMode>()->GetPathManager()->GetClosestPath(GetOwnerLocation());
	path = _closestPath;
	SetNewTarget(_closestPath->GetClosestWaypoint(GetOwnerLocation()));
}

void UGuardMovementComponent::SetNewTarget(FVector _location)
{
	targetLocation = _location;
	canMove = true;
	velocity = 1;
}

void UGuardMovementComponent::MoveToTarget()
{
	if (!canMove)
		return;
	FVector _location = FMath::VInterpConstantTo(GetOwnerLocation(), targetLocation, GetWorld()->DeltaTimeSeconds, speed * 10);
	FRotator _rotation = UKismetMathLibrary::FindLookAtRotation(GetOwnerLocation(), targetLocation);
	GetOwner()->SetActorLocation(_location);
	GetOwner()->SetActorRotation(_rotation + FRotator(0, 0, 0));

	DrawDebugLine(GetWorld(), GetOwnerLocation(), targetLocation, FColor::Blue, false, -1, 0, 3);
	DrawDebugSphere(GetWorld(), targetLocation, 50, 10, FColor::Blue);
}

void UGuardMovementComponent::IsReachedDestination()
{
	if (!canMove)
		return;
	FVector _distance = (GetOwnerLocation() - targetLocation).GetAbs();
	if (_distance.Length() < 1)
	{
		canMove = false;
		velocity = 0;
		onReachedDestination.Broadcast();
	}
}
