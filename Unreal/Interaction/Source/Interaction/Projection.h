// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projection.generated.h"

UCLASS()
class INTERACTION_API AProjection : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<AActor> target = nullptr;
	UPROPERTY(EditAnywhere)
	float depth = 100;
	UPROPERTY(EditAnywhere)
	FVector2D screenLocation = FVector2D(0.5f, 0.5f);
	
public:	
	AProjection();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void MoveTargetWithMouse();
	void MoveTargetAtViewportLocation();
};
