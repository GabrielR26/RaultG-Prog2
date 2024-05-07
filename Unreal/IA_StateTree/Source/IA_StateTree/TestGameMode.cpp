// Fill out your copyright notice in the Description page of Project Settings.

#include "TestGameMode.h"
#include "Test_GameState.h"
#include "Kismet/KismetSystemLibrary.h"

void ATestGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	//Init();
}

void ATestGameMode::Init()
{
	ATest_GameState* _gs = NewObject<ATest_GameState>(this, GameStateClass);
	if (_gs)
	{
		GameState = _gs;
		_gs->Init();
	}
	else
		throw new std::exception("FAILED TO CREATE MANAGERS");
}
