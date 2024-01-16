// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuardWaypoint.generated.h"

UCLASS()
class IA_CLEANER_API AGuardWaypoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AGuardWaypoint();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void DrawPoint();
};
