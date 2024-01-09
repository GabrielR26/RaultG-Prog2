// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/BasicState/ShootState.h"
#include "FSM/FSMObject.h"
#include "FSM/FSMComponent.h"

void UShootState::Enter(UFSMObject* _owner)
{
	Super::Enter(_owner);
	if (!projectileRef)
		return;
	AActor* _actor = (currentFSM->GetOwner())->GetOwner();
	FVector _location = _actor->GetActorLocation() + (_actor->GetActorForwardVector() * 50);
	FRotator _rotation = (currentFSM->GetOwner())->GetOwner()->GetActorRotation();
	projectile = GetWorld()->SpawnActor<AActor>(projectileRef, _location, _rotation);

	GetWorld()->GetTimerManager().SetTimer(projectileTimer, this, &UShootState::DestroyProjectile, projectileTime, false);
}

void UShootState::Update()
{
	Super::Update();
	if (projectile)
		projectile->AddActorWorldOffset(projectile->GetActorForwardVector() * 2);
}

void UShootState::DestroyProjectile()
{
	if (projectile)
		projectile->Destroy();
	projectile = nullptr;
	onDestroyProjectile.Broadcast();
}
