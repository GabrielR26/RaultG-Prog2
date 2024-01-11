// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State/CleanState.h"
#include "FSM/FSM.h"
#include "CleanerBot.h"

void UCleanState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
	{
		trashToClean = _bot->ResearchComponent()->GetCurrentTrash();
		_bot->MoveComponent()->OnReachedDestination().AddDynamic(this, &UCleanState::BeginClean);
	}
}

void UCleanState::BeginClean()
{
	GetWorld()->GetTimerManager().SetTimer(cleanTimer, this, &UCleanState::FinishClean, timeToClean, false);
}

void UCleanState::FinishClean()
{
	if (!trashToClean)
		return;
	trashToClean->Destroy();
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
		_bot->ResearchComponent()->SetFindTrash(false);
	onFinishClean.Broadcast();
}
