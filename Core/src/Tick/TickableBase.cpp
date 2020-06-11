# pragma once

#include "../../include/Tick/Ticker.h"
#include "../../include/Tick/TickableBase.h"

namespace JadeCore
{
	TickableBase::TickableBase()
	{
		Ticker::RegisterTicker(this);
	}

	TickableBase::~TickableBase()
	{
		Ticker::UnregisterTicker(this);
	}
}
