#include "AActor.h"

AActor::AActor()
{
	TObjectPtr<UActorComponent> _movement = CreateDefaultSubobject<UActorComponent>("Movement");
	components.Add(_movement);
}
