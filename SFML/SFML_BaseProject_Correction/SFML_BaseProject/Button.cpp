#include "Button.h"
#include "DataBase.h"

Button::Button(RenderWindow* _render, const FVector& _position, const FVector& _size, const std::string& _label, const int& _fontsize)
{
	window = _render;
	rect = new RectangleShape(_size);
	rect->setPosition(_position);
	label = Text(_label, DataBase::Font);
	label.setPosition(_position);
	label.setFillColor(Color::Red);
	label.setCharacterSize(_fontsize);
}

bool Button::Contains(const Vector2i& _input) const
{
	const bool _isvalid = (_input.x > rect->getPosition().x &&
							_input.x < rect->getPosition().x + rect->getSize().x &&
							_input.y > rect->getPosition().y &&
							_input.y < rect->getPosition().y + rect->getSize().y);
	return _isvalid;
}

Button::~Button()
{
	delete rect;
}

void Button::Draw(RenderWindow& _window)
{
	_window.draw(*rect);
	_window.draw(label);
}

bool Button::IsClicked()
{
	bool _canClick = Contains(Mouse::getPosition(*window)),
		_hit = Mouse::isButtonPressed(Mouse::Left);
	if (_canClick && _hit && !isClicked)
	{
		onClicked.Invoke();
		isClicked = true;
		return true;
	}
	else if (!_hit && isClicked)
		isClicked = false;
	return false;
}