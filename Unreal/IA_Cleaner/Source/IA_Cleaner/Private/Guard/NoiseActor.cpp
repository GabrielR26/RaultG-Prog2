// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/NoiseActor.h"

ANoiseActor::ANoiseActor()
{
	PrimaryActorTick.bCanEverTick = true;
	sphereNoise = CreateDefaultSubobject<USphereComponent>("Noise");
	RootComponent = sphereNoise;
}

void ANoiseActor::BeginPlay()
{
	Super::BeginPlay();
	sphereNoise->SetSphereRadius(rangeNoise);
}

void ANoiseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugSphere(GetWorld(), GetActorLocation(), rangeNoise, 25, FColor::Cyan);
	rangeNoise += -GetWorld()->DeltaRealTimeSeconds;
	sphereNoise->SetSphereRadius(rangeNoise);
	if (rangeNoise == 0)
		Destroy();
}
