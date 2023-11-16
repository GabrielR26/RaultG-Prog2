// Copyright Epic Games, Inc. All Rights Reserved.

#include "Translate_3CGameModeBase.h"
#include "ManagerCamera.h"
#include "ActorManager.h"

void ATranslate_3CGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	Init();
}

void ATranslate_3CGameModeBase::Init()
{
	if (managerCameraRef)
		managerCamera = NewObject<UManagerCamera>(this, managerCameraRef);
	if (actorManagerRef)
		actorManager = NewObject<UActorManager>(this, actorManagerRef);
	if (!managerCamera || !actorManager)
		throw new std::exception("FAILED TO CREATE MANAGERS");
	UE_LOG(LogTemp, Warning, TEXT("SUCCESS TO CREATE MANAGERS"));
}
