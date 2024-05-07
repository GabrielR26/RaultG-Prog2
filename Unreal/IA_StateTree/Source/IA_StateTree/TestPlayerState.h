// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TestPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API ATestPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	void LoadLevel(const FName& _nameLevel);
	void UnloadLevel(const FName& _nameLevel);
};
