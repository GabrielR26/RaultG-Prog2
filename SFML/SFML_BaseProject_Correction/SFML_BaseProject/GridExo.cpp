#include "GridExo.h"

GridExo::GridExo(RenderWindow& _window, const int& _line, const int& _col)
{
	nbLine = _line;
	nbCol = _col;
	for (size_t i = 0; i < nbLine; i++)
		lines.push_back(new Line(FVector(0, (_window.getSize().y / nbLine) * i), FVector(_window.getSize().x, (_window.getSize().y / nbLine) * i), Color::Cyan));
	for (size_t i = 0; i < nbCol; i++)
		cols.push_back(new Line(FVector((_window.getSize().x / nbCol) * i, 0), FVector((_window.getSize().x / nbCol) * i, _window.getSize().y), Color::Cyan));

	/*nbLine = (_line * 2) - 2;
	nbCol = (_col * 2) - 2;
	line = new Vertex[nbLine];
	col = new Vertex[nbCol];
	int _index = 1;
	for (size_t i = 0; i < nbLine; i += 2)
	{
		FVector _pos1 = FVector(0, (_window.getSize().y / _line) * _index);
		FVector _pos2 = FVector(_window.getSize().x, (_window.getSize().y / _line) * _index);
		line[i] = Vertex(_pos1, Color::Cyan);
		line[i + 1] = Vertex(_pos2, Color::Cyan);
		_index++;
	}
	_index = 1;
	for (size_t i = 0; i < nbCol; i += 2)
	{
		FVector _pos1 = FVector((_window.getSize().x / _col) * _index, 0);
		FVector _pos2 = FVector((_window.getSize().x / _col) * _index, _window.getSize().y);
		col[i] = Vertex(_pos1, Color::Cyan);
		col[i + 1] = Vertex(_pos2, Color::Cyan);
		_index++;
	}*/
}

GridExo::~GridExo()
{
}

void GridExo::Draw(RenderWindow& _window)
{
	for (size_t i = 0; i < nbLine; i++)
		lines[i]->Draw(_window);
	for (size_t i = 0; i < nbCol; i++)
		cols[i]->Draw(_window);
}
