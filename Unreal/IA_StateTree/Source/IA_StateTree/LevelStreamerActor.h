// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "LevelStreamerActor.generated.h"

UCLASS()
class IA_STATETREE_API ALevelStreamerActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    FName LevelToLoad;
    // Overlap volume to trigger level streaming
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    UBoxComponent* OverlapVolume;
	
public:	
    ALevelStreamerActor();
    virtual void Tick(float DeltaSeconds) override;

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OverlapBegins(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
    void OverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UFUNCTION(Client, Reliable)
    void ClientRPC_CheckLevelOnClient(const FName& _levelToLoad);
};
