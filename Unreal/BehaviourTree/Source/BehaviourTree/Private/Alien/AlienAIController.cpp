// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/AlienAIController.h"
#include "Alien/Alien.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAlienAIController::Init()
{
	Super::Init();
}

void AAlienAIController::InitBlackboard()
{
	AAlien* _alien = Cast<AAlien>(controlledPawn);
	if (_alien)
		_alien->OnViewTarget().AddDynamic(this, &AAlienAIController::SetViewTarget);
}

void AAlienAIController::SetViewTarget(bool _value)
{
	GetBlackboardComponent()->SetValueAsBool(BBKey_ViewPlayer, _value);
}
