# pragma once

#include "tick/tickable_base.h"
#include "tick/ticker.h"

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
