// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"
#include "RevisionGameModeBase.h"
#include "GameManager.h"

void UBaseUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BindAction();
	UGameManager* _gm = GetWorld()->GetAuthGameMode<ARevisionGameModeBase>()->GameManager();
	if (_gm)
	{
		UE_LOG(LogTemp, Error, TEXT("GAME MANAGER OK"));
		_gm->SetWidget(this);
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
	//Button Next
	Button_Next->SetIsEnabled(nextEnabled);
}

void UBaseUserWidget::BindAction()
{
	if (!Button_Next)
		return;
	Button_Next->OnClicked.AddDynamic(this, &UBaseUserWidget::NextLevel);
}

void UBaseUserWidget::NextLevel()
{
	//TODO next Level
}
