#pragma once

#ifndef JADE_CORE_LOG_LOGLEVEL_H_
#define JADE_CORE_LOG_LOGLEVEL_H_

namespace JadeCore
{
	/**
	 * \brief Specifies the severity of a log
	 */
	enum class LogLevel
	{
		Trace,
		Debug,
		Info,
		Warning,
		Error
	};
}

#endif