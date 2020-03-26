/*
 * Code generation for system system '<S13>/PVC_core'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_PVC_core.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_PVC_core_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_PVC_core_h_
#include <float.h>
#include <math.h>
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
#include "rt_nonfinite.h"

extern void vmr_rwd_fix_leftarm_PVC_core_Init(void);
extern void vmr_rwd_fix_leftarm_PVC_core_Start(void);
extern void vmr_rwd_fix_leftarm_PVC_core_UpdateTID4(void);
extern void vmr_rwd_fix_leftarm_PVC_coreTID0(void);
extern void vmr_rwd_fix_leftarm_PVC_coreTID4(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_PVC_core_h_ */
