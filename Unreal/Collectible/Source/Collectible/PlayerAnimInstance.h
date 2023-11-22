// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 *
 */
UCLASS()
class COLLECTIBLE_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float forwardAxis = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float rightAxis = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	bool isJumping = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	bool isCrouch = false;

	virtual void NativeBeginPlay() override;

	UFUNCTION() void SetForwardAxis(float _axis);
	UFUNCTION() void SetRightAxis(float _axis);
	UFUNCTION() void SetNeutralAxis();
	UFUNCTION() void SetIsJumping(bool _value);
	UFUNCTION() void SetIsCrouch(bool _value);
};
