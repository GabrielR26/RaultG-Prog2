#pragma once

#include "SFMLCore.h"
#include "Square.h"
#include <string>
#include <vector>

class Viewport
{
private:
	RenderWindow* sfmlWindow = nullptr;
	std::vector<EngineObject*> allObjects;
	class Content* content = nullptr;
	static inline EngineObject* mainShape = nullptr;

	void DrawAllObjects();

public:
	static inline int Width;
	static inline int Height;
	static void SetShape(EngineObject* _shape);
	inline RenderWindow* GetWindow() { return sfmlWindow; }
	Viewport();
	Viewport(const int& _width, const int& _height, const std::string& _name);
	~Viewport();
	void Draw();
	void InitAllObjects(const std::vector<EngineObject*>& _objects);
	void InitAllObjects(class Content* _content);
	void AddObjectsToViewport(EngineObject* _object);
};

