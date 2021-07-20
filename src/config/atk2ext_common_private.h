#ifndef _ATK2EXTEND_COMMON_PRIVATE_H_
#define _ATK2EXTEND_COMMON_PRIVATE_H_

#include "atk2ext_common.h"

#ifdef OS_ATK2

#else

extern StatusType GetTaskID(TaskRefType TaskID);
extern StatusType SetEvent(TaskType TaskID, EventMaskType Mask);
extern StatusType ClearEvent(EventMaskType Mask);
extern StatusType WaitEvent(EventMaskType Mask);
extern void ResumeAllInterrupts(void);
extern void SuspendAllInterrupts(void);
extern void ResumeOSInterrupts(void);
extern void SuspendOSInterrupts(void);
extern StatusType ActivateTask(TaskType TaskID);
extern StatusType TerminateTask(void);

#endif /* OS_ATK2 */

extern bool_t CurrentContextIsISR(void);



#endif /* _ATK2EXTEND_COMMON_H_ */
