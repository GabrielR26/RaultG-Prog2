#pragma once
#include "Line.h"
#include <vector>

class Grid : public EngineObject
{
	std::vector<Line*> grid;
public:
	Grid(const int& _gap = 50, const Color& _color = Color::White);
	~Grid();
	virtual void Draw(RenderWindow& _window) override;
};
