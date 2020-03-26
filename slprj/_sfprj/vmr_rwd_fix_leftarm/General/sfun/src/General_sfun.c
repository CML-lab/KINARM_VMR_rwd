/* Include files */

#define IN_SF_MACHINE_SOURCE           1
#include "General_sfun.h"
#include "General_sfun_debug_macros.h"
#include "c2_General.h"
#include "c8_General.h"
#include "c16_General.h"
#include "c38_General.h"
#include "c42_General.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _GeneralMachineNumber_;
SFGeneralLocalData sGeneralLocalData;

/* Function Declarations */

/* Function Definitions */
void General_initializer(void)
{
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_GeneralMachineNumber_, 0U,
    &sGeneralLocalData.l_l_col_x);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_GeneralMachineNumber_, 1U,
    &sGeneralLocalData.l_l_col_y);
  sGeneralLocalData.l_l_col_x = 1.0;
  sGeneralLocalData.l_l_col_y = 2.0;
}

void General_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_General_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==2) {
    c2_General_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_General_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_General_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==38) {
    c38_General_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==42) {
    c42_General_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

extern void sf_General_uses_exported_functions(int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
}

unsigned int sf_General_process_testpoint_info_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "General")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 8:
      {
        extern mxArray *sf_c8_General_get_testpoint_info(void);
        plhs[0] = sf_c8_General_get_testpoint_info();
        break;
      }

     case 38:
      {
        extern mxArray *sf_c38_General_get_testpoint_info(void);
        plhs[0] = sf_c38_General_get_testpoint_info();
        break;
      }

     case 42:
      {
        extern mxArray *sf_c42_General_get_testpoint_info(void);
        plhs[0] = sf_c42_General_get_testpoint_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_General_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>2 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"library")) {
      char machineName[100];
      mxGetString(prhs[2], machineName,sizeof(machineName)/sizeof(char));
      machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
      if (!strcmp(machineName,"General")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1275513973U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3832081828U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(929691705U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(155363400U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 2:
            {
              extern void sf_c2_General_get_check_sum(mxArray *plhs[]);
              sf_c2_General_get_check_sum(plhs);
              break;
            }

           case 8:
            {
              extern void sf_c8_General_get_check_sum(mxArray *plhs[]);
              sf_c8_General_get_check_sum(plhs);
              break;
            }

           case 16:
            {
              extern void sf_c16_General_get_check_sum(mxArray *plhs[]);
              sf_c16_General_get_check_sum(plhs);
              break;
            }

           case 38:
            {
              extern void sf_c38_General_get_check_sum(mxArray *plhs[]);
              sf_c38_General_get_check_sum(plhs);
              break;
            }

           case 42:
            {
              extern void sf_c42_General_get_check_sum(mxArray *plhs[]);
              sf_c42_General_get_check_sum(plhs);
              break;
            }

           default:
            ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
            ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
          }
        } else {
          return 0;
        }
      } else {
        return 0;
      }
    } else {
      return 0;
    }
  } else {
    return 0;
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_General_autoinheritance_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(aiChksum, "ceZZwOTThTW6moMIbg4TB") == 0) {
          extern mxArray *sf_c2_General_get_autoinheritance_info(void);
          plhs[0] = sf_c2_General_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "ZMOSW14Jbp5iScy0F893d") == 0) {
          extern mxArray *sf_c8_General_get_autoinheritance_info(void);
          plhs[0] = sf_c8_General_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "M4ACzQeP48QSlMuNibcWME") == 0) {
          extern mxArray *sf_c16_General_get_autoinheritance_info(void);
          plhs[0] = sf_c16_General_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 38:
      {
        if (strcmp(aiChksum, "gx4U1Da1y1HOFSsj69ZQEG") == 0) {
          extern mxArray *sf_c38_General_get_autoinheritance_info(void);
          plhs[0] = sf_c38_General_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 42:
      {
        if (strcmp(aiChksum, "Gl5OpmQeCCz3vnYWkY9EyC") == 0) {
          extern mxArray *sf_c42_General_get_autoinheritance_info(void);
          plhs[0] = sf_c42_General_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_General_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        extern const mxArray *sf_c2_General_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_General_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray *sf_c8_General_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_General_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray *sf_c16_General_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_General_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 38:
      {
        extern const mxArray *sf_c38_General_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c38_General_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 42:
      {
        extern const mxArray *sf_c42_General_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c42_General_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_General_third_party_uses_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "s7pUQhpSBznDMApU1f7ckOG") == 0) {
          extern mxArray *sf_c2_General_third_party_uses_info(void);
          plhs[0] = sf_c2_General_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sDt6PDKxXX3DPjVkydvSpFG") == 0) {
          extern mxArray *sf_c8_General_third_party_uses_info(void);
          plhs[0] = sf_c8_General_third_party_uses_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "spk5ZjAmAwk1ahIFYK8aLQB") == 0) {
          extern mxArray *sf_c16_General_third_party_uses_info(void);
          plhs[0] = sf_c16_General_third_party_uses_info();
          break;
        }
      }

     case 38:
      {
        if (strcmp(tpChksum, "sVswVlNkLwBVvafkgoc2QYD") == 0) {
          extern mxArray *sf_c38_General_third_party_uses_info(void);
          plhs[0] = sf_c38_General_third_party_uses_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sXhSZxT7UekhsG4knAy3ATE") == 0) {
          extern mxArray *sf_c42_General_third_party_uses_info(void);
          plhs[0] = sf_c42_General_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_General_jit_fallback_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "s7pUQhpSBznDMApU1f7ckOG") == 0) {
          extern mxArray *sf_c2_General_jit_fallback_info(void);
          plhs[0] = sf_c2_General_jit_fallback_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sDt6PDKxXX3DPjVkydvSpFG") == 0) {
          extern mxArray *sf_c8_General_jit_fallback_info(void);
          plhs[0] = sf_c8_General_jit_fallback_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "spk5ZjAmAwk1ahIFYK8aLQB") == 0) {
          extern mxArray *sf_c16_General_jit_fallback_info(void);
          plhs[0] = sf_c16_General_jit_fallback_info();
          break;
        }
      }

     case 38:
      {
        if (strcmp(tpChksum, "sVswVlNkLwBVvafkgoc2QYD") == 0) {
          extern mxArray *sf_c38_General_jit_fallback_info(void);
          plhs[0] = sf_c38_General_jit_fallback_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sXhSZxT7UekhsG4knAy3ATE") == 0) {
          extern mxArray *sf_c42_General_jit_fallback_info(void);
          plhs[0] = sf_c42_General_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_General_updateBuildInfo_args_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        if (strcmp(tpChksum, "s7pUQhpSBznDMApU1f7ckOG") == 0) {
          extern mxArray *sf_c2_General_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_General_updateBuildInfo_args_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sDt6PDKxXX3DPjVkydvSpFG") == 0) {
          extern mxArray *sf_c8_General_updateBuildInfo_args_info(void);
          plhs[0] = sf_c8_General_updateBuildInfo_args_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "spk5ZjAmAwk1ahIFYK8aLQB") == 0) {
          extern mxArray *sf_c16_General_updateBuildInfo_args_info(void);
          plhs[0] = sf_c16_General_updateBuildInfo_args_info();
          break;
        }
      }

     case 38:
      {
        if (strcmp(tpChksum, "sVswVlNkLwBVvafkgoc2QYD") == 0) {
          extern mxArray *sf_c38_General_updateBuildInfo_args_info(void);
          plhs[0] = sf_c38_General_updateBuildInfo_args_info();
          break;
        }
      }

     case 42:
      {
        if (strcmp(tpChksum, "sXhSZxT7UekhsG4knAy3ATE") == 0) {
          extern mxArray *sf_c42_General_updateBuildInfo_args_info(void);
          plhs[0] = sf_c42_General_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_General_get_post_codegen_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 2:
    {
      if (strcmp(tpChksum, "s7pUQhpSBznDMApU1f7ckOG") == 0) {
        extern mxArray *sf_c2_General_get_post_codegen_info(void);
        plhs[0] = sf_c2_General_get_post_codegen_info();
        return;
      }
    }
    break;

   case 8:
    {
      if (strcmp(tpChksum, "sDt6PDKxXX3DPjVkydvSpFG") == 0) {
        extern mxArray *sf_c8_General_get_post_codegen_info(void);
        plhs[0] = sf_c8_General_get_post_codegen_info();
        return;
      }
    }
    break;

   case 16:
    {
      if (strcmp(tpChksum, "spk5ZjAmAwk1ahIFYK8aLQB") == 0) {
        extern mxArray *sf_c16_General_get_post_codegen_info(void);
        plhs[0] = sf_c16_General_get_post_codegen_info();
        return;
      }
    }
    break;

   case 38:
    {
      if (strcmp(tpChksum, "sVswVlNkLwBVvafkgoc2QYD") == 0) {
        extern mxArray *sf_c38_General_get_post_codegen_info(void);
        plhs[0] = sf_c38_General_get_post_codegen_info();
        return;
      }
    }
    break;

   case 42:
    {
      if (strcmp(tpChksum, "sXhSZxT7UekhsG4knAy3ATE") == 0) {
        extern mxArray *sf_c42_General_get_post_codegen_info(void);
        plhs[0] = sf_c42_General_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
}

void General_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _GeneralMachineNumber_ = sf_debug_initialize_machine(debugInstance,"General",
    "sfun",1,37,2,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,_GeneralMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,_GeneralMachineNumber_,2);
  sf_debug_set_machine_data_scope(debugInstance,_GeneralMachineNumber_,0,7);
  sf_debug_set_machine_data_name(debugInstance,_GeneralMachineNumber_,0,"col_x");
  sf_debug_set_machine_data_type(debugInstance,_GeneralMachineNumber_,0,
    SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,_GeneralMachineNumber_,0,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,_GeneralMachineNumber_,0,
    NULL);
  sf_debug_set_machine_data_scope(debugInstance,_GeneralMachineNumber_,1,7);
  sf_debug_set_machine_data_name(debugInstance,_GeneralMachineNumber_,1,"col_y");
  sf_debug_set_machine_data_type(debugInstance,_GeneralMachineNumber_,1,
    SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,_GeneralMachineNumber_,1,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,_GeneralMachineNumber_,1,
    NULL);
}

void General_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_General_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("General",
      "vmr_rwd_fix_leftarm");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_General_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
