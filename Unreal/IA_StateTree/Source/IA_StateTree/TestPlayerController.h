// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IA_StateTreePlayerController.h"
#include "TestPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API ATestPlayerController : public AIA_StateTreePlayerController
{
	GENERATED_BODY()
	
public:
	void LoadLevel(const FName& _nameLevel);
	void UnloadLevel(const FName& _nameLevel);
};
