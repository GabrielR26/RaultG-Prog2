// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/State/RetreatState.h"
#include "Guard/Guard.h"

void URetreatState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	AGuard* _guard = Cast<AGuard>(_fsm->GetActor());
	if (_guard)
		_guard->MovementComponent()->GetClosestWaypoint();
}
