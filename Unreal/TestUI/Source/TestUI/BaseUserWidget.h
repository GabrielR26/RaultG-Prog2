// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "BaseUserWidget.generated.h"

/**
 *
 */
UCLASS()
class TESTUI_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
		TObjectPtr<UButton> ButtonOK = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
		TObjectPtr<UButton> ButtonKO = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
		TObjectPtr<UButton> ButtonExit = nullptr;

	virtual void NativeConstruct() override;
	void Bind();
	UFUNCTION() void LogOK();
	UFUNCTION() void LogKO();
	UFUNCTION() void LogExit();
};
