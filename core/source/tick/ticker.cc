#pragma once

#include <thread>
#include <future>
#include <list>
#include <chrono>

#include "../../include/tick/ticker.h"

namespace JadeCore
{
	/**
	 * \brief _interval declaration
	 */
	int Ticker::interval_;

	/**
	 * \brief _continue declaration
	 */
	bool Ticker::continue_;

	/**
	 * \brief _tickables declaration
	 */
	std::list<TickableBase*> Ticker::tickables_;

	/**
	 * \brief _results declaration
	 */
	std::vector<std::future<void>*> Ticker::results_;
	
	void Ticker::Start(int interval)
	{
		// Initialize
		interval_ = interval;
		continue_ = true;
		
		while (continue_)
		{
			// Tick all the tickables
			for (TickableBase* tickable : tickables_)
			{
				// Invoke the tick asynchronously
				results_.push_back(&std::async(std::launch::async, &TickableBase::Tick, tickable));
			}

			// Wait for the results
			for (std::future<void>* result : results_)
			{
				// If the result is not ready, wait for it
				if(result->_Is_ready() == false)
				{
					result->get();
				}
			}

			// Clear the results
			results_.clear();
			
			std::this_thread::sleep_for(std::chrono::milliseconds(interval_));
		}
	}

	void Ticker::Stop()
	{
		continue_ = false;
	}
	
	void Ticker::RegisterTickable(TickableBase* tickable)
	{
		tickables_.push_back(tickable);
	}

	void Ticker::UnregisterTickable(TickableBase* tickable)
	{
		tickables_.remove(tickable);
	}
}
