#include "Network.h"

Network::Network()
{
	address = ENetAddress();
	host = nullptr;
	data = HostData();
	type = NT_COUNT;
	latency = 1;
}

Network::~Network()
{
	enet_host_destroy(host);
}

void Network::Connect(const char* _ip, const int _port)
{
	if (enet_address_set_host(&address, _ip) < NULL)
		throw(string("An error occurred during address setup"));
	address.port = _port;

	ENetAddress* _address = type == NT_SERVER ? &address : nullptr;
	host = enet_host_create(
		_address						/* the address to bind the server host to */,
		data.maxClientCount				/* allow up to 32 clients and/or outgoing connections */,
		data.channelsCount				/* allow up to 2 channels to be used, 0 and 1 */,
		data.bandwidth.ingoing			/* assume any amount of incoming bandwidth */,
		data.bandwidth.outgoing			/* assume any amount of outgoing bandwidth */);
	if (host == NULL)
		throw(string("An error occurred while trying to create an ENet server host"));
}

void Network::Start(const char* _ip, const int _port)
{
	if (enet_initialize() != 0)
	{
		throw(string("An error occurred while initializing ENet"));
	}
	atexit(enet_deinitialize);

	Display("Success Enet initailization", LIME);
	Connect(_ip, _port);
}

