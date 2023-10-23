#include "GameEngine.h"

GameEngine::GameEngine()
{
	viewport = new Viewport();
	gameContent = new Content(viewport->GetWindow());
	database = new DataBase();
}

GameEngine::GameEngine(const int& _width, const int& _height, const std::string& _name)
{
	viewport = new Viewport(_width, _height, _name);
	gameContent = new Content(viewport->GetWindow());
	database = new DataBase();
}

GameEngine::~GameEngine()
{
	delete viewport, gameContent, database;
}

void GameEngine::RunEngine()
{
	engineEvent.Bind(this, &GameEngine::TestEvent);
	viewport->InitAllObjects(gameContent);
	engineEvent.Invoke();
	viewport->Draw();
}

void GameEngine::StopEngine()
{
	//TODO viewport->Stop();
}

void GameEngine::TestEvent()
{
	std::cout << "test event" << std::endl;
}
