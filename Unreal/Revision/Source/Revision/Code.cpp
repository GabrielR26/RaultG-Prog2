// Fill out your copyright notice in the Description page of Project Settings.


#include "Code.h"

// Sets default values
ACode::ACode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Lamp");
	RootComponent = mesh;
}

// Called when the game starts or when spawned
void ACode::BeginPlay()
{
	Super::BeginPlay();
	dynamicMaterialColor = mesh->CreateDynamicMaterialInstance(0);
}

// Called every frame
void ACode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FLinearColor _color = isActive ? FLinearColor::Green : FLinearColor::Red;

	dynamicMaterialColor->SetVectorParameterValue("Color", _color);
}

