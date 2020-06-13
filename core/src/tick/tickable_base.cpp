# pragma once

#include "../../include/tick/ticker.h"
#include "../../include/tick/tickable_base.h"

namespace jade_core
{
	tickable_base::tickable_base()
	{
		ticker::register_ticker(this);
	}

	tickable_base::~tickable_base()
	{
		ticker::unregister_ticker(this);
	}
}
