// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/WaitProjectilDestroyTransition.h"
#include "FSM/BasicState/ShootState.h"

bool UWaitProjectilDestroyTransition::IsValidTransition()
{
	return currentProjectile && currentProjectile->IsActorBeingDestroyed();
}

void UWaitProjectilDestroyTransition::SendProjectile(TObjectPtr<AActor> _projectile)
{
	currentProjectile = _projectile;
}
