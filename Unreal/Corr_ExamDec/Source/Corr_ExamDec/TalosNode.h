// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TalosLink.h"
#include "TalosNode.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class CORR_EXAMDEC_API ATalosNode : public AStaticMeshActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, Category = "Parameter", meta = (EditInLine))
	TMap<FString, UTalosLink*> connectedNodes = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	bool isSource = false;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	FColor nodeColor = FColor::Red;
	UPROPERTY(VisibleAnywhere, Category = "Parameter")
	int id = 0;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> validNodeLayer;

public:
	ATalosNode();
	FORCEINLINE bool IsSource() { return isSource; }
	FORCEINLINE void SetSource(const bool &_value) { isSource = _value; }
	FORCEINLINE FColor NodeColor() { return nodeColor; }
	FORCEINLINE int GetId() { return id; }
	UFUNCTION(BlueprintCallable) void AddLink(ATalosNode* _otherNode);
	virtual void NodeBehaviour();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
