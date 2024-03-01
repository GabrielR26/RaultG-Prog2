// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardPath.h"
#include "Guard/GuardGameMode.h"

AGuardPath::AGuardPath()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGuardPath::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetAuthGameMode<AGuardGameMode>()->GetPathManager()->AddPath(this);
}

void AGuardPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawPath();
}

FVector AGuardPath::GetNextWaypoint()
{
	if (waypoints.IsEmpty() || waypoints.Num() == 1)
		return FVector::ZeroVector;
	//Set isReversed
	if (indexCurrentWaypoint == 0)
		isReversed = false;
	else if (indexCurrentWaypoint == waypoints.Num() - 1)
		isReversed = true;
	//Set currentWaypoint
	if (!currentWaypoint)
		currentWaypoint = waypoints[indexCurrentWaypoint];
	else 
		currentWaypoint = waypoints[isReversed ? indexCurrentWaypoint-- : indexCurrentWaypoint++];
	//Return waypoint location
	return currentWaypoint->GetActorLocation();
}

FVector AGuardPath::GetClosestWaypoint(const FVector& _location)
{
	if (waypoints.IsEmpty())
		return FVector::ZeroVector;
	FVector _closest = _location - waypoints[0]->GetActorLocation();
	for (size_t i = 0; i < waypoints.Num(); i++)
	{
		int _index = i;
		FVector _dir = waypoints[_index]->GetActorLocation() - _location;
		if (_dir.Size() < _closest.Size())
		{
			indexCurrentWaypoint = _index;
			_closest = _dir;
		}
	}
	return waypoints[indexCurrentWaypoint]->GetActorLocation();
}

void AGuardPath::DrawPath()
{
	if (waypoints.IsEmpty())
		return;
	for (size_t i = 0; i < waypoints.Num() - 1; i++)
	{
		int _index = i;
		DrawDebugLine(GetWorld(), waypoints[_index]->GetActorLocation(), waypoints[_index + 1]->GetActorLocation(),
			pathColor, false, -1, 0, 5);
	}
}