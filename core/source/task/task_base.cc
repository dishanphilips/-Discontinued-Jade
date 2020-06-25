#pragma once

#include "../../include/task/task_base.h"

namespace JadeCore
{
	TaskBase::TaskBase()
	{
		status_ = TaskStatus::Initialized;
		progress_ = 0;
	}
	
	float TaskBase::GetProgress()
	{
		return progress_;
	}

	void TaskBase::SetProgress(float progress)
	{
		progress_ = progress;
	}

	TaskStatus TaskBase::GetStatus() const
	{
		return status_;
	}
	
	void TaskBase::SetStatus(TaskStatus status)
	{
		status_ = status;
	}

	std::future<void>* TaskBase::GetExecuteResult() const
	{
		return execute_result_;
	}
	
	void TaskBase::SetExecuteResult(std::future<void>* result)
	{
		execute_result_ = result;
	}
	
	void TaskBase::Execute()
	{
		status_ = TaskStatus::InProgress;
	}

	void TaskBase::Finish(TaskStatus status)
	{
		status_ = status;
	}
}
