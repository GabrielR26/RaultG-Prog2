#pragma once
#include "Macro.h"

struct TextData
{
	string path;
	int letterToRemove;
};

class ChatBox
{
	string text;
	vector<string> saves;
	int index;
	char buffer;
	bool cmds;
	bool clts;
	bool tabs;
	vector<string> commands;
	vector<string> clients;

public:
	static ChatBox& GetInstance()
	{
		static ChatBox _instance;
		return _instance;
	}

public:
	ChatBox();

private:
	void DisplayText(const string& _msg);
	void DisplayCommands(const string& _msg);
	void DisplayClients(const string& _msg);
	void CheckCommand(const string& _msg);
	TextData GetFilePath(const string& _message) const;

public:
	void Open(string& _msg);
};

