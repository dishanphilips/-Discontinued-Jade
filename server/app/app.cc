#pragma once
#include "../include/server/server.h"

int main(int, char* [])
{
	auto server = new JadeServer::Server();
	server->Run();
}
