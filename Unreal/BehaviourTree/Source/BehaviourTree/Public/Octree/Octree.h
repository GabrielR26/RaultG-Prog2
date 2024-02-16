// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Octree.generated.h"

class AOctreeCell;
UCLASS()
class BEHAVIOURTREE_API AOctree : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TObjectPtr<AOctreeCell> root = nullptr;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AOctreeCell> cellToSpawn = nullptr;
	UPROPERTY(EditAnywhere)
	int maxBranchingID = 4;

public:
	AOctree();
	int GetMaxBranchingID() const { return maxBranchingID; }
	TSubclassOf<AOctreeCell> GetOctreeCellToSpawn() { return cellToSpawn; }

	UFUNCTION(CallInEditor) void GenerateOctree();
	UFUNCTION(CallInEditor) void DestroyOctree();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<AActor> navMeshBoundsVolume = nullptr;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;
	void InitRootCell();

};
