// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();
	InitUI();
}

void AMenuHUD::InitUI()
{
	UBaseUserWidget* _ui = CreateWidget<UBaseUserWidget>(GetWorld(), UIref);
	if (!_ui)
		return;
	_ui->AddToViewport();
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
}