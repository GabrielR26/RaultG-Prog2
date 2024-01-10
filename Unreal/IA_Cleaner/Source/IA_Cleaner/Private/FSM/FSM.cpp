// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/FSM.h"
#include "FSM/FSMComponent.h"

void UFSM::StartFSM(UFSMComponent* _owner)
{
	if (!_owner)
		return;
	owner = _owner;
	SetNextState(StartingState);
}

void UFSM::UpdateFSM()
{
	if (currentState)
		currentState->Update();
}

void UFSM::StopFSM()
{
	if (currentState)
		currentState->Exit();
	currentState = nullptr;
}

void UFSM::SetNextState(TSubclassOf<UBaseState> _state)
{
	if (!_state)
		return;
	currentState = NewObject<UBaseState>(this, _state);
	currentState->Enter(this);
}

TObjectPtr<AActor> UFSM::GetActor()
{
	return owner->GetOwner();
}
