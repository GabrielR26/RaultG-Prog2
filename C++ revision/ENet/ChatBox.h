#pragma once
#include "Macro.h"

class ChatBox
{
	string text;
	string save;
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
	void GetFilePath() const;

public:
	void Open(string& _msg);
};

