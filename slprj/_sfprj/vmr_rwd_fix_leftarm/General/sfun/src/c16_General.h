#ifndef __c16_General_h__
#define __c16_General_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#include <stddef.h>
#ifndef typedef_SFc16_GeneralInstanceStruct
#define typedef_SFc16_GeneralInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c16_sfEvent;
  boolean_T c16_isStable;
  boolean_T c16_doneDoubleBufferReInit;
  uint8_T c16_is_active_c16_General;
  uint16_T *c16_u;
  real32_T *c16_y;
} SFc16_GeneralInstanceStruct;

#endif                                 /*typedef_SFc16_GeneralInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_General_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c16_General_get_check_sum(mxArray *plhs[]);
extern void c16_General_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
