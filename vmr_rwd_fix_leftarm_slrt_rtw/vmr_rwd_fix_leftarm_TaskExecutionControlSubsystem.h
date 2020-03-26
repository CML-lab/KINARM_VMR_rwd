/*
 * Code generation for system system '<S5>/Task Execution Control Subsystem'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#ifndef vmr_rwd_fix_leftarm_COMMON_INCLUDES_
# define vmr_rwd_fix_leftarm_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#include "xpctarget.h"
#include "BKINethercat.h"
#include "io_config_xml_1.h"
#include "io_config_xml_0.h"
#endif                                 /* vmr_rwd_fix_leftarm_COMMON_INCLUDES_ */

#include "vmr_rwd_fix_leftarm_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"

extern void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Init(void);
extern void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Start(void);
extern void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Update(void);
extern void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_h_ */
