// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../FSM/FSMComponent.h"
#include "DroneMovementComponent.h"
#include "Drone.generated.h"

UCLASS()
class IA_CLEANER_API ADrone : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> FSMComponent = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TObjectPtr<UDroneMovementComponent> moveComponent = nullptr;

public:
	ADrone();
	FORCEINLINE TObjectPtr<UDroneMovementComponent> MoveComponent() { return moveComponent; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
