#pragma once

#include "../../include/Tick/Ticker.h"

#include <thread>
#include <list>
#include <chrono>

namespace JadeCore
{

	/**
		 * \brief The interval in MS to tick
		 */
	static int _interval;

	/**
	 * \brief Flag to continue ticking
	 */
	static bool _continue;
	
	/**
	 * \brief A list of ticables
	 */
	static std::list<TickableBase*> _tickables;
		
	void Ticker::Start(int interval)
	{
		_interval = interval;
		_continue = true;
		
		while (_continue)
		{
			for (TickableBase* tickable : _tickables)
			{
				tickable->Tick();
			}
			std::this_thread::sleep_for(std::chrono::milliseconds(_interval));
		}
	}

	void Ticker::Stop()
	{
		_continue = false;
	}
	
	void Ticker::RegisterTicker(TickableBase* tickable)
	{
		_tickables.push_back(tickable);
	}

	void Ticker::UnregisterTicker(TickableBase* tickable)
	{
		_tickables.remove(tickable);
	}
}
