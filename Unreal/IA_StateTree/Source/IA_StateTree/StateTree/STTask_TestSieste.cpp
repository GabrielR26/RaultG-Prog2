// Fill out your copyright notice in the Description page of Project Settings.


#include "STTask_TestSieste.h"
#include "Test_Pawn.h"
#include "StateTreeExecutionContext.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

EStateTreeRunStatus USTTask_TestSieste::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
	//return Super::EnterState(Context, Transition);

	// Task became active, cache event queue and owner.
	SetCachedInstanceDataFromContext(Context);

	bool _test = UKismetMathLibrary::RandomBool();
	if (_test)
		Context.SendEvent(treeEvent);

	return EStateTreeRunStatus::Running;
}

void USTTask_TestSieste::ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{

	Super::ExitState(Context, Transition);
}

void USTTask_TestSieste::StateCompleted(FStateTreeExecutionContext& Context, const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates& CompletedActiveStates)
{
	Super::StateCompleted(Context, CompletionStatus, CompletedActiveStates);
}

EStateTreeRunStatus USTTask_TestSieste::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	return Super::Tick(Context, DeltaTime);
}