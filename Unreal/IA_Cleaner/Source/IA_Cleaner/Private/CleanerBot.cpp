// Fill out your copyright notice in the Description page of Project Settings.


#include "CleanerBot.h"
#include "Kismet/KismetMathLibrary.h"

ACleanerBot::ACleanerBot()
{
	PrimaryActorTick.bCanEverTick = true;
	FSM = CreateDefaultSubobject<UFSMComponent>("FSM Component");
	AddOwnedComponent(FSM);
}

void ACleanerBot::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACleanerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToTarget();
}

void ACleanerBot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACleanerBot::GoSomewhere(FVector _location)
{
	targetLocation = _location;
}

void ACleanerBot::MoveToTarget()
{
	if (!canMove)
		return;
	FVector _location = FMath::VInterpConstantTo(GetActorLocation(), targetLocation, GetWorld()->DeltaTimeSeconds, speed * 100);
	FRotator _rotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), targetLocation);
	SetActorLocation(_location);
	SetActorRotation(_rotation + FRotator(0, -90, 0));
}
