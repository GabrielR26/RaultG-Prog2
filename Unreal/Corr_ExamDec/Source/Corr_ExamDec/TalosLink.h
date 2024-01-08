// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TalosLink.generated.h"

/**
 * 
 */
class ATalosNode;
UCLASS()
class CORR_EXAMDEC_API UTalosLink : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<ATalosNode> from = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<ATalosNode> to = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	bool isLinkedToSource = false;

	bool isValidLink = false;

public:
	void Run();
	void Connect(TObjectPtr<ATalosNode> _from, TObjectPtr<ATalosNode> _to);
	void Debug();
	bool IsValidLink(TArray<TEnumAsByte<EObjectTypeQuery>> _validLayer);
};
