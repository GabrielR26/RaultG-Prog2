// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/Transition/WaitRetreatTransition.h"
#include "Guard/Guard.h"

void UWaitRetreatTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	AGuard* _guard = Cast<AGuard>(_fsm->GetActor());
	if (_guard)
		_guard->MovementComponent()->OnReachedDestination().AddDynamic(this, &UWaitRetreatTransition::OnRetreat);
}

bool UWaitRetreatTransition::IsValidTransition()
{
	return isRetreat;
}

void UWaitRetreatTransition::OnRetreat()
{
	isRetreat = true;
}
