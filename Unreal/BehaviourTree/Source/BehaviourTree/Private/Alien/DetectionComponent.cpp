// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/DetectionComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UDetectionComponent::UDetectionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UDetectionComponent::BeginPlay()
{
	Super::BeginPlay();

}


void UDetectionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Detect();
	Debug();
}

void UDetectionComponent::Detect()
{
	FHitResult _res;
	const FVector _start = GetOwner()->GetActorLocation();
	const bool _hit = UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), _start, _start, range, layerTarget, true, {},
		EDrawDebugTrace::None, _res, true);
	if (!_hit)
	{
		//target = nullptr;
		//targetDetected = false;
		//onTargetFound.Broadcast(target);
		//onTargetDetected.Broadcast(targetDetected);
		return;
	}
	target = Cast<APawn>(_res.GetActor());
	targetDetected = true;
	onTargetDetected.Broadcast(targetDetected);
	onTargetFound.Broadcast(target);
}

void UDetectionComponent::Debug()
{
	const FVector _loc = GetOwner()->GetActorLocation();
	DrawDebugSphere(GetWorld(), _loc, range, 10, targetDetected ? FColor::Green : FColor::Red);
}
