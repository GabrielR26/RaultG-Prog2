#include "UActorComponent.h"

UActorComponent::UActorComponent()
{
}

UActorComponent::UActorComponent(AActor* _owner)
{
	_owner = NewObject<AActor>(this, _owner);
}
