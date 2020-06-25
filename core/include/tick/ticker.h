#pragma once

#ifndef JADE_CORE_INCLUDE_TICK_TICKER_H_
#define JADE_CORE_INCLUDE_TICK_TICKER_H_

#include <future>
#include <list>

#include "tickable_base.h"

namespace JadeCore
{
	static class Ticker
	{
	private:
		/**
		 * \brief The interval in MS to tick
		 */
		static int interval_;

		/**
		 * \brief Flag to continue ticking
		 */
		static bool continue_;

		/**
		 * \brief A list of ticables
		 */
		static std::list<TickableBase*> tickables_;

		/**
		 * \brief Keep track of the tickables
		 */
		static std::vector<std::future<void>*> results_;
	public:

		/**
		 * \brief start the ticking
		 */
		static void Start(int interval = 16);

		/**
		 * \brief Stop the ticking
		 */
		static void Stop();

		/**
		 * \brief Set the interval for ticking
		 */
		static void SetInterval();
		
		/**
		 * \brief Register a tickable component
		 * \param tickable 
		 */
		static void RegisterTickable(TickableBase* tickable);
				
		/**
		 * \brief Unregister tickable component
		 * \param tickable 
		 */
		static void UnregisterTickable(TickableBase* tickable);
	};
}

#endif
