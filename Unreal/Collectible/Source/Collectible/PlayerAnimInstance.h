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
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	//float rightAxis = 0;

	FORCEINLINE float GetForwardAxis() { return forwardAxis; }

	virtual void NativeBeginPlay() override;

	void SetForwardAxis(float _value);
};
