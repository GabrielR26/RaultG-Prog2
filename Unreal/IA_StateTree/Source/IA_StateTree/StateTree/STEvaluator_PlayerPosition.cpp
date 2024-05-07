// Fill out your copyright notice in the Description page of Project Settings.


#include "STEvaluator_PlayerPosition.h"
#include "StateTreeExecutionContext.h"
#include "Kismet/KismetSystemLibrary.h"

void USTEvaluator_PlayerPosition::TreeStart(FStateTreeExecutionContext& Context)
{
	Super::TreeStart(Context);
}

void USTEvaluator_PlayerPosition::TreeStop(FStateTreeExecutionContext& Context)
{
	Super::TreeStop(Context);
}

void USTEvaluator_PlayerPosition::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	Super::Tick(Context, DeltaTime);

	AActor* _owner = Context.GetWorld()->GetFirstPlayerController()->GetPawn();
	if (_owner)
	{
		playerLocation = _owner->GetActorLocation();
		//UKismetSystemLibrary::PrintString(this, _owner->GetActorLocation().ToString());
	}
}
