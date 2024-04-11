#pragma once
#include "Network.h"

class Client : public Network
{
	bool isConnected;
	ENetPeer* peer;
	string name;

public:
	inline const string& GetName()
	{
		return name;
	}

public:
	Client();

public:
	virtual void Connect(const char* _ip, const int _port) override;
	void Run();
	void Register();
	void SendPacket(const char* _msg, const size_t& _size);
};

