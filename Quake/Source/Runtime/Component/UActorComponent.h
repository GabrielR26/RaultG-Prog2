#pragma once
#include "../Core/UObject.h"

class AActor;

class UActorComponent : public UObject
{
	TObjectPtr<AActor> owner;

public:
	UActorComponent();
	UActorComponent(AActor* _owner);
};

