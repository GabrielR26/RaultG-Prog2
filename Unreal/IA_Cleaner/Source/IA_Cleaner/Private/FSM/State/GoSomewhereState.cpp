// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State/GoSomewhereState.h"
#include "FSM/FSM.h"
#include "CleanerBot.h"
#include "MoveComponent.h"
#include "Kismet/KismetSystemLibrary.h"

void UGoSomewhereState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
	{
		float _xRange = FMath::FRandRange(-maxRangeMovement, maxRangeMovement);
		float _yRange = FMath::FRandRange(-maxRangeMovement, maxRangeMovement);
		targetLocation = FVector(_xRange, _yRange, 0);
		_bot->MoveComponent()->SetNewTarget(targetLocation);
	}
}

void UGoSomewhereState::Update()
{
	Super::Update();
	DrawDebugSphere(GetWorld(), targetLocation, 100, 10, FColor::Magenta, false, -1, 0, 2);
	DrawDebugLine(GetWorld(), currentFSM->GetActor()->GetActorLocation(), targetLocation, FColor::Magenta, false, -1, 0, 5);
}
