// Fill out your copyright notice in the Description page of Project Settings.

#include "Guard/Transition/WaitRandomTransition.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Guard/Guard.h"

void UWaitRandomTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	AGuard* _guard = Cast<AGuard>(_fsm->GetActor());
	if (_guard)
		_guard->MovementComponent()->OnReachedDestination().AddDynamic(this, &UWaitRandomTransition::WaitOnWaypoint);
}

bool UWaitRandomTransition::IsValidTransition()
{
	return isWaitingEnd;
}

void UWaitRandomTransition::WaitOnWaypoint()
{
	if (isWaiting)
		return;
	isWaiting = true;
	float _rand = FMath::RandRange(0.f, maxWaitTimeOnWaypoint);
	//UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(_rand), true, false, FColor::Green);
	GetWorld()->GetTimerManager().SetTimer(waitTimer, this, &UWaitRandomTransition::WaitEnd, _rand, false, -1);
}

void UWaitRandomTransition::WaitEnd()
{
	isWaitingEnd = true;
}
