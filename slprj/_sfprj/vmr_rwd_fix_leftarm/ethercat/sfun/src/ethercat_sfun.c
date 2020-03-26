/* Include files */

#include "ethercat_sfun.h"
#include "ethercat_sfun_debug_macros.h"
#include "c2_ethercat.h"
#include "c12_ethercat.h"
#include "c43_ethercat.h"
#include "c47_ethercat.h"
#include "c49_ethercat.h"
#include "c50_ethercat.h"
#include "c52_ethercat.h"
#include "c53_ethercat.h"
#include "c62_ethercat.h"
#include "c66_ethercat.h"
#include "c69_ethercat.h"
#include "c71_ethercat.h"
#include "c73_ethercat.h"
#include "c74_ethercat.h"
#include "c99_ethercat.h"
#include "c101_ethercat.h"
#include "c104_ethercat.h"
#include "c106_ethercat.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _ethercatMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void ethercat_initializer(void)
{
}

void ethercat_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_ethercat_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==2) {
    c2_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==43) {
    c43_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==47) {
    c47_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==49) {
    c49_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==50) {
    c50_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==52) {
    c52_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==53) {
    c53_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==62) {
    c62_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==66) {
    c66_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==69) {
    c69_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==71) {
    c71_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==73) {
    c73_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==74) {
    c74_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==99) {
    c99_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==101) {
    c101_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==104) {
    c104_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==106) {
    c106_ethercat_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

extern void sf_ethercat_uses_exported_functions(int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
}

unsigned int sf_ethercat_process_testpoint_info_call( int nlhs, mxArray * plhs[],
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
  if (!strcmp(machineName, "ethercat")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 43:
      {
        extern mxArray *sf_c43_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c43_ethercat_get_testpoint_info();
        break;
      }

     case 47:
      {
        extern mxArray *sf_c47_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c47_ethercat_get_testpoint_info();
        break;
      }

     case 49:
      {
        extern mxArray *sf_c49_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c49_ethercat_get_testpoint_info();
        break;
      }

     case 50:
      {
        extern mxArray *sf_c50_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c50_ethercat_get_testpoint_info();
        break;
      }

     case 52:
      {
        extern mxArray *sf_c52_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c52_ethercat_get_testpoint_info();
        break;
      }

     case 62:
      {
        extern mxArray *sf_c62_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c62_ethercat_get_testpoint_info();
        break;
      }

     case 66:
      {
        extern mxArray *sf_c66_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c66_ethercat_get_testpoint_info();
        break;
      }

     case 69:
      {
        extern mxArray *sf_c69_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c69_ethercat_get_testpoint_info();
        break;
      }

     case 71:
      {
        extern mxArray *sf_c71_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c71_ethercat_get_testpoint_info();
        break;
      }

     case 73:
      {
        extern mxArray *sf_c73_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c73_ethercat_get_testpoint_info();
        break;
      }

     case 99:
      {
        extern mxArray *sf_c99_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c99_ethercat_get_testpoint_info();
        break;
      }

     case 101:
      {
        extern mxArray *sf_c101_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c101_ethercat_get_testpoint_info();
        break;
      }

     case 104:
      {
        extern mxArray *sf_c104_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c104_ethercat_get_testpoint_info();
        break;
      }

     case 106:
      {
        extern mxArray *sf_c106_ethercat_get_testpoint_info(void);
        plhs[0] = sf_c106_ethercat_get_testpoint_info();
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

unsigned int sf_ethercat_process_check_sum_call( int nlhs, mxArray * plhs[], int
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
      if (!strcmp(machineName,"ethercat")) {
        if (nrhs==3) {
          ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3618956242U);
          ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3865137272U);
          ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2128604142U);
          ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(131522115U);
        } else if (nrhs==4) {
          unsigned int chartFileNumber;
          chartFileNumber = (unsigned int)mxGetScalar(prhs[3]);
          switch (chartFileNumber) {
           case 2:
            {
              extern void sf_c2_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c2_ethercat_get_check_sum(plhs);
              break;
            }

           case 12:
            {
              extern void sf_c12_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c12_ethercat_get_check_sum(plhs);
              break;
            }

           case 43:
            {
              extern void sf_c43_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c43_ethercat_get_check_sum(plhs);
              break;
            }

           case 47:
            {
              extern void sf_c47_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c47_ethercat_get_check_sum(plhs);
              break;
            }

           case 49:
            {
              extern void sf_c49_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c49_ethercat_get_check_sum(plhs);
              break;
            }

           case 50:
            {
              extern void sf_c50_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c50_ethercat_get_check_sum(plhs);
              break;
            }

           case 52:
            {
              extern void sf_c52_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c52_ethercat_get_check_sum(plhs);
              break;
            }

           case 53:
            {
              extern void sf_c53_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c53_ethercat_get_check_sum(plhs);
              break;
            }

           case 62:
            {
              extern void sf_c62_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c62_ethercat_get_check_sum(plhs);
              break;
            }

           case 66:
            {
              extern void sf_c66_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c66_ethercat_get_check_sum(plhs);
              break;
            }

           case 69:
            {
              extern void sf_c69_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c69_ethercat_get_check_sum(plhs);
              break;
            }

           case 71:
            {
              extern void sf_c71_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c71_ethercat_get_check_sum(plhs);
              break;
            }

           case 73:
            {
              extern void sf_c73_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c73_ethercat_get_check_sum(plhs);
              break;
            }

           case 74:
            {
              extern void sf_c74_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c74_ethercat_get_check_sum(plhs);
              break;
            }

           case 99:
            {
              extern void sf_c99_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c99_ethercat_get_check_sum(plhs);
              break;
            }

           case 101:
            {
              extern void sf_c101_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c101_ethercat_get_check_sum(plhs);
              break;
            }

           case 104:
            {
              extern void sf_c104_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c104_ethercat_get_check_sum(plhs);
              break;
            }

           case 106:
            {
              extern void sf_c106_ethercat_get_check_sum(mxArray *plhs[]);
              sf_c106_ethercat_get_check_sum(plhs);
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

unsigned int sf_ethercat_autoinheritance_info( int nlhs, mxArray * plhs[], int
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
        if (strcmp(aiChksum, "E6ETrSoXwLck0Do9GUEaQF") == 0) {
          extern mxArray *sf_c2_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c2_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "E6ETrSoXwLck0Do9GUEaQF") == 0) {
          extern mxArray *sf_c12_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c12_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 43:
      {
        if (strcmp(aiChksum, "rm52HKbYsNXAga9m5ufUSB") == 0) {
          extern mxArray *sf_c43_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c43_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 47:
      {
        if (strcmp(aiChksum, "rm52HKbYsNXAga9m5ufUSB") == 0) {
          extern mxArray *sf_c47_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c47_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 49:
      {
        if (strcmp(aiChksum, "SNceeMg172YEYDjluqGDK") == 0) {
          extern mxArray *sf_c49_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c49_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 50:
      {
        if (strcmp(aiChksum, "vnb6NSEzdVRfosFviFupGD") == 0) {
          extern mxArray *sf_c50_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c50_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 52:
      {
        if (strcmp(aiChksum, "vLv4KsbnlyoLwbYhebLKx") == 0) {
          extern mxArray *sf_c52_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c52_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 53:
      {
        if (strcmp(aiChksum, "KwfvnIBmFClbRZtvOlNaTE") == 0) {
          extern mxArray *sf_c53_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c53_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 62:
      {
        if (strcmp(aiChksum, "rm52HKbYsNXAga9m5ufUSB") == 0) {
          extern mxArray *sf_c62_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c62_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 66:
      {
        if (strcmp(aiChksum, "rm52HKbYsNXAga9m5ufUSB") == 0) {
          extern mxArray *sf_c66_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c66_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 69:
      {
        if (strcmp(aiChksum, "SNceeMg172YEYDjluqGDK") == 0) {
          extern mxArray *sf_c69_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c69_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 71:
      {
        if (strcmp(aiChksum, "vnb6NSEzdVRfosFviFupGD") == 0) {
          extern mxArray *sf_c71_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c71_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 73:
      {
        if (strcmp(aiChksum, "vLv4KsbnlyoLwbYhebLKx") == 0) {
          extern mxArray *sf_c73_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c73_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 74:
      {
        if (strcmp(aiChksum, "KwfvnIBmFClbRZtvOlNaTE") == 0) {
          extern mxArray *sf_c74_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c74_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 99:
      {
        if (strcmp(aiChksum, "UZjFbtQYzoFuxtUyPKRSjD") == 0) {
          extern mxArray *sf_c99_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c99_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 101:
      {
        if (strcmp(aiChksum, "UZjFbtQYzoFuxtUyPKRSjD") == 0) {
          extern mxArray *sf_c101_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c101_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 104:
      {
        if (strcmp(aiChksum, "UZjFbtQYzoFuxtUyPKRSjD") == 0) {
          extern mxArray *sf_c104_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c104_ethercat_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 106:
      {
        if (strcmp(aiChksum, "UZjFbtQYzoFuxtUyPKRSjD") == 0) {
          extern mxArray *sf_c106_ethercat_get_autoinheritance_info(void);
          plhs[0] = sf_c106_ethercat_get_autoinheritance_info();
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

unsigned int sf_ethercat_get_eml_resolved_functions_info( int nlhs, mxArray *
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
        extern const mxArray *sf_c2_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray *sf_c12_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 43:
      {
        extern const mxArray *sf_c43_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c43_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 47:
      {
        extern const mxArray *sf_c47_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c47_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 49:
      {
        extern const mxArray *sf_c49_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c49_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 50:
      {
        extern const mxArray *sf_c50_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c50_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 52:
      {
        extern const mxArray *sf_c52_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c52_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 53:
      {
        extern const mxArray *sf_c53_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c53_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 62:
      {
        extern const mxArray *sf_c62_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c62_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 66:
      {
        extern const mxArray *sf_c66_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c66_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 69:
      {
        extern const mxArray *sf_c69_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c69_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 71:
      {
        extern const mxArray *sf_c71_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c71_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 73:
      {
        extern const mxArray *sf_c73_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c73_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 74:
      {
        extern const mxArray *sf_c74_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c74_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 99:
      {
        extern const mxArray *sf_c99_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c99_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 101:
      {
        extern const mxArray *sf_c101_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c101_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 104:
      {
        extern const mxArray *sf_c104_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c104_ethercat_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 106:
      {
        extern const mxArray *sf_c106_ethercat_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c106_ethercat_get_eml_resolved_functions_info();
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

unsigned int sf_ethercat_third_party_uses_info( int nlhs, mxArray * plhs[], int
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
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c2_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c2_ethercat_third_party_uses_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c12_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c12_ethercat_third_party_uses_info();
          break;
        }
      }

     case 43:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c43_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c43_ethercat_third_party_uses_info();
          break;
        }
      }

     case 47:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c47_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c47_ethercat_third_party_uses_info();
          break;
        }
      }

     case 49:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c49_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c49_ethercat_third_party_uses_info();
          break;
        }
      }

     case 50:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c50_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c50_ethercat_third_party_uses_info();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c52_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c52_ethercat_third_party_uses_info();
          break;
        }
      }

     case 53:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c53_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c53_ethercat_third_party_uses_info();
          break;
        }
      }

     case 62:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c62_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c62_ethercat_third_party_uses_info();
          break;
        }
      }

     case 66:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c66_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c66_ethercat_third_party_uses_info();
          break;
        }
      }

     case 69:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c69_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c69_ethercat_third_party_uses_info();
          break;
        }
      }

     case 71:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c71_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c71_ethercat_third_party_uses_info();
          break;
        }
      }

     case 73:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c73_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c73_ethercat_third_party_uses_info();
          break;
        }
      }

     case 74:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c74_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c74_ethercat_third_party_uses_info();
          break;
        }
      }

     case 99:
      {
        if (strcmp(tpChksum, "sPITrLbuBZpljFemZ9mEGTF") == 0) {
          extern mxArray *sf_c99_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c99_ethercat_third_party_uses_info();
          break;
        }
      }

     case 101:
      {
        if (strcmp(tpChksum, "sfneVuexbi4TIUWmMStuHNG") == 0) {
          extern mxArray *sf_c101_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c101_ethercat_third_party_uses_info();
          break;
        }
      }

     case 104:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c104_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c104_ethercat_third_party_uses_info();
          break;
        }
      }

     case 106:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c106_ethercat_third_party_uses_info(void);
          plhs[0] = sf_c106_ethercat_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_ethercat_jit_fallback_info( int nlhs, mxArray * plhs[], int nrhs,
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
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c2_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c2_ethercat_jit_fallback_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c12_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c12_ethercat_jit_fallback_info();
          break;
        }
      }

     case 43:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c43_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c43_ethercat_jit_fallback_info();
          break;
        }
      }

     case 47:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c47_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c47_ethercat_jit_fallback_info();
          break;
        }
      }

     case 49:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c49_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c49_ethercat_jit_fallback_info();
          break;
        }
      }

     case 50:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c50_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c50_ethercat_jit_fallback_info();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c52_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c52_ethercat_jit_fallback_info();
          break;
        }
      }

     case 53:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c53_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c53_ethercat_jit_fallback_info();
          break;
        }
      }

     case 62:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c62_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c62_ethercat_jit_fallback_info();
          break;
        }
      }

     case 66:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c66_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c66_ethercat_jit_fallback_info();
          break;
        }
      }

     case 69:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c69_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c69_ethercat_jit_fallback_info();
          break;
        }
      }

     case 71:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c71_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c71_ethercat_jit_fallback_info();
          break;
        }
      }

     case 73:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c73_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c73_ethercat_jit_fallback_info();
          break;
        }
      }

     case 74:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c74_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c74_ethercat_jit_fallback_info();
          break;
        }
      }

     case 99:
      {
        if (strcmp(tpChksum, "sPITrLbuBZpljFemZ9mEGTF") == 0) {
          extern mxArray *sf_c99_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c99_ethercat_jit_fallback_info();
          break;
        }
      }

     case 101:
      {
        if (strcmp(tpChksum, "sfneVuexbi4TIUWmMStuHNG") == 0) {
          extern mxArray *sf_c101_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c101_ethercat_jit_fallback_info();
          break;
        }
      }

     case 104:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c104_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c104_ethercat_jit_fallback_info();
          break;
        }
      }

     case 106:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c106_ethercat_jit_fallback_info(void);
          plhs[0] = sf_c106_ethercat_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_ethercat_updateBuildInfo_args_info( int nlhs, mxArray * plhs[],
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
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c2_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
          extern mxArray *sf_c12_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c12_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 43:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c43_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c43_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 47:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c47_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c47_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 49:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c49_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c49_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 50:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c50_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c50_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 52:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c52_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c52_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 53:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c53_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c53_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 62:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c62_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c62_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 66:
      {
        if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
          extern mxArray *sf_c66_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c66_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 69:
      {
        if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
          extern mxArray *sf_c69_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c69_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 71:
      {
        if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
          extern mxArray *sf_c71_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c71_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 73:
      {
        if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
          extern mxArray *sf_c73_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c73_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 74:
      {
        if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
          extern mxArray *sf_c74_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c74_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 99:
      {
        if (strcmp(tpChksum, "sPITrLbuBZpljFemZ9mEGTF") == 0) {
          extern mxArray *sf_c99_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c99_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 101:
      {
        if (strcmp(tpChksum, "sfneVuexbi4TIUWmMStuHNG") == 0) {
          extern mxArray *sf_c101_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c101_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 104:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c104_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c104_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     case 106:
      {
        if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
          extern mxArray *sf_c106_ethercat_updateBuildInfo_args_info(void);
          plhs[0] = sf_c106_ethercat_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_ethercat_get_post_codegen_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 2:
    {
      if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
        extern mxArray *sf_c2_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c2_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 12:
    {
      if (strcmp(tpChksum, "s7CCzApRpVbnYkePbdfJ2JC") == 0) {
        extern mxArray *sf_c12_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c12_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 43:
    {
      if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
        extern mxArray *sf_c43_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c43_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 47:
    {
      if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
        extern mxArray *sf_c47_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c47_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 49:
    {
      if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
        extern mxArray *sf_c49_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c49_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 50:
    {
      if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
        extern mxArray *sf_c50_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c50_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 52:
    {
      if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
        extern mxArray *sf_c52_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c52_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 53:
    {
      if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
        extern mxArray *sf_c53_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c53_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 62:
    {
      if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
        extern mxArray *sf_c62_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c62_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 66:
    {
      if (strcmp(tpChksum, "sub8mArNF9iSmkgmBxxkWB") == 0) {
        extern mxArray *sf_c66_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c66_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 69:
    {
      if (strcmp(tpChksum, "sX8SuZ9m5VIK0u6eQUBvGLC") == 0) {
        extern mxArray *sf_c69_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c69_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 71:
    {
      if (strcmp(tpChksum, "skGKDaML8sbRfNKqGRjmsdE") == 0) {
        extern mxArray *sf_c71_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c71_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 73:
    {
      if (strcmp(tpChksum, "s5gwpRunVmChHinpv601tGH") == 0) {
        extern mxArray *sf_c73_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c73_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 74:
    {
      if (strcmp(tpChksum, "sS5kyHDlbuIgAXyoJvTW0VD") == 0) {
        extern mxArray *sf_c74_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c74_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 99:
    {
      if (strcmp(tpChksum, "sPITrLbuBZpljFemZ9mEGTF") == 0) {
        extern mxArray *sf_c99_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c99_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 101:
    {
      if (strcmp(tpChksum, "sfneVuexbi4TIUWmMStuHNG") == 0) {
        extern mxArray *sf_c101_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c101_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 104:
    {
      if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
        extern mxArray *sf_c104_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c104_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   case 106:
    {
      if (strcmp(tpChksum, "s6RcW5yiU3ZweNok7pK1d8E") == 0) {
        extern mxArray *sf_c106_ethercat_get_post_codegen_info(void);
        plhs[0] = sf_c106_ethercat_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
}

void ethercat_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _ethercatMachineNumber_ = sf_debug_initialize_machine(debugInstance,"ethercat",
    "sfun",1,70,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,_ethercatMachineNumber_,0,
    0);
  sf_debug_set_machine_data_thresholds(debugInstance,_ethercatMachineNumber_,0);
}

void ethercat_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_ethercat_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("ethercat",
      "vmr_rwd_fix_leftarm");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_ethercat_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
