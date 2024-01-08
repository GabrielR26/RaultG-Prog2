// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TalosNode.h"
#include "TalosSource.generated.h"

/**
 * 
 */
UCLASS()
class CORR_EXAMDEC_API ATalosSource : public ATalosNode
{
	GENERATED_BODY()
	
protected:
	virtual void NodeBehaviour() override;
};
