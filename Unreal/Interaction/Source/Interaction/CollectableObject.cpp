// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableObject.h"

ACollectableObject::ACollectableObject()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	trigger = CreateDefaultSubobject<UBoxComponent>("Trigger box");
	trigger->SetupAttachment(RootComponent);
}

void ACollectableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACollectableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectableObject::NotifyActorBeginOverlap(AActor* _actor)
{

}

