// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/BasicState/ThrowState.h"
#include "FSM/FSMComponent.h"
#include "FSM/FSMObject.h"
#include "FSM/Transition/WaitProjectilDestroyTransition.h"

void UThrowState::Enter(UFSMObject* _owner)
{
	Super::Enter(_owner);
	if (!projectileRef)
		return;
	//Spawn projectile
	AActor* _actor = (_owner->GetOwner())->GetOwner();
	FVector _location = _actor->GetActorLocation() + (_actor->GetActorForwardVector() * 50);
	FRotator _rotation = (currentFSM->GetOwner())->GetOwner()->GetActorRotation();
	AActor* _projectile = GetWorld()->SpawnActor<AActor>(projectileRef, _location, _rotation);
	//Init projectile
	_projectile->SetLifeSpan(2);
	if (waitForKill)
		waitForKill->SendProjectile(_projectile);
}

void UThrowState::InitTransitions()
{
	Super::InitTransitions();
	for (size_t i = 0; i < runningTransitions.Num(); i++)
	{
		UWaitProjectilDestroyTransition* _waitProjDestroy = Cast<UWaitProjectilDestroyTransition>(runningTransitions[i]);
		if (_waitProjDestroy)
		{
			waitForKill = _waitProjDestroy;
			return;
		}
	}
}
