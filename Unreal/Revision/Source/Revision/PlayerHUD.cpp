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
	gameWidget = CreateWidget<UBaseUserWidget>(GetWorld(), gameWidgetRef);
	overWidget = CreateWidget<UGameOverWidget>(GetWorld(), overWidgetRef);
	if (!gameWidget || !overWidget)
		return;
	gameWidget->AddToViewport();
	overWidget->AddToViewport();
	overWidget->SetVisibility(ESlateVisibility::Hidden);
}

void APlayerHUD::GameOverWidget()
{
	gameWidget->SetVisibility(ESlateVisibility::Hidden);
	overWidget->SetVisibility(ESlateVisibility::Visible);
}
