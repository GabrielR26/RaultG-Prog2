// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/FindSomethingTransition.h"
#include "FSM/FSM.h"
#include "CleanerBot.h"

void UFindSomethingTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
		_bot->ResearchComponent()->OnFindTrash().AddDynamic(this, &UFindSomethingTransition::FindTrash);
}

bool UFindSomethingTransition::IsValidTransition()
{
	return isFindTrash;
}

void UFindSomethingTransition::FindTrash()
{
	isFindTrash = true;
}
