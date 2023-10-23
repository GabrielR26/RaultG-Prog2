#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

#define CIRCLE "circle"
#define SQUARE "square"
#define TRIANGLE "triangle"
#define CONVEX "convex"

class Window
{
private:
	sf::RenderWindow window;
	std::string name = "";
	std::vector<class Button*> buttons = std::vector<class Button*>();
	class Drawing* drawing = nullptr;

public:
	Window();
	Window(int _width, int _height, const std::string _name);

	void AddButton(const std::string _text);
private:
	void OpenWindow();
	void CloseWindow();
	void Display();
	void Init();
	void CheckButtonPressed();
	Button* WhatButtonPressed();
};

