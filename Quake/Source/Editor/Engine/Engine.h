#pragma once
#include "Source/CoreMinimal.h"
#include "EngineWindow.h"

class Engine
{
	EngineWindow* window;

public:
	Engine();
	~Engine();

private:
	void Start();
	void Update();
	void Stop();

public:
	void Launch();
};