#pragma once
#include "..\..\..\CoreMinimal.h"

class AActor;

class UActorComponent
{
	TObjectPtr<AActor> owner;

public:
	UActorComponent();
	UActorComponent(AActor* _owner);
};

