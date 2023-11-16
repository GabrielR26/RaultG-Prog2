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

	UPROPERTY(EditAnywhere, Category = "Manager")
	TSubclassOf<class ACameraFollow> cameraFollowRef = nullptr;
	UPROPERTY(EditAnywhere, Category = "Manager")
	TSubclassOf<class ACameraOrbit> cameraOrbitRef = nullptr;

public:
	bool AddCamera(UCameraManagedComponent* _camera);
	bool RemoveCamera(UCameraManagedComponent* _camera);

	void EnableCamera(UCameraManagedComponent* _camera);
	UFUNCTION(BlueprintCallable) void EnableCamera(FString _id);
	void DisableCamera(UCameraManagedComponent* _camera);
	UFUNCTION(BlueprintCallable) void DisableCamera(FString _id);
	UFUNCTION(BlueprintCallable) void SpawnCameraFollow(FString _id, AActor* _target);
	UFUNCTION(BlueprintCallable) void SpawnCameraOrbit(FString _id, AActor* _target);

	template <class T>
	T* SpawnCamera(TSubclassOf<T> _ref, FString _id, AActor* _target)
	{
		T* _instance = GetWorld()->SpawnActor<T>(_ref);
		_instance->SetTarget(_target);
		UCameraManagedComponent* _compo = _instance->GetComponentByClass<UCameraManagedComponent>();
		if (_compo)
			_compo->RegisterCamera(_id);
		return _instance;
	}
};

