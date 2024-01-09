// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State.h"
#include "FSM/FSMObject.h"
#include "FSM/Transition/WaitProjectilDestroyTransition.h"
#include "FSM/BasicState/ShootState.h"
#include "Kismet/KismetSystemLibrary.h"

void UState::Enter(UFSMObject* _owner)
{
	currentFSM = _owner;
	InitTransitions();
	UKismetSystemLibrary::PrintString(this, "Enter in state " + GetName(), true, true, FColor::Green);
}

void UState::Update()
{
	CheckForValidTransition();
	UKismetSystemLibrary::PrintString(this, "Update in state " + GetName(), true, true, FColor::Yellow, GetWorld()->DeltaTimeSeconds);
}

void UState::Exit()
{
	UKismetSystemLibrary::PrintString(this, "Exit in state " + GetName(), true, true, FColor::Red);
	//Destroy
}

void UState::InitTransitions()
{
	for (TSubclassOf<UTransition> _transition : transitions)
	{
		if (!_transition)
			continue;
		UTransition* _newTransition = NewObject<UTransition>(this, _transition);
		_newTransition->InitTransition();
		runningTransitions.Add(_newTransition);
	}
}

void UState::CheckForValidTransition()
{
	for (TObjectPtr<UTransition> _transition : runningTransitions)
	{
		if (_transition->IsValidTransition())
		{
			Exit();
			currentFSM->SetNextState(_transition->GetNextState());
			return;
		}
	}
}
