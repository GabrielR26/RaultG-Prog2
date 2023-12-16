// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BaseUserWidget.h"
#include "GameOverWidget.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class REVISION_API APlayerHUD : public AHUD
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBaseUserWidget> gameWidgetRef = nullptr;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameOverWidget> overWidgetRef = nullptr;

private:
	virtual void BeginPlay() override;
	void InitWidget();
	void GameOverWidget();
};
