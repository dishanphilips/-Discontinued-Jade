#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_LOGLEVEL_H_
#define JADE_CORE_INCLUDE_LOG_LOGLEVEL_H_

namespace jade_core
{
	/**
	 * \brief Specifies the severity of a log
	 */
	enum class log_level
	{
		trace,
		debug,
		info,
		warning,
		error
	};
}

#endif