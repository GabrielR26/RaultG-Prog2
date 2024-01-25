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
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool isOpen = true;

	//Nav
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UNodeNav> parent = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float g = INFINITY; //from's distance
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float h = INFINITY; //to's distance
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float f = INFINITY; //G + H
	//

public:
	FORCEINLINE bool GetIsOpen() { return isOpen; }
	FORCEINLINE TObjectPtr<UGridNavDataAsset> GetGrid() { return grid; }
	FORCEINLINE TArray<int> GetSuccessors() { return successors; }
	FORCEINLINE FVector GetLocation() { return location; }
	FORCEINLINE float G() { return g; }
	FORCEINLINE float H() { return h; }
	FORCEINLINE float F() { return f; }
	FORCEINLINE TObjectPtr<UNodeNav> GetParent() { return parent; }
	FORCEINLINE void SetLocation(FVector _location) { location = _location; }
	FORCEINLINE void SetGrid(UGridNavDataAsset* _grid) { grid = _grid; }
	FORCEINLINE void SetIsOpen(bool _value) { isOpen = _value; }
	FORCEINLINE void SetG(float _value) { g = _value; }
	FORCEINLINE void SetH(float _value) { h = _value; }
	FORCEINLINE void SetF(float _value) { f = _value; }
	FORCEINLINE void SetParent(TObjectPtr<UNodeNav> _node) { parent = _node; }

	void AddSuccessor(int _node);
	void DisplayNode(FColor _nodeColor, FColor _lineColor);
	void CheckForObstacle(TArray<TEnumAsByte<EObjectTypeQuery>> _layerObstacle, float _radius);
	void ResetCost();
};
