#include "Macro.h""

void Display(const string& _text, const string& _color, const bool _endl)
{
	cout << _color << _text << WHITE;
	if (_endl) cout << endl;
}

void ShowAddress(const string& _owner, const ENetAddress& _address)
{
	Display(_owner, GREEN, false);
	Display(to_string(_address.host) + "-" + to_string(_address.port), BLUE, true);
}