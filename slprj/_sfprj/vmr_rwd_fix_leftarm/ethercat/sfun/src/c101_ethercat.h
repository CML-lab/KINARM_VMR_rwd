#ifndef __c101_ethercat_h__
#define __c101_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc101_ethercatInstanceStruct
#define typedef_SFc101_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c101_doSetSimStateSideEffects;
  const mxArray *c101_setSimStateSideEffectsInfo;
  int32_T *c101_sfEvent;
  boolean_T *c101_isStable;
  uint8_T *c101_is_active_c101_ethercat;
  uint8_T *c101_is_c101_ethercat;
  real_T *c101_triggerReading;
  real_T *c101_driveID;
  int32_T *c101_triggerCountRead;
  real_T (*c101_countValues)[2];
  int32_T (*c101_emcyReadTrigger)[2];
  real_T (*c101_emcyValues)[2];
  int32_T *c101_countOverwriteTrigger;
  real_T (*c101_emcyValPump)[3];
  real_T *c101_currReadIdx;
  real_T *c101_valuesToRead;
  real_T *c101_overwriteStatus;
} SFc101_ethercatInstanceStruct;

#endif                                 /*typedef_SFc101_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c101_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c101_ethercat_get_check_sum(mxArray *plhs[]);
extern void c101_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
