// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/AttackTask.h"
#include "Alien/Alien_Corr.h"
#include "Alien/AttackComponent.h"

EBTNodeResult::Type UAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	AAlien_Corr* _alien = Cast<AAlien_Corr>(brain->GetControlledPawn());
	if (!_alien)
		return EBTNodeResult::Failed;
	_alien->GetAttack()->Attack();
	return EBTNodeResult::Succeeded;
}
