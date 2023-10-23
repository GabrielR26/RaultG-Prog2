#include "Square.h"

Square::Square(const FVector& _position, const int& _size)
{
	square = CircleShape(_size, 4);
	square.setPosition(_position);
	square.setRotation(45);
	//square.setOrigin();
}

Square::~Square()
{
}

void Square::Draw(RenderWindow& _window)
{
	_window.draw(square);
}

#pragma region exo
Square::Square(const FVector& _position, const int& _size, const Color& _color, const bool& _fillColor)
{
	square = CircleShape(_size, 4);
	square.setPosition(_position);
	square.setRotation(45);
	square.setFillColor(_fillColor ? _color : Color::Transparent);
	square.setOutlineColor(_color);
	square.setOutlineThickness(5.f);
}
#pragma endregion
