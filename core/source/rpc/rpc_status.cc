#include "../../include/rpc/rpc_status.h"

std::ostream& operator << (std::ostream& stream, RpcStatus status)
{
	switch (status) {
	case RpcStatus::Connecting:
		return stream << "Connecting";
	case RpcStatus::WriteReady:
		return stream << "WriteReady";
	case RpcStatus::WriteComplete:
		return stream << "WriteComplete";
	case RpcStatus::Done:
		return stream << "Finished";
	}
}