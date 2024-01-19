// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <Components/SphereComponent.h>
#include "Guard/NoiseActor.h"
#include "EarsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IA_CLEANER_API UEarsComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int rangeEars = 400;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> targetEars = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USphereComponent> earsSphere = nullptr;

	FVector lastEarsLocation;

public:	
	UEarsComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EarsBehaviour();
};
