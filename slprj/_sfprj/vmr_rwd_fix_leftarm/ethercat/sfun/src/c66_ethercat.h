#ifndef __c66_ethercat_h__
#define __c66_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc66_ethercatInstanceStruct
#define typedef_SFc66_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c66_doSetSimStateSideEffects;
  const mxArray *c66_setSimStateSideEffectsInfo;
  int32_T *c66_sfEvent;
  boolean_T *c66_isStable;
  uint8_T *c66_is_active_c66_ethercat;
  uint8_T *c66_is_c66_ethercat;
  int32_T (*c66_setupData)[4];
  int32_T (*c66_SDORequest)[3];
  int32_T (*c66_encoderOutputs)[6];
  real_T (*c66_setupValues)[24];
  real_T *c66_setupValuesCount;
  int32_T *c66_setupIdx;
  real_T (*c66_pollValues)[3];
  real_T (*c66_encoderValues)[12];
  real_T *c66_encoderValuesCount;
  int32_T *c66_intStatus;
  int32_T (*c66_pollResponse)[2];
  int32_T *c66_donePolling;
  int32_T (*c66_encoderResponse)[2];
  int32_T *c66_complete;
  real_T *c66_encoderIdx;
} SFc66_ethercatInstanceStruct;

#endif                                 /*typedef_SFc66_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c66_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c66_ethercat_get_check_sum(mxArray *plhs[]);
extern void c66_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
