#pragma once
#include "Network.h"
#include "Client.h"

class Server : public Network
{
	bool isRunning;
	vector<Client*> registerClients;

private:
	inline Client* RetreiveClientFromPacket(ENetPacket* _packet) const
	{
		return new Client(*reinterpret_cast<Client*>(_packet->data));
	}

public:
	Server();
	~Server();

public:
	virtual void Connect(const char* _ip, const int _port) override;
	void Run();
	void ProcessEvent(ENetEvent _event);
	void RegisterClient(Client* _client);
	void SendToAllClients(ENetPacket* _packet, ENetPeer* _sender);
	void SendToClient(ENetPacket* _packet, Client* _client);
	void UnregisterClient(Client* _client);
	void SerializeClients();

	void TryToConnect();
};

