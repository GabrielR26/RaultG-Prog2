// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_GameState.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TestPlayerState.h"
#include "TestPlayerController.h"
#include <Net/UnrealNetwork.h>

void ATest_GameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//DOREPLIFETIME(ATest_GameState, hostLevelToLoad);
	//DOREPLIFETIME(ATest_GameState, clientLevelToLoad);
	//DOREPLIFETIME(ATest_GameState, host);
	//DOREPLIFETIME(ATest_GameState, client);
}

void ATest_GameState::AddLevelToLoad(const FName& _nameLevel)
{
	if (!levelsToLoad.Contains(_nameLevel))
		levelsToLoad.Add(_nameLevel);

	ATestPlayerController* _playerController = Cast<ATestPlayerController>(player);
	if (_playerController)
		_playerController->LoadLevel(_nameLevel);
}

void ATest_GameState::RemoveLevelToLoad(const FName& _nameLevel)
{
	if (levelsToLoad.Contains(_nameLevel))
		levelsToLoad.Remove(_nameLevel);

	ATestPlayerController* _playerController = Cast<ATestPlayerController>(player);
	if (_playerController)
		_playerController->UnloadLevel(_nameLevel);
}

void ATest_GameState::Init()
{
	UKismetSystemLibrary::PrintString(this, "GameState initialize", true, true, FLinearColor::Blue, 2);
	//bNetLoadOnClient = true;
}

void ATest_GameState::RegisterPlayerController(APlayerController* _playerController)
{
	player = _playerController;
	UKismetSystemLibrary::PrintString(this, "Register player", true, true, FLinearColor::Blue, 5);
}

bool ATest_GameState::HasLevelToLoad(const FName& _nameLevel)
{
	int _size = levelsToLoad.Num();
	UKismetSystemLibrary::PrintString(this, "Levels to load: " + FString::FromInt(_size), true, true, FLinearColor::Green, 5);
	for (size_t i = 0; i < _size; i++)
	{
		if (levelsToLoad[i] == _nameLevel)
			return true;
	}
	return false;
}

void ATest_GameState::CheckPlayerState()
{
	int _sizePlayer = PlayerArray.Num();
	UKismetSystemLibrary::PrintString(this, "PlayerState: " + FString::FromInt(_sizePlayer));
}
