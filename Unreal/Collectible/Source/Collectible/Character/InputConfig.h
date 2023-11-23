// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingContext.h"
#include "InputConfig.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTIBLE_API UInputConfig : public UDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UInputMappingContext> context = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> forward = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> rotate = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> rotateCharacter = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> interaction = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> jump = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> crouch = nullptr;
	
public:
	FORCEINLINE TSoftObjectPtr<UInputMappingContext> Context() const { return context; }
	FORCEINLINE UInputAction* ForwardInput() const { return forward; }
	FORCEINLINE UInputAction* RotateInput() const { return rotate; }
	FORCEINLINE UInputAction* RotateCharacterInput() const { return rotateCharacter; }
	FORCEINLINE UInputAction* InteractInput() const { return interaction; }
	FORCEINLINE UInputAction* JumpInput() const { return jump; }
	FORCEINLINE UInputAction* CrouchInput() const { return crouch; }

	void EnableInputContext(ULocalPlayer* _player);
};
