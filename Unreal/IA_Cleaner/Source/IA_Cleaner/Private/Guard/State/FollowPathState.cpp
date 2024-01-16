// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/State/FollowPathState.h"
#include "Guard/Guard.h"
#include "Kismet/KismetSystemLibrary.h"

void UFollowPathState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	currentGuard = Cast<AGuard>(_fsm->GetOwner()->GetOwner());
	if (currentGuard)
		currentGuard->MovementComponent()->GetNextWaypoint();
}
