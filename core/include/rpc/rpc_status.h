#pragma once

#ifndef JADE_CORE_INCLUDE_RPC_STATUS_H_
#define JADE_CORE_INCLUDE_RPC_STATUS_H_

#include "iostream"

enum RpcStatus
{
	Connecting = 0,
	WriteReady = 1,
	WriteComplete = 2,
	Done = 3
};

std::ostream& operator << (std::ostream& stream, RpcStatus status);

#endif