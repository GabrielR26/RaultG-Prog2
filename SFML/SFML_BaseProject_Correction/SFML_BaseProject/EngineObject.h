#pragma once

#include "SFMLCore.h"

class EngineObject
{
public:
	virtual void Draw(RenderWindow& _window) {}

#pragma region exo
	//virtual void SetColor(const Color& _color) {}
	//virtual void SetOutlineColor(const Color& _color) {}  
#pragma endregion
};

