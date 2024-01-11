// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State/BaseState.h"
#include "FSM/FSM.h"
#include "Kismet/KismetSystemLibrary.h"

void UBaseState::Enter(UFSM* _fsm)
{
	if (!_fsm)
		return;
	currentFSM = _fsm;
	InitTransitions();
	//UKismetSystemLibrary::PrintString(this, "Enter in state " + GetName(), true, false, FColor::Green);
}

void UBaseState::Update()
{
	CheckIsValidTransition();
	//UKismetSystemLibrary::PrintString(this, "Update state " + GetName(), true, false, FColor::Yellow, GetWorld()->DeltaTimeSeconds);
}

void UBaseState::Exit()
{
	//UKismetSystemLibrary::PrintString(this, "Exit of state " + GetName(), true, false, FColor::Red);
}

void UBaseState::InitTransitions()
{
	for (TSubclassOf<UBaseTransition> _transition : baseTransitions)
	{
		if (!_transition)
			continue;
		UBaseTransition* _newTransition = NewObject<UBaseTransition>(this, _transition);
		_newTransition->InitTransition(currentFSM);
		transitions.Add(_newTransition);
	}
}

void UBaseState::CheckIsValidTransition()
{
	for (TObjectPtr<UBaseTransition> _transition : transitions)
	{
		if (_transition && _transition->IsValidTransition())
		{
			Exit();
			currentFSM->SetNextState(_transition->GetNextState());
			return;
		}
	}
}
