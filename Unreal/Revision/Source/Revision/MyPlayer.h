// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "MyPlayer.generated.h"

UCLASS()
class REVISION_API AMyPlayer : public ACharacter
{
	GENERATED_BODY()

#pragma region Events
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToward, float, axis);
	FOnMoveToward onMoveToward;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveSide, float, axis);
	FOnMoveSide onMoveSide;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJump, bool, value);
	FOnJump onJump;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrouch, bool, value);
	FOnCrouch onCrouch;
#pragma endregion

#pragma region Inputs
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TSoftObjectPtr<UInputMappingContext> inputMapping = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> ClickInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> CrouchInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> JumpInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> TowardInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> SideInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> RotationInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> RunInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> ZoomInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Inputs")
	TObjectPtr<UInputAction> ChangeViewInput = nullptr;
#pragma endregion

	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<USpringArmComponent> arm = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> targetToCode = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> layer;

	bool isCrouching = false;
	bool isRunning = false;
	bool isChangeView = false;

public:
	AMyPlayer();

	FORCEINLINE FOnMoveToward& OnMoveToward() { return onMoveToward; }
	FORCEINLINE FOnMoveSide& OnMoveSide() { return onMoveSide; }
	FORCEINLINE FOnJump& OnJump() { return onJump; }
	FORCEINLINE FOnCrouch& OnCrouch() { return onCrouch; }
	FORCEINLINE void SetTargetToCode(AActor* _target) { targetToCode = _target; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region Inputs
	void InitInputSystem();
	void Click(const FInputActionValue& _value);
	void Crouch(const FInputActionValue& _value);
	void ToJump(const FInputActionValue& _value);
	void Toward(const FInputActionValue& _value);
	void Side(const FInputActionValue& _value);
	void Rotation(const FInputActionValue& _value);
	void Run(const FInputActionValue& _value);
	void Zoom(const FInputActionValue& _value);
	void ChangeView(const FInputActionValue& _value);
#pragma endregion

};
