#include "CoreMinimal.h"
#include "Source/Editor/Engine/Engine.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Engine* _engine = new Engine();
	_engine->Launch();

	delete _engine;

	return 0;
}