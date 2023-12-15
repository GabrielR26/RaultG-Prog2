// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUD.h"

void APlayerHUD::BeginPlay()
{
	Super::BeginPlay();
	InitWidget();
}

void APlayerHUD::InitWidget()
{
	if (!widgetRef)
		return;
	UBaseUserWidget* _widget = CreateWidget<UBaseUserWidget>(GetWorld(), widgetRef);
	if (!_widget)
		return;
	_widget->AddToViewport();
}
