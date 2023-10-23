#include "Drawing.h"

void Drawing::Draw(sf::RenderWindow* _window, sf::Vector2f _position)
{
	drawing->setPosition(_position);
	_window->draw(*drawing);
}
