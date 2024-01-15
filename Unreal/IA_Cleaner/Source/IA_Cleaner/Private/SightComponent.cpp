// Fill out your copyright notice in the Description page of Project Settings.


#include "SightComponent.h"

USightComponent::USightComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void USightComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void USightComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	SightBehaviour();
}

void USightComponent::SightBehaviour()
{
}
