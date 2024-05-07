// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Test_GameState.h"
#include "TestGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API UTestGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ATest_GameState> gameStateRef = nullptr;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<ATest_GameState> gameState = nullptr;
	
public:
	void Init() override;
};
