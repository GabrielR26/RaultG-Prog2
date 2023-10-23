#include "losange.h"
#include <math.h>

#define PI 3.14159265358979

Losange::Losange(const FVector& _position, const int& _definition)
{
	definition = _definition;
	losange = new Vertex[definition * 2];
	float _angle = 360 / definition;
	int _index = 0;
	for (size_t i = 0; i < 360; i += _angle)
	{
		FVector _trigo = FVector((cos(i * (PI / 180))) * 50, (sin(i * (PI / 180))) * 50);
		FVector _pos = _position + _trigo;
		losange[_index] = Vertex(_pos, Color::Red);
		_index++;
		if (_index != 1)
		{
			losange[_index] = losange[_index - 1];
			_index++;
		}
	}
	losange[_index] = losange[0];
}

Losange::~Losange()
{
	delete[] losange;
}

void Losange::Draw(RenderWindow& _window)
{
	_window.draw(losange, definition * 2, Lines);
}
