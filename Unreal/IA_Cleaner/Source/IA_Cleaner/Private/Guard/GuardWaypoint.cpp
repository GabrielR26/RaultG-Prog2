// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardWaypoint.h"

AGuardWaypoint::AGuardWaypoint()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AGuardWaypoint::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGuardWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawPoint();
}

void AGuardWaypoint::DrawPoint()
{
	DrawDebugSphere(GetWorld(), GetActorLocation(), 25, 10, FColor::Black);
}

