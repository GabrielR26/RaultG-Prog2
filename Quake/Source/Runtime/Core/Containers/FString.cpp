#include "FString.h"

FString::FString()
{
	text = "";
}

FString::FString(const char* _string)
{
	text = _string;
}

FString::FString(const FString& _other)
{
	text = _other.text;
}

FString& FString::Append(const char* _string)
{
	text.append(_string);
	return *this;
}

FString& FString::Append(const FString& _string)
{
	return Append(_string.text.c_str());
}

bool FString::Contains(const char* _string)
{
	return Find(_string) != -1;
}

bool FString::Contains(FString _string)
{
	return Contains(_string.text.c_str());
}

bool FString::EndsWith(const char* _string)
{
	const uInt& _pos = static_cast<const uInt&>(text.find(_string));
	const uInt& _finalPos = Length() - static_cast<uInt>(strlen(_string)) - 1;
	return _pos == _finalPos;
}

bool FString::EndsWith(FString _string)
{
	return EndsWith(_string.text.c_str());
}

bool FString::StartsWith(const char* _string)
{
	return Find(_string) == 0;
}

bool FString::StartsWith(FString _string)
{
	return Find(_string) == 0;
}

bool FString::Equals(FString _string)
{
	return operator==(_string);
}

void FString::Empty()
{
	text.clear();
}

uInt FString::Find(const char* _string)
{
	const uInt& _pos = static_cast<const uInt&>(text.find(_string));
	return _pos != string::npos ? _pos : -1;
}

uInt FString::Find(FString _string)
{
	return Find(_string.text.c_str());
}

uInt FString::FindChar(const char _char)
{
	return Find(&_char);
}

uInt FString::FindLastChar(const char _char)
{
	const uInt& _pos = static_cast<const uInt&>(text.find_last_of(_char));
	return _pos != string::npos ? _pos : -1;
}

FString FString::FromInt(const int _int)
{
	return FString(to_string(_int).c_str());
}

FString FString::SanitizeFloat(const float _float)
{
	return FString(to_string(_float).c_str());
}

void FString::InsertAt(const uInt _index, const char* _string)
{
	const string::const_iterator& _start = text.begin() + _index;
	text.insert(_start, *_string); 
}

void FString::InsertAt(const uInt _index, FString _string)
{
	text.insert(_index, _string.text.c_str());
}

void FString::RemoveAt(const uInt _index, const int _size)
{
	const string::const_iterator& _start = text.begin() + _index;
	const string::const_iterator& _end = _start + _size;
	text.erase(_start, _end);
}

void FString::Replace(const char* _oldText, const char* _newText)
{
	uInt _pos;

	while (true)
	{
		_pos = Find(_oldText);
		if (_pos == -1) 
			break;
		const string::iterator& _start = text.begin() + _pos;
		const string::iterator& _end = _start + strlen(_oldText);
		text.replace(_start, _end, _newText, strlen(_newText));
	} 
}

void FString::Replace(const FString& _oldText, const FString& _newText)
{
	Replace(_oldText.text.c_str(), _newText.text.c_str());
}

FString FString::ToLower()
{
	string _lowerText = text;

	for (char& _letter : _lowerText)
		_letter = tolower(_letter);

	return FString(_lowerText.c_str());
}

FString FString::ToUpper()
{
	string _upperText = text;

	for (char& _letter : _upperText)
		_letter = toupper(_letter);

	return FString(_upperText.c_str());
}

void FString::Display()
{
	cout << text << endl;
}

FString& FString::operator=(const char* _string)
{
	text = _string;
	return *this;
}

FString& FString::operator=(const FString& _string)
{
	return operator=(_string.text.c_str());
}

bool FString::operator==(const char* _string)
{
	return text == _string;
}

bool FString::operator==(const FString& _string)
{
	return operator==(_string.text.c_str());
}

bool FString::operator!=(const char* _string)
{
	return !operator==(_string);
}

bool FString::operator!=(const FString& _string)
{
	return operator!=(_string.text.c_str());
}

FString& FString::operator+=(const char* _string)
{
	text += _string;
	return *this;
}

FString& FString::operator+=(const FString& _string)
{
	return operator+=(_string.text.c_str());
}

const char* FString::operator[](const uInt& _index)
{
	return &text[_index];
}

const char* FString::operator*()
{
	return text.c_str();
}

ostream& operator << (ostream& _stream, FString _string)
{
	_stream << _string.GetText();
	return _stream;
}
