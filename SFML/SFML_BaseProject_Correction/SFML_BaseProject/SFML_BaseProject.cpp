// SFML_BaseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameEngine.h"

int main()
{
	GameEngine* _engine = new GameEngine(1000, 600, "window");
	_engine->RunEngine();
	//_engine->StopEngine();
	delete _engine;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

//