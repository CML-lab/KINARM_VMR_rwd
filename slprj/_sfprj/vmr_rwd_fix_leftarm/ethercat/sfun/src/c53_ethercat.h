#ifndef __c53_ethercat_h__
#define __c53_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#include <stddef.h>
#ifndef typedef_SFc53_ethercatInstanceStruct
#define typedef_SFc53_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c53_sfEvent;
  boolean_T c53_isStable;
  boolean_T c53_doneDoubleBufferReInit;
  uint8_T c53_is_active_c53_ethercat;
  real_T *c53_u;
  uint32_T *c53_y;
  real_T *c53_type;
} SFc53_ethercatInstanceStruct;

#endif                                 /*typedef_SFc53_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c53_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c53_ethercat_get_check_sum(mxArray *plhs[]);
extern void c53_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
