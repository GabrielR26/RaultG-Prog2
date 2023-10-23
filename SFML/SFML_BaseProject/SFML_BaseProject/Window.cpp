#include "Window.h"
#include "Button.h"
#include "DrawingCircle.h"
#include "DrawingSquare.h"
#include "DrawingTriangle.h"
#include "DrawingConvex.h"
#include <iostream>

Window::Window()
{
	window.create(sf::VideoMode(500, 500), "default");
	OpenWindow();
}

Window::Window(int _width, int _height, std::string _name)
{
	window.create(sf::VideoMode(_width, _height), _name);
	OpenWindow();
}

void Window::OpenWindow()
{
	Init();
	while (window.isOpen())
	{
		sf::Event _event;
		while (window.pollEvent(_event))
		{
			if (_event.type == sf::Event::Closed)
				CloseWindow();

			if (_event.mouseButton.button == sf::Mouse::Left)
				CheckButtonPressed();
		}

		Display();
	}
}

void Window::CloseWindow()
{
	window.close();
	drawing = nullptr;
	buttons.clear();
}

void Window::Display()
{
	window.clear(sf::Color::Black);

	for (size_t i = 0; i < buttons.size(); i++)
		buttons[i]->Draw(&window, sf::Vector2f((window.getSize().x / 6) * (i % 4 + 1), (window.getSize().x / 10) + (window.getSize().x / 20) * (i / 4)));

	if (drawing)
		drawing->Draw(&window, sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2));

	window.display();
}

void Window::AddButton(const std::string _text)
{
	Button* _button = new Button(_text);
	buttons.push_back(_button);
}

void Window::Init()
{
	AddButton(CIRCLE);
	AddButton(SQUARE);
	AddButton(TRIANGLE);
	AddButton(CONVEX);
	AddButton(CONVEX);
	AddButton(TRIANGLE);
	AddButton(SQUARE);
	AddButton(CIRCLE);
}

Button* Window::WhatButtonPressed()
{
	for (size_t i = 0; i < buttons.size(); i++)
		if (buttons[i]->HasFocus(sf::Mouse::getPosition(window)) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
			return buttons[i];
	return nullptr;
}

void Window::CheckButtonPressed()
{
	Button* _button = WhatButtonPressed();
	if (!_button)
		return;
	if (_button->GetShape() == CIRCLE)
		drawing = new DrawingCircle();
	else if (_button->GetShape() == SQUARE)
		drawing = new DrawingSquare();
	else if (_button->GetShape() == TRIANGLE)
		drawing = new DrawingTriangle();
	else if (_button->GetShape() == CONVEX)
		drawing = new DrawingConvex();
	else
		drawing = nullptr;
}
