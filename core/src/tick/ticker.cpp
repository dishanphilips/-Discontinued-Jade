#pragma once

#include <thread>
#include <future>
#include <list>
#include <chrono>

#include "../../include/Tick/Ticker.h"

namespace jade_core
{
	/**
	 * \brief _interval declaration
	 */
	int ticker::_interval;

	/**
	 * \brief _continue declaration
	 */
	bool ticker::_continue;

	/**
	 * \brief _tickables declaration
	 */
	std::list<tickable_base*> ticker::_tickables;

	/**
	 * \brief _results declaration
	 */
	std::vector<std::future<void>*> ticker::_results;
	
	void ticker::start(int interval)
	{
		// Initialize
		_interval = interval;
		_continue = true;
		
		while (_continue)
		{
			// Tick all the tickables
			for (tickable_base* tickable : _tickables)
			{
				// Invoke the tick asynchronously
				_results.push_back(&std::async(std::launch::async, &tickable_base::tick, tickable));
			}

			// Wait for the results
			for (std::future<void>* result : _results)
			{
				// If the result is not ready, wait for it
				if(result->_Is_ready() == false)
				{
					result->get();
				}
			}

			// Clear the results
			_results.clear();
			
			std::this_thread::sleep_for(std::chrono::milliseconds(_interval));
		}
	}

	void ticker::stop()
	{
		_continue = false;
	}
	
	void ticker::register_ticker(tickable_base* tickable)
	{
		_tickables.push_back(tickable);
	}

	void ticker::unregister_ticker(tickable_base* tickable)
	{
		_tickables.remove(tickable);
	}
}
