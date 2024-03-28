#pragma once
#include "../../../CoreMinimal.h"
#include "../UObject.h"
#include "../Component/UActorComponent.h"

class AActor : public UObject
{
	TArray<TObjectPtr<UActorComponent>> components;

public:
	AActor();
};

