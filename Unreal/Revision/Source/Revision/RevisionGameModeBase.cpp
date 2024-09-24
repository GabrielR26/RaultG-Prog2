// Copyright Epic Games, Inc. All Rights Reserved.


#include "RevisionGameModeBase.h"

void ARevisionGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	Init();
}

void ARevisionGameModeBase::Init()
{
	if (!gameManagerRef)
		return;
	gameManager = NewObject<UGameManager>(this, gameManagerRef);
	if (!gameManager)
		throw new std::exception("FAILED TO CREATE MANAGERS");
	UE_LOG(LogTemp, Warning, TEXT("SUCCESS TO CREATE MANAGER"));
}
