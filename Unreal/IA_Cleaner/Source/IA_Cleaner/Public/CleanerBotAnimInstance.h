// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CleanerBot.h"
#include "CleanerBotAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UCleanerBotAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	float speed = 0;

public:
	void NativeBeginPlay() override;
	UFUNCTION() void SetSpeed(float _speed);
};
