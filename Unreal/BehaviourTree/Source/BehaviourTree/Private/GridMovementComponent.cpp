// Fill out your copyright notice in the Description page of Project Settings.


#include "GridMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

UGridMovementComponent::UGridMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

bool UGridMovementComponent::IsAtDestination()
{
	return FVector::Dist(GetOwner()->GetActorLocation(), finalDestination) < range;
}

void UGridMovementComponent::SetPath(TArray<UNodeNav*> _path)
{
	if (_path.IsEmpty())
		return;
	path = _path;
	currentIndex = 0;
	finalDestination = path[path.Num() - 1]->GetLocation();
}

void UGridMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	MoveToDestination();
	DisplayPath();
}

void UGridMovementComponent::MoveToDestination()
{
	if (IsAtDestination() || path.IsEmpty())
		return;
	FVector _location = GetOwner()->GetActorLocation();
	if (FVector::Distance(_location, path[currentIndex]->GetLocation()) < range)
		currentIndex++;
	GetOwner()->SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(_location, path[currentIndex]->GetLocation(), GetWorld()->DeltaTimeSeconds, speed));
	GetOwner()->SetActorRotation(UKismetMathLibrary::FindLookAtRotation(_location, path[currentIndex]->GetLocation()));
}

void UGridMovementComponent::DisplayPath()
{
	if (path.IsEmpty())
		return;
	for (size_t i = 0; i < path.Num() - 1; i++)
		DrawDebugLine(GetWorld(), path[i]->GetLocation(), path[i + 1]->GetLocation(), FColor::Magenta, false, -1, 0, 2);
	DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(), path[currentIndex]->GetLocation(), FColor::Magenta, false, -1, 0, 2);
	DrawDebugSphere(GetWorld(), finalDestination, 100, 12, FColor::Magenta, false, -1, 0, 2);
}
