// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State/IdleState.h"
#include "FSM/FSM.h"
#include "CleanerBot.h"

void UIdleState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
		_bot->SetCanMove(false);
}
