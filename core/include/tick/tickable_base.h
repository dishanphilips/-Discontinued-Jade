#pragma once

#ifndef JADE_CORE_INCLUDE_TICK_TICKABLEBASE_H_
#define JADE_CORE_INCLUDE_TICK_TICKABLEBASE_H_

namespace jade_core
{
	class tickable_base
	{
	public:

		/**
		 * \brief Instantiate the tickable component and adds it to the Ticker
		 */
		tickable_base();

		/**
		 * \brief Destruct the tickable component and remove it from the Ticker
		 */
		~tickable_base();
		
		/**
		 * \brief Receives a tick by the ticker
		 */
		virtual void tick() = 0;
	};
}

#endif