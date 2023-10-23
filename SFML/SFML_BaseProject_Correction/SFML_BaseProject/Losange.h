#pragma once
#include "EngineObject.h"

//Exo cicle trigo
class Losange : public EngineObject
{
	Vertex* losange; //other circle
	int definition = 0;

public:
	Losange(const FVector& _position, const int& _definition = 30);
	~Losange();
	virtual void Draw(RenderWindow& _window) override;
};

