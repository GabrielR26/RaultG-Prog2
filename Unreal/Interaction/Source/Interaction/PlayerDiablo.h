// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "PlayerDiablo.generated.h"

/// <summary>
/// Exo character
/// </summary>
UCLASS()
class INTERACTION_API APlayerDiablo : public ACharacter
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMouseClick);
	FOnMouseClick onMouseClick;

	UPROPERTY(EditAnywhere, Category = "Settings")
	TSoftObjectPtr<UInputMappingContext> inputMapping = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TObjectPtr<UInputAction> mouseClickInput = nullptr;

	FTimerHandle timer;

public:
	APlayerDiablo();

	FORCEINLINE FOnMouseClick& OnMouseClick() { return onMouseClick; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void InitInputSystem();
	void ClickOnMouse();
};
