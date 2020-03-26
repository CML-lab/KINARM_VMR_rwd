#ifndef __c73_ethercat_h__
#define __c73_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc73_ethercatInstanceStruct
#define typedef_SFc73_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c73_doSetSimStateSideEffects;
  const mxArray *c73_setSimStateSideEffectsInfo;
  int32_T *c73_sfEvent;
  boolean_T *c73_isStable;
  uint8_T *c73_is_active_c73_ethercat;
  uint8_T *c73_is_c73_ethercat;
  real_T *c73_triggerReading;
  int32_T *c73_writeState;
  int32_T *c73_enable;
  int32_T *c73_complete;
  int32_T *c73_lastTriggerValue;
} SFc73_ethercatInstanceStruct;

#endif                                 /*typedef_SFc73_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c73_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c73_ethercat_get_check_sum(mxArray *plhs[]);
extern void c73_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
