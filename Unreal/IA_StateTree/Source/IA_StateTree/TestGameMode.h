// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API ATestGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void Init();
};
