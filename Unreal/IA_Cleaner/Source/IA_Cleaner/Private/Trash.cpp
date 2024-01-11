// Fill out your copyright notice in the Description page of Project Settings.


#include "Trash.h"

ATrash::ATrash()
{
	PrimaryActorTick.bCanEverTick = true;
	cube = CreateDefaultSubobject<UStaticMeshComponent>("Cube");
	plane = CreateDefaultSubobject<UStaticMeshComponent>("Plane");
	RootComponent = cube;
	plane->SetupAttachment(RootComponent);
}
