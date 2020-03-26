/* Include files */

#include "vmr_rwd_fix_leftarm_sfun.h"
#include "vmr_rwd_fix_leftarm_sfun_debug_macros.h"
#include "c1_vmr_rwd_fix_leftarm.h"
#include "c11_vmr_rwd_fix_leftarm.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _vmr_rwd_fix_leftarmMachineNumber_;
SFvmr_rwd_fix_leftarmLocalData svmr_rwd_fix_leftarmLocalData;

/* Function Declarations */

/* Function Definitions */
void vmr_rwd_fix_leftarm_initializer(void)
{
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 46U,
    &svmr_rwd_fix_leftarmLocalData.m_m_col_x);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 47U,
    &svmr_rwd_fix_leftarmLocalData.m_m_col_y);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 14U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_TARGET_ON);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 35U,
    &svmr_rwd_fix_leftarmLocalData.m_m_LOGICAL_RADIUS);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 41U,
    &svmr_rwd_fix_leftarmLocalData.m_m_START_TARGET_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 5U,
    &svmr_rwd_fix_leftarmLocalData.m_m_END_TARGET_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 39U,
    &svmr_rwd_fix_leftarmLocalData.m_m_ROTATION_CENTER);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 36U,
    &svmr_rwd_fix_leftarmLocalData.m_m_MAXREACHTIME_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 40U,
    &svmr_rwd_fix_leftarmLocalData.m_m_ROTATION_TYPE);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 38U,
    &svmr_rwd_fix_leftarmLocalData.m_m_ROTATION);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 2U,
    &svmr_rwd_fix_leftarmLocalData.m_m_DELAY_POSTTRIAL_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 13U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_STAY_CENTER);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 44U,
    &svmr_rwd_fix_leftarmLocalData.m_m_VISUAL_RADIUS);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 1U,
    &svmr_rwd_fix_leftarmLocalData.m_m_COLOR);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 25U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_SCORETEXT_ROW);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 34U,
    &svmr_rwd_fix_leftarmLocalData.m_m_LABEL_HEIGHT);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 16U,
    &svmr_rwd_fix_leftarmLocalData.m_m_HITCOLOR);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 6U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_HIT_TARGET);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 7U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_MISS_TARGET);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 22U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_REWARD_VAL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 27U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_HIT_DURATION);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 28U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_HIT_FREQUENCY);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 32U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_VIS_RAD);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 10U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_REWARD);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 45U,
    &svmr_rwd_fix_leftarmLocalData.m_m_WAIT_AT_START_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 33U,
    &svmr_rwd_fix_leftarmLocalData.m_m_LABEL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 21U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_RETURN_RING_ROW);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 43U,
    &svmr_rwd_fix_leftarmLocalData.m_m_STROKE_WIDTH);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 42U,
    &svmr_rwd_fix_leftarmLocalData.m_m_STROKE_COLOR);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 26U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_SCORE_TIME);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 15U,
    &svmr_rwd_fix_leftarmLocalData.m_m_HAND_VIS_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 0U,
    &svmr_rwd_fix_leftarmLocalData.m_m_CLAMP_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 4U,
    &svmr_rwd_fix_leftarmLocalData.m_m_DO_REWARD_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 29U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_NEUTRAL_DURATION);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 30U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_NEUTRAL_FREQUENCY);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 8U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_NEUTRAL_FDBK);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 12U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_SHOW_SCORE);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 3U,
    &svmr_rwd_fix_leftarmLocalData.m_m_DISPLAY_TRIAL_COL);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 19U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_INSTRUCT_TIME);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 11U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_SHOW_INSTRUCT);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 17U,
    &svmr_rwd_fix_leftarmLocalData.m_m_INSTRUCT_PAUSE_BTN);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 20U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_LEFTHAND_TGT);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 24U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_ROBOT_RAMP_TIME);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 23U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_ROBOT_MOVE_TIME);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 18U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_FIX_LEFTHAND);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 9U,
    &svmr_rwd_fix_leftarmLocalData.m_m_E_NO_EVENT);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 31U,
    &svmr_rwd_fix_leftarmLocalData.m_m_K_UNUSED);
  _SFD_SET_MACHINE_DATA_VALUE_PTR(_vmr_rwd_fix_leftarmMachineNumber_, 37U,
    &svmr_rwd_fix_leftarmLocalData.m_m_ROTATED_COLOR);
  svmr_rwd_fix_leftarmLocalData.m_m_col_x = 1.0;
  svmr_rwd_fix_leftarmLocalData.m_m_col_y = 2.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_TARGET_ON = 3.0;
  svmr_rwd_fix_leftarmLocalData.m_m_LOGICAL_RADIUS = 4.0;
  svmr_rwd_fix_leftarmLocalData.m_m_START_TARGET_COL = 1.0;
  svmr_rwd_fix_leftarmLocalData.m_m_END_TARGET_COL = 2.0;
  svmr_rwd_fix_leftarmLocalData.m_m_ROTATION_CENTER = 3.0;
  svmr_rwd_fix_leftarmLocalData.m_m_MAXREACHTIME_COL = 5.0;
  svmr_rwd_fix_leftarmLocalData.m_m_ROTATION_TYPE = 7.0;
  svmr_rwd_fix_leftarmLocalData.m_m_ROTATION = 8.0;
  svmr_rwd_fix_leftarmLocalData.m_m_DELAY_POSTTRIAL_COL = 6.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_STAY_CENTER = 2.0;
  svmr_rwd_fix_leftarmLocalData.m_m_VISUAL_RADIUS = 3.0;
  svmr_rwd_fix_leftarmLocalData.m_m_COLOR = 5.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_SCORETEXT_ROW = 1.0;
  svmr_rwd_fix_leftarmLocalData.m_m_LABEL_HEIGHT = 8.0;
  svmr_rwd_fix_leftarmLocalData.m_m_HITCOLOR = 6.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_HIT_TARGET = 5.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_MISS_TARGET = 9.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_REWARD_VAL = 2.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_HIT_DURATION = 4.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_HIT_FREQUENCY = 5.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_VIS_RAD = 6.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_REWARD = 6.0;
  svmr_rwd_fix_leftarmLocalData.m_m_WAIT_AT_START_COL = 4.0;
  svmr_rwd_fix_leftarmLocalData.m_m_LABEL = 7.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_RETURN_RING_ROW = 7.0;
  svmr_rwd_fix_leftarmLocalData.m_m_STROKE_WIDTH = 9.0;
  svmr_rwd_fix_leftarmLocalData.m_m_STROKE_COLOR = 10.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_SCORE_TIME = 8.0;
  svmr_rwd_fix_leftarmLocalData.m_m_HAND_VIS_COL = 9.0;
  svmr_rwd_fix_leftarmLocalData.m_m_CLAMP_COL = 10.0;
  svmr_rwd_fix_leftarmLocalData.m_m_DO_REWARD_COL = 11.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_NEUTRAL_DURATION = 10.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_TONE_NEUTRAL_FREQUENCY = 11.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_NEUTRAL_FDBK = 10.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_SHOW_SCORE = 17.0;
  svmr_rwd_fix_leftarmLocalData.m_m_DISPLAY_TRIAL_COL = 12.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_INSTRUCT_TIME = 9.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_SHOW_INSTRUCT = 18.0;
  svmr_rwd_fix_leftarmLocalData.m_m_INSTRUCT_PAUSE_BTN = 2.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_LEFTHAND_TGT = 12.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_ROBOT_RAMP_TIME = 14.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_ROBOT_MOVE_TIME = 15.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_FIX_LEFTHAND = 13.0;
  svmr_rwd_fix_leftarmLocalData.m_m_E_NO_EVENT = 0.0;
  svmr_rwd_fix_leftarmLocalData.m_m_K_UNUSED = 3.0;
  svmr_rwd_fix_leftarmLocalData.m_m_ROTATED_COLOR = 11.0;
}

void vmr_rwd_fix_leftarm_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_vmr_rwd_fix_leftarm_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_vmr_rwd_fix_leftarm_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

extern void sf_vmr_rwd_fix_leftarm_uses_exported_functions(int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[])
{
  plhs[0] = mxCreateLogicalScalar(0);
}

unsigned int sf_vmr_rwd_fix_leftarm_process_testpoint_info_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
  if (!strcmp(machineName, "vmr_rwd_fix_leftarm")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_vmr_rwd_fix_leftarm_get_testpoint_info(void);
        plhs[0] = sf_c1_vmr_rwd_fix_leftarm_get_testpoint_info();
        break;
      }

     case 11:
      {
        extern mxArray *sf_c11_vmr_rwd_fix_leftarm_get_testpoint_info(void);
        plhs[0] = sf_c11_vmr_rwd_fix_leftarm_get_testpoint_info();
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

unsigned int sf_vmr_rwd_fix_leftarm_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3447516387U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1190542743U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2166951100U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1523393198U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[]);
          sf_c1_vmr_rwd_fix_leftarm_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[]);
          sf_c11_vmr_rwd_fix_leftarm_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3520626390U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3934884053U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3841414739U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3215249546U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1872695733U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1576212907U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2834822208U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3346432232U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_vmr_rwd_fix_leftarm_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        if (strcmp(aiChksum, "xzD95NrOAVQJdRbpSDDpjG") == 0) {
          extern mxArray *sf_c1_vmr_rwd_fix_leftarm_get_autoinheritance_info
            (void);
          plhs[0] = sf_c1_vmr_rwd_fix_leftarm_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "HpEURzlyt3lxudsOpLI3tB") == 0) {
          extern mxArray *sf_c11_vmr_rwd_fix_leftarm_get_autoinheritance_info
            (void);
          plhs[0] = sf_c11_vmr_rwd_fix_leftarm_get_autoinheritance_info();
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

unsigned int sf_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        extern const mxArray
          *sf_c1_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info();
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

unsigned int sf_vmr_rwd_fix_leftarm_third_party_uses_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        if (strcmp(tpChksum, "sY0hE8wUWDGXIXEzIXfnA5F") == 0) {
          extern mxArray *sf_c1_vmr_rwd_fix_leftarm_third_party_uses_info(void);
          plhs[0] = sf_c1_vmr_rwd_fix_leftarm_third_party_uses_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sR2QQcHpESA3HrCwidTjbeB") == 0) {
          extern mxArray *sf_c11_vmr_rwd_fix_leftarm_third_party_uses_info(void);
          plhs[0] = sf_c11_vmr_rwd_fix_leftarm_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_vmr_rwd_fix_leftarm_jit_fallback_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        if (strcmp(tpChksum, "sY0hE8wUWDGXIXEzIXfnA5F") == 0) {
          extern mxArray *sf_c1_vmr_rwd_fix_leftarm_jit_fallback_info(void);
          plhs[0] = sf_c1_vmr_rwd_fix_leftarm_jit_fallback_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sR2QQcHpESA3HrCwidTjbeB") == 0) {
          extern mxArray *sf_c11_vmr_rwd_fix_leftarm_jit_fallback_info(void);
          plhs[0] = sf_c11_vmr_rwd_fix_leftarm_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_vmr_rwd_fix_leftarm_updateBuildInfo_args_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
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
     case 1:
      {
        if (strcmp(tpChksum, "sY0hE8wUWDGXIXEzIXfnA5F") == 0) {
          extern mxArray *sf_c1_vmr_rwd_fix_leftarm_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c1_vmr_rwd_fix_leftarm_updateBuildInfo_args_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sR2QQcHpESA3HrCwidTjbeB") == 0) {
          extern mxArray *sf_c11_vmr_rwd_fix_leftarm_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c11_vmr_rwd_fix_leftarm_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void sf_vmr_rwd_fix_leftarm_get_post_codegen_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  unsigned int chartFileNumber = (unsigned int) mxGetScalar(prhs[0]);
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  switch (chartFileNumber) {
   case 1:
    {
      if (strcmp(tpChksum, "sY0hE8wUWDGXIXEzIXfnA5F") == 0) {
        extern mxArray *sf_c1_vmr_rwd_fix_leftarm_get_post_codegen_info(void);
        plhs[0] = sf_c1_vmr_rwd_fix_leftarm_get_post_codegen_info();
        return;
      }
    }
    break;

   case 11:
    {
      if (strcmp(tpChksum, "sR2QQcHpESA3HrCwidTjbeB") == 0) {
        extern mxArray *sf_c11_vmr_rwd_fix_leftarm_get_post_codegen_info(void);
        plhs[0] = sf_c11_vmr_rwd_fix_leftarm_get_post_codegen_info();
        return;
      }
    }
    break;

   default:
    break;
  }

  plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
}

void vmr_rwd_fix_leftarm_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _vmr_rwd_fix_leftarmMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "vmr_rwd_fix_leftarm","sfun",0,13,48,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,48);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,"CLAMP_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,0,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,1,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,1,"COLOR");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,1,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,1,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,1,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,2,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,2,"DELAY_POSTTRIAL_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,2,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,2,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,2,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,3,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,3,"DISPLAY_TRIAL_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,3,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,3,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,3,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,4,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,4,"DO_REWARD_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,4,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,4,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,4,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,5,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,5,"END_TARGET_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,5,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,5,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,5,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,6,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,6,"E_HIT_TARGET");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,6,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,6,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,6,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,7,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,7,"E_MISS_TARGET");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,7,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,7,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,7,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,8,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,8,"E_NEUTRAL_FDBK");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,8,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,8,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,8,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,9,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,9,"E_NO_EVENT");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,9,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,9,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,9,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,10,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,10,"E_REWARD");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,10,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,10,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,10,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,11,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,11,"E_SHOW_INSTRUCT");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,11,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,11,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,11,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,12,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,12,"E_SHOW_SCORE");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,12,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,12,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,12,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,13,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,13,"E_STAY_CENTER");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,13,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,13,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,13,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,14,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,14,"E_TARGET_ON");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,14,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,14,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,14,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,15,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,15,"HAND_VIS_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,15,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,15,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,15,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,16,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,16,"HITCOLOR");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,16,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,16,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,16,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,17,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,17,"INSTRUCT_PAUSE_BTN");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,17,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,17,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,17,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,18,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,18,"K_FIX_LEFTHAND");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,18,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,18,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,18,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,19,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,19,"K_INSTRUCT_TIME");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,19,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,19,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,19,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,20,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,20,"K_LEFTHAND_TGT");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,20,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,20,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,20,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,21,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,21,"K_RETURN_RING_ROW");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,21,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,21,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,21,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,22,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,22,"K_REWARD_VAL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,22,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,22,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,22,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,23,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,23,"K_ROBOT_MOVE_TIME");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,23,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,23,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,23,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,24,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,24,"K_ROBOT_RAMP_TIME");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,24,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,24,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,24,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,25,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,25,"K_SCORETEXT_ROW");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,25,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,25,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,25,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,26,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,26,"K_SCORE_TIME");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,26,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,26,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,26,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,27,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,27,"K_TONE_HIT_DURATION");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,27,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,27,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,27,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,28,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,28,"K_TONE_HIT_FREQUENCY");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,28,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,28,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,28,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,29,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,29,"K_TONE_NEUTRAL_DURATION");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,29,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,29,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,29,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,30,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,30,"K_TONE_NEUTRAL_FREQUENCY");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,30,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,30,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,30,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,31,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,31,"K_UNUSED");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,31,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,31,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,31,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,32,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,32,"K_VIS_RAD");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,32,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,32,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,32,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,33,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,33,"LABEL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,33,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,33,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,33,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,34,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,34,"LABEL_HEIGHT");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,34,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,34,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,34,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,35,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,35,"LOGICAL_RADIUS");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,35,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,35,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,35,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,36,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,36,"MAXREACHTIME_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,36,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,36,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,36,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,37,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,37,"ROTATED_COLOR");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,37,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,37,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,37,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,38,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,38,"ROTATION");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,38,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,38,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,38,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,39,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,39,"ROTATION_CENTER");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,39,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,39,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,39,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,40,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,40,"ROTATION_TYPE");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,40,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,40,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,40,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,41,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,41,"START_TARGET_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,41,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,41,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,41,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,42,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,42,"STROKE_COLOR");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,42,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,42,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,42,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,43,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,43,"STROKE_WIDTH");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,43,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,43,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,43,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,44,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,44,"VISUAL_RADIUS");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,44,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,44,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,44,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,45,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,45,"WAIT_AT_START_COL");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,45,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,45,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,45,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,46,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,46,"col_x");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,46,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,46,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,46,NULL);
  sf_debug_set_machine_data_scope(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,47,7);
  sf_debug_set_machine_data_name(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,47,"col_y");
  sf_debug_set_machine_data_type(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,47,SF_DOUBLE,0,0,0.0,1.0,0);
  sf_debug_set_machine_data_size(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,47,0,NULL);
  sf_debug_set_machine_data_value_ptr(debugInstance,
    _vmr_rwd_fix_leftarmMachineNumber_,47,NULL);
}

void vmr_rwd_fix_leftarm_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_vmr_rwd_fix_leftarm_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "vmr_rwd_fix_leftarm", "vmr_rwd_fix_leftarm");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_vmr_rwd_fix_leftarm_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
