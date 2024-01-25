// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AStarAlgo.h"
#include "../GridNav.h"
#include "IANavComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEHAVIOURTREE_API UIANavComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UAStarAlgo> aStarRef = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Parameter", meta = (AllowPrivateAccess))
	TObjectPtr<UAStarAlgo> aStar = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AGridNav> grid = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float radius = 1000;

public:	
	UIANavComponent();
	UFUNCTION(BlueprintCallable) void GenerateNavPathRandom();
	UFUNCTION(BlueprintCallable) void GenerateNavPathWithTarget(FVector _target);

protected:
	virtual void BeginPlay() override;
		
};
