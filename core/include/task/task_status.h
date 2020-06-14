#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASKSTATUS_H_
#define JADE_CORE_INCLUDE_TASK_TASKSTATUS_H_

enum class task_status
{
	initialized,
	in_progress,
	failure,
	success,
};

#endif
