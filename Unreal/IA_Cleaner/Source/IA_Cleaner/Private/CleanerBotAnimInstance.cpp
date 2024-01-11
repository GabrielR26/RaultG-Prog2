// Fill out your copyright notice in the Description page of Project Settings.


#include "CleanerBotAnimInstance.h"
#include "CleanerBot.h"

void UCleanerBotAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	ACleanerBot* _bot = Cast<ACleanerBot>(GetOwningActor());
	if (_bot)
		_bot->MoveComponent()->OnMove().AddDynamic(this, &UCleanerBotAnimInstance::SetSpeed);
}

void UCleanerBotAnimInstance::SetSpeed(float _speed)
{
	speed = _speed;
}
