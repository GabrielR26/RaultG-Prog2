#include "DrawingConvex.h"

DrawingConvex::DrawingConvex()
{
	sf::ConvexShape* _convex = new sf::ConvexShape();
	_convex->setPointCount(5);
	_convex->setPoint(0, sf::Vector2f(0.f, 0.f));
	_convex->setPoint(1, sf::Vector2f(150.f, 10.f));
	_convex->setPoint(2, sf::Vector2f(120.f, 90.f));
	_convex->setPoint(3, sf::Vector2f(30.f, 100.f));
	_convex->setPoint(4, sf::Vector2f(0.f, 50.f));
	drawing = new sf::ConvexShape(*_convex);
}


