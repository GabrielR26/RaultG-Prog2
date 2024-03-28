#include <iostream>
#include "Runtime/Core/Containers/FString.h"
#include "Runtime/Core/Containers/TArray.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

#pragma region FString
	//const char _string[6] = "hello";
//FString _text = FString(_string);
//_text.Append(", je").Append(" ");
//_text += "s'appelle";
//_text += FString(" GROOT");
//_text.Display();  
#pragma endregion

#pragma region TArray
	//TArray<string> _array = { "1", "2", "3", "4" };
	//_array.Display();

	//_array.Add("5");
	//_array.Display();

	//_array.Append({ "6", "7"});
	//_array.Display();

	//cout << _array.Contains(1) << endl;
	//cout << _array.Find(1) << endl;
	//cout << _array.FindLast(1) << endl;

	//_array.Insert("5", 4);
	//_array.Display();
	//_array.Insert({ "6", "7", "2" }, 5);
	//_array.Display();

	//_array.RemoveBack();
	//_array.Display();
	//_array.Remove("1");
	//_array.Display();
	//_array.RemoveAll("2");
	//_array.Display();

	//_array.Empty();
	//_array.Display();  
#pragma endregion

	return EXIT_SUCCESS;
}
