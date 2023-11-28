// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputMappingContext.h"
#include "PlayerSettings.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_API UPlayerSettings : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Parameters")
	TSoftObjectPtr<UInputMappingContext> inputMapping;

	//TODO use
};
