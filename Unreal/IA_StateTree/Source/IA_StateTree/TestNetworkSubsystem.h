// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/Subsystems/NetworkSubsystem.h"
#include "TestNetworkSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class IA_STATETREE_API UTestNetworkSubsystem : public UNetworkSubsystem
{
	GENERATED_BODY()

public:
	void Initialize(FSubsystemCollectionBase& Collection) override;
};
