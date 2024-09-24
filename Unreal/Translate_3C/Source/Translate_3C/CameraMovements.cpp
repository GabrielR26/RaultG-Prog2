// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraMovements.h"
#include "Translate_3CGameModeBase.h"
#include "ManagerCamera.h"
#include "CameraManagedComponent.h"

ACameraMovements::ACameraMovements()
{
	PrimaryActorTick.bCanEverTick = true;

	cameraManagedComponent = CreateDefaultSubobject<UCameraManagedComponent>("CameraManagedComponent");
	AddOwnedComponent(cameraManagedComponent);

#if WITH_EDITOR
	PrimaryActorTick.bStartWithTickEnabled = true;
#endif
}

void ACameraMovements::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetFirstPlayerController()->SetViewTarget(this);
}

void ACameraMovements::Tick(float _deltaTime)
{
	Super::Tick(_deltaTime);
	//Gizmo
	if (GetWorld()->IsPlayInEditor())
		UpdateCameraPosition();
	DrawDebugMovement();
}

/// <summary>
/// Faire Gizmo(Unity) dans Unreal 
/// </summary>
/// <returns></returns>
bool ACameraMovements::ShouldTickIfViewportsOnly() const
{
	return useDebug;
}

void ACameraMovements::UpdateCameraPosition()
{
}

void ACameraMovements::DrawDebugMovement()
{
}
