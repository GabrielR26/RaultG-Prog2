// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraManagedComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ManagerCamera.h"
#include "Translate_3CGameModeBase.h"

UCameraManagedComponent::UCameraManagedComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCameraManagedComponent::Enable()
{
	UKismetSystemLibrary::PrintString(this, FString("Enable"));
}

void UCameraManagedComponent::Disable()
{
	UKismetSystemLibrary::PrintString(this, FString("Disable"));
}


void UCameraManagedComponent::BeginPlay()
{
	Super::BeginPlay();
	isManaged = GetManager()->AddCamera(this);
}

UManagerCamera* UCameraManagedComponent::GetManager()
{
	ATranslate_3CGameModeBase* _gm = GetWorld()->GetAuthGameMode< ATranslate_3CGameModeBase>();
	if (!_gm)
		return nullptr;
	return _gm->GetCameraManager();
}

