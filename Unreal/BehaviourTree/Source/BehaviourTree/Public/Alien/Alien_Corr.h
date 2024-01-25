// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../../CustomAIController.h"
#include "Alien_Corr.generated.h"

class UAttackComponent;
UCLASS()
class BEHAVIOURTREE_API AAlien_Corr : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<USkeletalMeshComponent> skeletal = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<ACustomAIController> AIcontroller = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UDetectionComponent> detection = nullptr;
	UPROPERTY(EditAnywhere, Category = "Parameter")
	TObjectPtr<UAttackComponent> attack = nullptr;

public:
	AAlien_Corr();
	FORCEINLINE TObjectPtr<ACustomAIController> GetAIController() { return AIcontroller; }
	FORCEINLINE TObjectPtr<UDetectionComponent> GetDetectionComponent() { return detection; }
	FORCEINLINE TObjectPtr<UAttackComponent> GetAttack() { return attack; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Init();
};
