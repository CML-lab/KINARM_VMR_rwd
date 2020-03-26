/*
 * Code generation for system system '<S33>/Force Sensor Control'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_ForceSensorControl.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/*
 * Initial conditions for atomic system:
 *    '<S201>/Create timestamp'
 *    '<S202>/Create timestamp'
 */
void vmr_rwd_fix_leftarm_Createtimestamp_Init
  (DW_Createtimestamp_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->start_time = 0U;
  localDW->last_time = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S201>/Create timestamp'
 *    '<S202>/Create timestamp'
 */
void vmr_rwd_fix_leftarm_Createtimestamp(const uint32_T rtu_times_in[3],
  B_Createtimestamp_vmr_rwd_fix_leftarm_T *localB,
  DW_Createtimestamp_vmr_rwd_fix_leftarm_T *localDW)
{
  uint32_T q0;
  uint32_T qY;

  /* MATLAB Function 'DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Create timestamp': '<S203>:1' */
  if ((localDW->start_time == 0U) && (rtu_times_in[1] > 0U)) {
    /* '<S203>:1:14' */
    /* '<S203>:1:15' */
    localDW->start_time = rtu_times_in[1];
  }

  if (rtu_times_in[1] < localDW->start_time) {
    /* '<S203>:1:18' */
    /* '<S203>:1:19' */
    localDW->start_time = 0U;
  }

  /* F/T sensor clock runs at 7Khz according to the manual, */
  /* using a 32 bit integer for this gives about 7 days before it will roll */
  /* over. This means we need to account for roll overs in order to make */
  /* analysis sane. */
  /* '<S203>:1:26' */
  q0 = rtu_times_in[1];
  qY = q0 - localDW->start_time;
  if (qY > q0) {
    qY = 0U;
  }

  localB->timestamp_out = (real_T)qY / 7000.0;

  /* '<S203>:1:27' */
  localDW->last_time = rtu_times_in[1];
}

/* Initial conditions for atomic system: '<S33>/Force Sensor Control' */
void vmr_rwd_fix_leftarm_ForceSensorControl_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S204>/Delay Input1' */
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE =
    vmr_rwd_fix_leftarm_P.DetectChange_vinit;

  /* InitializeConditions for MATLAB Function: '<S201>/Create timestamp' */
  vmr_rwd_fix_leftarm_Createtimestamp_Init
    (&vmr_rwd_fix_leftarm_DW.sf_Createtimestamp);

  /* InitializeConditions for UnitDelay: '<S208>/Delay Input1' */
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_n =
    vmr_rwd_fix_leftarm_P.DetectChange_vinit_n;

  /* InitializeConditions for MATLAB Function: '<S202>/Create timestamp' */
  vmr_rwd_fix_leftarm_Createtimestamp_Init
    (&vmr_rwd_fix_leftarm_DW.sf_Createtimestamp_b);
}

/* Start for atomic system: '<S33>/Force Sensor Control' */
void vmr_rwd_fix_leftarm_ForceSensorControl_Start(void)
{
  /* Start for Enabled SubSystem: '<S201>/If Action Subsystem' */

  /* Level2 S-Function Block: '<S205>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S201>/If Action Subsystem' */

  /* Level2 S-Function Block: '<S201>/Receive from Robot 1 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S202>/Data Transfer Start Subsystem' */

  /* Level2 S-Function Block: '<S207>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S202>/Data Transfer Start Subsystem' */

  /* Level2 S-Function Block: '<S202>/Receive from Robot 2 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Outputs for atomic system: '<S33>/Force Sensor Control' */
void vmr_rwd_fix_leftarm_ForceSensorControl(void)
{
  int32_T i;

  /* UnitDelay: '<S204>/Delay Input1' */
  vmr_rwd_fix_leftarm_B.Uk1_o = vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S204>/FixPt Relational Operator' */
  vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_l = (uint8_T)
    (vmr_rwd_fix_leftarm_B.ReadHasFT[0] != vmr_rwd_fix_leftarm_B.Uk1_o);

  /* Outputs for Enabled SubSystem: '<S201>/If Action Subsystem' incorporates:
   *  EnablePort: '<S205>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_l > 0) {
    /* ReverseEndian: <S205>/Byte Reversal1 */

    /* 2 byte-wide input datatypes */
    ((uint16_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1_m)[0] =
      SWAP16(((uint16_T *)&vmr_rwd_fix_leftarm_P.Constant_Value_md)[0]);

    /* Switch: '<S205>/Switch' incorporates:
     *  Constant: '<S205>/Constant2'
     *  Constant: '<S205>/Constant3'
     */
    if (vmr_rwd_fix_leftarm_B.ReadHasFT[0] >
        vmr_rwd_fix_leftarm_P.Switch_Threshold) {
      vmr_rwd_fix_leftarm_B.Switch_n = vmr_rwd_fix_leftarm_P.Constant3_Value;
    } else {
      vmr_rwd_fix_leftarm_B.Switch_n = vmr_rwd_fix_leftarm_P.Constant2_Value_k;
    }

    /* End of Switch: '<S205>/Switch' */

    /* ReverseEndian: <S205>/Byte Reversal */

    /* 2 byte-wide input datatypes */
    ((uint16_T *)&vmr_rwd_fix_leftarm_B.ByteReversal_n)[0] =
      SWAP16(((uint16_T *)&vmr_rwd_fix_leftarm_B.Switch_n)[0]);

    /* ReverseEndian: <S205>/Byte Reversal2 */

    /* 4 byte-wide input datatypes */
    ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal2)[0] =
      SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_P.Constant1_Value_c3)[0]);

    /* Pack: <S205>/Pack */
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack_f[0],
                  &vmr_rwd_fix_leftarm_B.ByteReversal1_m,
                  2);
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack_f[2],
                  &vmr_rwd_fix_leftarm_B.ByteReversal_n,
                  2);
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack_f[4],
                  &vmr_rwd_fix_leftarm_B.ByteReversal2,
                  4);

    /* Level2 S-Function Block: '<S205>/Send' (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[20];
      sfcnOutputs(rts, 1);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.IfActionSubsystem_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S201>/If Action Subsystem' */

  /* Level2 S-Function Block: '<S201>/Receive from Robot 1 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[22];
    sfcnOutputs(rts, 1);
  }

  /* Unpack: <S201>/Unpack */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack_o1_m[0],
                &vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o1[0],
                12);
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack_o2_o[0],
                &vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o1[12],
                24);

  /* ReverseEndian: <S201>/Byte Reversal */

  /* 4 byte-wide input datatypes */
  {
    int_T i1;
    const int32_T *u0 = &vmr_rwd_fix_leftarm_B.Unpack_o2_o[0];
    int32_T *y0 = &vmr_rwd_fix_leftarm_B.ByteReversal[0];
    for (i1=0; i1 < 6; i1++) {
      ((uint32_T *)&y0[i1])[0] =
        SWAP32(((uint32_T *)&u0[i1])[0]);
    }
  }

  /* ReverseEndian: <S201>/Byte Reversal1 */

  /* 4 byte-wide input datatypes */
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1[0])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack_o1_m[0])[0]);
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1[1])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack_o1_m[1])[0]);
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1[2])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack_o1_m[2])[0]);

  /* MATLAB Function: '<S201>/Create timestamp' */
  vmr_rwd_fix_leftarm_Createtimestamp(vmr_rwd_fix_leftarm_B.ByteReversal1,
    &vmr_rwd_fix_leftarm_B.sf_Createtimestamp,
    &vmr_rwd_fix_leftarm_DW.sf_Createtimestamp);

  /* Switch: '<S201>/Switch' incorporates:
   *  Constant: '<S201>/Constant'
   */
  if (vmr_rwd_fix_leftarm_B.ReadHasFT[0] >
      vmr_rwd_fix_leftarm_P.Switch_Threshold_m) {
    /* DataTypeConversion: '<S201>/Data Type Conversion' */
    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_e[i] =
        vmr_rwd_fix_leftarm_B.ByteReversal[i];
      vmr_rwd_fix_leftarm_B.Switch_p[i] =
        vmr_rwd_fix_leftarm_B.DataTypeConversion_e[i];
    }

    /* End of DataTypeConversion: '<S201>/Data Type Conversion' */
    vmr_rwd_fix_leftarm_B.Switch_p[6] =
      vmr_rwd_fix_leftarm_B.sf_Createtimestamp.timestamp_out;
  } else {
    for (i = 0; i < 7; i++) {
      vmr_rwd_fix_leftarm_B.Switch_p[i] =
        vmr_rwd_fix_leftarm_P.Constant_Value_o[i];
    }
  }

  /* End of Switch: '<S201>/Switch' */

  /* UnitDelay: '<S208>/Delay Input1' */
  vmr_rwd_fix_leftarm_B.Uk1_p = vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_n;

  /* RelationalOperator: '<S208>/FixPt Relational Operator' */
  vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_i = (uint8_T)
    (vmr_rwd_fix_leftarm_B.ReadHasFT[1] != vmr_rwd_fix_leftarm_B.Uk1_p);

  /* Outputs for Enabled SubSystem: '<S202>/Data Transfer Start Subsystem' incorporates:
   *  EnablePort: '<S207>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtRelationalOperator_i > 0) {
    /* ReverseEndian: <S207>/Byte Reversal1 */

    /* 2 byte-wide input datatypes */
    ((uint16_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1_a)[0] =
      SWAP16(((uint16_T *)&vmr_rwd_fix_leftarm_P.Constant_Value_cn)[0]);

    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S207>/Constant2'
     *  Constant: '<S207>/Constant3'
     */
    if (vmr_rwd_fix_leftarm_B.ReadHasFT[1] >
        vmr_rwd_fix_leftarm_P.Switch_Threshold_j) {
      vmr_rwd_fix_leftarm_B.Switch_g = vmr_rwd_fix_leftarm_P.Constant3_Value_k;
    } else {
      vmr_rwd_fix_leftarm_B.Switch_g = vmr_rwd_fix_leftarm_P.Constant2_Value_o;
    }

    /* End of Switch: '<S207>/Switch' */

    /* ReverseEndian: <S207>/Byte Reversal2 */

    /* 2 byte-wide input datatypes */
    ((uint16_T *)&vmr_rwd_fix_leftarm_B.ByteReversal2_g)[0] =
      SWAP16(((uint16_T *)&vmr_rwd_fix_leftarm_B.Switch_g)[0]);

    /* ReverseEndian: <S207>/Byte Reversal */

    /* 4 byte-wide input datatypes */
    ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal_g)[0] =
      SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_P.Constant1_Value_me)[0]);

    /* Pack: <S207>/Pack */
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack[0],
                  &vmr_rwd_fix_leftarm_B.ByteReversal1_a,
                  2);
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack[2],
                  &vmr_rwd_fix_leftarm_B.ByteReversal2_g,
                  2);
    (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack[4],
                  &vmr_rwd_fix_leftarm_B.ByteReversal_g,
                  4);

    /* Level2 S-Function Block: '<S207>/Send' (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[21];
      sfcnOutputs(rts, 1);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.DataTransferStartSubsystem_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S202>/Data Transfer Start Subsystem' */

  /* Level2 S-Function Block: '<S202>/Receive from Robot 2 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[23];
    sfcnOutputs(rts, 1);
  }

  /* Unpack: <S202>/Unpack1 */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack1_o1[0],
                &vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o1[0],
                12);
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack1_o2[0],
                &vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o1[12],
                24);

  /* ReverseEndian: <S202>/Byte Reversal */

  /* 4 byte-wide input datatypes */
  {
    int_T i1;
    const int32_T *u0 = &vmr_rwd_fix_leftarm_B.Unpack1_o2[0];
    int32_T *y0 = &vmr_rwd_fix_leftarm_B.ByteReversal_o[0];
    for (i1=0; i1 < 6; i1++) {
      ((uint32_T *)&y0[i1])[0] =
        SWAP32(((uint32_T *)&u0[i1])[0]);
    }
  }

  /* ReverseEndian: <S202>/Byte Reversal1 */

  /* 4 byte-wide input datatypes */
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1_f[0])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack1_o1[0])[0]);
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1_f[1])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack1_o1[1])[0]);
  ((uint32_T *)&vmr_rwd_fix_leftarm_B.ByteReversal1_f[2])[0] =
    SWAP32(((uint32_T *)&vmr_rwd_fix_leftarm_B.Unpack1_o1[2])[0]);

  /* MATLAB Function: '<S202>/Create timestamp' */
  vmr_rwd_fix_leftarm_Createtimestamp(vmr_rwd_fix_leftarm_B.ByteReversal1_f,
    &vmr_rwd_fix_leftarm_B.sf_Createtimestamp_b,
    &vmr_rwd_fix_leftarm_DW.sf_Createtimestamp_b);

  /* Switch: '<S202>/Switch1' incorporates:
   *  Constant: '<S202>/Constant1'
   */
  if (vmr_rwd_fix_leftarm_B.ReadHasFT[1] >
      vmr_rwd_fix_leftarm_P.Switch1_Threshold) {
    /* DataTypeConversion: '<S202>/Data Type Conversion1' */
    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_g[i] =
        vmr_rwd_fix_leftarm_B.ByteReversal_o[i];
      vmr_rwd_fix_leftarm_B.Switch1_b[i] =
        vmr_rwd_fix_leftarm_B.DataTypeConversion1_g[i];
    }

    /* End of DataTypeConversion: '<S202>/Data Type Conversion1' */
    vmr_rwd_fix_leftarm_B.Switch1_b[6] =
      vmr_rwd_fix_leftarm_B.sf_Createtimestamp_b.timestamp_out;
  } else {
    for (i = 0; i < 7; i++) {
      vmr_rwd_fix_leftarm_B.Switch1_b[i] =
        vmr_rwd_fix_leftarm_P.Constant1_Value_a[i];
    }
  }

  /* End of Switch: '<S202>/Switch1' */
}

/* Update for atomic system: '<S33>/Force Sensor Control' */
void vmr_rwd_fix_leftarm_ForceSensorControl_Update(void)
{
  /* Update for UnitDelay: '<S204>/Delay Input1' */
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE = vmr_rwd_fix_leftarm_B.ReadHasFT[0];

  /* Update for UnitDelay: '<S208>/Delay Input1' */
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_n = vmr_rwd_fix_leftarm_B.ReadHasFT
    [1];
}

/* Termination for atomic system: '<S33>/Force Sensor Control' */
void vmr_rwd_fix_leftarm_ForceSensorControl_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S201>/If Action Subsystem' */

  /* Level2 S-Function Block: '<S205>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S201>/If Action Subsystem' */

  /* Level2 S-Function Block: '<S201>/Receive from Robot 1 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S202>/Data Transfer Start Subsystem' */

  /* Level2 S-Function Block: '<S207>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S202>/Data Transfer Start Subsystem' */

  /* Level2 S-Function Block: '<S202>/Receive from Robot 2 Force Sensor' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[23];
    sfcnTerminate(rts);
  }
}
