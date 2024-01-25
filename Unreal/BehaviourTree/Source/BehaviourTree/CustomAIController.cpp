// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomAIController.h"
#include "DrawDebugHelpers.h"
#include "BehaviorTree/BlackboardComponent.h"

ACustomAIController::ACustomAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACustomAIController::BeginPlay()
{
	Super::BeginPlay();
	Init();
	InitBlackboard();
}

void ACustomAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Debug();
}

void ACustomAIController::Init()
{
	controlledPawn = GetPawn();
	if (!controlledPawn)
		return;
	bAttachToPawn = true;
	//AttachToPawn(controlledPawn);
	RunBehaviorTree(tree);
}

void ACustomAIController::ReceiveTarget(AActor* _target)
{
	GetBlackboardComponent()->SetValueAsObject(keyTarget, _target);
}

void ACustomAIController::ReceiveTargetDetected(bool _value)
{
	GetBlackboardComponent()->SetValueAsBool(keyTargetDetected, _value);
}

void ACustomAIController::ReceiveIsInRange(bool _value)
{
	GetBlackboardComponent()->SetValueAsBool(keyIsInRange, _value);
}

void ACustomAIController::InitBlackboard()
{
}

void ACustomAIController::Debug()
{
	UBlackboardComponent* _bb = Blackboard.Get();
	if (!_bb)
		return;
	const FVector _location = _bb->GetValueAsVector(patrolLocKeyName);
	DrawDebugSphere(GetWorld(), _location, 100, 12, FColor::Red, false, -1, 0, 2);
}
