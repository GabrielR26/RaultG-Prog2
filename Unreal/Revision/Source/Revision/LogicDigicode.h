// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Code.h"
#include "Lamp.h"
#include "Pad.h"
#include "LogicDigicode.generated.h"

UCLASS()
class REVISION_API ALogicDigicode : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<ALamp> lamp = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<ACode*> codes = TArray<ACode*>();
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<APad*> pads = TArray<APad*>();
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<AActor> target = nullptr;
	
public:	
	ALogicDigicode();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	bool CheckDigicode();
};
