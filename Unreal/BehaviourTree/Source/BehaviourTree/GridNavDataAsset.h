// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NodeNav.h"
#include "GridNavDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API UGridNavDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere)
	TArray<UNodeNav*> nodes = {};

public:
	FORCEINLINE TArray<UNodeNav*>& Nodes() { return nodes; }
};
