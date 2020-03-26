#ifndef __c2_General_h__
#define __c2_General_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#include <stddef.h>
#ifndef typedef_SFc2_GeneralInstanceStruct
#define typedef_SFc2_GeneralInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_General;
  uint32_T (*c2_uu)[2];
  real_T (*c2_dd_out)[2];
} SFc2_GeneralInstanceStruct;

#endif                                 /*typedef_SFc2_GeneralInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_General_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_General_get_check_sum(mxArray *plhs[]);
extern void c2_General_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
