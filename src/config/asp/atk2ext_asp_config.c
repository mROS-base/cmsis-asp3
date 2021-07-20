#include "atk2ext_asp_config.h"
#include "cmsis_user_config.h"
#include "atk2ext_asp_sys_config.h"

ER Atk2ExtTask2EventFlag(ID taskID, ID *flgid)
{
	uint32_t i;

	int flag_user_num;
	Atk2ExtFlagMapEntryType *user_map_p;

	user_map_p = cmsis_get_flag_user_map();
	flag_user_num = cmsis_get_flag_user_num();

	for (i = 0; i < flag_user_num; i++) {
		if (user_map_p[i].taskID == taskID) {
			*flgid = user_map_p[i].flgid;
			return E_OK;
		}
	}
	for (i = 0; i < ATK2EXT_ASP_FLAG_SYS_NUM; i++) {
		if (atk2ext_flag_sys_map[i].taskID == taskID) {
			*flgid = atk2ext_flag_sys_map[i].flgid;
			return E_OK;
		}
	}
	return E_OS_ID;
}
