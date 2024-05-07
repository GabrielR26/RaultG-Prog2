// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Test_StateTreeComponent.h"
#include "Test_Pawn.generated.h"

UCLASS()
class IA_STATETREE_API ATest_Pawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, category = "Component")
	TObjectPtr<UTest_StateTreeComponent> stateTreeComponent = nullptr;

public:
	ATest_Pawn();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
