// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IA_CLEANER_API UMoveComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReachedDestination);
	FOnReachedDestination onReachedDestination;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMove, float, _speed);
	FOnMove onMove;

	UPROPERTY(EditAnywhere, Category = "Parameter")
	float speed = 100;

	FVector targetLocation;
	bool canMove = false;

public:	
	UMoveComponent();
	FORCEINLINE FVector GetOwnerLocation() { return GetOwner()->GetActorLocation(); }
	FORCEINLINE FOnReachedDestination& OnReachedDestination() { return onReachedDestination; }
	FORCEINLINE FOnMove& OnMove() { return onMove; }

	void GoSomewhere(FVector _location);

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void MoveToTarget();
	void IsReachedDestination();
};
