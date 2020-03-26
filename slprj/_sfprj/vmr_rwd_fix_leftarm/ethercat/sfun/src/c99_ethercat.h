#ifndef __c99_ethercat_h__
#define __c99_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc99_ethercatInstanceStruct
#define typedef_SFc99_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c99_doSetSimStateSideEffects;
  const mxArray *c99_setSimStateSideEffectsInfo;
  int32_T *c99_sfEvent;
  boolean_T *c99_isStable;
  uint8_T *c99_is_active_c99_ethercat;
  uint8_T *c99_is_c99_ethercat;
  real_T *c99_triggerReading;
  real_T *c99_driveID;
  int32_T *c99_triggerCountRead;
  real_T (*c99_countValues)[2];
  int32_T (*c99_emcyReadTrigger)[2];
  real_T (*c99_emcyValues)[2];
  int32_T *c99_countOverwriteTrigger;
  real_T (*c99_emcyValPump)[3];
  real_T *c99_currReadIdx;
  real_T *c99_valuesToRead;
  real_T *c99_overwriteStatus;
} SFc99_ethercatInstanceStruct;

#endif                                 /*typedef_SFc99_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c99_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c99_ethercat_get_check_sum(mxArray *plhs[]);
extern void c99_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
