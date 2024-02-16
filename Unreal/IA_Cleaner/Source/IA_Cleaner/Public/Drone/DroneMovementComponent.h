// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Enemy/Enemy.h"
#include "DroneMovementComponent.generated.h"

#define DRONE_OSCILATION_FREQUENCE 3
#define DRONE_OSCILATION_HEIGHT -2
#define MAGIC_VALUE 50


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IA_CLEANER_API UDroneMovementComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> target = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int droneDistance = 300;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int droneHeight = 300;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float droneMovementSpeed = 6;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float droneOrbitSpeed = 3;

	bool isNearTarget = false;
	float rotationAngle = 0;

public:
	UDroneMovementComponent();
	FORCEINLINE void SetTarget(AActor* _target) { target = _target; }
	FORCEINLINE void SetIsOnTarget(bool _value) { isNearTarget = _value; }
	FORCEINLINE FVector GetOwnerLocation() { return GetOwner()->GetActorLocation(); }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void DroneOrbit();
	void DroneMovement();
	void DroneFloating();
	void CheckIsNearTarget();
	FVector GetClosestOrbit();
};
