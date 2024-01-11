// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Trash.h"
#include "ResearchComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IA_CLEANER_API UResearchComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFindTrash);
	FOnFindTrash onFindTrash;

	UPROPERTY(EditAnywhere, Category = "Parameter")
	float viewDistance = 400;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	float viewAngle = 45;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TArray<TEnumAsByte<EObjectTypeQuery>> layerTrash = {};
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<ATrash> currentTrash = nullptr;

	bool findTrash = false;
	FHitResult hitResult;

public:
	UResearchComponent();
	FORCEINLINE void SetFindTrash(bool _value) { findTrash = _value; }
	FORCEINLINE ATrash* GetCurrentTrash() { return currentTrash; }
	FORCEINLINE FVector GetOwnerLocation() { return GetOwner()->GetActorLocation(); }
	FORCEINLINE FVector GetOwnerForward() { return GetOwner()->GetActorForwardVector(); }
	FORCEINLINE FOnFindTrash& OnFindTrash() { return onFindTrash; }

private:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void ResearchTrash();
	bool ConeView();
	void DrawConeView();
};
