#include "Button.h"

Button::Button(std::string _drawable)
{
	shape = _drawable;
	rect.setFillColor(sf::Color(255,255,255));
	font.loadFromFile("C://Users//RAUL2903//Documents//GitHub//Raultg_prog2//SFML_BaseProject//SFML-2.5.1//examples//island//resources//sansation.ttf");
	text.setFont(font);
	text.setString("Draw " + _drawable);
	text.setCharacterSize(22);
	text.setFillColor(sf::Color::Red);
}

void Button::Draw(sf::RenderWindow* _window, sf::Vector2f _position)
{
	rect.setPosition(_position);
	text.setPosition(_position);
	_window->draw(rect);
	_window->draw(text);
}

bool Button::HasFocus(sf::Vector2i _mousePosition)
{
	return _mousePosition.x > rect.getPosition().x && _mousePosition.x < rect.getPosition().x + rect.getSize().x
		&& _mousePosition.y > rect.getPosition().y && _mousePosition.y < rect.getPosition().y + rect.getSize().y;
}

std::string Button::GetShape()
{
	return shape;
}
