#pragma once

#ifndef JADE_CORE_INCLUDE_TICK_TICKABLEBASE_H_
#define JADE_CORE_INCLUDE_TICK_TICKABLEBASE_H_

namespace JadeCore
{
	class TickableBase
	{
	public:

		/**
		 * \brief Instantiate the tickable component and adds it to the Ticker
		 */
		TickableBase();

		/**
		 * \brief Destruct the tickable component and remove it from the Ticker
		 */
		~TickableBase();
		
		/**
		 * \brief Receives a tick by the ticker
		 */
		virtual void Tick() = 0;
	};
}

#endif