#pragma once

#include "../../include/task/task_base.h"

namespace jade_core
{
	task_base::task_base()
	{
		_status = task_status::initialized;
		_progress = 0;
	}
	
	float task_base::get_progress()
	{
		return _progress;
	}

	void task_base::set_progress(float progress)
	{
		_progress = progress;
	}

	task_status task_base::get_status() const
	{
		return _status;
	}
	
	void task_base::set_status(task_status status)
	{
		_status = status;
	}

	std::future<void>* task_base::get_execute_result() const
	{
		return _execute_result;
	}
	
	void task_base::set_execute_result(std::future<void>* result)
	{
		_execute_result = result;
	}
	
	void task_base::execute()
	{
		_status = task_status::in_progress;
	}

	void task_base::finish(task_status status)
	{
		_status = status;
	}
}
