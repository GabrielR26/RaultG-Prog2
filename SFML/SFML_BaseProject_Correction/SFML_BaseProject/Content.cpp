#include "Content.h"
#include "Core.h"
#include "Viewport.h"

Content::Content(RenderWindow* _render)
{
	//enginesObjects.push_back(new Square(FVector(100, 300), 50, Color::Cyan));
	//enginesObjects.push_back(new Square(FVector(100, 100), 50, Color::Yellow, false));
	//enginesObjects.push_back(new Triangle(FVector(250, 300), FVector(200, 400), FVector(300, 400)));
	//enginesObjects.push_back(new Circle(FVector(400, 300), 50, Color::Green));
	//enginesObjects.push_back(new Losange(FVector(200, 300), 30));
	//enginesObjects.push_back(new CircleTrigo(FVector(400, 300), 50, 20, Color::Blue));

	//enginesObjects.push_back(new Line(FVector(0, 0), FVector(1000, 600), Color::Red));	
	//enginesObjects.push_back(new Grid(100, Color::Cyan));

	makeTriangle = new Button(_render, FVector(100, 200), FVector(100, 50), "Draw triangle");
	makeCircle = new Button(_render, FVector(300, 200), FVector(100, 50), "Draw circle");
	makeSquare = new Button(_render, FVector(500, 200), FVector(100, 50), "Draw square");

	enginesObjects.push_back(makeTriangle);
	enginesObjects.push_back(makeCircle);
	enginesObjects.push_back(makeSquare);

	makeTriangle->OnClicked().Bind(this, &Content::MakeTriangle);
	makeCircle->OnClicked().Bind(this, &Content::MakeCircle);
	makeSquare->OnClicked().Bind(this, &Content::MakeSquare);
}

Content::~Content()
{
	for (EngineObject* _obj : enginesObjects)
		delete _obj;
	delete makeTriangle, makeCircle, makeSquare;
	makeTriangle = makeCircle = makeSquare = nullptr;
}

void Content::ContentTick()
{
	makeTriangle->IsClicked();
	makeCircle->IsClicked();
	makeSquare->IsClicked();
	//if (makeTriangle && makeTriangle->IsClicked())
	//	Viewport::SetShape(new Triangle(FVector(300, 300), FVector(200, 400), FVector(300, 400)));
	//if (makeCircle && makeCircle->IsClicked())
	//	Viewport::SetShape(new CircleTrigo(FVector(300, 300), 50, 20, Color::Red));
	//if (makeSquare && makeSquare->IsClicked())
	//	Viewport::SetShape(new Square(FVector(300, 300), 50, Color::Magenta, false));
}

void Content::MakeTriangle()
{
	Viewport::SetShape(new Triangle(FVector(300, 300), FVector(200, 400), FVector(300, 400)));
}

void Content::MakeCircle()
{
	Viewport::SetShape(new CircleTrigo(FVector(300, 300), 50, 20, Color::Red));
}

void Content::MakeSquare()
{
	Viewport::SetShape(new Square(FVector(300, 300), 50, Color::Magenta, false));
}