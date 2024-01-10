// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/State/GoSomewhereState.h"
#include "FSM/FSM.h"
#include "CleanerBot.h"
#include "Kismet/KismetSystemLibrary.h"

void UGoSomewhereState::Enter(UFSM* _fsm)
{
	Super::Enter(_fsm);
	ACleanerBot* _bot = Cast<ACleanerBot>(currentFSM->GetActor());
	if (_bot)
	{
		float _xRange = FMath::FRandRange(100, maxRangeMovement);
		float _yRange = FMath::FRandRange(100, maxRangeMovement);
		targetLocation = _bot->GetActorLocation() + FVector(_xRange, _yRange, 0);
		_bot->GoSomewhere(targetLocation);
		_bot->SetCanMove(true);
		UKismetSystemLibrary::PrintString(this, FString::FormatAsNumber(_xRange) + " / " + FString::FormatAsNumber(_yRange), true, false, FColor::Blue, 10);
	}
}

void UGoSomewhereState::Update()
{
	Super::Update();
	DrawDebugSphere(GetWorld(), targetLocation, 100, 10, FColor::Magenta, false, -1, 0, 2);
}

void UGoSomewhereState::Exit()
{
	Super::Exit();
}
