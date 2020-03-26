#ifndef __c71_ethercat_h__
#define __c71_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc71_ethercatInstanceStruct
#define typedef_SFc71_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c71_doSetSimStateSideEffects;
  const mxArray *c71_setSimStateSideEffectsInfo;
  int32_T *c71_sfEvent;
  boolean_T *c71_isStable;
  uint8_T *c71_is_active_c71_ethercat;
  uint8_T *c71_is_c71_ethercat;
  real_T *c71_triggerWriting;
  real_T *c71_readState;
  int32_T *c71_enable;
  int32_T *c71_complete;
  int32_T *c71_lastTriggerValue;
} SFc71_ethercatInstanceStruct;

#endif                                 /*typedef_SFc71_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c71_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c71_ethercat_get_check_sum(mxArray *plhs[]);
extern void c71_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
