// Fill out your copyright notice in the Description page of Project Settings.


#include "NoiseComponent.h"

UNoiseComponent::UNoiseComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UNoiseComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UNoiseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UNoiseComponent::MakeNoise(FVector _location)
{
	if (!noiseActorRef)
		return;
	UE_LOG(LogTemp, Warning, TEXT("Noise"));
	GetWorld()->SpawnActor<ANoiseActor>(noiseActorRef, _location, FRotator::ZeroRotator);
}
