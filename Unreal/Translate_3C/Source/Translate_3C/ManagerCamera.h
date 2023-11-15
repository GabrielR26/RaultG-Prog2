// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CameraManagedComponent.h"
#include "ManagerCamera.generated.h"

UCLASS(Blueprintable)
class TRANSLATE_3C_API UManagerCamera : public UObject
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TMap<FString, UCameraManagedComponent*> cameras;

public:
	UManagerCamera();

	bool AddCamera(UCameraManagedComponent* _camera);
	void RemoveCamera(FString _id);

	void EnableCamera(UCameraManagedComponent* _camera);
	void EnableCamera(FString _id);
	void DisableCamera(UCameraManagedComponent* _camera);
	void DisableCamera(FString _id);
};
