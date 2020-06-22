#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_REQUESTSTATUS_H_
#define JADE_SERVER_INCLUDE_RPC_REQUESTSTATUS_H_

enum class RpcHandlerStatus
{
	Create,
	Process,
	Finish
};

#endif