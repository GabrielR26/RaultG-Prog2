#include "CircleTrigo.h"
#include <math.h>

#define PI 3.14159265358979
#define TORAD PI/180

CircleTrigo::CircleTrigo(const FVector& _position, const int& _radius, const int& _definition, const Color& _color)
{
	definition = _definition;
	circle = new Vertex[definition + 1];
	for (size_t i = 0; i < definition + 1; i++)
	{
		const float _part = ((float)i / definition) * 360,
			_x = cos(_part * TORAD) * _radius,
			_y = sin(_part * TORAD) * _radius;
		circle[i] = Vertex(FVector(_x, _y) + _position, _color);
	}
}

CircleTrigo::~CircleTrigo()
{
	delete[] circle;
}

void CircleTrigo::Draw(RenderWindow& _window)
{
	_window.draw(circle, definition + 1, LinesStrip);
}
