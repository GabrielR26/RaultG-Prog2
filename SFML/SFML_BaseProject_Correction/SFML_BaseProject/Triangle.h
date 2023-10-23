#pragma once
#include "EngineObject.h"

class Triangle : public EngineObject
{
	Vertex* lines;

public:
	Triangle(FVector _a, FVector _b , FVector _c);
	~Triangle();
	virtual void Draw(RenderWindow& _window) override;
};

