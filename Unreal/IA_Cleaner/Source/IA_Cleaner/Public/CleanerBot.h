// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FSM/FSMComponent.h"
#include "CleanerBot.generated.h"

UCLASS()
class IA_CLEANER_API ACleanerBot : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> FSM = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float speed = 100;

	FVector targetLocation;
	bool canMove = false;

public:
	FORCEINLINE void SetCanMove(bool _value) { canMove = _value; }

	ACleanerBot();
	void GoSomewhere(FVector _location);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveToTarget();
};
