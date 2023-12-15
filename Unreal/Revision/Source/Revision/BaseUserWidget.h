// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class REVISION_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
	TObjectPtr<UButton> Button_Next = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess, BindWidget))
	TObjectPtr<UTextBlock> Text_Timer = nullptr;

	float timer = 0;
	bool nextEnabled = false;

public:
	FORCEINLINE void SetNextEnabled(bool _value) { nextEnabled = _value; }

private:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void BindAction();
	UFUNCTION() void NextLevel();
};
