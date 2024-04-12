#include "Macro.h"
#include "Server.h"
#include "Client.h"
#include "FileLoader.h"

#pragma region Prototype
void SelectHost();
void HostServer();
void HostClient();
#pragma endregion

int main()
{
	SelectHost();

	return EXIT_SUCCESS;
}

void SelectHost()
{
	const int _callbackCount = 2;
	int _choice;

	do
	{
		Display("1- server", BLUE);
		Display("2- client", GREEN);
		cin >> _choice;
	} while (_choice < 1 || _choice > _callbackCount);

	system("CLS");
	const function<void()> _callback[_callbackCount] = {
		[]() { HostServer(); },
		[]() { HostClient(); },
	};
	_callback[_choice - 1]();
}

void HostServer()
{
	Server* _server = new Server();

	try
	{
		_server->Start("127.0.0.1", 1234);
		_server->Stop();
	}
	catch (const string& _error)
	{
		Display(_error, RED);
	}

	delete _server;
}

void HostClient()
{
	Client* _client = new Client();

	try
	{
		_client->Start("127.0.0.1", 1234);
		_client->Stop();
	}
	catch (const string& _error)
	{
		Display(_error, RED);
	}

	delete _client;
}
