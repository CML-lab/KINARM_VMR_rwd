/*
 * Code generation for system system '<S2>/Network Transfer Subsystem'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_NetworkTransferSubsystem.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_NetworkTransferSubsystem_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_NetworkTransferSubsystem_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
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

extern void vmr_rwd_fix_leftarm_UDPSendSubsystem_Init(void);
extern void vmr_rwd_fix_leftarm_UDPSendSubsystem_Start(void);
extern void vmr_rwd_fix_leftarm_UDPSendSubsystem(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Init(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Start(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID0(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID2(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID3(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID0(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID2(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID3(void);
extern void vmr_rwd_fix_leftarm_UDPSendSubsystem_Term(void);
extern void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Term(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_NetworkTransferSubsystem_h_ */
