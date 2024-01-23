// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/FindPlayerTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PlayerCharacter.h"

EBTNodeResult::Type UFindPlayerTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	APawn* _player = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (_player)
	{
		brain.Get()->GetBlackboardComponent()->SetValueAsVector(BBKey_Vector_MoveToLocation, _player->GetActorLocation());
		return EBTNodeResult::Succeeded;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find player during task"));
		return EBTNodeResult::Failed;
	}
}
