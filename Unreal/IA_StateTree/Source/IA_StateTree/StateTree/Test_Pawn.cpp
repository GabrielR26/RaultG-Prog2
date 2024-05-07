// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Pawn.h"

// Sets default values
ATest_Pawn::ATest_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	stateTreeComponent = CreateDefaultSubobject<UTest_StateTreeComponent>("StateTree");
	AddOwnedComponent(stateTreeComponent);
}

// Called when the game starts or when spawned
void ATest_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATest_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

