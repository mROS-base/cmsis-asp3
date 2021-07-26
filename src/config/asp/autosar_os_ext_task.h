#ifndef _AUTSAR_OS_EXT_TASK_H_
#define _AUTSAR_OS_EXT_TASK_H_

#include "autosar_os_ext_common.h"

#define TASKNAME(func)	TaskMain ## func
#define ALARMCALLBACKNAME(func) AlarmManin ## func

extern void	TASKNAME(AutosarOsExtCyclicTask) (intptr_t exinf);
extern void ALARMCALLBACKNAME(AutosarOsExtCyclicHandler) (intptr_t exinf);

#endif /* _AUTSAR_OS_EXT_TASK_H_ */
