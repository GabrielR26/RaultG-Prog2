// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Spy_CleanerBot.generated.h"

class ACleanerBot;
/**
 * 
 */
UCLASS(Blueprintable)
class IA_CLEANER_API USpy_CleanerBot : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<ACleanerBot> cleanerBot = nullptr;

	int attemptToFindTrash = 0;
	int trashFind = 0;

public:
	void InitSpy(ACleanerBot* _bot);
	void Check(float _deltaTime);
	UFUNCTION() void AddAttemptToFindTrash();
	UFUNCTION() void AddTrashFind();
};
