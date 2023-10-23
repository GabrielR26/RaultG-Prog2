#include "circle.h"

Circle::Circle(const FVector& _position, const int& _size)
{
	circle = CircleShape(_size);
	circle.setPosition(_position);
}

Circle::~Circle()
{
}

void Circle::Draw(RenderWindow& _window)
{
	_window.draw(circle);
}

Circle::Circle(const FVector& _position, const int& _size, const Color& _color, const bool& _fillColor)
{
	circle = CircleShape(_size);
	circle.setPosition(_position);
	circle.setFillColor(_fillColor ? _color : Color::Transparent);
	circle.setOutlineColor(_color);
	circle.setOutlineThickness(5.f);
}
