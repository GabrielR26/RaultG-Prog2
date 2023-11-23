// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "CollectibleObject.h"
#include "InputPlayer.generated.h"

UCLASS()
class COLLECTIBLE_API AInputPlayer : public ACharacter
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXAxisMove, float, _axis);
	FOnXAxisMove onXAxisMove;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnYAxisMove, float, _axis);
	FOnYAxisMove onYAxisMove;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJump, bool, _isJump);
	FOnJump onJump;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrouch, bool, _isCrouch);
	FOnCrouch onCrouch;

	UPROPERTY(EditAnywhere, Category = "Input map")
		TSoftObjectPtr<UInputMappingContext> inputMapping = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> XAxisInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> YAxisInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> jumpInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> crouchInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> mouseAxisInput = nullptr;
	UPROPERTY(EditAnywhere, Category = "Input map")
		TObjectPtr<UInputAction> interactInput = nullptr;

	UPROPERTY(EditAnywhere, Category = "Overlapping")
		TArray<TEnumAsByte<EObjectTypeQuery>> layerObject;
	UPROPERTY(EditAnywhere, Category = "Overlapping")
		float range = 200;

	ACollectibleObject* currentCollectible = nullptr;
	bool canCollect = true;
	bool toCollect = false;

public:
	AInputPlayer();

	FORCEINLINE FOnXAxisMove& OnXAxisMove() { return onXAxisMove; }
	FORCEINLINE FOnYAxisMove& OnYAxisMove() { return onYAxisMove; }
	FORCEINLINE FOnJump& OnJump() { return onJump; }
	FORCEINLINE FOnCrouch& OnCrouch() { return onCrouch; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CheckCollectible();
	void KeepCollectible();

	void InitInputSystem();
	void MoveXAxis(const FInputActionValue& _value);
	void MoveYAxis(const FInputActionValue& _value);
	void ToJump(const FInputActionValue& _value);
	void ToCrouch(const FInputActionValue& _value);
	void MoveCamera(const FInputActionValue& _value);
	void ToInteract(const FInputActionValue& _value);
};
