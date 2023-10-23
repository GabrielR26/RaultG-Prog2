#include "Viewport.h"
#include "Content.h"

Viewport::Viewport()
{
	sfmlWindow = new RenderWindow(VideoMode(1020, 720), "Render");
}

Viewport::Viewport(const int& _width, const int& _height, const std::string& _name)
{
	Width = _width;
	Height = _height;
	sfmlWindow = new RenderWindow(VideoMode(_width, _height), _name);
}

Viewport::~Viewport()
{
	delete sfmlWindow;
	delete mainShape;
	for (size_t i = 0; i < allObjects.size(); i++)
		delete allObjects[i];
	allObjects.clear();
}

void Viewport::Draw()
{
	while (sfmlWindow->isOpen())
	{
		Event _event;
		while (sfmlWindow->pollEvent(_event))
		{
			if (_event.type == Event::Closed)
				sfmlWindow->close();
		}

		sfmlWindow->clear();
		DrawAllObjects();
		if (mainShape)
			mainShape->Draw(*sfmlWindow);
		content->ContentTick();
		sfmlWindow->display();
	}
}

void Viewport::DrawAllObjects()
{
	for (EngineObject* _object : allObjects)
	{
		if (!_object)
			continue;
		_object->Draw(*sfmlWindow);
	}
}

void Viewport::InitAllObjects(const std::vector<EngineObject*>& _objects)
{
	allObjects = _objects;
}

void Viewport::InitAllObjects(Content* _content)
{
	content = _content;
	allObjects = _content->Get();
}

void Viewport::AddObjectsToViewport(EngineObject* _object)
{
	allObjects.push_back(_object);
}

void Viewport::SetShape(EngineObject* _shape)
{
	delete mainShape;
	mainShape = _shape;
}
