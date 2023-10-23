#pragma once
#include "EngineObject.h"
#include "ActionEvent.h"

class Button : public EngineObject
{
private:
	bool isClicked = false;
	RenderWindow* window = nullptr;
	RectangleShape* rect = nullptr;
	Text label;
	Action onClicked;

	bool Contains(const Vector2i& _input) const;
public:
	Button(RenderWindow* _render, const FVector& _position, const FVector& _size, const std::string& _label, const int& _fontsize = 18);
	~Button();
	virtual void Draw(RenderWindow& _window) override;
	bool IsClicked() ;
	Action& OnClicked() { return onClicked; }
};

