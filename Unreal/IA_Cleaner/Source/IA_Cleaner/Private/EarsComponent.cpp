// Fill out your copyright notice in the Description page of Project Settings.


#include "EarsComponent.h"

UEarsComponent::UEarsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	earsSphere = CreateDefaultSubobject<USphereComponent>("Ear sphere");
}

void UEarsComponent::BeginPlay()
{
	Super::BeginPlay();
	earsSphere->SetSphereRadius(rangeEars);
}

void UEarsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	EarsBehaviour();
}

void UEarsComponent::EarsBehaviour()
{
	DrawDebugSphere(GetWorld(), GetOwner()->GetActorLocation(), rangeEars, 25, FColor::Emerald);
	//Sphere overlapp
}
