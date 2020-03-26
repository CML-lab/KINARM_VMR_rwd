#ifndef __c47_ethercat_h__
#define __c47_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc47_ethercatInstanceStruct
#define typedef_SFc47_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c47_doSetSimStateSideEffects;
  const mxArray *c47_setSimStateSideEffectsInfo;
  int32_T *c47_sfEvent;
  boolean_T *c47_isStable;
  uint8_T *c47_is_active_c47_ethercat;
  uint8_T *c47_is_c47_ethercat;
  int32_T (*c47_setupData)[4];
  int32_T (*c47_SDORequest)[3];
  int32_T (*c47_encoderOutputs)[6];
  real_T (*c47_setupValues)[24];
  real_T *c47_setupValuesCount;
  int32_T *c47_setupIdx;
  real_T (*c47_pollValues)[3];
  real_T (*c47_encoderValues)[12];
  real_T *c47_encoderValuesCount;
  int32_T *c47_intStatus;
  int32_T (*c47_pollResponse)[2];
  int32_T *c47_donePolling;
  int32_T (*c47_encoderResponse)[2];
  int32_T *c47_complete;
  real_T *c47_encoderIdx;
} SFc47_ethercatInstanceStruct;

#endif                                 /*typedef_SFc47_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c47_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c47_ethercat_get_check_sum(mxArray *plhs[]);
extern void c47_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
