// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FSMObject.h"
#include "FSMComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IA_FSM_API UFSMComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TSubclassOf<UFSMObject> currentFSMType = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Parameter", meta =(EditInLine))
	TObjectPtr<UFSMObject> runningFSM = nullptr;

public:	
	UFSMComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(EEndPlayReason::Type _end) override;
	void CloseFSM();
	void UpdateFSM();
	void Init();
};
