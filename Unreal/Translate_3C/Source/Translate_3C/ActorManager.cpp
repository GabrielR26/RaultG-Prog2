// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorManager.h"
#include "ActorManagedComponent.h"
#include "Translate_3CGameModeBase.h"
#include "CameraFollow.h"
#include "CameraOrbit.h"

bool UActorManager::AddActor(UActorManagedComponent* _actor)
{
    if (actors.Contains(_actor->GetID().ToLower()))
        return false;
    actors.Add(_actor->GetID().ToLower(), _actor);
    return true;
}

void UActorManager::RemoveActor(FString _id)
{
    if (!actors.Contains(_id.ToLower()))
        return;
    actors.Remove(_id.ToLower());
}

void UActorManager::CreateCameraActor(ETypeCamera _typeCamera, UActorManagedComponent* _actor)
{
    ATranslate_3CGameModeBase* _gm = GetWorld()->GetAuthGameMode<ATranslate_3CGameModeBase>();
    AActor* _target = _actor->GetOwner();
    switch (_typeCamera)
    {
    case CameraFollow:
        
        break;
    case CameraOrbit:
        
        break;
    }
}
