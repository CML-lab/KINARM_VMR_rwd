#ifndef __c39_KINARM_loads_h__
#define __c39_KINARM_loads_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc39_KINARM_loadsInstanceStruct
#define typedef_SFc39_KINARM_loadsInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c39_doSetSimStateSideEffects;
  const mxArray *c39_setSimStateSideEffectsInfo;
  int8_T *c39_e_clk;
  int32_T *c39_sfEvent;
  boolean_T *c39_isStable;
  uint8_T *c39_is_active_c39_KINARM_loads;
  uint8_T *c39_is_c39_KINARM_loads;
  uint8_T *c39_is_Ramp_Up_Main;
  real_T *c39_Motors_Disabled;
  real_T *c39_scaling;
  real_T *c39_tick;
  real_T *c39_Run_Status;
  real_T *c39_up_duration;
  real_T *c39_down_duration;
  real_T *c39_tickCount;
  real_T *c39_robot_type;
  uint32_T *c39_temporalCounter_i1;
} SFc39_KINARM_loadsInstanceStruct;

#endif                                 /*typedef_SFc39_KINARM_loadsInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c39_KINARM_loads_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c39_KINARM_loads_get_check_sum(mxArray *plhs[]);
extern void c39_KINARM_loads_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
