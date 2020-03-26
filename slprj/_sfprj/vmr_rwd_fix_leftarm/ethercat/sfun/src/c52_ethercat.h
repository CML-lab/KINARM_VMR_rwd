#ifndef __c52_ethercat_h__
#define __c52_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc52_ethercatInstanceStruct
#define typedef_SFc52_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c52_doSetSimStateSideEffects;
  const mxArray *c52_setSimStateSideEffectsInfo;
  int32_T *c52_sfEvent;
  boolean_T *c52_isStable;
  uint8_T *c52_is_active_c52_ethercat;
  uint8_T *c52_is_c52_ethercat;
  real_T *c52_triggerReading;
  int32_T *c52_writeState;
  int32_T *c52_enable;
  int32_T *c52_complete;
  int32_T *c52_lastTriggerValue;
} SFc52_ethercatInstanceStruct;

#endif                                 /*typedef_SFc52_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c52_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c52_ethercat_get_check_sum(mxArray *plhs[]);
extern void c52_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
