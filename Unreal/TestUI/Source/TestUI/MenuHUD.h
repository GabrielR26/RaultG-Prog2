// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BaseUserWidget.h"
#include "MenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTUI_API AMenuHUD : public AHUD
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBaseUserWidget> UIref = nullptr;

private:
	virtual void BeginPlay() override;
	void InitUI();
};
