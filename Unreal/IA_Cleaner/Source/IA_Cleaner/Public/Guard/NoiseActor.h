// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/SphereComponent.h>
#include "NoiseActor.generated.h"

UCLASS()
class IA_CLEANER_API ANoiseActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USphereComponent> sphereNoise = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int rangeNoise = 300;
	
public:	
	ANoiseActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
