// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"
#include "RevisionGameModeBase.h"
#include "GameManager.h"
#include "PlayerHUD.h"

void UBaseUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BindAction();
	UGameManager* _gm = GetWorld()->GetAuthGameMode<ARevisionGameModeBase>()->GetGameManager();
	if (_gm)
	{
		UE_LOG(LogTemp, Warning, TEXT("GAME MANAGER OK"));
		_gm->SetGameWidget(this);
	}
	else
		UE_LOG(LogTemp, Error, TEXT("GAME MANAGER FAILED"));
}

void UBaseUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	//Timer
	timer += InDeltaTime;
	FString _timerMin = FString::FormatAsNumber((int)timer / 60);
	FString _timerSec = FString::FormatAsNumber(timer - ((int)timer / 60) * 60);
	FText _text = FText::FromString(_timerMin + " : " + _timerSec);
	Text_Timer->SetText(_text);
}

void UBaseUserWidget::BindAction()
{
	if (!Button_Next)
		return;
	Button_Next->OnClicked.AddDynamic(this, &UBaseUserWidget::NextLevel);
}

void UBaseUserWidget::NextLevel()
{
	APlayerHUD* _HUD = Cast<APlayerHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (_HUD)
		_HUD->GameOverWidget();
}
