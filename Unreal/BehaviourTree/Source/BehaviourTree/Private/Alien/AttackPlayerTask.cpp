// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/AttackPlayerTask.h"

EBTNodeResult::Type UAttackPlayerTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	APawn* _player = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (_player && FVector::Dist(brain->GetControlledPawn()->GetActorLocation(), _player->GetActorLocation()) < attackRange)
		AttackPlayer();
	return EBTNodeResult::Succeeded;
}

void UAttackPlayerTask::AttackPlayer()
{
	UE_LOG(LogTemp, Warning, TEXT("ATTACK PLAYER"));
}
