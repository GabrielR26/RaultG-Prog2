// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../NodeNav.h"
#include "AStarAlgo.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BEHAVIOURTREE_API UAStarAlgo : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> layerObstacle = {};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameter", meta = (AllowPrivateAccess))
	TArray<UNodeNav*> correctPath = {};

public:
	void ComputePath(UNodeNav* _start, UNodeNav* _end);
	TArray<UNodeNav*> GetFinalPath(UNodeNav* _start, UNodeNav* _end);
};
