// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectibleObject.h"

ACollectibleObject::ACollectibleObject()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void ACollectibleObject::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACollectibleObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
