// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameManager.h"
#include "RevisionGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class REVISION_API ARevisionGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameManager> gameManagerRef = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (EditLine, AllowPrivateAccess))
	TObjectPtr<UGameManager> gameManager = nullptr;

	FTimerHandle timerOffset;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void Init();
public:
	FORCEINLINE TObjectPtr<UGameManager> GetGameManager() { return gameManager; }
};
