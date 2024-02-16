// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone/State/FollowState.h"
#include "Drone/Drone.h"
#include "FSM/FSMComponent.h"

void UFollowState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	ADrone* _drone = Cast<ADrone>(currentFSM->GetActor());
	if (_drone)
		_drone->MovementComponent()->SetTarget(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void UFollowState::Update()
{
}
