#ifndef __c12_ethercat_h__
#define __c12_ethercat_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#include <stddef.h>
#ifndef typedef_SFc12_ethercatInstanceStruct
#define typedef_SFc12_ethercatInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c12_sfEvent;
  boolean_T c12_isStable;
  boolean_T c12_doneDoubleBufferReInit;
  uint8_T c12_is_active_c12_ethercat;
  uint32_T *c12_inVal;
  uint32_T *c12_uint32Out;
  int32_T *c12_int32Out;
  real_T *c12_doubleOut;
} SFc12_ethercatInstanceStruct;

#endif                                 /*typedef_SFc12_ethercatInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c12_ethercat_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_ethercat_get_check_sum(mxArray *plhs[]);
extern void c12_ethercat_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
