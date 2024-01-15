// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestAngle.generated.h"

UCLASS()
class IA_FSM_API ATestAngle : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> other = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> trashLayers = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int angleSight = 90;
	
public:	
	ATestAngle();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void UpdateSight();
	void DrawConeSight();
	int AngleBetweenFromAndDirection(FVector _from, FVector _direction);
};
