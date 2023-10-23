#pragma once
#include "EngineObject.h"

class CircleTrigo : public EngineObject
{
	Vertex* circle;
	int definition = 0;

public:
	CircleTrigo(const FVector& _position, const int& _radius, const int& _definition, const Color& _color);
	~CircleTrigo();
	virtual void Draw(RenderWindow& _window) override;
};
