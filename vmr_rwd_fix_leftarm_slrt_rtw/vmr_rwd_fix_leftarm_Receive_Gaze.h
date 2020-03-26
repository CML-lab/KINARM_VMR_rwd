/*
 * Code generation for system system '<S2>/Receive_Gaze'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_Receive_Gaze.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_Receive_Gaze_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_Receive_Gaze_h_
#include <stddef.h>
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

extern void vmr_rwd_fix_leftarm_Receive_Gaze_Init(void);
extern void vmr_rwd_fix_leftarm_Receive_Gaze_Start(void);
extern void vmr_rwd_fix_leftarm_Receive_Gaze_UpdateTID3(void);
extern void vmr_rwd_fix_leftarm_Receive_GazeTID0(void);
extern void vmr_rwd_fix_leftarm_Receive_GazeTID3(void);
extern void vmr_rwd_fix_leftarm_Receive_Gaze_Term(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_Receive_Gaze_h_ */
