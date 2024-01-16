// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/Transition/PlayerInSightTransition.h"
#include "Guard/Guard.h"

void UPlayerInSightTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	guard = Cast<AGuard>(_fsm->GetActor());
	if (guard)
		guard->SightComponent()->OnPlayerInSight().AddDynamic(this, &UPlayerInSightTransition::PlayerInSight);
}

bool UPlayerInSightTransition::IsValidTransition()
{
	return isPlayerInSight;
}

void UPlayerInSightTransition::PlayerInSight(bool _isPlayerInSight)
{
	isPlayerInSight = _isPlayerInSight;
}
