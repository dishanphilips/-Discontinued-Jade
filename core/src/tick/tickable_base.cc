# pragma once

#include "../../include/tick/ticker.h"
#include "../../include/tick/tickable_base.h"

namespace JadeCore
{
	TickableBase::TickableBase()
	{
		Ticker::RegisterTickable(this);
	}

	TickableBase::~TickableBase()
	{
		Ticker::UnregisterTickable(this);
	}
}
