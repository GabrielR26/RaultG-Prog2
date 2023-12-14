// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LogicDigicode.generated.h"

UCLASS()
class REVISION_API ALogicDigicode : public AActor
{
	GENERATED_BODY()
	
public:	
	ALogicDigicode();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
