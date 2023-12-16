// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LogicDigicode.h"
#include "BaseUserWidget.h"
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
	TObjectPtr<UBaseUserWidget> overWidget = nullptr;

public:
	FORCEINLINE void SetGameWidget(UBaseUserWidget* _widget) { gameWidget = _widget; }
	FORCEINLINE TObjectPtr<UBaseUserWidget> GetWidget() { return gameWidget; }
	//FORCEINLINE void SetWidget(UBaseUserWidget* _widget) { gameWidget = _widget; }
	//FORCEINLINE TObjectPtr<UBaseUserWidget> GetWidget() { return gameWidget; }
};
