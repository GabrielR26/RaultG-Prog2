#pragma once
#include "Macro.h"

class ChatBox
{
	string text;

public:
	static ChatBox& GetInstance()
	{
		static ChatBox _instance;
		return _instance;
	}

public:
	ChatBox();

private:
	void DisplayText(const string& _msg) const;
	void GetFilePath() const;

public:
	void Open(string& _msg);
};

