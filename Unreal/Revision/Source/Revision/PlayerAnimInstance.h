// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * AnimInstance to link player's move and player's animation
 */
UCLASS()
class REVISION_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float towardAxis = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float sideAxis = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	bool jumping = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	bool crouching = false;

public:
	virtual void NativeBeginPlay() override;

	UFUNCTION() FORCEINLINE void SetTowardAxis(float _value) { towardAxis = _value; }
	UFUNCTION() FORCEINLINE void SetSideAxis(float _value) { sideAxis = _value; }
	UFUNCTION() FORCEINLINE void SetJumping(bool _value) { jumping = _value; }
	UFUNCTION() FORCEINLINE void SetCrouching(bool _value) { crouching = _value; }
};
