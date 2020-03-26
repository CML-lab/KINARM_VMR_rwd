#ifndef __c38_General_h__
#define __c38_General_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc38_GeneralInstanceStruct
#define typedef_SFc38_GeneralInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c38_doSetSimStateSideEffects;
  const mxArray *c38_setSimStateSideEffectsInfo;
  int32_T *c38_sfEvent;
  boolean_T *c38_isStable;
  uint8_T *c38_is_active_c38_General;
  uint8_T *c38_is_c38_General;
  real_T *c38_system_type;
} SFc38_GeneralInstanceStruct;

#endif                                 /*typedef_SFc38_GeneralInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c38_General_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c38_General_get_check_sum(mxArray *plhs[]);
extern void c38_General_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
