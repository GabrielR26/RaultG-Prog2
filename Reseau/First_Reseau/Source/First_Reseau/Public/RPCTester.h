// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "RPCTester.generated.h"

/**
 * 
 */
UCLASS()
class FIRST_RESEAU_API ARPCTester : public AActor
{
	GENERATED_BODY()
										//Unreliable
	UFUNCTION(Client, BlueprintCallable, Reliable) void ClientRPC_Test();
	UFUNCTION(Server, BlueprintCallable, Reliable) void ServerRPC_Test();
	UFUNCTION(NetMulticast, BlueprintCallable, Reliable) void MultiRPC_Test();

public:
	ARPCTester();
};
