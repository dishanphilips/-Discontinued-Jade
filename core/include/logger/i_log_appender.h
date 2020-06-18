#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_

#include <string>

namespace JadeCore
{
	class ILogAppender
	{
	public:
		
		/**
		 * \brief Append a log with the given data
		 * \param level 
		 * \param message
		 * \param tags
		 */
		virtual void Append(LogLevel level, std::string message, std::string tags) = 0;
	};
}

#endif