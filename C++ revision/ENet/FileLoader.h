#pragma once
#include "Macro.h"
#include "fstream"

bool Write(const string& _path, const string& _text);
void FindValidWords(const string& _path, const string& _text, vector<string>& _validWords);
bool Contains(const string& _text, const string& _word);
bool IsValidWord(const string& _text, const string& _word);
void Clear(const string& _path);
