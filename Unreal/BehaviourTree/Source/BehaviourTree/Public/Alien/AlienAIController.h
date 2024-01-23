// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../CustomAIController.h"
#include "AlienAIController.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURTREE_API AAlienAIController : public ACustomAIController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName BBKey_ViewPlayer = "ViewPlayer";
	
protected:
	virtual void Init() override;
	virtual void InitBlackboard() override;
	UFUNCTION() void SetViewTarget(bool _value);
};
