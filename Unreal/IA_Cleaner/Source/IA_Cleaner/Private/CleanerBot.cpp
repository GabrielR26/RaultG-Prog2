// Fill out your copyright notice in the Description page of Project Settings.


#include "CleanerBot.h"
#include "Kismet/KismetMathLibrary.h"

ACleanerBot::ACleanerBot()
{
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	FSMComponent = CreateDefaultSubobject<UFSMComponent>("FSM Component");
	moveComponent = CreateDefaultSubobject<UMoveComponent>("Move Component");
	researchComponent = CreateDefaultSubobject<UResearchComponent>("Research Component");
	RootComponent = mesh;
	AddOwnedComponent(FSMComponent);
	AddOwnedComponent(moveComponent);
	AddOwnedComponent(researchComponent);
}

void ACleanerBot::BeginPlay()
{
	Super::BeginPlay();
	if (spyRef)
	{
		spy = NewObject<USpy_CleanerBot>(this, spyRef);
		spy->InitSpy(this);
	}
}

void ACleanerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (spy)
		spy->Check(DeltaTime);
}

void ACleanerBot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
