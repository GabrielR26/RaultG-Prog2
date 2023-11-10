// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUserWidget.h"
#include "TestUtils.h"

void UBaseUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Bind();
}

void UBaseUserWidget::Bind()
{
	if (!ButtonOK || !ButtonKO || !ButtonExit)
		return;
	UE_LOG(LogTemp, Warning, TEXT("BUTTON"));
	ButtonOK->OnClicked.AddDynamic(this, &UBaseUserWidget::LogOK);
	ButtonKO->OnClicked.AddDynamic(this, &UBaseUserWidget::LogKO);
	ButtonExit->OnClicked.AddDynamic(this, &UBaseUserWidget::LogExit);
}

void UBaseUserWidget::LogOK()
{
	UE_LOG(LogTemp, Warning, TEXT("OK"));
}
void UBaseUserWidget::LogKO()
{
	UE_LOG(LogTemp, Warning, TEXT("KO"));
}
void UBaseUserWidget::LogExit()
{
	UE_LOG(LogTemp, Warning, TEXT("EXIT"));
}
