#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_

namespace jade_core
{
	class i_log_appender
	{
	public:
		
		/**
		 * \brief Append a log with the given data
		 * \param level 
		 * \param message
		 * \param tags
		 */
		virtual void append(log_level level, std::string message, std::string tags) = 0;
	};
}

#endif