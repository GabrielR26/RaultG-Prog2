// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputMappingContext.h"
#include "PawnInput.generated.h"

UCLASS()
class TRANSLATE_3C_API APawnInput : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Setting")
	TSoftObjectPtr<UInputMappingContext> inputMapping = nullptr;
	UPROPERTY(EditAnywhere, Category = "Setting")
	TObjectPtr<UInputAction> forwardInput = nullptr;

public:
	APawnInput();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void InitInputSystem();
	void MoveForward(const FInputActionValue& _value);
};
