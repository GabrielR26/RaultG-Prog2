#include "UActorComponent.h"
//#include "..\Actors\AActor.h"

UActorComponent::UActorComponent(AActor* _owner) 
{
	owner = NewObject<AActor>(this, _owner);
}