// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardGameMode.h"

void AGuardGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	Init();
}

void AGuardGameMode::Init()
{
	if (!pathManagerRef)
		return;
	pathManager = NewObject<UPathManager>(this, pathManagerRef);
}
