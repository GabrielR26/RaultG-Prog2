// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectableObject.h"
#include "Treasure.generated.h"

UCLASS()
class INTERACTION_API ATreasure : public ACollectableObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<class APiece> pieceRef = nullptr;
	UPROPERTY(EditAnywhere)
	int pieceToSpawn = 5;
	
public:	
	ATreasure();

private:
	virtual void NotifyActorBeginOverlap(AActor* _actor) override;
};
