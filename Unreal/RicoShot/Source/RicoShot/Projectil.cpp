// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectil.h"
#include "Kismet/KismetMathLibrary.h"

AProjectil::AProjectil()
{
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("root");
	RootComponent = mesh;
}

void AProjectil::InitProjectil(TArray<FVector> _recochetLocations)
{
	recochetLocations = _recochetLocations;
}

void AProjectil::BeginPlay()
{
	Super::BeginPlay();	
}

void AProjectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetActorLocation() == recochetLocations[currentRecochet])
		currentRecochet++;
	if (currentRecochet < recochetLocations.Num())
		MoveTo(recochetLocations[currentRecochet]);
	else
		Destroy();
}

void AProjectil::MoveTo(FVector _target)
{
	SetActorLocation(FMath::VInterpConstantTo(GetActorLocation(), _target, GetWorld()->DeltaTimeSeconds, speed * 100));
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation() + GetActorForwardVector() * 10, _target));
}

