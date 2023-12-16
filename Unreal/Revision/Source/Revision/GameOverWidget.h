// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "GameOverWidget.generated.h"

/**
 * 
 */
UCLASS()
class REVISION_API UGameOverWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
	TObjectPtr<UButton> Button_Exit = nullptr;

	virtual void NativeConstruct() override;
	void BindAction();

	UFUNCTION() void ExitGame();
};
