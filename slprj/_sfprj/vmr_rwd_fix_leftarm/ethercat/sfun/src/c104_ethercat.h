#ifndef __c104_ethercat_h__
#define __c104_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc104_ethercatInstanceStruct
#define typedef_SFc104_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c104_doSetSimStateSideEffects;
  const mxArray *c104_setSimStateSideEffectsInfo;
  int32_T *c104_sfEvent;
  boolean_T *c104_isStable;
  uint8_T *c104_is_active_c104_ethercat;
  uint8_T *c104_is_c104_ethercat;
  real_T *c104_triggerReading;
  real_T *c104_driveID;
  int32_T *c104_triggerCountRead;
  real_T (*c104_countValues)[2];
  int32_T (*c104_emcyReadTrigger)[2];
  real_T (*c104_emcyValues)[2];
  int32_T *c104_countOverwriteTrigger;
  real_T (*c104_emcyValPump)[3];
  real_T *c104_currReadIdx;
  real_T *c104_valuesToRead;
  real_T *c104_overwriteStatus;
} SFc104_ethercatInstanceStruct;

#endif                                 /*typedef_SFc104_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c104_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c104_ethercat_get_check_sum(mxArray *plhs[]);
extern void c104_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
