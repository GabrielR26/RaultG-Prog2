// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "MyPlayer.h"

void UPlayerAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	AMyPlayer* _player = Cast<AMyPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (_player)
	{
		_player->OnMoveToward().AddDynamic(this, &UPlayerAnimInstance::SetTowardAxis);
		_player->OnMoveSide().AddDynamic(this, &UPlayerAnimInstance::SetSideAxis);
		_player->OnJump().AddDynamic(this, &UPlayerAnimInstance::SetJumping);
		_player->OnCrouch().AddDynamic(this, &UPlayerAnimInstance::SetCrouching);
	}
}
