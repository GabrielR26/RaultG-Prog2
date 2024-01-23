// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class BEHAVIOURTREE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSoftObjectPtr<UInputMappingContext> map = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UInputAction> vertical = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UInputAction> horizontal = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int speed = 10;

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void InitInput();
	void MoveVertical(const FInputActionValue& _value);
	void MoveHorizontal(const FInputActionValue& _value);
};
