#include <iostream>
#include <functional>
#include <vector>
#include <memory>
#include <map>
#include "TSharedPtr.h"

#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)

void Cast();

using namespace std;

struct Test
{
	string text = "lorem ipsum";
};

ostream& operator << (ostream& _stream, const Test& _test)
{
	return _stream << _test.text << endl;
}

#pragma region Union
enum InputType
{
	KEYBOARD,
	GAMEPAD,

	COUNT
};

struct Axes
{
	float x;
	float y;
};

union GameInput
{
	char key;
	int button;
	Axes axis;
};

template <typename RetVal, typename... Args>
struct InputEvent
{
	InputType device;
	GameInput input;
	function<RetVal(Args...)> callback;

	InputEvent(const InputType& _device, const GameInput& _input, const function<RetVal(Args...)>& _callback)
	{
		device = _device;
		input = _input;
		callback = _callback;
	}

	RetVal Callback(Args... _args) const
	{
		return static_cast<RetVal>(callback(_args...));
	}
};
#pragma endregion

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

#pragma region SharedPtr
	TSharedPtr<int> _sharedPtr1 = TSharedPtr<int>(5);

	//cout << "Adress: " << _sharedPtr1.Get() << endl;
	//cout << "Value: " << *_sharedPtr1.Get() << endl;

	//TSharedPtr<int> _sharedPtr2 = _sharedPtr1;
	//cout << "Adress: " << _sharedPtr2.Get() << endl;
	//cout << "Count: " << _sharedPtr1.Count() << endl;

	TSharedPtr<Test> _TsharedPtr = TSharedPtr<Test>(new Test());
	if (_TsharedPtr)
	{
		cout << _TsharedPtr << endl;
		//*_TsharedPtr.Get();
	}

	TSharedPtr<string> _test = TSharedPtr<string>("5");
#pragma endregion

#pragma region Union
	const InputEvent<void>& _kEvent = InputEvent<void>(KEYBOARD, { 'a' }, [&]() { cout << "Keyboard" << endl; });
	_kEvent.Callback();

	const InputEvent<int, const float>& _gEvent = InputEvent<int, const float>(GAMEPAD, { 5 }, [&](const float _float) { return _float; });
	cout << "Result: " << _gEvent.Callback(5.0f) << endl;
#pragma endregion

	return EXIT_SUCCESS;
}

void Cast()
{
	//Cast C
	const int& _c = (const int&)5.5f;

	//implicite cast
	const float _impl = 5;

	//Static_cast
	int _static = static_cast<int>(5.5f);

	//Reinterpret_cast
	const char* _chars = "test";
	string _string = reinterpret_cast<string&>(_chars);

	//Const_cast
	volatile int _const = 2;
	int _i = const_cast<int&>(_const);

	//Dynamic_cast sur class
	// #flem
}