// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interact/InteractComponent.h"
#include "InputConfig.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "CorrCharacter.generated.h"

UCLASS()
class COLLECTIBLE_API ACorrCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USpringArmComponent> springArm = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UCurveFloat> curveX = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int rotateSpeed = 10;
	UPROPERTY(EditAnywhere, Category = "Interaction")
	TObjectPtr<UInteractComponent> interact = nullptr;
	UPROPERTY(EditAnywhere, Category = "Interaction")
	TObjectPtr<UInputConfig> inputConfig = nullptr;

	float axis, timeX;

public:
	ACorrCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION() void MoveForward(const FInputActionValue& _value);
	UFUNCTION() void ReleaseForward(const FInputActionValue& _value);
	UFUNCTION() void Rotate(const FInputActionValue& _value);
	UFUNCTION() void RotateCharacter(const FInputActionValue& _value);
	UFUNCTION() void ToJump(const FInputActionValue& _value);
	UFUNCTION() void ToCrouch(const FInputActionValue& _value);

};
