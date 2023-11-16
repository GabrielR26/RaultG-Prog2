// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorManagedComponent.generated.h"

UENUM()
enum ETypeCamera
{
	CameraFollow,
	CameraOrbit
};

class UActorManager;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRANSLATE_3C_API UActorManagedComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString id = "Actor";
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETypeCamera> cameraType;
	UPROPERTY(VisibleAnywhere)
	bool isManaged = false;

public:	
	UActorManagedComponent();

	FORCEINLINE FString GetID() { return id; }

protected:
	virtual void BeginPlay() override;

	UActorManager* GetManager();
};
