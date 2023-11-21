// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectil.h"
#include "Shooter.generated.h"

UCLASS()
class RICOSHOT_API AShooter : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USkeletalMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> objectLayers;
	UPROPERTY(EditAnywhere, Category = "Parameter", meta = (UMin = 1000, ClampMin = 1000, UMax = 10000, ClampMax = 10000))
	int range = 500;
	UPROPERTY(EditAnywhere, Category = "Parameter", meta = (UMin = 1, ClampMin = 1, UMax = 10, ClampMax = 10))
	int ricochet = 1;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<AProjectil> projectilRef = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	TArray<FVector> impactShots = TArray<FVector>();
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float ZOffset = 100;

	FTimerHandle timer;
	FVector offset;

public:
	AShooter();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Shoot();
	void RicoShotTrajectory();
	bool LineTrace(FVector _start, FVector _end, FHitResult& _res);
	FVector Reflexion(FVector _vector, FVector _normal);
};
