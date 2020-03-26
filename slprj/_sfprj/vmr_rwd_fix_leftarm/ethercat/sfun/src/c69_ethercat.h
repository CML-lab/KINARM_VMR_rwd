#ifndef __c69_ethercat_h__
#define __c69_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc69_ethercatInstanceStruct
#define typedef_SFc69_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c69_doSetSimStateSideEffects;
  const mxArray *c69_setSimStateSideEffectsInfo;
  int32_T *c69_sfEvent;
  boolean_T *c69_isStable;
  uint8_T *c69_is_active_c69_ethercat;
  uint8_T *c69_is_c69_ethercat;
  int32_T *c69_triggerReading;
  real_T (*c69_intReadAddrs)[24];
  real_T *c69_intCount;
  int32_T *c69_intSDOResponse;
  int32_T (*c69_SDOCommand)[3];
  int32_T (*c69_intSDOValues)[20];
  int32_T *c69_valueIdx;
  int32_T *c69_lastTrigger;
  real_T (*c69_floatReadAddrs)[24];
  real_T *c69_floatCount;
  real_T *c69_floatSDOResponse;
  real_T (*c69_floatSDOValues)[20];
  real_T *c69_valueCount;
  int32_T *c69_complete;
  real_T *c69_status;
} SFc69_ethercatInstanceStruct;

#endif                                 /*typedef_SFc69_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c69_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c69_ethercat_get_check_sum(mxArray *plhs[]);
extern void c69_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
