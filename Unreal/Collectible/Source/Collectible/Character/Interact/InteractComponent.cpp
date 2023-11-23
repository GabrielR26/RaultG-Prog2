// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "InteractItem.h"

UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();
	SetComponentTickInterval(0.5f);
}

void UInteractComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DetectObject();
}

void UInteractComponent::DetectObject()
{
	FVector _start = GetOwner()->GetActorLocation() + FVector(0, 0, interactHeight);
	FVector _to = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * interactLenght;
	bool _isHit = UKismetSystemLibrary::LineTraceSingleForObjects(this, _start, _to, interactLayer, false, TArray<AActor*>(),
		EDrawDebugTrace::ForOneFrame, result, true);
	canGrabItem = _isHit && result.Distance < 100;
	DetectObjectFeedback(result.GetActor());
}

void UInteractComponent::DetectObjectFeedback(TObjectPtr<AActor> _item)
{
	if (canGrabItem)
	{
		if (detectedItem)
			detectedItem->ResetDefaultColor();
		detectedItem = Cast<AInteractItem>(_item);
		detectedItem->ApllyInteractColor();
	}
	else
	{
		if (detectedItem)
			detectedItem->ResetDefaultColor();
		detectedItem = nullptr;
	}
}

void UInteractComponent::GrabObject(const FInputActionValue& _value)
{
	if (currentItem)
	{
		return;
	}
	if (canGrabItem)
	{
		currentItem = Cast<AInteractItem>(result.GetActor());
		currentItem->ApllyInteractColor();
		currentItem->SetActorEnableCollision(false);
		currentItem->AttachToActor(GetOwner(), FAttachmentTransformRules::KeepWorldTransform);
	}
}

void UInteractComponent::DropObject(const FInputActionValue& _value)
{
	if (!currentItem)
		return;
	currentItem->ResetDefaultColor();
	currentItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	currentItem->SetActorEnableCollision(true);
	currentItem = nullptr;
}
