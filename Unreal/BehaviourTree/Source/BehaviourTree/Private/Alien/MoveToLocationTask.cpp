// Fill out your copyright notice in the Description page of Project Settings.

#include "Alien/MoveToLocationTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Alien/Alien.h"

EBTNodeResult::Type UMoveToLocationTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	targetLocation = brain.Get()->GetBlackboardComponent()->GetValueAsVector(BBKey_Vector_MoveToLocation);
	bNotifyTick = true;
	BTCompo = &OwnerComp;
	return EBTNodeResult::InProgress;
}

void UMoveToLocationTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (moveTo)
		MoveToLocation(DeltaSeconds);
	IsOnLocation();
	DispayDebug();
}

void UMoveToLocationTask::MoveToLocation(float DeltaSeconds)
{
	FVector _location = UKismetMathLibrary::VInterpTo_Constant(brain->GetControlledPawn()->GetActorLocation(), targetLocation, DeltaSeconds, speed);
	FRotator _rotation = UKismetMathLibrary::FindLookAtRotation(brain->GetControlledPawn()->GetActorLocation(), targetLocation);

	brain->GetControlledPawn()->SetActorLocation(_location);
	brain->GetControlledPawn()->SetActorRotation(_rotation);
}

void UMoveToLocationTask::IsOnLocation()
{
	if (FVector::Dist(brain->GetControlledPawn()->GetActorLocation(), targetLocation) < range)
	{
		moveTo = false;
		FinishLatentTask(*BTCompo, EBTNodeResult::Succeeded);
	}
	else
		moveTo = true;
}

void UMoveToLocationTask::DispayDebug()
{
	DrawDebugSphere(GetWorld(), targetLocation, 50, 10, FColor::Red);
	DrawDebugLine(GetWorld(), brain->GetControlledPawn()->GetActorLocation(), targetLocation, FColor::Red);
}
