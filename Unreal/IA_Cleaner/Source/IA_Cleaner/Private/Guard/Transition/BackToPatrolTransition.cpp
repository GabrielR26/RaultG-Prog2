// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/Transition/BackToPatrolTransition.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Guard/Guard.h"

void UBackToPatrolTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	GetWorld()->GetTimerManager().SetTimer(customTimer, this, &UBackToPatrolTransition::BackToPatrol, timer, false, -1);
}

bool UBackToPatrolTransition::IsValidTransition()
{
	return backToPatrol;
}

void UBackToPatrolTransition::BackToPatrol()
{
	UKismetSystemLibrary::PrintString(this, "BACK TO PATROL");
	backToPatrol = true;
}
