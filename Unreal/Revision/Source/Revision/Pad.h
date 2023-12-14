// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pad.generated.h"

UCLASS()
class REVISION_API APad : public AActor
{
	GENERATED_BODY()
	
public:	
	APad();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
