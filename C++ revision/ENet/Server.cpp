#include "Server.h"

Server::Server() : Network()
{
	data = HostData(4, 1, Bandwidth(0, 0));
	type = NT_SERVER;
	latency = 1;

	isRunning = false;
}

void Server::Connect(const char* _ip, const int _port)
{
	Network::Connect(_ip, _port);
	ShowAddress("Server : ", address);

	isRunning = true;
	Run();
}

void Server::Run()
{
	enet_uint8* _data;
	while (isRunning)
	{
		Display("Server", YELLOW);
		while (enet_host_service(host, &netEvent, latency * 1000) >= NULL)
		{
			switch (netEvent.type)
			{
			case ENetEventType::ENET_EVENT_TYPE_CONNECT:
				RegisterClient(netEvent.peer);
				break;

			case ENetEventType::ENET_EVENT_TYPE_DISCONNECT:
				ShowAddress("A new client just disconnected with address : ", netEvent.peer->address);
				break;

			case ENetEventType::ENET_EVENT_TYPE_RECEIVE:
				ShowAddress("New Message from : ", netEvent.peer->address);
				ProcessPacket(netEvent.packet);
				break;

			case ENetEventType::ENET_EVENT_TYPE_NONE:
				Display("NONE", WHITE);
				break;
			}
		}

		if (_getch() == 27)
		{
			Display("QUIT", RED);
			isRunning = false;
		}
	}
}

void Server::ProcessPacket(ENetPacket* _packet)
{
	if (!netEvent.packet)
	{
		Display("Packet error", RED);
	}
	const char* _name = (char*)_packet->data;
	Display(_name, PINK);
}

void Server::RegisterClient(ENetPeer* _client)
{
	registerClients.push_back(_client);
	ShowAddress("A new client just connected with address : ", _client->address);
	Display("Client registered: " + to_string(registerClients.size()), ORANGE);
}
