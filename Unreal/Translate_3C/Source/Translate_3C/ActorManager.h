// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorManagedComponent.h"
#include "ActorManager.generated.h"

UCLASS(Blueprintable)
class TRANSLATE_3C_API UActorManager : public UObject
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere)
	TMap<FString, UActorManagedComponent*> actors;


public:
	bool AddActor(UActorManagedComponent* _actor);
	void RemoveActor(FString _id);

	void CreateCameraActor(ETypeCamera _typeCamera, UActorManagedComponent* _actor);
};
