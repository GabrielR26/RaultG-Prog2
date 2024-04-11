#pragma once
#include "Network.h"

class Server : public Network
{
	bool isRunning;
	vector<ENetPeer*> registerClients;

public:
	Server();

public:
	virtual void Connect(const char* _ip, const int _port) override;
	void Run();
	void ProcessPacket(ENetPacket* _packet);
	void RegisterClient(ENetPeer* _client);
};

