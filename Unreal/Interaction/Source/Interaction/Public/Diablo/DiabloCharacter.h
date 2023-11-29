// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "DiabloCharacter.generated.h"

/// <summary>
/// Correction character
/// </summary>
UCLASS()
class INTERACTION_API ADiabloCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Settings")
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TObjectPtr<USpringArmComponent> arm = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
	float minRange = 100;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<TEnumAsByte<EObjectTypeQuery>> interactLayer;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<AActor*> actorToIgnore = { this };

	UPROPERTY(EditAnywhere, Category = "Settings")
	TSoftObjectPtr<UInputMappingContext> inputMapping = nullptr;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TObjectPtr<UInputAction> mouseClickInput = nullptr;

	FVector destination;
	FHitResult result;

public:
	ADiabloCharacter();

	FORCEINLINE bool IsAtLocation() const { return FVector::Distance(GetActorLocation(), destination) < minRange; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void InitInputSystem();
	void MoveTo(float _delta);
	void RotateTo(float _delta);
	void GetTargetLocation();
};
