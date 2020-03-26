#ifndef __c43_ethercat_h__
#define __c43_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc43_ethercatInstanceStruct
#define typedef_SFc43_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c43_doSetSimStateSideEffects;
  const mxArray *c43_setSimStateSideEffectsInfo;
  int32_T *c43_sfEvent;
  boolean_T *c43_isStable;
  uint8_T *c43_is_active_c43_ethercat;
  uint8_T *c43_is_c43_ethercat;
  int32_T (*c43_setupData)[4];
  int32_T (*c43_SDORequest)[3];
  int32_T (*c43_encoderOutputs)[6];
  real_T (*c43_setupValues)[24];
  real_T *c43_setupValuesCount;
  int32_T *c43_setupIdx;
  real_T (*c43_pollValues)[3];
  real_T (*c43_encoderValues)[12];
  real_T *c43_encoderValuesCount;
  int32_T *c43_intStatus;
  int32_T (*c43_pollResponse)[2];
  int32_T *c43_donePolling;
  int32_T (*c43_encoderResponse)[2];
  int32_T *c43_complete;
  real_T *c43_encoderIdx;
} SFc43_ethercatInstanceStruct;

#endif                                 /*typedef_SFc43_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c43_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c43_ethercat_get_check_sum(mxArray *plhs[]);
extern void c43_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
