#include "Server.h"
#include "Client.h"

Server::Server() : Network()
{
	data = HostData(4, 1, Bandwidth(0, 0));
	type = NT_SERVER;
	latency = 1;

	isRunning = false;
}

Server::~Server()
{
	for (Client* _client : registerClients)
		delete _client;
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
		Display(".", YELLOW, false);
		while (enet_host_service(host, &netEvent, latency * 1000) > NULL)
		{
			switch (netEvent.type)
			{
			case ENetEventType::ENET_EVENT_TYPE_CONNECT:
				Display("A new client just connected ", GREEN, false);
				TryToConnect();
				break;

			case ENetEventType::ENET_EVENT_TYPE_DISCONNECT:
				//Display("DISCONNECT", LIGHT_BLUE);
				UnregisterClient(netEvent.peer);
				break;

			case ENetEventType::ENET_EVENT_TYPE_RECEIVE:
				ProcessEvent(netEvent);
				enet_packet_destroy(netEvent.packet);
				break;

			case ENetEventType::ENET_EVENT_TYPE_NONE:
				//Display("NONE", WHITE);
				break;
			}
		}

		if (_kbhit() && _getch() == 27)
		{
			return;
		}
	}
}

void Server::ProcessEvent(ENetEvent _event)
{
	if (!_event.packet)
		Display("Packet error", RED);

	ShowAddress("New Message from ", _event.peer->address);
	Display((char*)_event.packet->data, PINK);

	SendToAllClients(_event.packet, _event.peer);
}

void Server::RegisterClient(Client* _client, ENetPeer* _peer)
{
	_client->SetPeer(_peer);
	registerClients.push_back(_client);
	ShowAddress("with address: ", _client->GetAddress());
	Display("Client registered: " + _client->GetName(), ORANGE);
}

void Server::SendToAllClients(ENetPacket* _packet, ENetPeer* _sender)
{
	enet_host_broadcast(host, 0, _packet);
	enet_host_flush(host);
}

void Server::SendToClient(ENetPacket* _packet, Client* _client)
{
	//ENetPacket* _packet = enet_packet_create(_msg, _size, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(_client->GetPeer(), 1, _packet);
}

void Server::UnregisterClient(ENetPeer* _peer)
{
	size_t _size = registerClients.size();
	for (size_t i = 0; i < _size; i++)
	{
		if (registerClients[i]->GetPeer() == _peer) // Client->peer pt
		{
			Display(registerClients[i]->GetName() + " just disconnected", LIGHT_BLUE);
			registerClients.erase(registerClients.begin() + i);
			break;
		}
	}

	SerializeClients();
}

void Server::SerializeClients()
{
	Clear(FILE_CLIENT);
	for (Client* clients : registerClients)
	{
		Write(FILE_CLIENT, clients->GetName());
	}
}

void Server::TryToConnect()
{
	const bool _request = enet_host_service(host, &netEvent, latency * 1000) >= NULL;
	const bool _isConnectedEvent = netEvent.type == ENET_EVENT_TYPE_RECEIVE;

	if (_request && _isConnectedEvent)
	{
		if (netEvent.packet)
		{
			if (Client* _client = RetreiveClientFromPacket(netEvent.packet))
			{
				RegisterClient(_client, netEvent.peer);
				string _name = _client->GetName();
				ENetPacket* _newPacket = enet_packet_create(_name.c_str(), _name.size() + 1, ENET_PACKET_FLAG_RELIABLE);
				SendToAllClients(_newPacket, netEvent.peer);
				SerializeClients();
			}
		}
		enet_packet_destroy(netEvent.packet);
	}
}
