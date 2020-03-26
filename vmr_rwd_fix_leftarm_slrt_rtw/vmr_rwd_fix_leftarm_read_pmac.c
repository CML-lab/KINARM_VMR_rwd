/*
 * Code generation for system system '<S65>/read_pmac'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_read_pmac.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_circshift(real_T a[5]);
static void vmr_rwd_fix_leftarm_calculateVelAcc(const real_T robotStruct_shoPos
  [5], const real_T robotStruct_elbPos[5], const real_T robotStruct_shoVel[5],
  const real_T robotStruct_elbVel[5], real_T robotStruct_shoAcc, real_T
  robotStruct_elbAcc, real_T robotStruct_bHasSecondary, const real_T
  servoValues[5], const real_T robotData[10], real_T robotStructOut_shoPos[5],
  real_T robotStructOut_elbPos[5], real_T robotStructOut_shoVel[5], real_T
  robotStructOut_elbVel[5], real_T *robotStructOut_shoAcc, real_T
  *robotStructOut_elbAcc, real_T *robotStructOut_bHasSecondary);
static void vmr_rwd_fix_leftarm_calculateVelAcc_n(const real_T
  robotStruct_shoPos[5], const real_T robotStruct_elbPos[5], const real_T
  robotStruct_shoVel[5], const real_T robotStruct_elbVel[5], real_T
  robotStruct_shoAcc, real_T robotStruct_elbAcc, real_T
  robotStruct_bHasSecondary, const real_T servoValues[5], const real_T
  robotData[6], real_T robotStructOut_shoPos[5], real_T robotStructOut_elbPos[5],
  real_T robotStructOut_shoVel[5], real_T robotStructOut_elbVel[5], real_T
  *robotStructOut_shoAcc, real_T *robotStructOut_elbAcc, real_T
  *robotStructOut_bHasSecondary);
static void vmr_rwd_fix_leftarm_circshift_d(real_T a[3]);
static void vmr_rwd_fix_leftarm_updateValues
  (shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T *robotStruct, const real_T
   robotData[10], uint32_T servoCounter, real_T POLES);

/* Function for MATLAB Function: '<S209>/Robot_data_builder' */
static void vmr_rwd_fix_leftarm_circshift(real_T a[5])
{
  real_T buffer;
  buffer = a[4];
  a[4] = a[3];
  a[3] = a[2];
  a[2] = a[1];
  a[1] = a[0];
  a[0] = buffer;
}

/* Function for MATLAB Function: '<S209>/Robot_data_builder' */
static void vmr_rwd_fix_leftarm_calculateVelAcc(const real_T robotStruct_shoPos
  [5], const real_T robotStruct_elbPos[5], const real_T robotStruct_shoVel[5],
  const real_T robotStruct_elbVel[5], real_T robotStruct_shoAcc, real_T
  robotStruct_elbAcc, real_T robotStruct_bHasSecondary, const real_T
  servoValues[5], const real_T robotData[10], real_T robotStructOut_shoPos[5],
  real_T robotStructOut_elbPos[5], real_T robotStructOut_shoVel[5], real_T
  robotStructOut_elbVel[5], real_T *robotStructOut_shoAcc, real_T
  *robotStructOut_elbAcc, real_T *robotStructOut_bHasSecondary)
{
  real_T stepDuration;
  real_T shoVel;
  real_T elbVel;
  int32_T i;

  /* matches from PMAC code */
  /* '<S213>:1:78' */
  for (i = 0; i < 5; i++) {
    robotStructOut_shoPos[i] = robotStruct_shoPos[i];
    robotStructOut_elbPos[i] = robotStruct_elbPos[i];
  }

  *robotStructOut_bHasSecondary = robotStruct_bHasSecondary;

  /* do not name this anything that will make it the first variable name in */
  /* this method alphabetically. Seriously. With the name "duration" compiling */
  /* a model would work in 2010a, but nothing higher. Most models would compile, */
  /* but the verification task would not! */
  /* '<S213>:1:84' */
  stepDuration = 0.0;
  if (robotStruct_bHasSecondary != 0.0) {
    /* '<S213>:1:87' */
    stepDuration = (servoValues[0] - servoValues[1]) * 0.00088541674613952634;
    if (stepDuration == 0.0) {
      /* '<S213>:1:88' */
      /* '<S213>:1:89' */
      shoVel = robotStruct_shoVel[0];

      /* '<S213>:1:90' */
      elbVel = robotStruct_elbVel[0];
    } else {
      /* '<S213>:1:92' */
      shoVel = (robotStruct_shoPos[0] - robotStruct_shoPos[1]) / stepDuration;

      /* '<S213>:1:93' */
      elbVel = (robotStruct_elbPos[0] - robotStruct_elbPos[1]) / stepDuration;
    }
  } else {
    /* '<S213>:1:96' */
    shoVel = robotData[2];

    /* '<S213>:1:97' */
    elbVel = robotData[3];
  }

  /* '<S213>:1:100' */
  /* '<S213>:1:71' */
  /* '<S213>:1:72' */
  for (i = 0; i < 5; i++) {
    robotStructOut_shoVel[i] = robotStruct_shoVel[i];
  }

  vmr_rwd_fix_leftarm_circshift(robotStructOut_shoVel);

  /* '<S213>:1:73' */
  robotStructOut_shoVel[0] = shoVel;

  /* '<S213>:1:101' */
  /* '<S213>:1:71' */
  /* '<S213>:1:72' */
  for (i = 0; i < 5; i++) {
    robotStructOut_elbVel[i] = robotStruct_elbVel[i];
  }

  vmr_rwd_fix_leftarm_circshift(robotStructOut_elbVel);

  /* '<S213>:1:73' */
  robotStructOut_elbVel[0] = elbVel;
  if (robotStruct_bHasSecondary != 0.0) {
    if (stepDuration == 0.0) {
      /* '<S213>:1:104' */
      /* '<S213>:1:105' */
      *robotStructOut_shoAcc = robotStruct_shoAcc;

      /* '<S213>:1:106' */
      *robotStructOut_elbAcc = robotStruct_elbAcc;
    } else {
      /* '<S213>:1:108' */
      *robotStructOut_shoAcc = (robotStruct_shoVel[0] - robotStruct_shoVel[1]) /
        stepDuration;

      /* '<S213>:1:109' */
      *robotStructOut_elbAcc = (robotStruct_elbVel[0] - robotStruct_elbVel[1]) /
        stepDuration;
    }
  } else {
    /* '<S213>:1:112' */
    stepDuration = (servoValues[0] - servoValues[4]) * 0.00088541674613952634;

    /* '<S213>:1:113' */
    *robotStructOut_shoAcc = (robotStruct_shoVel[0] - robotStruct_shoVel[4]) /
      stepDuration;

    /* '<S213>:1:114' */
    *robotStructOut_elbAcc = (robotStruct_elbVel[0] - robotStruct_elbVel[4]) /
      stepDuration;
  }

  /* '<S213>:1:117' */
  /* '<S213>:1:118' */
}

/* Function for MATLAB Function: '<S209>/Robot_data_builder' */
static void vmr_rwd_fix_leftarm_calculateVelAcc_n(const real_T
  robotStruct_shoPos[5], const real_T robotStruct_elbPos[5], const real_T
  robotStruct_shoVel[5], const real_T robotStruct_elbVel[5], real_T
  robotStruct_shoAcc, real_T robotStruct_elbAcc, real_T
  robotStruct_bHasSecondary, const real_T servoValues[5], const real_T
  robotData[6], real_T robotStructOut_shoPos[5], real_T robotStructOut_elbPos[5],
  real_T robotStructOut_shoVel[5], real_T robotStructOut_elbVel[5], real_T
  *robotStructOut_shoAcc, real_T *robotStructOut_elbAcc, real_T
  *robotStructOut_bHasSecondary)
{
  real_T stepDuration;
  real_T shoVel;
  real_T elbVel;
  int32_T i;

  /* matches from PMAC code */
  /* '<S213>:1:78' */
  for (i = 0; i < 5; i++) {
    robotStructOut_shoPos[i] = robotStruct_shoPos[i];
    robotStructOut_elbPos[i] = robotStruct_elbPos[i];
  }

  *robotStructOut_bHasSecondary = robotStruct_bHasSecondary;

  /* do not name this anything that will make it the first variable name in */
  /* this method alphabetically. Seriously. With the name "duration" compiling */
  /* a model would work in 2010a, but nothing higher. Most models would compile, */
  /* but the verification task would not! */
  /* '<S213>:1:84' */
  stepDuration = 0.0;
  if (robotStruct_bHasSecondary != 0.0) {
    /* '<S213>:1:87' */
    stepDuration = (servoValues[0] - servoValues[1]) * 0.00088541674613952634;
    if (stepDuration == 0.0) {
      /* '<S213>:1:88' */
      /* '<S213>:1:89' */
      shoVel = robotStruct_shoVel[0];

      /* '<S213>:1:90' */
      elbVel = robotStruct_elbVel[0];
    } else {
      /* '<S213>:1:92' */
      shoVel = (robotStruct_shoPos[0] - robotStruct_shoPos[1]) / stepDuration;

      /* '<S213>:1:93' */
      elbVel = (robotStruct_elbPos[0] - robotStruct_elbPos[1]) / stepDuration;
    }
  } else {
    /* '<S213>:1:96' */
    shoVel = robotData[2];

    /* '<S213>:1:97' */
    elbVel = robotData[3];
  }

  /* '<S213>:1:100' */
  /* '<S213>:1:71' */
  /* '<S213>:1:72' */
  for (i = 0; i < 5; i++) {
    robotStructOut_shoVel[i] = robotStruct_shoVel[i];
  }

  vmr_rwd_fix_leftarm_circshift(robotStructOut_shoVel);

  /* '<S213>:1:73' */
  robotStructOut_shoVel[0] = shoVel;

  /* '<S213>:1:101' */
  /* '<S213>:1:71' */
  /* '<S213>:1:72' */
  for (i = 0; i < 5; i++) {
    robotStructOut_elbVel[i] = robotStruct_elbVel[i];
  }

  vmr_rwd_fix_leftarm_circshift(robotStructOut_elbVel);

  /* '<S213>:1:73' */
  robotStructOut_elbVel[0] = elbVel;
  if (robotStruct_bHasSecondary != 0.0) {
    if (stepDuration == 0.0) {
      /* '<S213>:1:104' */
      /* '<S213>:1:105' */
      *robotStructOut_shoAcc = robotStruct_shoAcc;

      /* '<S213>:1:106' */
      *robotStructOut_elbAcc = robotStruct_elbAcc;
    } else {
      /* '<S213>:1:108' */
      *robotStructOut_shoAcc = (robotStruct_shoVel[0] - robotStruct_shoVel[1]) /
        stepDuration;

      /* '<S213>:1:109' */
      *robotStructOut_elbAcc = (robotStruct_elbVel[0] - robotStruct_elbVel[1]) /
        stepDuration;
    }
  } else {
    /* '<S213>:1:112' */
    stepDuration = (servoValues[0] - servoValues[4]) * 0.00088541674613952634;

    /* '<S213>:1:113' */
    *robotStructOut_shoAcc = (robotStruct_shoVel[0] - robotStruct_shoVel[4]) /
      stepDuration;

    /* '<S213>:1:114' */
    *robotStructOut_elbAcc = (robotStruct_elbVel[0] - robotStruct_elbVel[4]) /
      stepDuration;
  }

  /* '<S213>:1:117' */
  /* '<S213>:1:118' */
}

/* Function for MATLAB Function: '<S209>/filter_velocities' */
static void vmr_rwd_fix_leftarm_circshift_d(real_T a[3])
{
  real_T buffer;
  buffer = a[0];
  a[0] = a[1];
  a[1] = a[2];
  a[2] = buffer;
}

/* Function for MATLAB Function: '<S209>/filter_velocities' */
static void vmr_rwd_fix_leftarm_updateValues
  (shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T *robotStruct, const real_T
   robotData[10], uint32_T servoCounter, real_T POLES)
{
  real_T b[3];
  real_T c[3];
  real_T y;

  /* '<S214>:1:42' */
  if (!(robotStruct->servoCounter[(int32_T)(POLES + 1.0) - 1] == servoCounter))
  {
    /* '<S214>:1:47' */
    /* '<S214>:1:37' */
    /* '<S214>:1:38' */
    vmr_rwd_fix_leftarm_circshift_d(robotStruct->servoCounter);

    /* '<S214>:1:39' */
    robotStruct->servoCounter[2] = servoCounter;

    /* all filter constants from http://www-users.cs.york.ac.uk/~fisher/cgi-bin/mkfscript */
    /* GAIN = 4.143204922e+03; % 1KHz gain */
    /* 1.129 KHz gain (PMAC speed) */
    /* FILTER_VALUES = [-0.9565436765, 1.9555782403]; % 1KHz */
    /*  1.129 KHz */
    /* '<S214>:1:63' */
    y = robotData[2] / 1342.624471;

    /* '<S214>:1:37' */
    /* '<S214>:1:38' */
    b[0] = robotStruct->shoVel[0];
    b[1] = robotStruct->shoVel[1];
    b[2] = robotStruct->shoVel[2];
    vmr_rwd_fix_leftarm_circshift_d(b);

    /* '<S214>:1:39' */
    b[2] = y;

    /* '<S214>:1:64' */
    /* '<S214>:1:37' */
    /* '<S214>:1:38' */
    c[0] = robotStruct->shoVelFilt[0];
    c[1] = robotStruct->shoVelFilt[1];
    c[2] = robotStruct->shoVelFilt[2];
    vmr_rwd_fix_leftarm_circshift_d(c);

    /* '<S214>:1:39' */
    c[2] = 0.0;

    /* '<S214>:1:66' */
    c[(int32_T)(POLES + 1.0) - 1] = (((b[1] * 2.0 + b[0]) + y) + c[0] *
      -0.9243128082) + c[1] * 1.9213335686;
    if (rtIsNaN(c[(int32_T)(POLES + 1.0) - 1]) || rtIsInf(c[(int32_T)(POLES +
          1.0) - 1])) {
      /* '<S214>:1:73' */
      c[(int32_T)(POLES + 1.0) - 1] = 0.0;
    }

    /* '<S214>:1:49' */
    robotStruct->shoVel[0] = b[0];
    robotStruct->shoVel[1] = b[1];
    robotStruct->shoVel[2] = b[2];

    /* '<S214>:1:49' */
    robotStruct->shoVelFilt[0] = c[0];
    robotStruct->shoVelFilt[1] = c[1];
    robotStruct->shoVelFilt[2] = c[2];

    /* all filter constants from http://www-users.cs.york.ac.uk/~fisher/cgi-bin/mkfscript */
    /* GAIN = 4.143204922e+03; % 1KHz gain */
    /* 1.129 KHz gain (PMAC speed) */
    /* FILTER_VALUES = [-0.9565436765, 1.9555782403]; % 1KHz */
    /*  1.129 KHz */
    /* '<S214>:1:63' */
    y = robotData[3] / 1342.624471;

    /* '<S214>:1:37' */
    /* '<S214>:1:38' */
    b[0] = robotStruct->elbVel[0];
    b[1] = robotStruct->elbVel[1];
    b[2] = robotStruct->elbVel[2];
    vmr_rwd_fix_leftarm_circshift_d(b);

    /* '<S214>:1:39' */
    b[2] = y;

    /* '<S214>:1:64' */
    /* '<S214>:1:37' */
    /* '<S214>:1:38' */
    c[0] = robotStruct->elbVelFilt[0];
    c[1] = robotStruct->elbVelFilt[1];
    c[2] = robotStruct->elbVelFilt[2];
    vmr_rwd_fix_leftarm_circshift_d(c);

    /* '<S214>:1:39' */
    c[2] = 0.0;

    /* '<S214>:1:66' */
    c[(int32_T)(POLES + 1.0) - 1] = (((b[1] * 2.0 + b[0]) + y) + c[0] *
      -0.9243128082) + c[1] * 1.9213335686;
    if (rtIsNaN(c[(int32_T)(POLES + 1.0) - 1]) || rtIsInf(c[(int32_T)(POLES +
          1.0) - 1])) {
      /* '<S214>:1:73' */
      c[(int32_T)(POLES + 1.0) - 1] = 0.0;
    }

    /* '<S214>:1:50' */
    robotStruct->elbVel[0] = b[0];
    robotStruct->elbVel[1] = b[1];
    robotStruct->elbVel[2] = b[2];

    /* '<S214>:1:50' */
    robotStruct->elbVelFilt[0] = c[0];
    robotStruct->elbVelFilt[1] = c[1];
    robotStruct->elbVelFilt[2] = c[2];
  } else {
    /* '<S214>:1:43' */
  }
}

/* Initial conditions for enable system: '<S65>/read_pmac' */
void vmr_rwd_fix_leftarm_read_pmac_Init(void)
{
  int32_T i;
  static const sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T tmp = { { 0.0, 0.0,
      0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0, 0.0, 0.0 },
    { 0.0, 0.0, 0.0, 0.0, 0.0 }, 0.0, 0.0, 0.0 };

  static const shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T tmp_0 = { { 0.0,
      0.0, 0.0 }, { 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0 }, { 0.0, 0.0, 0.0 }, { 0.0,
      0.0, 0.0 } };

  /* InitializeConditions for UnitDelay: '<S215>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_k =
    vmr_rwd_fix_leftarm_P.Output_InitialCondition_bg;

  /* InitializeConditions for UnitDelay: '<S211>/Unit Delay' */
  vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE =
    vmr_rwd_fix_leftarm_P.UnitDelay_InitialCondition_p;

  /* InitializeConditions for UnitDelay: '<S211>/Unit Delay1' */
  vmr_rwd_fix_leftarm_DW.UnitDelay1_DSTATE =
    vmr_rwd_fix_leftarm_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for MATLAB Function: '<S209>/Monitor_status' */
  vmr_rwd_fix_leftarm_DW.no_update_count = 0.0;
  vmr_rwd_fix_leftarm_DW.last_servo_counter = 0U;

  /* InitializeConditions for MATLAB Function: '<S209>/Robot_data_builder' */
  vmr_rwd_fix_leftarm_DW.robot1Struct = tmp;
  vmr_rwd_fix_leftarm_DW.robot2Struct = vmr_rwd_fix_leftarm_DW.robot1Struct;
  vmr_rwd_fix_leftarm_DW.robot1StructPrimary =
    vmr_rwd_fix_leftarm_DW.robot1Struct;
  vmr_rwd_fix_leftarm_DW.robot2StructPrimary =
    vmr_rwd_fix_leftarm_DW.robot1Struct;
  for (i = 0; i < 5; i++) {
    vmr_rwd_fix_leftarm_DW.servoValuesR1[i] = 0.0;
    vmr_rwd_fix_leftarm_DW.servoValuesR2[i] = 0.0;
  }

  /* End of InitializeConditions for MATLAB Function: '<S209>/Robot_data_builder' */

  /* InitializeConditions for MATLAB Function: '<S209>/filter_velocities' */
  vmr_rwd_fix_leftarm_DW.robot1Struct_a = tmp_0;
  vmr_rwd_fix_leftarm_DW.robot2Struct_o = vmr_rwd_fix_leftarm_DW.robot1Struct_a;
}

/* Start for enable system: '<S65>/read_pmac' */
void vmr_rwd_fix_leftarm_read_pmac_Start(void)
{
  /* Level2 S-Function Block: '<S209>/S-Function' (mcc_pollall) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S211>/Write' (mcc_writemem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for IfAction SubSystem: '<S211>/Read DPRAM' */

  /* Level2 S-Function Block: '<S216>/Read' (mcc_readmem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S211>/Read DPRAM' */

  /* Start for IfAction SubSystem: '<S211>/Write DPRAM' */

  /* Level2 S-Function Block: '<S218>/Write' (mcc_writemem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S211>/Write DPRAM' */

  /* InitializeConditions for Enabled SubSystem: '<S65>/read_pmac' */
  vmr_rwd_fix_leftarm_read_pmac_Init();

  /* End of InitializeConditions for SubSystem: '<S65>/read_pmac' */
}

/* Outputs for enable system: '<S65>/read_pmac' */
void vmr_rwd_fix_leftarm_read_pmac(void)
{
  real32_T y;
  uint32_T temp;
  real_T bR2HasSecondardy;
  real_T bHasSecondardy;
  real_T v;
  int32_T i;
  real_T tmp[5];
  real_T tmp_0[5];
  real_T tmp_1[5];
  real_T tmp_2[5];
  uint32_T u1;

  /* Outputs for Enabled SubSystem: '<S65>/read_pmac' incorporates:
   *  EnablePort: '<S209>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.Compare_c) {
    /* DataTypeConversion: '<S209>/Data Type Conversion' incorporates:
     *  Constant: '<S229>/Arm Encoder Orientation 1'
     *  Constant: '<S229>/Arm Encoder Orientation 2'
     *  Constant: '<S229>/Arm primary encoder counts'
     *  Constant: '<S229>/Arm secondary encoder counts'
     */
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[0] = (real32_T)
      vmr_rwd_fix_leftarm_B.ArmOrientation_b;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[1] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1orientation_h;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[2] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2Orientation_l;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[3] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1GearRatio_b;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[4] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2GearRatio_p;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[5] = (real32_T)
      vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[6] = (real32_T)
      vmr_rwd_fix_leftarm_P.ArmEncoderOrientation1_Value;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[7] = (real32_T)
      vmr_rwd_fix_leftarm_P.ArmEncoderOrientation2_Value;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[8] = (real32_T)
      vmr_rwd_fix_leftarm_P.Armprimaryencodercounts_Value;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[9] = (real32_T)
      vmr_rwd_fix_leftarm_P.Armsecondaryencodercounts_Value;

    /* DataTypeConversion: '<S209>/Data Type Conversion1' incorporates:
     *  Constant: '<S230>/Arm Encoder Orientation 1'
     *  Constant: '<S230>/Arm Encoder Orientation 2'
     *  Constant: '<S230>/Arm primary encoder counts'
     *  Constant: '<S230>/Arm secondary encoder counts'
     */
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[0] = (real32_T)
      vmr_rwd_fix_leftarm_B.ArmOrientation_l;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[1] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1orientation_n;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[2] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2Orientation_cw;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[3] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1GearRatio_k;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[4] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2GearRatio_l;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[5] = (real32_T)
      vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[6] = (real32_T)
      vmr_rwd_fix_leftarm_P.ArmEncoderOrientation1_Value_f;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[7] = (real32_T)
      vmr_rwd_fix_leftarm_P.ArmEncoderOrientation2_Value_i;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[8] = (real32_T)
      vmr_rwd_fix_leftarm_P.Armprimaryencodercounts_Value_j;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[9] = (real32_T)
      vmr_rwd_fix_leftarm_P.Armsecondaryencodercounts_Value_i;

    /* DataTypeConversion: '<S209>/Data Type Conversion2' incorporates:
     *  Constant: '<S209>/step duration'
     */
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_h = (real32_T)
      vmr_rwd_fix_leftarm_P.stepduration_Value;

    /* Level2 S-Function Block: '<S209>/S-Function' (mcc_pollall) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[26];
      sfcnOutputs(rts, 1);
    }

    /* DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
     *  Constant: '<S211>/DPRAM WatchDog offset'
     */
    bR2HasSecondardy = vmr_rwd_fix_leftarm_P.DPRAMWatchDogoffset_Value;
    if (bR2HasSecondardy < 4.294967296E+9) {
      if (bR2HasSecondardy >= 0.0) {
        temp = (uint32_T)bR2HasSecondardy;
      } else {
        temp = 0U;
      }
    } else {
      temp = MAX_uint32_T;
    }

    vmr_rwd_fix_leftarm_B.DataTypeConversion_l = temp;

    /* End of DataTypeConversion: '<S211>/Data Type Conversion' */

    /* UnitDelay: '<S215>/Output' */
    vmr_rwd_fix_leftarm_B.Output_b = vmr_rwd_fix_leftarm_DW.Output_DSTATE_k;

    /* MATLAB Function: '<S211>/TypeCast' */
    /* MATLAB Function 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/TypeCast': '<S217>:1' */
    /*  EML determines output class and size based on first usage */
    /*  for some reason the typecast is not setting it correctly, so we  */
    /*  explicitly define it first. */
    /*  in order for the typecast to work, both temp and y must be 32 bit */
    /* '<S217>:1:9' */
    temp = vmr_rwd_fix_leftarm_B.Output_b;

    /* '<S217>:1:10' */
    memcpy(&y, &temp, (size_t)1 * sizeof(real32_T));
    vmr_rwd_fix_leftarm_B.y_j = y;

    /* Level2 S-Function Block: '<S211>/Write' (mcc_writemem) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[27];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S219>/FixPt Sum1' incorporates:
     *  Constant: '<S219>/FixPt Constant'
     */
    vmr_rwd_fix_leftarm_B.FixPtSum1_ea = (uint16_T)((uint32_T)
      vmr_rwd_fix_leftarm_B.Output_b +
      vmr_rwd_fix_leftarm_P.FixPtConstant_Value_c);

    /* Switch: '<S220>/FixPt Switch' incorporates:
     *  Constant: '<S220>/Constant'
     */
    if (vmr_rwd_fix_leftarm_B.FixPtSum1_ea >
        vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_d) {
      vmr_rwd_fix_leftarm_B.FixPtSwitch_j =
        vmr_rwd_fix_leftarm_P.Constant_Value_j;
    } else {
      vmr_rwd_fix_leftarm_B.FixPtSwitch_j = vmr_rwd_fix_leftarm_B.FixPtSum1_ea;
    }

    /* End of Switch: '<S220>/FixPt Switch' */

    /* UnitDelay: '<S211>/Unit Delay' */
    vmr_rwd_fix_leftarm_B.UnitDelay = vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE;

    /* If: '<S211>/If' incorporates:
     *  Constant: '<S211>/Read Switch'
     */
    if (vmr_rwd_fix_leftarm_P.ReadSwitch_Value > vmr_rwd_fix_leftarm_B.UnitDelay)
    {
      /* Outputs for IfAction SubSystem: '<S211>/Read DPRAM' incorporates:
       *  ActionPort: '<S216>/Action Port'
       */
      /* DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
       *  Constant: '<S211>/DPRAM Read Offset'
       */
      bR2HasSecondardy = vmr_rwd_fix_leftarm_P.DPRAMReadOffset_Value;
      if (bR2HasSecondardy < 4.294967296E+9) {
        if (bR2HasSecondardy >= 0.0) {
          temp = (uint32_T)bR2HasSecondardy;
        } else {
          temp = 0U;
        }
      } else {
        temp = MAX_uint32_T;
      }

      vmr_rwd_fix_leftarm_B.DataTypeConversion_pj = temp;

      /* End of DataTypeConversion: '<S216>/Data Type Conversion' */

      /* DataTypeConversion: '<S216>/Data Type Conversion2' incorporates:
       *  Constant: '<S211>/Read as UInt32'
       */
      bR2HasSecondardy = vmr_rwd_fix_leftarm_P.ReadasUInt32_Value;
      if (bR2HasSecondardy < 4.294967296E+9) {
        if (bR2HasSecondardy >= 0.0) {
          temp = (uint32_T)bR2HasSecondardy;
        } else {
          temp = 0U;
        }
      } else {
        temp = MAX_uint32_T;
      }

      vmr_rwd_fix_leftarm_B.DataTypeConversion2_pm = temp;

      /* End of DataTypeConversion: '<S216>/Data Type Conversion2' */

      /* Level2 S-Function Block: '<S216>/Read' (mcc_readmem) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[24];
        sfcnOutputs(rts, 1);
      }

      /* DataTypeConversion: '<S216>/Data Type Conversion1' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_j = vmr_rwd_fix_leftarm_B.Read_h;

      /* End of Outputs for SubSystem: '<S211>/Read DPRAM' */

      /* Update for IfAction SubSystem: '<S211>/Read DPRAM' incorporates:
       *  Update for ActionPort: '<S216>/Action Port'
       */
      /* Update for If: '<S211>/If' */
      srUpdateBC(vmr_rwd_fix_leftarm_DW.ReadDPRAM_SubsysRanBC);

      /* End of Update for SubSystem: '<S211>/Read DPRAM' */
    }

    /* End of If: '<S211>/If' */

    /* Gain: '<S211>/DPRAM Read Value' */
    vmr_rwd_fix_leftarm_B.DPRAMReadValue =
      vmr_rwd_fix_leftarm_P.DPRAMReadValue_Gain *
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_j;

    /* UnitDelay: '<S211>/Unit Delay1' */
    vmr_rwd_fix_leftarm_B.UnitDelay1 = vmr_rwd_fix_leftarm_DW.UnitDelay1_DSTATE;

    /* If: '<S211>/If1' incorporates:
     *  Constant: '<S211>/Write Switch'
     */
    if (vmr_rwd_fix_leftarm_P.WriteSwitch_Value >
        vmr_rwd_fix_leftarm_B.UnitDelay1) {
      /* Outputs for IfAction SubSystem: '<S211>/Write DPRAM' incorporates:
       *  ActionPort: '<S218>/Action Port'
       */
      /* DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
       *  Constant: '<S211>/DPRAM Write Offset'
       */
      bR2HasSecondardy = vmr_rwd_fix_leftarm_P.DPRAMWriteOffset_Value;
      if (bR2HasSecondardy < 4.294967296E+9) {
        if (bR2HasSecondardy >= 0.0) {
          temp = (uint32_T)bR2HasSecondardy;
        } else {
          temp = 0U;
        }
      } else {
        temp = MAX_uint32_T;
      }

      vmr_rwd_fix_leftarm_B.DataTypeConversion_dd = temp;

      /* End of DataTypeConversion: '<S218>/Data Type Conversion' */

      /* DataTypeConversion: '<S218>/Data Type Conversion1' incorporates:
       *  Constant: '<S211>/DPRAM Write Value'
       */
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_o = (real32_T)
        vmr_rwd_fix_leftarm_P.DPRAMWriteValue_Value;

      /* Level2 S-Function Block: '<S218>/Write' (mcc_writemem) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[25];
        sfcnOutputs(rts, 1);
      }

      /* End of Outputs for SubSystem: '<S211>/Write DPRAM' */

      /* Update for IfAction SubSystem: '<S211>/Write DPRAM' incorporates:
       *  Update for ActionPort: '<S218>/Action Port'
       */
      /* Update for If: '<S211>/If1' */
      srUpdateBC(vmr_rwd_fix_leftarm_DW.WriteDPRAM_SubsysRanBC);

      /* End of Update for SubSystem: '<S211>/Write DPRAM' */
    }

    for (i = 0; i < 6; i++) {
      /* DataTypeConversion: '<S209>/Conversion1' */
      vmr_rwd_fix_leftarm_B.Conversion1[i] =
        vmr_rwd_fix_leftarm_B.SFunction_o6[i];

      /* DataTypeConversion: '<S209>/Conversion2' */
      vmr_rwd_fix_leftarm_B.Conversion2[i] =
        vmr_rwd_fix_leftarm_B.SFunction_o5[i];
    }

    /* End of If: '<S211>/If1' */

    /* DataTypeConversion: '<S209>/Conversion7' */
    vmr_rwd_fix_leftarm_B.Conversion7[0] = vmr_rwd_fix_leftarm_B.SFunction_o4[0];
    vmr_rwd_fix_leftarm_B.Conversion7[1] = vmr_rwd_fix_leftarm_B.SFunction_o4[1];
    vmr_rwd_fix_leftarm_B.Conversion7[2] = vmr_rwd_fix_leftarm_B.SFunction_o4[2];
    vmr_rwd_fix_leftarm_B.Conversion7[3] = vmr_rwd_fix_leftarm_B.SFunction_o4[3];

    /* DataTypeConversion: '<S209>/Convert2' */
    vmr_rwd_fix_leftarm_B.Convert2_n[0] = vmr_rwd_fix_leftarm_B.SFunction_o9[0];
    vmr_rwd_fix_leftarm_B.Convert2_n[1] = vmr_rwd_fix_leftarm_B.SFunction_o9[1];
    vmr_rwd_fix_leftarm_B.Convert2_n[2] = vmr_rwd_fix_leftarm_B.SFunction_o9[2];
    for (i = 0; i < 10; i++) {
      /* DataTypeConversion: '<S209>/Data Type Conversion3' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[i] =
        vmr_rwd_fix_leftarm_B.SFunction_o1[i];

      /* DataTypeConversion: '<S209>/Data Type Conversion4' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[i] =
        vmr_rwd_fix_leftarm_B.SFunction_o2[i];
    }

    /* MinMax: '<S209>/MinMax' */
    temp = vmr_rwd_fix_leftarm_B.SFunction_o3[0];
    u1 = vmr_rwd_fix_leftarm_B.SFunction_o3[1];
    if (!(temp >= u1)) {
      temp = u1;
    }

    vmr_rwd_fix_leftarm_B.MinMax_b = temp;

    /* End of MinMax: '<S209>/MinMax' */

    /* MinMax: '<S209>/MinMax1' */
    temp = vmr_rwd_fix_leftarm_B.SFunction_o3[0];
    u1 = vmr_rwd_fix_leftarm_B.SFunction_o3[1];
    if (!(temp >= u1)) {
      temp = u1;
    }

    vmr_rwd_fix_leftarm_B.MinMax1 = temp;

    /* End of MinMax: '<S209>/MinMax1' */

    /* MATLAB Function: '<S209>/Monitor_status' incorporates:
     *  Constant: '<S209>/robot_count'
     */
    /* MATLAB Function 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Monitor_status': '<S212>:1' */
    /* '<S212>:1:14' */
    /* '<S212>:1:15' */
    /* '<S212>:1:16' */
    vmr_rwd_fix_leftarm_B.force_scale_b = 1.0;

    /* plcc versions >1000 are custom */
    if ((vmr_rwd_fix_leftarm_B.SFunction_o10 >= 6.0F) &&
        (vmr_rwd_fix_leftarm_B.SFunction_o10 < 1000.0F)) {
      /* '<S212>:1:19' */
      /* if the task is running and the servo amp counter is not */
      if ((vmr_rwd_fix_leftarm_B.SFunction_o9[2] == 4U) &&
          (vmr_rwd_fix_leftarm_DW.last_servo_counter ==
           vmr_rwd_fix_leftarm_B.MinMax_b)) {
        /* '<S212>:1:21' */
        /* '<S212>:1:22' */
        vmr_rwd_fix_leftarm_DW.no_update_count++;

        /* after 5 cycles with the counter not running we should kill forces. */
        if (vmr_rwd_fix_leftarm_DW.no_update_count >= 5.0) {
          /* '<S212>:1:24' */
          /* '<S212>:1:25' */
          vmr_rwd_fix_leftarm_B.force_scale_b = 0.0;
        }
      } else {
        /* '<S212>:1:28' */
        vmr_rwd_fix_leftarm_DW.no_update_count = 0.0;
      }

      /* '<S212>:1:30' */
      vmr_rwd_fix_leftarm_DW.last_servo_counter = vmr_rwd_fix_leftarm_B.MinMax_b;
    }

    /* plcc versions >1000 are custom */
    if ((vmr_rwd_fix_leftarm_B.SFunction_o10 >= 7.0F) &&
        (vmr_rwd_fix_leftarm_B.SFunction_o10 < 1000.0F)) {
      /* '<S212>:1:34' */
      /* if it is unilateral and the robot state is faulted then kill the forces */
      if ((vmr_rwd_fix_leftarm_P.robot_count_Value == 1.0) && ((int32_T)
           (vmr_rwd_fix_leftarm_B.SFunction_o9[1] & 1U) == 1)) {
        /* '<S212>:1:36' */
        /* '<S212>:1:37' */
        vmr_rwd_fix_leftarm_B.force_scale_b = 0.0;

        /* if the system is bilateral and either robot is faulted, kill forces. */
      } else {
        if ((vmr_rwd_fix_leftarm_P.robot_count_Value == 2.0) && ((int32_T)
             (vmr_rwd_fix_leftarm_B.SFunction_o9[1] & 3U) != 0)) {
          /* '<S212>:1:39' */
          /* '<S212>:1:40' */
          vmr_rwd_fix_leftarm_B.force_scale_b = 0.0;
        }
      }
    }

    if (vmr_rwd_fix_leftarm_B.SFunction_o10 == 0.0F) {
      /* '<S212>:1:44' */
      /* '<S212>:1:45' */
      vmr_rwd_fix_leftarm_B.force_scale_b = 0.0;
    }

    /* End of MATLAB Function: '<S209>/Monitor_status' */

    /* MATLAB Function: '<S209>/Robot_data_builder' */
    bR2HasSecondardy = vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;

    /* MATLAB Function 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder': '<S213>:1' */
    if (vmr_rwd_fix_leftarm_B.SFunction_o10 < 7.0F) {
      /* '<S213>:1:14' */
      /* '<S213>:1:15' */
      /* '<S213>:1:16' */
      for (i = 0; i < 10; i++) {
        vmr_rwd_fix_leftarm_B.robot1DataOut_p[i] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[i];
        vmr_rwd_fix_leftarm_B.robot2DataOut_g[i] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[i];
      }

      /* '<S213>:1:17' */
      /* '<S213>:1:18' */
      for (i = 0; i < 6; i++) {
        vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[i] =
          vmr_rwd_fix_leftarm_B.Conversion2[i];
        vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[i] =
          vmr_rwd_fix_leftarm_B.Conversion1[i];
      }
    } else {
      if (vmr_rwd_fix_leftarm_B.SFunction_o3[0] !=
          vmr_rwd_fix_leftarm_DW.servoValuesR1[0]) {
        /* '<S213>:1:22' */
        /* '<S213>:1:23' */
        bHasSecondardy = vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;

        /* '<S213>:1:65' */
        /* '<S213>:1:66' */
        v = vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[0];

        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.robot1Struct.shoPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot1Struct.shoPos[0] = v;

        /* '<S213>:1:67' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.robot1Struct.elbPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot1Struct.elbPos[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[1];

        /* '<S213>:1:68' */
        vmr_rwd_fix_leftarm_DW.robot1Struct.bHasSecondary = bHasSecondardy;

        /* '<S213>:1:24' */
        /* '<S213>:1:65' */
        /* '<S213>:1:66' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift
          (vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoPos[0] =
          vmr_rwd_fix_leftarm_B.Conversion2[0];

        /* '<S213>:1:67' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift
          (vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbPos[0] =
          vmr_rwd_fix_leftarm_B.Conversion2[1];

        /* '<S213>:1:68' */
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.bHasSecondary = 0.0;

        /* '<S213>:1:25' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.servoValuesR1);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.servoValuesR1[0] =
          vmr_rwd_fix_leftarm_B.SFunction_o3[0];

        /* '<S213>:1:26' */
        for (i = 0; i < 5; i++) {
          tmp[i] = vmr_rwd_fix_leftarm_DW.robot1Struct.shoPos[i];
          tmp_0[i] = vmr_rwd_fix_leftarm_DW.robot1Struct.elbPos[i];
          tmp_1[i] = vmr_rwd_fix_leftarm_DW.robot1Struct.shoVel[i];
          tmp_2[i] = vmr_rwd_fix_leftarm_DW.robot1Struct.elbVel[i];
        }

        vmr_rwd_fix_leftarm_calculateVelAcc(tmp, tmp_0, tmp_1, tmp_2,
          vmr_rwd_fix_leftarm_DW.robot1Struct.shoAcc,
          vmr_rwd_fix_leftarm_DW.robot1Struct.elbAcc,
          vmr_rwd_fix_leftarm_DW.robot1Struct.bHasSecondary,
          vmr_rwd_fix_leftarm_DW.servoValuesR1,
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_d,
          vmr_rwd_fix_leftarm_DW.robot1Struct.shoPos,
          vmr_rwd_fix_leftarm_DW.robot1Struct.elbPos,
          vmr_rwd_fix_leftarm_DW.robot1Struct.shoVel,
          vmr_rwd_fix_leftarm_DW.robot1Struct.elbVel,
          &vmr_rwd_fix_leftarm_DW.robot1Struct.shoAcc,
          &vmr_rwd_fix_leftarm_DW.robot1Struct.elbAcc,
          &vmr_rwd_fix_leftarm_DW.robot1Struct.bHasSecondary);

        /* '<S213>:1:27' */
        for (i = 0; i < 5; i++) {
          tmp[i] = vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoPos[i];
          tmp_0[i] = vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbPos[i];
          tmp_1[i] = vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoVel[i];
          tmp_2[i] = vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbVel[i];
        }

        vmr_rwd_fix_leftarm_calculateVelAcc_n(tmp, tmp_0, tmp_1, tmp_2,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoAcc,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbAcc,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.bHasSecondary,
          vmr_rwd_fix_leftarm_DW.servoValuesR1,
          vmr_rwd_fix_leftarm_B.Conversion2,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoPos,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbPos,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoVel,
          vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbVel,
          &vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoAcc,
          &vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbAcc,
          &vmr_rwd_fix_leftarm_DW.robot1StructPrimary.bHasSecondary);
      }

      if (vmr_rwd_fix_leftarm_B.SFunction_o3[1] !=
          vmr_rwd_fix_leftarm_DW.servoValuesR2[0]) {
        /* '<S213>:1:30' */
        /* '<S213>:1:31' */
        /* '<S213>:1:65' */
        /* '<S213>:1:66' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.robot2Struct.shoPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot2Struct.shoPos[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[0];

        /* '<S213>:1:67' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.robot2Struct.elbPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot2Struct.elbPos[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[1];

        /* '<S213>:1:68' */
        vmr_rwd_fix_leftarm_DW.robot2Struct.bHasSecondary = bR2HasSecondardy;

        /* '<S213>:1:32' */
        /* '<S213>:1:65' */
        /* '<S213>:1:66' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift
          (vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoPos[0] =
          vmr_rwd_fix_leftarm_B.Conversion1[0];

        /* '<S213>:1:67' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift
          (vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbPos);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbPos[0] =
          vmr_rwd_fix_leftarm_B.Conversion1[1];

        /* '<S213>:1:68' */
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.bHasSecondary = 0.0;

        /* '<S213>:1:33' */
        /* '<S213>:1:71' */
        /* '<S213>:1:72' */
        vmr_rwd_fix_leftarm_circshift(vmr_rwd_fix_leftarm_DW.servoValuesR2);

        /* '<S213>:1:73' */
        vmr_rwd_fix_leftarm_DW.servoValuesR2[0] =
          vmr_rwd_fix_leftarm_B.SFunction_o3[1];

        /* '<S213>:1:34' */
        for (i = 0; i < 5; i++) {
          tmp[i] = vmr_rwd_fix_leftarm_DW.robot2Struct.shoPos[i];
          tmp_0[i] = vmr_rwd_fix_leftarm_DW.robot2Struct.elbPos[i];
          tmp_1[i] = vmr_rwd_fix_leftarm_DW.robot2Struct.shoVel[i];
          tmp_2[i] = vmr_rwd_fix_leftarm_DW.robot2Struct.elbVel[i];
        }

        vmr_rwd_fix_leftarm_calculateVelAcc(tmp, tmp_0, tmp_1, tmp_2,
          vmr_rwd_fix_leftarm_DW.robot2Struct.shoAcc,
          vmr_rwd_fix_leftarm_DW.robot2Struct.elbAcc,
          vmr_rwd_fix_leftarm_DW.robot2Struct.bHasSecondary,
          vmr_rwd_fix_leftarm_DW.servoValuesR2,
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_g,
          vmr_rwd_fix_leftarm_DW.robot2Struct.shoPos,
          vmr_rwd_fix_leftarm_DW.robot2Struct.elbPos,
          vmr_rwd_fix_leftarm_DW.robot2Struct.shoVel,
          vmr_rwd_fix_leftarm_DW.robot2Struct.elbVel,
          &vmr_rwd_fix_leftarm_DW.robot2Struct.shoAcc,
          &vmr_rwd_fix_leftarm_DW.robot2Struct.elbAcc,
          &vmr_rwd_fix_leftarm_DW.robot2Struct.bHasSecondary);

        /* '<S213>:1:35' */
        for (i = 0; i < 5; i++) {
          tmp[i] = vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoPos[i];
          tmp_0[i] = vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbPos[i];
          tmp_1[i] = vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoVel[i];
          tmp_2[i] = vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbVel[i];
        }

        vmr_rwd_fix_leftarm_calculateVelAcc_n(tmp, tmp_0, tmp_1, tmp_2,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoAcc,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbAcc,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.bHasSecondary,
          vmr_rwd_fix_leftarm_DW.servoValuesR2,
          vmr_rwd_fix_leftarm_B.Conversion1,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoPos,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbPos,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoVel,
          vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbVel,
          &vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoAcc,
          &vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbAcc,
          &vmr_rwd_fix_leftarm_DW.robot2StructPrimary.bHasSecondary);
      }

      /* '<S213>:1:38' */
      /* '<S213>:1:52' */
      /* '<S213>:1:53' */
      for (i = 0; i < 10; i++) {
        vmr_rwd_fix_leftarm_B.robot1DataOut_p[i] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[i];
        vmr_rwd_fix_leftarm_B.robot2DataOut_g[i] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[i];
      }

      vmr_rwd_fix_leftarm_B.robot1DataOut_p[2] =
        vmr_rwd_fix_leftarm_DW.robot1Struct.shoVel[0];

      /* '<S213>:1:54' */
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[3] =
        vmr_rwd_fix_leftarm_DW.robot1Struct.elbVel[0];

      /* '<S213>:1:55' */
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[4] =
        vmr_rwd_fix_leftarm_DW.robot1Struct.shoAcc;

      /* '<S213>:1:56' */
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[5] =
        vmr_rwd_fix_leftarm_DW.robot1Struct.elbAcc;

      /* '<S213>:1:39' */
      /* '<S213>:1:52' */
      /* '<S213>:1:53' */
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[2] =
        vmr_rwd_fix_leftarm_DW.robot2Struct.shoVel[0];

      /* '<S213>:1:54' */
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[3] =
        vmr_rwd_fix_leftarm_DW.robot2Struct.elbVel[0];

      /* '<S213>:1:55' */
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[4] =
        vmr_rwd_fix_leftarm_DW.robot2Struct.shoAcc;

      /* '<S213>:1:56' */
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[5] =
        vmr_rwd_fix_leftarm_DW.robot2Struct.elbAcc;

      /* '<S213>:1:41' */
      /* '<S213>:1:52' */
      /* '<S213>:1:53' */
      for (i = 0; i < 6; i++) {
        vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[i] =
          vmr_rwd_fix_leftarm_B.Conversion2[i];
        vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[i] =
          vmr_rwd_fix_leftarm_B.Conversion1[i];
      }

      vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[2] =
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoVel[0];

      /* '<S213>:1:54' */
      vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[3] =
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbVel[0];

      /* '<S213>:1:55' */
      vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[4] =
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.shoAcc;

      /* '<S213>:1:56' */
      vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[5] =
        vmr_rwd_fix_leftarm_DW.robot1StructPrimary.elbAcc;

      /* '<S213>:1:42' */
      /* '<S213>:1:52' */
      /* '<S213>:1:53' */
      vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[2] =
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoVel[0];

      /* '<S213>:1:54' */
      vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[3] =
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbVel[0];

      /* '<S213>:1:55' */
      vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[4] =
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.shoAcc;

      /* '<S213>:1:56' */
      vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[5] =
        vmr_rwd_fix_leftarm_DW.robot2StructPrimary.elbAcc;

      /* We used to provide a filtered velocity, but we can't with EtherCAT and */
      /* it was not being used anywhere anyway.  */
      /* '<S213>:1:46' */
      bR2HasSecondardy = vmr_rwd_fix_leftarm_B.robot1DataOut_p[2];
      bHasSecondardy = vmr_rwd_fix_leftarm_B.robot1DataOut_p[3];
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[6] = bR2HasSecondardy;
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[7] = bHasSecondardy;

      /* '<S213>:1:47' */
      bR2HasSecondardy = vmr_rwd_fix_leftarm_B.robot2DataOut_g[2];
      bHasSecondardy = vmr_rwd_fix_leftarm_B.robot2DataOut_g[3];
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[6] = bR2HasSecondardy;
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[7] = bHasSecondardy;
    }

    /* End of MATLAB Function: '<S209>/Robot_data_builder' */

    /* MATLAB Function: '<S209>/filter_velocities' */
    /* MATLAB Function 'DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities': '<S214>:1' */
    if (vmr_rwd_fix_leftarm_B.SFunction_o10 < 7.0F) {
      /* '<S214>:1:11' */
      /* '<S214>:1:12' */
      /* '<S214>:1:13' */
      for (i = 0; i < 10; i++) {
        vmr_rwd_fix_leftarm_B.robot1DataOut[i] =
          vmr_rwd_fix_leftarm_B.robot1DataOut_p[i];
        vmr_rwd_fix_leftarm_B.robot2DataOut[i] =
          vmr_rwd_fix_leftarm_B.robot2DataOut_g[i];
      }
    } else {
      /* '<S214>:1:17' */
      /* '<S214>:1:18' */
      for (i = 0; i < 10; i++) {
        vmr_rwd_fix_leftarm_B.robot1DataOut[i] =
          vmr_rwd_fix_leftarm_B.robot1DataOut_p[i];
        vmr_rwd_fix_leftarm_B.robot2DataOut[i] =
          vmr_rwd_fix_leftarm_B.robot2DataOut_g[i];
      }

      /* '<S214>:1:20' */
      vmr_rwd_fix_leftarm_updateValues(&vmr_rwd_fix_leftarm_DW.robot1Struct_a,
        vmr_rwd_fix_leftarm_B.robot1DataOut_p,
        vmr_rwd_fix_leftarm_B.SFunction_o3[0], 2.0);

      /* '<S214>:1:21' */
      vmr_rwd_fix_leftarm_updateValues(&vmr_rwd_fix_leftarm_DW.robot2Struct_o,
        vmr_rwd_fix_leftarm_B.robot2DataOut_g,
        vmr_rwd_fix_leftarm_B.SFunction_o3[1], 2.0);

      /* We used to provide a filtered velocity, but we can't with EtherCAT and */
      /* it was not being used anywhere anyway.  */
      /* '<S214>:1:25' */
      vmr_rwd_fix_leftarm_B.robot1DataOut[6] =
        vmr_rwd_fix_leftarm_DW.robot1Struct_a.shoVelFilt[2];
      vmr_rwd_fix_leftarm_B.robot1DataOut[7] =
        vmr_rwd_fix_leftarm_DW.robot1Struct_a.elbVelFilt[2];

      /* '<S214>:1:26' */
      vmr_rwd_fix_leftarm_B.robot2DataOut[6] =
        vmr_rwd_fix_leftarm_DW.robot2Struct_o.shoVelFilt[2];
      vmr_rwd_fix_leftarm_B.robot2DataOut[7] =
        vmr_rwd_fix_leftarm_DW.robot2Struct_o.elbVelFilt[2];
    }

    /* End of MATLAB Function: '<S209>/filter_velocities' */
    srUpdateBC(vmr_rwd_fix_leftarm_DW.read_pmac_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S65>/read_pmac' */
}

/* Update for enable system: '<S65>/read_pmac' */
void vmr_rwd_fix_leftarm_read_pmac_Update(void)
{
  /* Update for Enabled SubSystem: '<S65>/read_pmac' incorporates:
   *  Update for EnablePort: '<S209>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.Compare_c) {
    /* Update for UnitDelay: '<S215>/Output' */
    vmr_rwd_fix_leftarm_DW.Output_DSTATE_k = vmr_rwd_fix_leftarm_B.FixPtSwitch_j;

    /* Update for UnitDelay: '<S211>/Unit Delay' incorporates:
     *  Constant: '<S211>/Read Switch'
     */
    vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE =
      vmr_rwd_fix_leftarm_P.ReadSwitch_Value;

    /* Update for UnitDelay: '<S211>/Unit Delay1' incorporates:
     *  Constant: '<S211>/Write Switch'
     */
    vmr_rwd_fix_leftarm_DW.UnitDelay1_DSTATE =
      vmr_rwd_fix_leftarm_P.WriteSwitch_Value;
  }

  /* End of Update for SubSystem: '<S65>/read_pmac' */
}

/* Termination for enable system: '<S65>/read_pmac' */
void vmr_rwd_fix_leftarm_read_pmac_Term(void)
{
  /* Level2 S-Function Block: '<S209>/S-Function' (mcc_pollall) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S211>/Write' (mcc_writemem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for IfAction SubSystem: '<S211>/Read DPRAM' */

  /* Level2 S-Function Block: '<S216>/Read' (mcc_readmem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S211>/Read DPRAM' */

  /* Terminate for IfAction SubSystem: '<S211>/Write DPRAM' */

  /* Level2 S-Function Block: '<S218>/Write' (mcc_writemem) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S211>/Write DPRAM' */
}
