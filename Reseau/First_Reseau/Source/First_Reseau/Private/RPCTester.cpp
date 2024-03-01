// Fill out your copyright notice in the Description page of Project Settings.


#include "RPCTester.h"
#include <Utils/DevUtils.h>

ARPCTester::ARPCTester()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void ARPCTester::ClientRPC_Test_Implementation()
{
	LOG_C_T("Client RPC", Red, 10);
}

void ARPCTester::ServerRPC_Test_Implementation()
{
	LOG_C_T("Server RPC", Blue, 10);
}

void ARPCTester::MultiRPC_Test_Implementation()
{
	LOG_C_T("Multicast RPC", Green, 10);
}
