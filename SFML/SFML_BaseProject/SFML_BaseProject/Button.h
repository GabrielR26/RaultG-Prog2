#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Button
{
private:
	sf::RectangleShape rect = sf::RectangleShape(sf::Vector2f(150.f, 40.f));
	sf::Text text = sf::Text();
	sf::Font font = sf::Font();
	std::string shape = "";

public:
	Button() = default;
	Button(std::string _drawable);

	void Draw(sf::RenderWindow* _window, sf::Vector2f _position); 
	bool HasFocus(sf::Vector2i _mousePosition);
	std::string GetShape();
};

