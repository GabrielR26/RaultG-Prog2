// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void ATestPlayerController::LoadLevel(const FName& _nameLevel)
{
	FLatentActionInfo LatentInfo;
	UGameplayStatics::LoadStreamLevel(this, _nameLevel, true, false, LatentInfo);
	UKismetSystemLibrary::PrintString(this, "Load level: " + _nameLevel.ToString(), true, true, FLinearColor::Yellow, 5);
}

void ATestPlayerController::UnloadLevel(const FName& _nameLevel)
{
	FLatentActionInfo LatentInfo;
	UGameplayStatics::UnloadStreamLevel(this, _nameLevel, LatentInfo, true);
	UKismetSystemLibrary::PrintString(this, "Unload level: " + _nameLevel.ToString(), true, true, FLinearColor::Yellow, 5);
}
