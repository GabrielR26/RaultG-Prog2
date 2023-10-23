#pragma once

#include "EngineObject.h"
#include <vector>
#include "Button.h"

class Content
{
private:
	std::vector<EngineObject*> enginesObjects;
	Button* makeTriangle = nullptr,
		*makeCircle = nullptr,
		*makeSquare = nullptr;

public:
	inline std::vector<EngineObject*> Get() const { return enginesObjects; }
	Content(RenderWindow* _window);
	~Content();
	void ContentTick();
	void MakeTriangle();
	void MakeCircle();
	void MakeSquare();
};

