// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/State/AttatckPlayerState.h"
#include "Guard/Guard.h"

void UAttatckPlayerState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	currentGuard = Cast<AGuard>(_fsm->GetActor());
}

void UAttatckPlayerState::Update()
{
	Super::Update();
	if (currentGuard)
	{
		FVector _location = currentGuard->SightComponent()->GetTargetSightLocation();
		currentGuard->MovementComponent()->SetNewTarget(_location);
	}
}
