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
				UnregisterClient(netEvent.peer);
				break;

			case ENetEventType::ENET_EVENT_TYPE_RECEIVE:
				ProcessEvent(netEvent);
				break;

			case ENetEventType::ENET_EVENT_TYPE_NONE:
				//Display("NONE", WHITE);
				break;
			}
		}
	}
}

void Server::ProcessEvent(ENetEvent _event)
{
	if (!_event.packet)
		Display("Packet error", RED);
	string _msg = (char*)_event.packet->data;

	if (Contains(_msg, "CN_"))
	{
		string _name = _msg.substr(_msg.find_first_of('_') + 1, string::npos);
		registerClients[_event.peer] = _name;
		SerializeClients();
	}
	else
	{
		Display("New Message from: " + registerClients[_event.peer], PURPLE);
		Display(_msg, PINK);
	}
}

void Server::RegisterClient(ENetPeer* _client)
{
	registerClients.insert(pair<ENetPeer*, string>(_client, ""));
	ShowAddress("A new client just connected with address: ", _client->address);
	Display("Client registered: " + to_string(registerClients.size()), ORANGE);
}

void Server::UnregisterClient(ENetPeer* _client)
{
	Display("A client just disconnected with address: " + registerClients[_client], PURPLE);
	registerClients.erase(_client);

	SerializeClients();
}

void Server::SerializeClients()
{
	Clear(FILE_CLIENT);
	for (pair<ENetPeer*, string> clients : registerClients)
	{
		Write(FILE_CLIENT, clients.second);
	}
}
