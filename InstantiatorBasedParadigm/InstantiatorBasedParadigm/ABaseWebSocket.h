#pragma once



class ABaseWebSocket
{
public:
	virtual void StartServer() = 0;
	virtual void StopServer() = 0;
};