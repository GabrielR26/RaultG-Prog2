// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraManagedComponent.generated.h"

class UManagerCamera;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRANSLATE_3C_API UCameraManagedComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		FString id = "Camera";
	UPROPERTY(VisibleAnywhere)
		bool isManaged = false;

public:	
	UCameraManagedComponent();

	FORCEINLINE FString GetID() { return id; }
	void Enable();
	void Disable();
protected:
	virtual void BeginPlay() override;

	UManagerCamera* GetManager();
};
