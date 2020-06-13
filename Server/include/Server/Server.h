#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_H_

#include "../../../Core/include/tick/tickable_base.h"

namespace jade_server
{
	class server : public jade_core::tickable_base
	{
	public:
		server();
	protected:
		void tick() override;
	};
}

#endif
