// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/Guard.h"

AGuard::AGuard()
{
	PrimaryActorTick.bCanEverTick = true;
	skelet = CreateDefaultSubobject<USkeletalMeshComponent>("Skelet");
	moveComponent = CreateDefaultSubobject<UGuardMovementComponent>("Movement");
	sightComponent = CreateDefaultSubobject<UGuardSightComponent>("GuardSight");
	FSMComponent = CreateDefaultSubobject<UFSMComponent>("FSM");
	earsComponent = CreateDefaultSubobject<UEarsComponent>("Ears");
	RootComponent = skelet;
	AddOwnedComponent(moveComponent);
	AddOwnedComponent(sightComponent);
	AddOwnedComponent(FSMComponent);
	AddOwnedComponent(earsComponent);
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
