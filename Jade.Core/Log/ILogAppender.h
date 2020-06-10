#pragma once

#ifndef JADE_CORE_LOG_ILOGAPPENDER_H_
#define JADE_CORE_LOG_ILOGAPPENDER_H_

namespace JadeCore
{
	class ILogAppender
	{
	public:
		
		/**
		 * \brief Append a log with the given data
		 * \param level 
		 * \param tags 
		 * \param message 
		 */
		virtual void Append(LogLevel level, std::string tags[], std::string message);
	};
}

#endif