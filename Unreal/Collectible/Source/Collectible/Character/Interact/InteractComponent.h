// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractItem.h"
#include "InputMappingContext.h"
#include "InteractComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COLLECTIBLE_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Interact")
	TArray<TEnumAsByte<EObjectTypeQuery>> interactLayer;
	UPROPERTY(EditAnywhere, Category = "Interact", meta =(UMin = 100, ClampMin = 100))
	float interactLenght = 200;
	UPROPERTY(EditAnywhere, Category = "Interact", meta =(UMin = 0, ClampMin = 0))
	float interactHeight = 100;
	UPROPERTY(EditAnywhere, Category = "Interact")
	TObjectPtr<AInteractItem> currentItem = nullptr;
	UPROPERTY(EditAnywhere, Category = "Interact")
	TObjectPtr<AInteractItem> detectedItem = nullptr;

	bool canGrabItem = false;
	FHitResult result;

public:	
	UInteractComponent();

	void GrabObject(const FInputActionValue& _value);
	void DropObject(const FInputActionValue& _value);
protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void DetectObject();
	void DetectObjectFeedback(TObjectPtr<AActor> _item);
};
