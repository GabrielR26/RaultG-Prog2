#include "Engine.h"

Engine::Engine()
{
	window = new EngineWindow();
}

Engine::~Engine()
{
	delete window;
}

void Engine::Start()
{
	window->Start();
}

void Engine::Update()
{
	GLFWwindow* _window = window->GetWindow();

	while (glfwGetKey(_window, GLFW_KEY_ESCAPE) != GLFW_PRESS && !glfwWindowShouldClose(_window))
	{
		window->Update();
	}
}

void Engine::Stop()
{
	window->Stop();
}

void Engine::Launch()
{
	Start();
	Update();
	Stop();
}
