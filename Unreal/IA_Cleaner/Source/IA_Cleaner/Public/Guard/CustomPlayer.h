// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "CustomPlayer.generated.h"

UCLASS()
class IA_CLEANER_API ACustomPlayer : public ACharacter
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveVertical, float, _speed);
	FOnMoveVertical onMoveVertical;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveHorizontal, float, _speed);
	FOnMoveHorizontal onMoveHorizontal;

	UPROPERTY(EditAnywhere, Category = "Input")
	TSoftObjectPtr<UInputMappingContext> context = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> vertical = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> horizontal = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input")
	int speed = 10;

public:
	ACustomPlayer();
	FORCEINLINE FOnMoveVertical& OnMoveVertical() { return onMoveVertical; }
	FORCEINLINE FOnMoveHorizontal& OnMoveHorizontal() { return onMoveHorizontal; }

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void InitInput();
	void MoveVerticaly(const FInputActionValue& _value);
	void MoveHorizontaly(const FInputActionValue& _value);
};
