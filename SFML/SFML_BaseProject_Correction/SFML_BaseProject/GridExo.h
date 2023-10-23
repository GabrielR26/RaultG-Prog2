#pragma once
#include "Line.h"
#include <vector>

class GridExo : public EngineObject
{
private:
	std::vector<Line*> lines = std::vector<Line*>();
	std::vector<Line*> cols = std::vector<Line*>();
	int nbLine, nbCol;

public:
	GridExo(RenderWindow& _window, const int& _line, const int& _col);
	~GridExo();
	virtual void Draw(RenderWindow& _window) override;
};

