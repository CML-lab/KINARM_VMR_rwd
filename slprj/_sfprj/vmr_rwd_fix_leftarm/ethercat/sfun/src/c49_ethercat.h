#ifndef __c49_ethercat_h__
#define __c49_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc49_ethercatInstanceStruct
#define typedef_SFc49_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c49_doSetSimStateSideEffects;
  const mxArray *c49_setSimStateSideEffectsInfo;
  int32_T *c49_sfEvent;
  boolean_T *c49_isStable;
  uint8_T *c49_is_active_c49_ethercat;
  uint8_T *c49_is_c49_ethercat;
  int32_T *c49_triggerReading;
  real_T (*c49_intReadAddrs)[24];
  real_T *c49_intCount;
  int32_T *c49_intSDOResponse;
  int32_T (*c49_SDOCommand)[3];
  int32_T (*c49_intSDOValues)[20];
  int32_T *c49_valueIdx;
  int32_T *c49_lastTrigger;
  real_T (*c49_floatReadAddrs)[24];
  real_T *c49_floatCount;
  real_T *c49_floatSDOResponse;
  real_T (*c49_floatSDOValues)[20];
  real_T *c49_valueCount;
  int32_T *c49_complete;
  real_T *c49_status;
} SFc49_ethercatInstanceStruct;

#endif                                 /*typedef_SFc49_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c49_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c49_ethercat_get_check_sum(mxArray *plhs[]);
extern void c49_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
