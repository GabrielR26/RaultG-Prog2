// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Test_GameState.generated.h"

UCLASS()
class IA_STATETREE_API ATest_GameState : public AGameStateBase
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<APlayerController> player = nullptr;

	UPROPERTY(VisibleAnywhere)
	TArray<FName> levelsToLoad;

public:
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	FORCEINLINE void AddLevelToLoad(const FName& _nameLevel);
	FORCEINLINE void RemoveLevelToLoad(const FName& _nameLevel);

	void Init();
	void RegisterPlayerController(APlayerController* _playerController);
	bool HasLevelToLoad(const FName& _nameLevel);
	void CheckPlayerState();
};
