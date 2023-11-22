// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerAnimInstance.h"
#include "InputPlayer.h"

void UPlayerAnimInstance::NativeBeginPlay()
{
	ACharacter* _fpc = GetWorld()->GetFirstPlayerController()->GetCharacter();
	Cast<AInputPlayer>(_fpc)->OnXAxisMove().AddDynamic(this, &UPlayerAnimInstance::SetForwardAxis);
}

void UPlayerAnimInstance::SetForwardAxis(float _value)
{
	forwardAxis = _value;
}
