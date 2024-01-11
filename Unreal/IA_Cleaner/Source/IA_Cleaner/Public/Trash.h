// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trash.generated.h"

UCLASS()
class IA_CLEANER_API ATrash : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> cube = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UStaticMeshComponent> plane = nullptr;
	
public:	
	ATrash();
};
