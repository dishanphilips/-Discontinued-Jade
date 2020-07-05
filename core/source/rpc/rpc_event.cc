#include "rpc/rpc_event.h"

std::ostream& operator << (std::ostream& stream, RpcEvent status)
{
	switch (status) {
	case RpcEvent::Initialized:
		return stream << "Initialized";
	case RpcEvent::Read:
		return stream << "Read";
	case RpcEvent::Write:
		return stream << "Write";
	case RpcEvent::Finished:
		return stream << "Finished";
	}
}