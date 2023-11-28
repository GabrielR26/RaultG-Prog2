// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerDiabloAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_API UPlayerDiabloAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float speed = 0;

public:
	virtual void NativeBeginPlay() override;

	UFUNCTION() void SetSpeed(float _value);
};
