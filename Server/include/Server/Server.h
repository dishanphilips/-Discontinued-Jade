#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_H_

#include "../../../Core/include/Tick/TickableBase.h"

namespace JadeServer
{
	class Server : public JadeCore::TickableBase
	{
	public:
		Server();
	protected:
		void Tick() override;
	};
}

#endif
