#include "FileLoader.h"

bool Write(const string& _path, const string& _text)
{
	ofstream _stream = ofstream(_path, ios_base::app);

	if (!_stream)
		throw("Error => invalid path : " + _path);

	if (!Contains(_path, _text))
	{
		_stream << _text << endl;
		return true;
	}

	return false;
}

void FindValidWords(const string& _path, const string& _text, vector<string>& _validWords)
{
	ifstream _stream = ifstream(_path);

	if (!_stream)
		throw("Error => invalid path : " + _path);

	string _word;
	while (_stream >> _word)
	{
		if (IsValidWord(_text, _word))
			_validWords.push_back(_word);
	}
}

bool Contains(const string& _path, const string& _text)
{
	ifstream _stream = ifstream(_path);

	if (!_stream)
		throw("Error => invalid path : " + _path);

	string _word;
	while (_stream >> _word)
	{
		string _currentWord = _word;
		do
		{
			if (IsValidWord(_text, _currentWord))
				return true;
			_currentWord.erase(_currentWord.begin());
		} while (!_currentWord.empty());
	}

	return false;
}

bool IsValidWord(const string& _text, const string& _word)
{
	return _text == _word;
}

void Clear(const string& _path)
{
	ofstream _stream = ofstream(_path);

}
