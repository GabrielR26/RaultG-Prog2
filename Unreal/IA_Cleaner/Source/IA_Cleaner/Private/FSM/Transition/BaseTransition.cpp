// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/BaseTransition.h"

void UBaseTransition::InitTransition(UFSM* _fsm)
{
	if (_fsm)
		currentFSM = _fsm;
}

bool UBaseTransition::IsValidTransition()
{
	return false;
}
