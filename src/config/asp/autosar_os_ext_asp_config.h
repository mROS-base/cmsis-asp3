#ifndef _AUTSAR_OS_EXT_ASP_CONFIG_H_
#define _AUTSAR_OS_EXT_ASP_CONFIG_H_

#include "autosar_os_ext_common.h"

typedef struct {
	ID taskID;
	ID flgid;
} AutosarOsExtFlagMapEntryType;

#define AUTSAR_OS_EXT_FLAG_MAP_ENTRY(taskname)	\
	{ .taskID = taskname, .flgid = taskname ## _FLG }

extern ER AutosarOsExtTask2EventFlag(ID taskID, ID *flgid);

#endif /* _AUTSAR_OS_EXT_ASP_CONFIG_H_ */
