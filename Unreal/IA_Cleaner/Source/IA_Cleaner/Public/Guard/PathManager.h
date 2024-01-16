// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuardPath.h"
#include "PathManager.generated.h"

/**
 * 
 */
UCLASS()
class IA_CLEANER_API UPathManager : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TArray<AGuardPath*> paths = {};

public:
	void AddPath(AGuardPath* _path);
	AGuardPath* GetClosestPath(const FVector& _location);
};
