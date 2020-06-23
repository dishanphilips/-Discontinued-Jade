# pragma once

#include "ticker.h"
#include "tickable_base.h"

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
