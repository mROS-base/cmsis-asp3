#include "atk2ext_sys_config.h"
#include "cmsis_user_config.h"

StatusType Atk2TaskConfigSet(const osThreadFunc_t func, void *argument)
{
	int i;
	int user_thread_num;
	UserThreadAtk2TaskMapEntryType* map_p;

	user_thread_num = cmsis_get_user_thread_num();
	map_p = cmsis_get_user_thread_map();

	for (i = 0; i < cmsis_get_user_thread_num; i++)
	{
		if (map_p[i].func == func) {
			map_p[i].argument = argument;
			return E_OK;
		}
	}
	return E_OS_ID;
}

StatusType Atk2TaskConfigGetTaskID(const osThreadFunc_t func, TaskType *taskID)
{
	int i;
	int user_thread_num;
	UserThreadAtk2TaskMapEntryType* map_p;

	user_thread_num = cmsis_get_user_thread_num();
	map_p = cmsis_get_user_thread_map();

	for (i = 0; i < user_thread_num; i++)
	{
		if (map_p[i].func == func) {
			*taskID = map_p[i].taskID;
			return E_OK;
		}
	}
	return E_OS_ID;
}

StatusType Atk2TaskConfigGet(UserThreadAtk2TaskMapEntryType *config)
{
	int i;
	TaskType taskID;
	StatusType ercd;
	int user_thread_num;
	UserThreadAtk2TaskMapEntryType* map_p;

	user_thread_num = cmsis_get_user_thread_num();
	map_p = cmsis_get_user_thread_map();

	ercd = GetTaskID(&taskID);
	if (ercd != E_OK) {
		return ercd;
	}

	for (i = 0; i < user_thread_num; i++)
	{
		if (map_p[i].taskID == taskID) {
			*config = map_p[i];
			return E_OK;
		}
	}
	return E_OS_ID;
}
