// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeNav.generated.h"

class UGridNavDataAsset;
class AGridNav;
/**
 *
 */
UCLASS()
class BEHAVIOURTREE_API UNodeNav : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	FVector location = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UGridNavDataAsset> grid = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<int> successors = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool isSelected = true;

public:
	FORCEINLINE void SetLocation(FVector _location) { location = _location; }
	FORCEINLINE void SetGrid(UGridNavDataAsset* _grid) { grid = _grid; }
	void AddSuccessor(int _node);
	void DisplayNode(FColor _nodeColor, FColor _lineColor);
};
