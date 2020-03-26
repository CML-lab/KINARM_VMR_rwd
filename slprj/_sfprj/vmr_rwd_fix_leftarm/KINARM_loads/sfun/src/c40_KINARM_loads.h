#ifndef __c40_KINARM_loads_h__
#define __c40_KINARM_loads_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc40_KINARM_loadsInstanceStruct
#define typedef_SFc40_KINARM_loadsInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c40_doSetSimStateSideEffects;
  const mxArray *c40_setSimStateSideEffectsInfo;
  int8_T *c40_e_clk;
  int32_T *c40_sfEvent;
  boolean_T *c40_isStable;
  uint8_T *c40_is_active_c40_KINARM_loads;
  uint8_T *c40_is_c40_KINARM_loads;
  uint8_T *c40_is_Ramp_Up_Main;
  real_T *c40_Motors_Disabled;
  real_T *c40_scaling;
  real_T *c40_tick;
  real_T *c40_Run_Status;
  real_T *c40_up_duration;
  real_T *c40_down_duration;
  real_T *c40_tickCount;
  real_T *c40_robot_type;
  uint32_T *c40_temporalCounter_i1;
} SFc40_KINARM_loadsInstanceStruct;

#endif                                 /*typedef_SFc40_KINARM_loadsInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c40_KINARM_loads_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c40_KINARM_loads_get_check_sum(mxArray *plhs[]);
extern void c40_KINARM_loads_method_dispatcher(SimStruct *S, int_T method, void *
  data);

#endif
