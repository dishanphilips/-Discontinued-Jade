#pragma once

#ifndef JADE_CORE_INCLUDE_TICK_TICKER_H_
#define JADE_CORE_INCLUDE_TICK_TICKER_H_

#include <future>
#include <list>


#include "tickable_base.h"

namespace jade_core
{
	static class ticker
	{
	private:
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
		static std::list<tickable_base*> _tickables;

		/**
		 * \brief Keep track of the tickables
		 */
		static std::vector<std::future<void>*> _results;
	public:

		/**
		 * \brief start the ticking
		 */
		static void start(int interval = 16);

		/**
		 * \brief Stop the ticking
		 */
		static void stop();

		/**
		 * \brief Set the interval for ticking
		 */
		static void set_interval();
		
		/**
		 * \brief Register a tickable component
		 * \param tickable 
		 */
		static void register_ticker(tickable_base* tickable);
				
		/**
		 * \brief Unregister tickable component
		 * \param tickable 
		 */
		static void unregister_ticker(tickable_base* tickable);
	};
}

#endif
