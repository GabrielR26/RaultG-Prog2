// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Pad.generated.h"

UCLASS()
class REVISION_API APad : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UBoxComponent> triggerBox = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UMaterialInstanceDynamic> dynamicMaterialColor = nullptr;
	
	bool isPressed = false;

public:	
	APad();

	FORCEINLINE bool GetIsPressed() { return isPressed; }
private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* _other) override;
};
