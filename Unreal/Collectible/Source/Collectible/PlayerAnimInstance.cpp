// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerAnimInstance.h"
#include "InputPlayer.h"
#include "Kismet/KismetSystemLibrary.h"

void UPlayerAnimInstance::NativeBeginPlay()
{
	ACharacter* _fpc = GetWorld()->GetFirstPlayerController()->GetCharacter();
	Cast<AInputPlayer>(_fpc)->OnXAxisMove().AddDynamic(this, &UPlayerAnimInstance::SetForwardAxis);
	Cast<AInputPlayer>(_fpc)->OnYAxisMove().AddDynamic(this, &UPlayerAnimInstance::SetRightAxis);
	Cast<AInputPlayer>(_fpc)->OnNeutralMove().AddDynamic(this, &UPlayerAnimInstance::SetNeutralAxis);
	Cast<AInputPlayer>(_fpc)->OnJump().AddDynamic(this, &UPlayerAnimInstance::SetIsJumping);
	Cast<AInputPlayer>(_fpc)->OnCrouch().AddDynamic(this, &UPlayerAnimInstance::SetIsCrouch);
}

void UPlayerAnimInstance::SetForwardAxis(float _axis)
{
	forwardAxis = _axis;
}

void UPlayerAnimInstance::SetRightAxis(float _axis)
{
	rightAxis = _axis;
}

void UPlayerAnimInstance::SetNeutralAxis()
{
	forwardAxis = 0;
	rightAxis = 0;
}

void UPlayerAnimInstance::SetIsJumping(bool _value)
{
	isJumping = _value;
}

void UPlayerAnimInstance::SetIsCrouch(bool _value)
{
	isCrouch = _value;
}
