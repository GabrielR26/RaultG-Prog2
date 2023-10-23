#include "Grid.h"
#include "Viewport.h"

Grid::Grid(const int& _gap, const Color& _color)
{
	for (size_t x = 0; x < Viewport::Width; x += _gap)
		grid.push_back(new Line(FVector(x, 0), FVector(x, 600), _color));
	for (size_t y = 0; y < Viewport::Height; y += _gap)
		grid.push_back(new Line(FVector(0, y), FVector(1000, y), _color));
}

Grid::~Grid()
{
	for (size_t i = 0; i < grid.size(); i++)
		delete grid[i];
	grid.clear();
}

void Grid::Draw(RenderWindow& _window)
{
	for (size_t i = 0; i < grid.size(); i++)
		grid[i]->Draw(_window);
}
