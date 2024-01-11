// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FSM/FSMComponent.h"
#include "MoveComponent.h"
#include "ResearchComponent.h"
#include "Spy_CleanerBot.h"
#include "CleanerBot.generated.h"

UCLASS()
class IA_CLEANER_API ACleanerBot : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USkeletalMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UFSMComponent> FSMComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UMoveComponent> moveComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UResearchComponent> researchComponent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<USpy_CleanerBot> spyRef = nullptr;

	TObjectPtr<USpy_CleanerBot> spy = nullptr;

public:
	ACleanerBot();
	FORCEINLINE TObjectPtr<UMoveComponent> MoveComponent() { return moveComponent; }
	FORCEINLINE TObjectPtr<UResearchComponent> ResearchComponent() { return researchComponent; }
	FORCEINLINE TObjectPtr<USpy_CleanerBot> GetSpy() { return spy; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
