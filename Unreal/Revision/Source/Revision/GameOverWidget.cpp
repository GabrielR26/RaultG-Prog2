// Fill out your copyright notice in the Description page of Project Settings.

#include "GameOverWidget.h"
#include "RevisionGameModeBase.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameOverWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BindAction();
	UGameManager* _gm = GetWorld()->GetAuthGameMode<ARevisionGameModeBase>()->GetGameManager();
	if (_gm)
	{
		_gm->SetOverWidget(this);
	}
	else
		UE_LOG(LogTemp, Error, TEXT("GAME MANAGER FAILED"));
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
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
	//TODO close game
}
