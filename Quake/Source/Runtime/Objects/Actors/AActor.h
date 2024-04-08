#pragma once
#include "..\..\..\CoreMinimal.h"
#include "..\UObject.h"
#include "..\Components\UActorComponent.h"

class AActor : public UObject
{
	string name;
	TArray<TSoftObjectPtr<UActorComponent>> components;

public:
	AActor();
};