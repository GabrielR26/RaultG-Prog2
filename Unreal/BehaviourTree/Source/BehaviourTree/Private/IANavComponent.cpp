// Fill out your copyright notice in the Description page of Project Settings.


#include "IANavComponent.h"
#include "NavigationSystem.h"

UIANavComponent::UIANavComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UIANavComponent::BeginPlay()
{
	Super::BeginPlay();
	if (aStarRef)
		aStar = NewObject<UAStarAlgo>(this, aStarRef);
}

void UIANavComponent::GenerateNavPathRandom()
{
	if (!aStar)
		return;
	UNodeNav* _start = nullptr; //Node closest of start/end
	UNodeNav* _end = nullptr;
	_start = grid->Save()->GetClosestNodeIndex(GetOwner()->GetActorLocation());

	UNavigationSystemV1* _nav = UNavigationSystemV1::GetCurrent(GetWorld());
	FNavLocation _point;
	const bool _success = _nav->GetRandomPointInNavigableRadius(GetOwner()->GetActorLocation(), radius, _point);
	if (!_success)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find random location during task"));
		return;
	}
	_end = grid->Save()->GetClosestNodeIndex(_point.Location);

	aStar->ComputePath(_start, _end);
}

void UIANavComponent::GenerateNavPathWithTarget(FVector _target)
{
	if (!aStar)
		return;
	UNodeNav* _start = nullptr;
	UNodeNav* _end = nullptr;
	_start = grid->Save()->GetClosestNodeIndex(GetOwner()->GetActorLocation());
	_end = grid->Save()->GetClosestNodeIndex(_target);

	aStar->ComputePath(_start, _end);
}