// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraManagedComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TRANSLATE_3C_API UCameraManagedComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString id = "Camera";
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class ACameraMovements> cameraSystem = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	bool isManaged = false;

public:
	UCameraManagedComponent();

	FORCEINLINE FString GetID() { return id; }
	UFUNCTION(BlueprintCallable, Category = "Manager") virtual void Enable();
	UFUNCTION(BlueprintCallable, Category = "Manager") virtual void Disable();
	void RegisterCamera(FString _id);

protected:
	virtual void BeginPlay() override;

	virtual void Init();
	class UManagerCamera* GetManager();
	ACameraMovements* GetCameraMovementSystem() const;
	UFUNCTION(BlueprintCallable, Category = "Manager") void RemoveCamera();
};
