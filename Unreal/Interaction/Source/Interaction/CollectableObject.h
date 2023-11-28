// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "CollectableObject.generated.h"

UCLASS()
class INTERACTION_API ACollectableObject : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UBoxComponent> trigger = nullptr;
	
public:	
	ACollectableObject();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* _actor) override;
};
