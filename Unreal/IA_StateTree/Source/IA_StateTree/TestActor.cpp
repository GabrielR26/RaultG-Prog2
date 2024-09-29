// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ATestActor::IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const
{	
	return Super::IsNetRelevantFor(RealViewer, ViewTarget, SrcLocation);
}
