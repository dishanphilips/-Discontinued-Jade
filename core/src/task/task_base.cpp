#pragma once

#include "../../include/task/task_base.h"

namespace jade_core
{
	float task_base::get_progress()
	{
		return _progress;
	}

	void task_base::set_status(task_status status)
	{
		_status = status;
	}

	void task_base::set_progress(float progress)
	{
		_progress = progress;
	}

	task_status task_base::get_status()
	{
		return _status;
	}
}
