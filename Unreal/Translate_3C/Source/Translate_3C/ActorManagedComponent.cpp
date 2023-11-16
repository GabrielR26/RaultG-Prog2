// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorManagedComponent.h"
#include "Translate_3CGameModeBase.h"
#include "ActorManager.h"

UActorManagedComponent::UActorManagedComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UActorManagedComponent::BeginPlay()
{
	Super::BeginPlay();
	isManaged = GetManager()->AddActor(this);

	switch (cameraType)
	{
	case CameraFollow:
		break;
	case CameraOrbit:
		break;
	}
}

UActorManager* UActorManagedComponent::GetManager()
{
	ATranslate_3CGameModeBase* _gm = GetWorld()->GetAuthGameMode<ATranslate_3CGameModeBase>();
	if (!_gm)
		return nullptr;
	return _gm->GetActorManager();
}


