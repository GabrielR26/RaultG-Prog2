#include "Triangle.h"

Triangle::Triangle(FVector _a, FVector _b, FVector _c)
{
	lines = new Vertex[6]
	{
		Vertex(_a, Color::Blue),
		Vertex(_b, Color::Blue),
		Vertex(_b, Color::White),
		Vertex(_c, Color::White),
		Vertex(_c, Color::Red),
		Vertex(_a, Color::Red)
	};
}

Triangle::~Triangle()
{
	delete[] lines;
}

void Triangle::Draw(RenderWindow& _window)
{
	_window.draw(lines, 6, PrimitiveType::Lines);
}