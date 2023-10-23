#pragma once

#include <SFML/Graphics.hpp>

class Drawing
{
protected:
	sf::Shape* drawing = nullptr;

public:
	Drawing() = default;
	void Draw(sf::RenderWindow* _window, sf::Vector2f _position);
};

