// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Lamp.generated.h"

UCLASS()
class REVISION_API ALamp : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool isActive = false;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UMaterialInstanceDynamic> dynamicMaterialColor = nullptr;
	
public:	
	ALamp();

	FORCEINLINE void SetIsActive(bool _value) { isActive = _value; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
