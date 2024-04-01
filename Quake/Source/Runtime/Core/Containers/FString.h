#pragma once
#include <string>
#include <iostream>

using namespace std;

typedef unsigned int uInt;

class FString
{
	string text;

private:
	uInt GetLength(const string& _string) const
	{
		return static_cast<uInt>(_string.size());
	}

public:
	FString();
	FString(const char* _string);
	FString(const FString& _other);

#pragma region Getter
	const uInt& Length() const
	{
		return static_cast<uInt>(text.size());
	}
	const string& GetText() const
	{
		return text;
	}
	const string::const_iterator Begin() const
	{
		return text.begin();
	}
	const string::const_iterator End() const
	{
		return text.end();
	}
	const bool IsEmpty() const
	{
		return text.empty();
	}
#pragma endregion

#pragma region Method
	FString& Append(const char* _string);
	FString& Append(const char _char);
	FString& Append(const FString& _string);

	bool Contains(const char* _string);
	bool Contains(FString _string);
	bool EndsWith(const char* _string);
	bool EndsWith(FString _string);
	bool StartsWith(const char* _string);
	bool StartsWith(FString _string);
	bool Equals(FString _string);

	void Empty();

	uInt Find(const char* _string);
	uInt Find(FString _string);
	uInt FindChar(const char _char);
	uInt FindLastChar(const char _char);

	static FString FromInt(const int _int);
	static FString SanitizeFloat(const float _float);

	void InsertAt(const uInt _index, const char* _string);
	void InsertAt(const uInt _index, FString _string);
	void RemoveAt(const uInt _index, const int _size);
	void Replace(const char* _oldText, const char* _newText);
	void Replace(const FString& _oldText, const FString& _newText);

	FString ToLower();
	FString ToUpper();
	void Display();

	FString Trim();
	FString SubString(size_t _begin) const;
	FString SubString(size_t _begin, size_t _end) const;
#pragma endregion

#pragma region Operator
	FString& operator = (const char* _string);
	FString& operator = (const FString& _string);
	bool operator == (const char* _string);
	bool operator == (const FString& _string);
	bool operator != (const char* _string);
	bool operator != (const FString& _string);
	FString& operator += (char _c);
	FString& operator += (const char* _string);
	FString& operator += (const FString& _string);
	const char* operator [] (const uInt& _index);
	const char* operator* ();
#pragma endregion
};

ostream& operator << (ostream& _stream, const FString& _string);