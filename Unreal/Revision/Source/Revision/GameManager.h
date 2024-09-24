// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LogicDigicode.h"
#include "BaseUserWidget.h"
#include "GameOverWidget.h"
#include "GameManager.generated.h"

/**
 * 
 */
UCLASS()
class REVISION_API UGameManager : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UBaseUserWidget> gameWidget = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UGameOverWidget> overWidget = nullptr;

public:
	FORCEINLINE void SetGameWidget(UBaseUserWidget* _widget) { gameWidget = _widget; }
	FORCEINLINE TObjectPtr<UBaseUserWidget> GetGameWidget() { return gameWidget; }
	FORCEINLINE void SetOverWidget(UGameOverWidget* _widget) { overWidget = _widget; }
	FORCEINLINE TObjectPtr<UGameOverWidget> GetOverWidget() { return overWidget; }
};
