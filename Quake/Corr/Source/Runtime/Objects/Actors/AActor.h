#pragma once
#include "..\..\..\CoreMinimal.h"
#include "..\UObject.h"
#include "..\Components\UActorComponent.h"

class AActor : public UObject
{
	TArray<TObjectPtr<UActorComponent>> components;

public:
	AActor();
};