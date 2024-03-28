#pragma once
#include "..\..\..\CoreMinimal.h"

class AActor;

class UActorComponent
{
	TObjectPtr<AActor> owner;

public:
	UActorComponent(AActor* _owner);
};