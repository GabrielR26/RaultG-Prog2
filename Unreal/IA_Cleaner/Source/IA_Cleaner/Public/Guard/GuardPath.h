// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuardWaypoint.h"
#include "GuardPath.generated.h"

UCLASS()
class IA_CLEANER_API AGuardPath : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, category = "Parameter")
	FColor pathColor = FColor::White;
	UPROPERTY(EditAnywhere, category = "Parameter")
	TArray<AGuardWaypoint*> waypoints = {};
	UPROPERTY(EditAnywhere, category = "Parameter")
	TObjectPtr<AGuardWaypoint> currentWaypoint = nullptr;

	bool isReversed = false;
	int indexCurrentWaypoint = 0;

public:
	AGuardPath();
	FVector GetNextWaypoint();
	FVector GetClosestWaypoint(const FVector& _location);

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void DrawPath();
};
