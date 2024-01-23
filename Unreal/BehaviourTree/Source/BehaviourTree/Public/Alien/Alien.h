// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/FloatingPawnMovement.h>
#include "Alien.generated.h"

UCLASS()
class BEHAVIOURTREE_API AAlien : public APawn
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnViewTarget, bool, _viewTarget);
	FOnViewTarget onViewTarget;

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USkeletalMeshComponent> skeletal = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UFloatingPawnMovement> movement = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float range = 500;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> playerLayer = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> target = nullptr;

public:
	AAlien();
	FORCEINLINE FOnViewTarget& OnViewTarget() { return onViewTarget; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void SearchPlayer();
	void DisplayDebug();
};
