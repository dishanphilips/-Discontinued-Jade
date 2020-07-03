#pragma once

#ifndef JADE_CORE_INCLUDE_RPC_EVENT_H_
#define JADE_CORE_INCLUDE_RPC_EVENT_H_

#include <iostream>

#define GRPC_EVENT_MASK 0x3u
#define GRPC_EVENT_BIT_LENGTH 2u

enum RpcEvent
{
	Initialized = 0,
	Read = 1,
	Write = 2,
	Finished = 3
};

std::ostream& operator<<(std::ostream& os, RpcEvent sessionStatus);

#endif