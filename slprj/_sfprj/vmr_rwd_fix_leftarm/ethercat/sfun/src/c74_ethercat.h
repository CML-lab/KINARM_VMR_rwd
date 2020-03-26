#ifndef __c74_ethercat_h__
#define __c74_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#include <stddef.h>
#ifndef typedef_SFc74_ethercatInstanceStruct
#define typedef_SFc74_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c74_sfEvent;
  boolean_T c74_isStable;
  boolean_T c74_doneDoubleBufferReInit;
  uint8_T c74_is_active_c74_ethercat;
  real_T *c74_u;
  uint32_T *c74_y;
  real_T *c74_type;
} SFc74_ethercatInstanceStruct;

#endif                                 /*typedef_SFc74_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c74_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c74_ethercat_get_check_sum(mxArray *plhs[]);
extern void c74_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
