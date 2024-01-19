// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GuardMovementComponent.h"
#include "GuardSightComponent.h"
#include "../FSM/FSMComponent.h"
#include "../EarsComponent.h"
#include "Guard.generated.h"

UCLASS()
class IA_CLEANER_API AGuard : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USkeletalMeshComponent> skelet = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UGuardMovementComponent> moveComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UGuardSightComponent> sightComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> FSMComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UEarsComponent> earsComponent = nullptr;

	//+ AttackComponent

public:
	AGuard();
	FORCEINLINE TObjectPtr<UGuardMovementComponent> MovementComponent() { return moveComponent; }
	FORCEINLINE TObjectPtr<UGuardSightComponent> SightComponent() { return sightComponent; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
