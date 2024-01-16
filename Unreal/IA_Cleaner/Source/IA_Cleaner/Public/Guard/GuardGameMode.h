// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PathManager.h"
#include "GuardGameMode.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API AGuardGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPathManager> pathManagerRef = nullptr;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UPathManager> pathManager = nullptr;

	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void Init();

public:
	FORCEINLINE TObjectPtr<UPathManager> GetPathManager() { return pathManager; }
};
