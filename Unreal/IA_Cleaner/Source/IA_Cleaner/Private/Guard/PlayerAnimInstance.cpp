// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/PlayerAnimInstance.h"
#include "Guard/CustomPlayer.h"

void UPlayerAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	ACustomPlayer* _player = Cast<ACustomPlayer>(GetOwningActor());
	if (_player)
	{
		_player->OnMoveVertical().AddDynamic(this, &UPlayerAnimInstance::SetVerticalSpeed);
		_player->OnMoveHorizontal().AddDynamic(this, &UPlayerAnimInstance::SetHorizontalSpeed);
	}
}

void UPlayerAnimInstance::SetVerticalSpeed(float _speed)
{
	verticalSpeed = _speed;
}

void UPlayerAnimInstance::SetHorizontalSpeed(float _speed)
{
	horizontalSpeed = _speed;
}
