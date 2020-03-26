#ifndef __c62_ethercat_h__
#define __c62_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc62_ethercatInstanceStruct
#define typedef_SFc62_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c62_doSetSimStateSideEffects;
  const mxArray *c62_setSimStateSideEffectsInfo;
  int32_T *c62_sfEvent;
  boolean_T *c62_isStable;
  uint8_T *c62_is_active_c62_ethercat;
  uint8_T *c62_is_c62_ethercat;
  int32_T (*c62_setupData)[4];
  int32_T (*c62_SDORequest)[3];
  int32_T (*c62_encoderOutputs)[6];
  real_T (*c62_setupValues)[24];
  real_T *c62_setupValuesCount;
  int32_T *c62_setupIdx;
  real_T (*c62_pollValues)[3];
  real_T (*c62_encoderValues)[12];
  real_T *c62_encoderValuesCount;
  int32_T *c62_intStatus;
  int32_T (*c62_pollResponse)[2];
  int32_T *c62_donePolling;
  int32_T (*c62_encoderResponse)[2];
  int32_T *c62_complete;
  real_T *c62_encoderIdx;
} SFc62_ethercatInstanceStruct;

#endif                                 /*typedef_SFc62_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c62_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c62_ethercat_get_check_sum(mxArray *plhs[]);
extern void c62_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
