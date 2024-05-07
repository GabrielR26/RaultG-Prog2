#pragma once
#include "Macro.h"
#include "fstream"

//TODO change path
//#define FILE_CMDS filesystem::current_path().string() + "\\Save\\cmds.txt"
#define FILE_CMDS "D:\\GitHub\\RaultG-Prog2\\C++ revision\\ENet\\Save\\cmds.txt"
//#define FILE_CLIENT filesystem::current_path().string() + "\\Save\\clients.txt"
#define FILE_CLIENT "D:\\GitHub\\RaultG-Prog2\\C++ revision\\ENet\\Save\\clients.txt"

bool Write(const string& _path, const string& _text);
void FindValidWords(const string& _path, const string& _text, vector<string>& _validWords, const int _lettersToRemove = 0);
bool Contains(const string& _text, const string& _word);
bool IsValidWord(const string& _text, const string& _word);
void Clear(const string& _path);
