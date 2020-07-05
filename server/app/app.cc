#pragma once

#include "jadeserver.h"

int main(int, char* [])
{
	auto server = new JadeServer::Server();
	server->Run();
}
