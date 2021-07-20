#include "cmsis_os.h"
#include "cmsis_user_config.h"
#include "atk2ext_user_config.h"

UserThreadAtk2TaskMapEntryType user_thread_atk2task_map[USER_THREAD_NUM] = {
		{
				.taskID = Atk2TaskTestControl,
				.func = NULL,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestSupplier1,
				.func = Atk2TaskTestSupplier1_Body,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestSupplier2,
				.func = Atk2TaskTestSupplier2_Body,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestSupplier3,
				.func = Atk2TaskTestSupplier3_Body,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestConsumer1,
				.func = Atk2TaskTestConsumer1_Body,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestConsumer2,
				.func = Atk2TaskTestConsumer2_Body,
				.argument = NULL,
		},
		{
				.taskID = Atk2TaskTestConsumer3,
				.func = Atk2TaskTestConsumer3_Body,
				.argument = NULL,
		},
};

UserThreadAtk2TaskMapEntryType* cmsis_get_user_thread_map(void)
{
	return user_thread_atk2task_map;
}
int cmsis_get_app_heap_size(void)
{
	return APP_HEAP_SIZE;
}
int cmsis_get_user_thread_num(void)
{
	return USER_THREAD_NUM;
}
