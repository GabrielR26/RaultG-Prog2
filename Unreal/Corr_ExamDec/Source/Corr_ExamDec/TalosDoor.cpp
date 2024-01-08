// Fill out your copyright notice in the Description page of Project Settings.


#include "TalosDoor.h"

void ATalosDoor::OpenDoor()
{
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
}

void ATalosDoor::CloseDoor()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
}
