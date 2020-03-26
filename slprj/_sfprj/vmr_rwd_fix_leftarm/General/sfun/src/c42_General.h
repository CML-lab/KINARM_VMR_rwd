#ifndef __c42_General_h__
#define __c42_General_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc42_GeneralInstanceStruct
#define typedef_SFc42_GeneralInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c42_doSetSimStateSideEffects;
  const mxArray *c42_setSimStateSideEffectsInfo;
  real_T c42_u[25000];
  int8_T *c42_e_clk;
  int8_T *c42_e_trial_over;
  boolean_T *c42_e_exit_trial;
  uint32_T *c42_e_exit_trialEventCounter;
  int32_T *c42_sfEvent;
  boolean_T *c42_isStable;
  uint8_T *c42_is_active_c42_General;
  uint8_T *c42_is_c42_General;
  uint8_T *c42_is_InTrial;
  real_T *c42_repeat_trial_flag;
  uint32_T *c42_task_status;
  uint32_T *c42_tp;
  uint32_T *c42_block;
  uint32_T *c42_trial_in_block;
  uint32_T *c42_block_in_set;
  uint32_T *c42_trial_in_set;
  real_T (*c42_trial_queue)[499];
  real_T (*c42_repeat_list)[499];
  uint8_T *c42_run_command;
  real_T *c42_pause_type;
  real_T *c42_seed;
  real_T (*c42_block_definitions)[25000];
  uint32_T *c42_max_block_definitions;
  uint32_T *c42_trial_queue_max_length;
  real_T *c42_use_task_protocol_block_sequence_flag;
  real_T (*c42_task_protocol_block_sequence)[2000];
  uint32_T *c42_task_protocol_block_sequence_length;
  uint32_T *c42_repeat_list_length;
  uint32_T *c42_i;
  uint32_T *c42_swap_index;
  uint32_T *c42_temp;
  real_T *c42_next_task_program_specified_block;
  uint32_T *c42_trial_queue_length;
  uint32_T *c42_trial_in_mini_block;
  real_T *c42_repeat_last_trial;
  real_T (*c42_extra_trials)[2];
  real_T *c42_EXAM;
  real_T *c42_BLOCK;
} SFc42_GeneralInstanceStruct;

#endif                                 /*typedef_SFc42_GeneralInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c42_General_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c42_General_get_check_sum(mxArray *plhs[]);
extern void c42_General_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
