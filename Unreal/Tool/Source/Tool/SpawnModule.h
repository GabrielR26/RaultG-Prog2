// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpawnModule.generated.h"

/**
 * 
 */
UCLASS(/*EditInLineNew*/)
class TOOL_API USpawnModule : public UDataAsset
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, Category = "Spawn module")
	FString moduleName = "Module";
	UPROPERTY(EditAnywhere, Category = "Spawn module")
	bool moduleEnable = false;

public:
	FORCEINLINE void SetModuleEnable(const bool& _value) { moduleEnable = _value; }
	FORCEINLINE bool GetModuleEnable() { return moduleEnable; }
	FORCEINLINE FString GetModuleName() { return moduleName; }

	virtual void DrawDebug(UWorld* _world, const FVector& _origin);
	virtual TArray<AActor*> Spawn(class ASpawnerTool* _tool);
};
