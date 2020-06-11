#pragma once

#ifndef JADE_CORE_INCLUDE_TICK_TICKER_H_
#define JADE_CORE_INCLUDE_TICK_TICKER_H_

#include "TickableBase.h"

namespace JadeCore
{
	static class Ticker
	{
	private:
				
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
		static void RegisterTicker(TickableBase* tickable);
				
		/**
		 * \brief Unregister tickable component
		 * \param tickable 
		 */
		static void UnregisterTicker(TickableBase* tickable);
	};
}

#endif
