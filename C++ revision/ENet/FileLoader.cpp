#include "FileLoader.h"

bool Write(const string& _path, const string& _text)
{
	ofstream _stream = ofstream(_path, ios_base::app);

	if (!_stream)
		throw("Error => invalid path : " + _path);

	const size_t _size = _text.size();
	for (size_t i = 0; i < _size; i++)
	{
		_stream << _text[i];
	}
	_stream << endl;

	return _stream.good();
}

void FindValidWords(const string& _path, const string& _text, vector<string>& _validWords)
{
	ifstream _stream = ifstream(_path);

	if (!_stream)
		throw("Error => invalid path : " + _path);

	string _word;
	while (_stream >> _word)
	{
		if (Contains(_word, _text))
			_validWords.push_back(_word);
	}
}

bool Contains(const string& _text, const string& _word)
{
	if (_text.size() < _word.size())
		return false;

	const size_t _textSize = _text.size();
	const size_t _wordSize = _word.size();
	bool res = false;
	for (size_t i = 0; i < _textSize; i++)
	{
		if (_text[i] == _word[0])
		{
			if (i + _wordSize >= _textSize)
				return false;
			for (size_t j = 0; j < _wordSize; j++)
			{
				if (_text[i + j] == _word[j])
				{
					res = true;
					continue;
				}
				else
					res = false;
			}
		}
	}
	return res;
}

bool IsValidWord(const string& _text, const string& _word)
{
	return _text == _word;
}

void Clear(const string& _path)
{
	ofstream _stream = ofstream(_path);

	string _fileName = "";
	size_t _size = _path.size();
	size_t _index = _path.find_last_of('/');
	for (size_t i = _index; i < _size; i++)
	{
		_fileName += _path[i];
	}

	_stream.open(_fileName, std::ofstream::out | std::ofstream::trunc);
	_stream.close();
}
