#pragma once
#include "Macro.h"
#include "FileLoader.h"

enum NetworkType
{
	NT_SERVER,
	NT_CLIENT,

	NT_COUNT
};

class Network
{
protected:
	struct Bandwidth
	{
		enet_uint32 ingoing;
		enet_uint32 outgoing;

		Bandwidth()
		{
			ingoing = 0;
			outgoing = 0;
		}
		Bandwidth(const enet_uint32& _in, const enet_uint32& _out)
		{
			ingoing = _in;
			outgoing = _out;
		}
	};

	struct HostData
	{
		size_t maxClientCount;
		size_t channelsCount;
		Bandwidth bandwidth;

		HostData()
		{
			maxClientCount = 4;
			channelsCount = 1;
			bandwidth = Bandwidth();
		}
		HostData(const size_t& _maxClient, const size_t& _channels, const Bandwidth& _band)
		{
			maxClientCount = _maxClient;
			channelsCount = _channels;
			bandwidth = _band;
		}
	};

	ENetAddress address;
	ENetHost* host;
	NetworkType type;
	HostData data;
	int latency;
	ENetEvent netEvent;

public:
	Network();
	~Network();
	
protected:
	virtual void Connect(const char* _ip, const int _port);

public:
	void Start(const char* _ip, const int _port);
};