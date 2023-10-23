#pragma once

#include "EngineObject.h"

class Square : public EngineObject
{
	CircleShape square;
public:
	Square(const FVector& _position, const int& _size);
	~Square();
	virtual void Draw(RenderWindow& _window) override;
	Square(const FVector& _position, const int& _size, const Color& _color = Color::White, const bool& _fillColor = true);
};

