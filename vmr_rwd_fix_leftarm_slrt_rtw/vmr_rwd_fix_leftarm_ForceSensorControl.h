/*
 * Code generation for system system '<S33>/Force Sensor Control'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_ForceSensorControl.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_ForceSensorControl_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_ForceSensorControl_h_
#include <stddef.h>
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

/* Block signals for system '<S201>/Create timestamp' */
typedef struct {
  real_T timestamp_out;                /* '<S201>/Create timestamp' */
} B_Createtimestamp_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S201>/Create timestamp' */
typedef struct {
  uint32_T start_time;                 /* '<S201>/Create timestamp' */
  uint32_T last_time;                  /* '<S201>/Create timestamp' */
} DW_Createtimestamp_vmr_rwd_fix_leftarm_T;

extern void vmr_rwd_fix_leftarm_Createtimestamp_Init
  (DW_Createtimestamp_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_Createtimestamp(const uint32_T rtu_times_in[3],
  B_Createtimestamp_vmr_rwd_fix_leftarm_T *localB,
  DW_Createtimestamp_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_ForceSensorControl_Init(void);
extern void vmr_rwd_fix_leftarm_ForceSensorControl_Start(void);
extern void vmr_rwd_fix_leftarm_ForceSensorControl_Update(void);
extern void vmr_rwd_fix_leftarm_ForceSensorControl(void);
extern void vmr_rwd_fix_leftarm_ForceSensorControl_Term(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_ForceSensorControl_h_ */
