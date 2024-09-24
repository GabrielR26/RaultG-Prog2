// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraManagedComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ManagerCamera.h"
#include "Translate_3CGameModeBase.h"
#include "CameraMovements.h"

UCameraManagedComponent::UCameraManagedComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UCameraManagedComponent::Enable()
{
	UKismetSystemLibrary::PrintString(this, FString("Enable"));
	cameraSystem->SetActorTickEnabled(true);
}

void UCameraManagedComponent::Disable()
{
	UKismetSystemLibrary::PrintString(this, FString("Disable"));
	cameraSystem->SetActorTickEnabled(false);
}

void UCameraManagedComponent::RegisterCamera(FString _id)
{
	id = _id;
	Init();
}


void UCameraManagedComponent::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void UCameraManagedComponent::Init()
{
	cameraSystem = GetCameraMovementSystem();
	isManaged = GetManager()->AddCamera(this);
}

void UCameraManagedComponent::RemoveCamera()
{
	if (!isManaged)
		return;
	isManaged = !GetManager()->RemoveCamera(this);
}

UManagerCamera* UCameraManagedComponent::GetManager()
{
	ATranslate_3CGameModeBase* _gm = GetWorld()->GetAuthGameMode<ATranslate_3CGameModeBase>();
	if (!_gm)
		return nullptr;
	return _gm->GetCameraManager();
}

ACameraMovements* UCameraManagedComponent::GetCameraMovementSystem() const
{
	return Cast<ACameraMovements>(GetOwner());
}

