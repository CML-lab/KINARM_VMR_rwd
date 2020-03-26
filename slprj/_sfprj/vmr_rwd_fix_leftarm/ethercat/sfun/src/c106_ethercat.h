#ifndef __c106_ethercat_h__
#define __c106_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc106_ethercatInstanceStruct
#define typedef_SFc106_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c106_doSetSimStateSideEffects;
  const mxArray *c106_setSimStateSideEffectsInfo;
  int32_T *c106_sfEvent;
  boolean_T *c106_isStable;
  uint8_T *c106_is_active_c106_ethercat;
  uint8_T *c106_is_c106_ethercat;
  real_T *c106_triggerReading;
  real_T *c106_driveID;
  int32_T *c106_triggerCountRead;
  real_T (*c106_countValues)[2];
  int32_T (*c106_emcyReadTrigger)[2];
  real_T (*c106_emcyValues)[2];
  int32_T *c106_countOverwriteTrigger;
  real_T (*c106_emcyValPump)[3];
  real_T *c106_currReadIdx;
  real_T *c106_valuesToRead;
  real_T *c106_overwriteStatus;
} SFc106_ethercatInstanceStruct;

#endif                                 /*typedef_SFc106_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c106_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c106_ethercat_get_check_sum(mxArray *plhs[]);
extern void c106_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
