// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SightComponent.generated.h"


UCLASS( Abstract, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IA_FSM_API USightComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int rangeSight = 500;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int angleSight = 90;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float heightSight = 80;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> trashLayers = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> targetSight = nullptr;

public:	
	USightComponent();
	FORCEINLINE FVector SightOffsetLocation() const { return GetOwner()->GetActorLocation() + FVector(0, 0, heightSight); }
	FORCEINLINE TObjectPtr<AActor> TargetSight() const { return targetSight; }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void SightBehaviour();
};
