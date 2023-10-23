#pragma once

#include "Core.h"
#include "DataBase.h"
#include "ActionEvent.h"

class GameEngine
{
private:
	DataBase* database = nullptr;
	Viewport* viewport = nullptr;
	Content* gameContent = nullptr;
	std::vector<EngineObject*> enginesObjects;
	Action engineEvent;
	//ressources = nullptr;

public:
	GameEngine();
	GameEngine(const int& _width, const int& _height, const std::string& _name);
	~GameEngine();
	void RunEngine();
	void StopEngine();

	void TestEvent();
};
