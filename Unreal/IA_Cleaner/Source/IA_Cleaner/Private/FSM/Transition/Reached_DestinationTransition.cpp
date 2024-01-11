// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/Reached_DestinationTransition.h"
#include "MoveComponent.h"
#include "CleanerBot.h"

void UReached_DestinationTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
		_bot->MoveComponent()->OnReachedDestination().AddDynamic(this, &UReached_DestinationTransition::ReachedDestination);
}

bool UReached_DestinationTransition::IsValidTransition()
{
	return isReachedDestination;
}

void UReached_DestinationTransition::ReachedDestination()
{
	isReachedDestination = true;
}
