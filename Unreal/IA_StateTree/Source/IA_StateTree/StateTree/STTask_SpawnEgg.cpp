// Fill out your copyright notice in the Description page of Project Settings.


#include "STTask_SpawnEgg.h"
#include "Test_Pawn.h"
#include "Kismet/KismetSystemLibrary.h"

EStateTreeRunStatus USTTask_SpawnEgg::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
	//return Super::EnterState(Context, Transition);

	// Task became active, cache event queue and owner.
	SetCachedInstanceDataFromContext(Context);

	UKismetSystemLibrary::PrintString(this, FString("Spawn egg"));

	return EStateTreeRunStatus::Running;
}

void USTTask_SpawnEgg::ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{

	Super::ExitState(Context, Transition);
}

void USTTask_SpawnEgg::StateCompleted(FStateTreeExecutionContext& Context, const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates& CompletedActiveStates)
{
	Super::StateCompleted(Context, CompletionStatus, CompletedActiveStates);
}

EStateTreeRunStatus USTTask_SpawnEgg::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	return Super::Tick(Context, DeltaTime);
}