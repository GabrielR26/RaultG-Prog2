#pragma once
#include "Network.h"

class Server : public Network
{
	bool isRunning;
	map<ENetPeer*, string> registerClients;

public:
	Server();

public:
	virtual void Connect(const char* _ip, const int _port) override;
	void Run();
	void ProcessEvent(ENetEvent _event);
	void RegisterClient(ENetPeer* _client);
	void UnregisterClient(ENetPeer* _client);
	void SerializeClients();
};

