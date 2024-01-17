// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/SplineComponent.h>
#include "Corr_Path.generated.h"

USTRUCT()
struct FLine
{
	GENERATED_BODY();

public:
	FVector startPoint, endPoint;
	FORCEINLINE FVector GetDirection() const { return (endPoint - startPoint).GetSafeNormal(); }
	FORCEINLINE void Drawline(UWorld* _world, const FColor& _color)
	{
		DrawDebugLine(_world, startPoint, endPoint, _color, false, -1, 0, 3);
	}
};

UCLASS()
class IA_CLEANER_API ACorr_Path : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USplineComponent> spline = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> target = nullptr;

	FVector intersectPoint;
	FLine lineA, lineB;

public:
	ACorr_Path();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void InitSplineLine();
	void SetSecondLine();
	void GetIntersectionPoint(FLine _a, FLine _b, FVector& _intersectPoint);
	FVector GetSplinePoint() const;
};
