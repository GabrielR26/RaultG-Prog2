// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DetectionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEHAVIOURTREE_API UDetectionComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetFound, AActor*, target);
	FOnTargetFound onTargetFound;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetDetected, bool, value);
	FOnTargetDetected onTargetDetected;

	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<EObjectTypeQuery>> layerTarget = {};
	UPROPERTY(EditAnywhere)
	float range = 1000;
	UPROPERTY(EditAnywhere)
	TObjectPtr<APawn> target = nullptr;
	UPROPERTY(EditAnywhere)
	bool targetDetected = false;

public:	
	UDetectionComponent();
	FORCEINLINE FOnTargetFound& OnTargetFound() { return onTargetFound; }
	FORCEINLINE FOnTargetDetected& OnTargetDetected() { return onTargetDetected; }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Detect();
	void Debug();
};
