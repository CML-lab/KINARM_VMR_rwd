#ifndef __c50_ethercat_h__
#define __c50_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc50_ethercatInstanceStruct
#define typedef_SFc50_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c50_doSetSimStateSideEffects;
  const mxArray *c50_setSimStateSideEffectsInfo;
  int32_T *c50_sfEvent;
  boolean_T *c50_isStable;
  uint8_T *c50_is_active_c50_ethercat;
  uint8_T *c50_is_c50_ethercat;
  real_T *c50_triggerWriting;
  real_T *c50_readState;
  int32_T *c50_enable;
  int32_T *c50_complete;
  int32_T *c50_lastTriggerValue;
} SFc50_ethercatInstanceStruct;

#endif                                 /*typedef_SFc50_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c50_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c50_ethercat_get_check_sum(mxArray *plhs[]);
extern void c50_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
