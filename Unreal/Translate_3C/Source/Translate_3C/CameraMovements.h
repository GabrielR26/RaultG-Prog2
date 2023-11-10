// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "CameraSettings.h"
#include "CameraMovements.generated.h"

/**
 *
 */
UCLASS()
class TRANSLATE_3C_API ACameraMovements : public ACameraActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<AActor> target = nullptr;

	UPROPERTY(EditAnywhere)
		TObjectPtr<UCameraSettings> cameraSettings = nullptr;

#pragma region Debug
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool useDebug = true;
	UPROPERTY(EditAnywhere, Category = "Debug")
	FColor validDebugColor = FColor::Green;
	UPROPERTY(EditAnywhere, Category = "Debug")
	FColor noValidDebugColor = FColor::Red;
#pragma endregion

#pragma region Properties
public:
	FORCEINLINE bool IsValid() const { return target != nullptr; }
	FORCEINLINE FVector CurrentPosition() const { return GetActorLocation(); }
	FORCEINLINE virtual FVector TargetPosition() const { return target ? target->GetActorLocation() : FVector(0); }
	FORCEINLINE virtual FVector Offset() const { return FVector(0); }
	FORCEINLINE virtual FVector FinalPosition() { return TargetPosition() + Offset(); }
#pragma endregion

	ACameraMovements();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float _deltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const;

	virtual void UpdateCameraPosition();
	virtual void DrawDebugMovement();
	FORCEINLINE FVector GetLocaloffset(const float& _x, const float& _y, const float& _z) const
	{
		return target ? (target->GetActorForwardVector() * _x) + (target->GetActorRightVector() * _y) + (target->GetActorUpVector() * _z) : GetActorLocation();
	}
};
