// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"

void APlayerHUD::BeginPlay()
{
	Super::BeginPlay();
	InitWidget();
}

void APlayerHUD::InitWidget()
{
	if (!gameWidgetRef || ! overWidgetRef)
		return;
	UBaseUserWidget* _gameWidget = CreateWidget<UBaseUserWidget>(GetWorld(), gameWidgetRef);
	UGameOverWidget* _overWidget = CreateWidget<UGameOverWidget>(GetWorld(), overWidgetRef);
	if (!_gameWidget || _overWidget)
		return;
	_gameWidget->AddToViewport();
	_overWidget->AddToViewport();
	_overWidget->SetVisibility(ESlateVisibility::Hidden);
}

void APlayerHUD::GameOverWidget()
{
}
