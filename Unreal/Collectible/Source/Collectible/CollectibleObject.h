// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleObject.generated.h"

UCLASS()
class COLLECTIBLE_API ACollectibleObject : public AActor
{
	GENERATED_BODY()
	
public:	
	ACollectibleObject();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
