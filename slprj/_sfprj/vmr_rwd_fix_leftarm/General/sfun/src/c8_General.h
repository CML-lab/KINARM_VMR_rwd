#ifndef __c8_General_h__
#define __c8_General_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc8_GeneralInstanceStruct
#define typedef_SFc8_GeneralInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c8_KINEMATIC_LEN;
  real_T c8_FULL_PACKET_SIZE;
  uint8_T c8_doSetSimStateSideEffects;
  const mxArray *c8_setSimStateSideEffectsInfo;
  real32_T c8_fv1[20500000];
  real32_T c8_fv3[20500000];
  real32_T c8_y[20500000];
  real32_T c8_u[20500000];
  int8_T *c8_e_data_ready_strobe;
  int8_T *c8_e_clk;
  int8_T *c8_e_fast_clk;
  int32_T *c8_sfEvent;
  boolean_T *c8_isStable;
  uint8_T *c8_is_active_c8_General;
  uint8_T *c8_is_UpdatePacketQueue;
  uint8_T *c8_is_active_UpdatePacketQueue;
  uint8_T *c8_is_SendControlMachine;
  uint8_T *c8_is_active_SendControlMachine;
  uint8_T *c8_is_Fixed;
  uint8_T *c8_is_FixMonitor;
  uint8_T *c8_is_active_FixMonitor;
  real_T *c8_resetUDP;
  real32_T (*c8_data_out)[410];
  real32_T (*c8_data_in)[400];
  uint32_T *c8_queue_tail;
  real_T *c8_queue_size;
  real_T *c8_total_timeouts;
  uint32_T *c8_packet_index;
  uint32_T *c8_ack_packet_index;
  uint32_T *c8_max_packet_id;
  real32_T *c8_runID;
  real32_T (*c8_packet_queue)[20500000];
  real_T *c8_packet_queue_sz;
  int32_T *c8_i;
  int32_T *c8_j;
  real_T *c8_outstanding_packet_index;
  uint32_T *c8_queue_head;
  real_T *c8_is_exam_running;
  uint8_T *c8_temporalCounter_i1;
  uint16_T *c8_temporalCounter_i2;
  uint8_T *c8_temporalCounter_i3;
} SFc8_GeneralInstanceStruct;

#endif                                 /*typedef_SFc8_GeneralInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_General_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_General_get_check_sum(mxArray *plhs[]);
extern void c8_General_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
