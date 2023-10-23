#pragma once
#include "EngineObject.h"

class Circle : public EngineObject
{
	CircleShape circle;
public:
	Circle(const FVector& _position, const int& _size);
	~Circle();
	virtual void Draw(RenderWindow& _window) override;
	Circle(const FVector& _position, const int& _size, const Color& _color = Color::White, const bool& _fillColor = true);;
};

