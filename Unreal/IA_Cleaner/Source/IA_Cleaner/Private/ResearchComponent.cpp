// Fill out your copyright notice in the Description page of Project Settings.


#include "ResearchComponent.h"
#include "CleanerBot.h"
#include "MoveComponent.h"
#include "Trash.h"
#include "Kismet/KismetSystemLibrary.h"

UResearchComponent::UResearchComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UResearchComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	ResearchTrash();
	DrawConeView();
}

void UResearchComponent::ResearchTrash()
{
	if (findTrash)
		return;
	//Hit trash
	if (ConeView())
	{
		ACleanerBot* _bot = Cast<ACleanerBot>(GetOwner());
		if (_bot)
		{
			ATrash* _trash = Cast<ATrash>(hitResult.GetActor());
			currentTrash = _trash;
			_bot->MoveComponent()->SetNewTarget(hitResult.ImpactPoint * FVector(1, 1, 0));
			findTrash = true;
			onFindTrash.Broadcast();
		}
	}
}

bool UResearchComponent::ConeView()
{
	const FVector _start = GetOwnerLocation() + FVector::UpVector * 100;
	//ConeTrace
	float _delta = GetOwner()->GetActorRotation().Yaw + 360; // 360 -> degrees <=> 0
	for (size_t i = _delta - viewAngle; i <= _delta + viewAngle; i++)
	{
		float _x = FMath::Cos(FMath::DegreesToRadians(i)) * viewDistance;
		float _y = FMath::Sin(FMath::DegreesToRadians(i)) * viewDistance;
		FVector _end = _start + FVector(_x, _y, 0);
		if (UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), _start, _end, layersObjects, true, {},
			EDrawDebugTrace::ForOneFrame, hitResult, true))
			return true;
	}
	return false;
}

void UResearchComponent::DrawConeView()
{
	FVector _origin = GetOwnerLocation() + FVector::UpVector * 100;
	float _delta = GetOwner()->GetActorRotation().Yaw;
	//ViewLine 1
	float _x = FMath::Cos(FMath::DegreesToRadians(_delta - viewAngle)) * viewDistance;
	float _y = FMath::Sin(FMath::DegreesToRadians(_delta - viewAngle)) * viewDistance;
	FVector _viewLine = _origin + FVector(_x, _y, 0);
	//DrawDebugLine(GetWorld(), _origin, _viewLine, FColor::Red);
	//ViewLine 2
	_x = FMath::Cos(FMath::DegreesToRadians(_delta + viewAngle)) * viewDistance;
	_y = FMath::Sin(FMath::DegreesToRadians(_delta + viewAngle)) * viewDistance;
	_viewLine = _origin + FVector(_x, _y, 0);
	//DrawDebugLine(GetWorld(), _origin, _viewLine, FColor::Red);
}
