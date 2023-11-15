// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Translate_3CGameModeBase.generated.h"

/**
 * 
 */
class UManagerCamera;
UCLASS()
class TRANSLATE_3C_API ATranslate_3CGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UManagerCamera> managerCameraRef = nullptr;
	UPROPERTY(VisibleAnywhere, meta=(EditLine))
	TObjectPtr<UManagerCamera> managerCamera = nullptr;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	void Init();
public:
	FORCEINLINE TObjectPtr<UManagerCamera> GetCameraManager() {return managerCamera;}
};
