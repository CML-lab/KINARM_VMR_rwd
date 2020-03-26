#ifndef __General_sfun_h__
#define __General_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "sf_runtime/sf_runtime_errors.h"
#include "rtwtypes.h"
#include "simtarget/slClientServerAPIBridge.h"
#include "multiword_types.h"
#include "sf_runtime/sfcdebug.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

struct SfDebugInstanceStruct;
extern struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct;

/* Custom Code from Simulation Target dialog*/
#include <stdio.h>
#include <stdlib.h>
#include <crc32.h>

/* Type Definitions */
#ifndef typedef_SFGeneralLocalData
#define typedef_SFGeneralLocalData

typedef struct {
  real_T l_l_col_x;
  real_T l_l_col_y;
} SFGeneralLocalData;

#endif                                 /*typedef_SFGeneralLocalData*/

/* Named Constants */
#define l_l_const_col_x                (1.0)
#define l_l_const_col_y                (2.0)

/* Variable Declarations */
extern uint32_T _GeneralMachineNumber_;
extern SFGeneralLocalData sGeneralLocalData;

/* Variable Definitions */

/* Function Declarations */
extern void General_initializer(void);
extern void General_terminator(void);

/* Function Definitions */

/* We load infoStruct for rtw_optimation_info on demand in mdlSetWorkWidths and
   free it immediately in mdlStart. Given that this is machine-wide as
   opposed to chart specific, we use NULL check to make sure it gets loaded
   and unloaded once per machine even though the  methods mdlSetWorkWidths/mdlStart
   are chart/instance specific. The following methods abstract this out. */
extern mxArray* load_General_optimization_info(void);
extern void unload_General_optimization_info(void);

#endif
