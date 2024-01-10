// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/WaitTransition.h"

void UWaitTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	GetWorld()->GetTimerManager().SetTimer(waitTimer, this, &UWaitTransition::FinishTime, waitTime, false);
}

bool UWaitTransition::IsValidTransition()
{
	return timerFinished;
}

void UWaitTransition::FinishTime()
{
	timerFinished = true;
}
