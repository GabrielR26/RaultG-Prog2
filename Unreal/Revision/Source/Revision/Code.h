// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Code.generated.h"

UCLASS()
class REVISION_API ACode : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool isActive = false;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UMaterialInstanceDynamic> dynamicMaterialColor = nullptr;
	
public:	
	ACode();

	FORCEINLINE bool GetIsActive() { return isActive; }
	FORCEINLINE void SwitchIsActive() { isActive = !isActive; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
