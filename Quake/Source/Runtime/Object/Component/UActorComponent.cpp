#include "UActorComponent.h"

UActorComponent::UActorComponent()
{
}

UActorComponent::UActorComponent(AActor* _owner)
{
	owner = NewObject<AActor>(this, _owner);
}