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
	TObjectPtr<UBaseUserWidget> widget = nullptr;

public:
	FORCEINLINE void SetWidget(UBaseUserWidget* _widget) { widget = _widget; }
	FORCEINLINE TObjectPtr<UBaseUserWidget> GetWidget() { return widget; }
};
