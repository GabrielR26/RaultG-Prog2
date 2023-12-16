// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverWidget.h"
#include "RevisionGameModeBase.h"

void UGameOverWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BindAction();
}

void UGameOverWidget::BindAction()
{
	if (!Button_Exit)
		return;
	Button_Exit->OnClicked.AddDynamic(this, &UGameOverWidget::ExitGame);
}

void UGameOverWidget::ExitGame()
{
	UE_LOG(LogTemp, Warning, TEXT("GAME-OVER"));
	//TODO close game
}
