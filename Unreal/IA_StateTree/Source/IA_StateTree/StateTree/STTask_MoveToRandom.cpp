// Fill out your copyright notice in the Description page of Project Settings.

#include "STTask_MoveToRandom.h"
#include "NavigationSystem.h"
#include "StateTreeNodeBase.h"
#include "StateTreeExecutionContext.h"
#include "Test_Pawn.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

EStateTreeRunStatus USTTask_MoveToRandom::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
	//return Super::EnterState(Context, Transition);

	// Task became active, cache event queue and owner.
	SetCachedInstanceDataFromContext(Context);

	//UNavigationSystemV1* _nav = UNavigationSystemV1::GetCurrent(GetWorld());
	//ATest_Pawn* _owner = Cast<ATest_Pawn>(Context.GetOwner());
	//if (!_owner)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("The STTask_MoveToRandom.Context.Owner property didn't cast to ATest_Pawn !!"));
	//	return EStateTreeRunStatus::Running;
	//}
	//FVector _origin = _owner->GetActorLocation();
	//FNavLocation _point;

	//const bool _success = _nav->GetRandomPointInNavigableRadius(_origin, 200, _point);
	//if (!_success)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Failed to find random location during task"));
	//	return EStateTreeRunStatus::Running;
	//}
	
	FVector _location = FVector(UKismetMathLibrary::RandomFloatInRange(-1000, 1000));
	UKismetSystemLibrary::PrintString(this, FString("New location found : " + location.ToString()));

	owner->GetActorLocation();

	return EStateTreeRunStatus::Running;
}

void USTTask_MoveToRandom::ExitState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)
{
	Super::ExitState(Context, Transition);
}

void USTTask_MoveToRandom::StateCompleted(FStateTreeExecutionContext& Context, const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates& CompletedActiveStates)
{
	Super::StateCompleted(Context, CompletionStatus, CompletedActiveStates);
}

EStateTreeRunStatus USTTask_MoveToRandom::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	//return Super::Tick(Context, DeltaTime);
	return EStateTreeRunStatus::Running;
}
