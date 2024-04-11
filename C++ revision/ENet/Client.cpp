#include "Client.h"
#include "ChatBox.h"

Client::Client() : Network()
{
	data = HostData(1, 1, Bandwidth(0, 0));
	type = NT_CLIENT;
	latency = 2;
	isConnected = false;
	peer = new ENetPeer();
	name = "Jack Uzi";
}

void Client::Connect(const char* _ip, const int _port)
{
	Network::Connect(_ip, _port);
	ShowAddress("Client : ", address);

	if (!(peer = enet_host_connect(host, &address, 1, 0)))
	{
		throw string("Peer connection failed");
	}

	const bool _request = enet_host_service(host, &netEvent, latency * 1000) >= NULL;
	const bool _isConnectedEvent = netEvent.type == ENET_EVENT_TYPE_CONNECT;

	if (!_request || !_isConnectedEvent)
	{
		enet_peer_reset(peer);
		throw string("Connection to the server failed");
	}

	Register();
	Run();
}

void Client::Run()
{
	while (isConnected)
	{
		Display("Client", YELLOW);
		while (enet_host_service(host, &netEvent, latency * 1000) > NULL)
		{
			switch (netEvent.type)
			{
			case ENetEventType::ENET_EVENT_TYPE_CONNECT:
				ShowAddress("Successfully connected to server with address : ", netEvent.peer->address);
				break;
			case ENetEventType::ENET_EVENT_TYPE_DISCONNECT:
				ShowAddress("Successfully disconnected to server with address : ", netEvent.peer->address);
				return;
				break;
			case ENetEventType::ENET_EVENT_TYPE_RECEIVE:
				Display("RECEIVE EVENT", PURPLE);
				break;
			case ENetEventType::ENET_EVENT_TYPE_NONE:
				//Display("NONE", WHITE);
				break;
			}
		}

		if (_kbhit())
		{
			if (_getch() == 9)
			{
				string _msg;
				ChatBox::GetInstance().Open(_msg);
				SendPacket(_msg.c_str(), strlen(_msg.c_str()));
			}
			if (_getch() == 27)
			{
				enet_peer_disconnect(peer, 0);
			}
		}
	}
}

void Client::Register()
{
	isConnected = true;

	Display("Enter your name: ", PINK);
	cin >> name;
	system("CLS");

	string _finalName = "CN_" + name;

	SendPacket(_finalName.c_str(), strlen(_finalName.c_str()));
}

void Client::SendPacket(const char* _msg, const size_t& _size)
{
	ENetPacket* packet = enet_packet_create(_msg, _size + 1, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
}
