// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/Guard.h"

AGuard::AGuard()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AGuard::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGuard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
