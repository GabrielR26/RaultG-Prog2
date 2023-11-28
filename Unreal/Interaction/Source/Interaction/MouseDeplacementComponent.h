// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MouseDeplacementComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INTERACTION_API UMouseDeplacementComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpeed, float, _speed);
	FOnSpeed onSpeed;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float depth = 1000;
	UPROPERTY(EditAnywhere, Category = "Settings")
	float speed = 10;
	UPROPERTY(EditAnywhere, Category = "Settings")
	FVector offset = FVector(0, 0, 30);
	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<TEnumAsByte<EObjectTypeQuery>> layers;
	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<TEnumAsByte<EObjectTypeQuery>> obstacles;

	FVector mouseToWorldLocation;
	FVector targetLocation;

public:
	UMouseDeplacementComponent();

	FORCEINLINE FVector GetOwnerLocation() { return GetOwner()->GetActorLocation(); }
	FORCEINLINE FOnSpeed& OnSpeed() { return onSpeed; }
private:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Init();
	void DrawDebug();
	void LocateMouseToWorld();
	void MoveToTarget();
	void LookToTarget();
	UFUNCTION() void SetTarget();
	bool CheckTargetLocation(FVector _target);
};
