// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Enemy/Enemy.h"
#include "DroneMovementComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IA_CLEANER_API UDroneMovementComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> target = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int droneDistance = 300;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	int droneHeight = 200;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float droneSpeed = 2;

	float rotationAngle = -90;
	bool isOnTarget = true;

public:
	UDroneMovementComponent();
	FORCEINLINE void SetTarget(AActor* _target) { target = _target; }
	FORCEINLINE void SetIsOnTarget(bool _value) { isOnTarget = _value; }
	FORCEINLINE FVector GetOwnerLocation() { return GetOwner()->GetActorLocation(); }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void DroneMovement();
	void DroneBehaviour();
	void CheckDrone();
};
