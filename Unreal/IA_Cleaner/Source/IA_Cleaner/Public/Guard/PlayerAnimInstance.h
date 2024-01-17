// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float verticalSpeed = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float horizontalSpeed = 0;

public:
	void NativeBeginPlay() override;
	UFUNCTION() void SetVerticalSpeed(float _speed);
	UFUNCTION() void SetHorizontalSpeed(float _speed);
};
