// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableObject.h"
#include "Piece.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_API APiece : public ACollectableObject
{
	GENERATED_BODY()	

	virtual void NotifyActorBeginOverlap(AActor* _actor) override;
};
