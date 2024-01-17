// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardAnimInstance.h"
#include "Guard/Guard.h"

void UGuardAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	AGuard* _guard = Cast<AGuard>(GetOwningActor());
	if (_guard)
		_guard->MovementComponent()->OnMove().AddDynamic(this, &UGuardAnimInstance::SetSpeed);
}

void UGuardAnimInstance::SetSpeed(float _speed)
{
	speed = _speed;
}
