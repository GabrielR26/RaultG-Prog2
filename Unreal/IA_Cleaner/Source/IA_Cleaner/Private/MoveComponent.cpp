// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"
#include "CleanerBot.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UMoveComponent::UMoveComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	MoveToTarget();
	IsReachedDestination();
	onMove.Broadcast(velocity);
}

void UMoveComponent::SetNewTarget(FVector _location)
{
	ACleanerBot* _bot = Cast<ACleanerBot>(GetOwner());
	if (!_bot || _bot->IsDestroy())
		return;
	//Set new target
	targetLocation = _location;
	canMove = true;
	velocity = 1;
}

void UMoveComponent::MoveToTarget()
{
	if (!canMove)
		return;
	FVector _location = FMath::VInterpConstantTo(GetOwnerLocation(), targetLocation, GetWorld()->DeltaTimeSeconds, speed * 100);
	FRotator _rotation = UKismetMathLibrary::FindLookAtRotation(GetOwnerLocation(), targetLocation);
	GetOwner()->SetActorLocation(_location);
	GetOwner()->SetActorRotation(_rotation + FRotator(0, 0, 0));
}

void UMoveComponent::IsReachedDestination()
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