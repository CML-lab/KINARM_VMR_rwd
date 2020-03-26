#ifndef __c11_vmr_rwd_fix_leftarm_h__
#define __c11_vmr_rwd_fix_leftarm_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc11_vmr_rwd_fix_leftarmInstanceStruct
#define typedef_SFc11_vmr_rwd_fix_leftarmInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c11_pi;
  uint8_T c11_doSetSimStateSideEffects;
  const mxArray *c11_setSimStateSideEffectsInfo;
  int8_T *c11_e_clk;
  boolean_T *c11_reset_controller;
  uint32_T *c11_reset_controllerEventCounter;
  int32_T *c11_sfEvent;
  boolean_T *c11_isStable;
  uint8_T *c11_is_active_c11_vmr_rwd_fix_leftarm;
  uint8_T *c11_is_c11_vmr_rwd_fix_leftarm;
  uint8_T *c11_is_EnableState;
  uint8_T *c11_is_AutoMoveToPos;
  boolean_T *c11_enable_controller;
  real_T (*c11_DesiredPos)[2];
  real_T (*c11_HandPos)[2];
  real_T (*c11_TaskwideParams)[50];
  real_T *c11_force_scale;
  real_T (*c11_virtual_pos)[2];
  real_T *c11_tickCount;
  real_T (*c11_StartPos)[2];
  real_T (*c11_TgtPos)[2];
  boolean_T *c11_updatepos;
  real_T (*c11_CurHandPos)[2];
  real_T *c11_ramp_time;
  real_T *c11_scale_increment;
  real_T *c11_tick;
  real_T *c11_trajectory_shape;
  real_T *c11_state;
  uint32_T *c11_temporalCounter_i1;
} SFc11_vmr_rwd_fix_leftarmInstanceStruct;

#endif                                 /*typedef_SFc11_vmr_rwd_fix_leftarmInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c11_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[]);
extern void c11_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
