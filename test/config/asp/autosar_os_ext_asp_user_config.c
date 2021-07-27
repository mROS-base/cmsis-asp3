#include "autosar_os_ext_asp_user_config.h"
#include "autosar_os_ext_common_private.h"

const AutosarOsExtFlagMapEntryType autosar_os_ext_flag_user_map[AUTSAR_OS_EXT_ASP_FLAG_USER_NUM] = {
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestControl),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestSupplier1),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestSupplier2),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestSupplier3),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestConsumer1),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestConsumer2),
		AUTSAR_OS_EXT_FLAG_MAP_ENTRY(AutosarOsTaskTestConsumer3),


};

AutosarOsExtFlagMapEntryType* cmsis_get_flag_user_map(void)
{
	return autosar_os_ext_flag_user_map;
}

int cmsis_get_flag_user_num(void)
{
	return AUTSAR_OS_EXT_ASP_FLAG_USER_NUM;
}

