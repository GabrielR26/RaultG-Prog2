// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSM/State.h"
#include "ShootState.generated.h"

/**
 * Exercice
 */
UCLASS()
class IA_FSM_API UShootState : public UState
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDestroyProjectile);
	FOnDestroyProjectile onDestroyProjectile;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> projectileRef = nullptr;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AActor> projectile = nullptr;
	UPROPERTY(EditAnywhere)
	float projectileTime = 3;

	FTimerHandle projectileTimer;

public:
	FORCEINLINE FOnDestroyProjectile& OnDestroyProjectile() { return onDestroyProjectile; }

	virtual void Enter(UFSMObject* _owner) override;
	virtual void Update() override;
	void DestroyProjectile();
};
