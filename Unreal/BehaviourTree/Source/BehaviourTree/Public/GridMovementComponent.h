// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../NodeNav.h"
#include "GridMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEHAVIOURTREE_API UGridMovementComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	int speed = 5;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float range = 2;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<UNodeNav*> path = {};

	FVector finalDestination;
	int currentIndex = 0;

public:	
	UGridMovementComponent();
	bool IsAtDestination();
	UFUNCTION(BlueprintCallable) void SetPath(TArray<UNodeNav*> _path);

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void MoveToDestination();
	void DisplayPath();
};
