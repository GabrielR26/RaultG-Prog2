// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectil.generated.h"

UCLASS()
class RICOSHOT_API AProjectil : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float speed = 5;

	TArray<FVector> recochetLocations = TArray<FVector>();
	FVector currentTarget; 
	int currentRecochet = 0;
	
public:	
	AProjectil();

	void InitProjectil(TArray<FVector> _recochetLocations);
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void MoveTo(FVector _target);
};
