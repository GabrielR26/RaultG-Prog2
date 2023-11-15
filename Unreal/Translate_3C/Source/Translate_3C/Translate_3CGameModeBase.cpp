// Copyright Epic Games, Inc. All Rights Reserved.

#include "Translate_3CGameModeBase.h"
#include "ManagerCamera.h"

void ATranslate_3CGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	Init();
}

void ATranslate_3CGameModeBase::Init()
{
	if (managerCameraRef)
		managerCamera = NewObject<UManagerCamera>(this, managerCameraRef);
	if (!managerCamera)
		throw new std::exception("FAILED TO CREATE MANAGER");
	UE_LOG(LogTemp, Warning, TEXT("SUCCESS TO CREATE MANAGER"));
}
