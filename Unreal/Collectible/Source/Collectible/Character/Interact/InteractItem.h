// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractItem.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTIBLE_API AInteractItem : public AStaticMeshActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Interact")
	FLinearColor defaultColor = FLinearColor::Green;
	UPROPERTY(EditAnywhere, Category = "Interact")
	FLinearColor interactColor = FLinearColor::Green;
	UPROPERTY(EditAnywhere, Category = "Interact")
	TObjectPtr<UMaterialInstanceDynamic> dynamicMaterialColor = nullptr;

public:
	void ApllyInteractColor();
	void ResetDefaultColor();

	virtual void BeginPlay() override;
	void InitItemMaterial();
};
