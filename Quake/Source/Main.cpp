#include <iostream>
#include "Runtime/Core/Containers/FString.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	const char _string[6] = "hello";
	FString _text = FString(_string);

	_text.Append(", je").Append(" ");
	_text += "s'appelle";
	_text += FString(" GROOT");
	_text.Display();

	return EXIT_SUCCESS;
}
