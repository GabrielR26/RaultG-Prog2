// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone/Drone.h"

ADrone::ADrone()
{
	PrimaryActorTick.bCanEverTick = true;
	FSMComponent = CreateDefaultSubobject<UFSMComponent>("FSM component");
	moveComponent = CreateDefaultSubobject<UDroneMovementComponent>("DroneMovement component");
	AddOwnedComponent(FSMComponent);
	AddOwnedComponent(moveComponent);
}

void ADrone::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

