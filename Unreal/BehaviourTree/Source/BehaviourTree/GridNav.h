// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridNavDataAsset.h"
#include "GridNav.generated.h"

UCLASS()
class BEHAVIOURTREE_API AGridNav : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter", meta = (UMin = 2, ClampMin = 2, UMax = 100, ClampMax = 100))
	int size = 3;
	UPROPERTY(EditAnywhere, Category = "Parameter", meta = (UMin = 0, ClampMin = 0, UMax = 1000, ClampMax = 1000))
	float gap = 100;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool debug = false;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	FColor nodeColor = FColor::Red;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	FColor lineColor = FColor::Blue;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UGridNavDataAsset> save = nullptr;
	
public:	
	AGridNav();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const;
	UFUNCTION(CallInEditor) void GenerateGrid();
	void SetSuccessors();
	void DisplayGrid();
};
