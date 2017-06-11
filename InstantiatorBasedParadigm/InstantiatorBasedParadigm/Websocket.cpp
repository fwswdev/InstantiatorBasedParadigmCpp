#include "global.h"

class WebSocket : public ABaseWebSocket
{
public:
	void StartServer();
	void StopServer();
};


void WebSocket::StartServer()
{
	cout << "Starting\n";
}

void WebSocket::StopServer()
{
	cout << "Stop\n";
}



ABaseWebSocket * GetABaseWebSocketv1()
{
	ABaseWebSocket * r = new WebSocket;
	return r;
}

 



