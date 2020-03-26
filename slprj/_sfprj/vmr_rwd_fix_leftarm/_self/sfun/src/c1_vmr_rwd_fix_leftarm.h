#ifndef __c1_vmr_rwd_fix_leftarm_h__
#define __c1_vmr_rwd_fix_leftarm_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_vmr_rwd_fix_leftarmInstanceStruct
#define typedef_SFc1_vmr_rwd_fix_leftarmInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c1_E_SHOW_INSTRUCT;
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  boolean_T *c1_e_ApplyNewRotation;
  int8_T *c1_e_clk;
  int8_T *c1_e_ExitTrialNow;
  boolean_T *c1_e_Trial_End;
  int8_T *c1_e_cntl_btn;
  uint32_T *c1_e_ApplyNewRotationEventCounter;
  uint32_T *c1_e_Trial_EndEventCounter;
  int32_T *c1_sfEvent;
  boolean_T *c1_isStable;
  uint8_T *c1_is_active_c1_vmr_rwd_fix_leftarm;
  uint8_T *c1_is_c1_vmr_rwd_fix_leftarm;
  uint8_T *c1_is_Main_Trial;
  boolean_T *c1_logging_enable;
  real_T *c1_event_code;
  real_T (*c1_Trial_Protocol)[50];
  real_T *c1_targetA_row;
  real_T *c1_targetA_state;
  real_T *c1_targetB_row;
  real_T *c1_targetB_state;
  real_T *c1_tickCount;
  real_T *c1_reward_state;
  int32_T *c1_score;
  int32_T *c1_reward;
  int32_T *c1_fdbk_text;
  real_T *c1_instruct_num;
  real_T *c1_tone;
  real_T (*c1_TaskwideParams)[50];
  real_T (*c1_HandInTarget)[32];
  real_T (*c1_DistFromTarget)[32];
  real_T (*c1_TargetDistance)[1024];
  real_T *c1_reward_type;
  real_T *c1_rotation_on;
  real_T *c1_dist;
  real_T *c1_tick;
  real_T *c1_handvis_state;
  real_T *c1_do_clamp;
  boolean_T *c1_robot_enable_controller;
  real_T *c1_soundON;
  uint32_T *c1_temporalCounter_i1;
} SFc1_vmr_rwd_fix_leftarmInstanceStruct;

#endif                                 /*typedef_SFc1_vmr_rwd_fix_leftarmInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[]);
extern void c1_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
