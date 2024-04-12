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
	inline const ENetAddress& GetAddress()
	{
		return address;
	}
	inline ENetPeer* GetPeer()
	{
		return peer;
	}

	void SetPeer(ENetPeer* _peer) 
	{
		peer = _peer;
	}

public:
	Client();

public:
	virtual void Connect(const char* _ip, const int _port) override;
	void Run();
	void ProccessEvent(const ENetEvent& _event);
	void Register();
	void SendPacket(const void* _msg, const size_t& _size);
};

