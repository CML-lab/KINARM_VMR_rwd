/*
 * Code generation for system system '<S2>/Poll KINARM'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_PollKINARM.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Named constants for Chart: '<S87>/AbsEncoder machine' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_h (-1)
#define vmr_rwd_fix_leftarm_IN_Complete ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Done    ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_PollingComplete ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_ReadNext ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_ReadNextEncoder ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_Received ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_disable ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_disable1 ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_disableRead ((uint8_T)9U)
#define vmr_rwd_fix_leftarm_IN_encoderReadSetup ((uint8_T)10U)
#define vmr_rwd_fix_leftarm_IN_pollReceived ((uint8_T)11U)
#define vmr_rwd_fix_leftarm_IN_receivedEncoder ((uint8_T)12U)
#define vmr_rwd_fix_leftarm_IN_setup   ((uint8_T)13U)
#define vmr_rwd_fix_leftarm_IN_startPolling ((uint8_T)14U)

/* Named constants for Chart: '<S74>/SDO read machine' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_lt (-1)
#define vmr_rwd_fix_leftarm_IN_Done_e  ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNextFloat ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_ReadNextInt ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_ReceivedFloat ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_ReceivedInt ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_disableFloat ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_disableInt ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_setup_g ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_startFloats ((uint8_T)9U)

/* Named constants for Chart: '<S90>/SDO read machine' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_lg (-1)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_b ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNext_n ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_disable_a ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_setup_a ((uint8_T)3U)

/* Named constants for Chart: '<S91>/SDO write machine' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_if (-1)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_f ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNext_o ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_disable_g ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_setup_i ((uint8_T)3U)

/* Named constants for Chart: '<S153>/Read EMCY' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_jm (-1)
#define vmr_rwd_fix_leftarm_IN_DoneClearing ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_fq ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNextEMCY ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_ReceivedFloat_d ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_StartOverwrite ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_StartReadingCount ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_disableCount ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_disableEMCY ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_setup_c ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_startEMCYs ((uint8_T)9U)

/* Named constants for Chart: '<S101>/Read EMCY' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_mm (-1)
#define vmr_rwd_fix_leftarm_IN_DoneClearing_g ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_jq ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNextEMCY_e ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_ReceivedFloat_m ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_StartOverwrite_c ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_StartReadingCount_f ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_disableCount_b ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_disableEMCY_g ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_setup_k ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_startEMCYs_h ((uint8_T)9U)

/* Named constants for Chart: '<S114>/Read EMCY' */
#define vmr_rwd_fix_leftarm_CALL_EVENT_il (-1)
#define vmr_rwd_fix_leftarm_IN_DoneClearing_m ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_p ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_ReadNextEMCY_l ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_ReceivedFloat_a ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_StartOverwrite_b ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_StartReadingCount_k ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_disableCount_c ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_disableEMCY_m ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_setup_m ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_startEMCYs_hm ((uint8_T)9U)

/* Named constants for Chart: '<S33>/control read write' */
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_e ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_RunECat ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_RunPMAC ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_RunSim  ((uint8_T)3U)

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_clearValues
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB);

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_circshift_j(real_T a[12]);
static void vmr_rwd_fix_leftarm_convertL1L2ToShoElb(const real_T L1L2[4], const
  real_T orientation[2], real_T shoElb[4]);
static void vmr_rwd_fix_leftarm_convertL1L2ToShoElbVel(const real_T L1L2[4],
  const real_T orientation[2], real_T shoElb[4]);
static void vmr_rwd_fix_leftarm_reduce(const int32_T a_sizes[2], int32_T absp[2],
  boolean_T shiftright[2]);
static void vmr_rwd_fix_leftarm_circshift_c(real_T a_data[], int32_T a_sizes[2]);
static void vmr_rwd_fix_leftarm_updateQueue(const real_T arr_data[], const
  int32_T arr_sizes[2], const real_T newVals[4], real_T encData_data[], int32_T
  encData_sizes[2]);
static void vmr_rwd_fix_leftarm_calcDT(const real_T positions_data[], const
  int32_T positions_sizes[2], real_T stepTime, real_T velocity[4]);
static void vmr_rwd_fix_leftarm_buildEncoderData(real_T queueSize, const real_T
  shoElb[4], real_T encData_data[], int32_T encData_sizes[2]);
static void vmr_rwd_fix_leftarm_buildEncoderData_j(real_T queueSize, real_T
  encData_data[], int32_T encData_sizes[2]);
static void vmr_rwd_fix_leftarm_buildKin(const real_T angles[2], const real_T
  velocities_data[], const int32_T velocities_sizes[2], real_T stepTime, const
  uint32_T motorStatuses[2], real_T kinOut[10]);
static void vmr_rwd_fix_leftarm_buildKinPrimary(const real_T angles[2], const
  real_T velocities_data[], const int32_T velocities_sizes[2], real_T stepTime,
  const uint32_T motorStatuses[2], real_T filteredVelocities_data[], int32_T
  filteredVelocities_sizes[2], real_T kinOut[10]);
static void vmr_rwd_fix_leftarm_insertVal(real_T arr[3], real_T v);

/*
 * Output and update for atomic system:
 *    '<S98>/parse status register'
 *    '<S111>/parse status register1'
 *    '<S150>/parse status register1'
 *    '<S163>/parse status register1'
 */
void vmr_rwd_fix_leftarm_parsestatusregister(uint32_T rtu_statusRegister,
  B_parsestatusregister_vmr_rwd_fix_leftarm_T *localB)
{
  int32_T ampStatus;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register': '<S103>:1' */
  /* The contents of the status register are detailed in MAN_G_CR.pdf */
  /* '<S103>:1:6' */
  ampStatus = (int32_T)(rtu_statusRegister & 15U);

  /*  15 = 0xF */
  if (ampStatus == 0) {
    /* '<S103>:1:7' */
    /* '<S103>:1:8' */
    localB->allOK = 1U;
  } else {
    /* '<S103>:1:10' */
    localB->allOK = 0U;
  }

  /* '<S103>:1:12' */
  localB->servoEnabled = rtu_statusRegister >> 4U & 1U;

  /* '<S103>:1:13' */
  localB->faultFound = rtu_statusRegister >> 6U & 1U;

  /* '<S103>:1:14' */
  localB->currentLimitEnabled = rtu_statusRegister >> 13U & 1U;

  /* '<S103>:1:15' */
  localB->motorOn = rtu_statusRegister >> 22U & 1U;
  if (rtu_statusRegister == 0U) {
    /* '<S103>:1:17' */
    /* '<S103>:1:18' */
    localB->eStopOut = 0U;

    /* if the PDO's are not working yet then assume the estops are not pressed */
  } else {
    /* '<S103>:1:20' */
    /* bits 14 and 15 */
    /* '<S103>:1:21' */
    localB->eStopOut = (rtu_statusRegister >> 14U & 3U) ^ 3U;
  }

  localB->ampStatus = (uint32_T)ampStatus;
}

/*
 * Initial conditions for atomic system:
 *    '<S101>/fault monitor'
 *    '<S114>/fault monitor'
 *    '<S153>/fault monitor'
 *    '<S166>/fault monitor'
 */
void vmr_rwd_fix_leftarm_faultmonitor_Init(DW_faultmonitor_vmr_rwd_fix_leftarm_T
  *localDW)
{
  localDW->preOpCounter = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S101>/fault monitor'
 *    '<S114>/fault monitor'
 *    '<S153>/fault monitor'
 *    '<S166>/fault monitor'
 */
void vmr_rwd_fix_leftarm_faultmonitor(uint16_T rtu_StatusWord,
  B_faultmonitor_vmr_rwd_fix_leftarm_T *localB,
  DW_faultmonitor_vmr_rwd_fix_leftarm_T *localDW)
{
  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor': '<S108>:1' */
  /* when we are not yet in the OP state this will always return 0 since */
  /* PDO's don't work yet. We can still read SDO's though, so for safety */
  /* we will trigger an attempt to read every 5ms just in case there is */
  /* an EMCY message fired off at this point. */
  if (rtu_StatusWord == 0) {
    /* '<S108>:1:13' */
    /* '<S108>:1:14' */
    localDW->preOpCounter++;
    if (localDW->preOpCounter >= 20.0) {
      /* '<S108>:1:16' */
      /* '<S108>:1:17' */
      localB->triggerFaultRead = 1.0;

      /* '<S108>:1:18' */
      localDW->preOpCounter = 0.0;
    } else {
      /* '<S108>:1:20' */
      localB->triggerFaultRead = 0.0;
    }
  } else {
    /* a fault is binary x0xx1000 */
    /* '<S108>:1:26' */
    /* '<S108>:1:27' */
    if (((rtu_StatusWord & 15) == 8) && (((int32_T)((uint32_T)rtu_StatusWord >>
           6) & 1) == 0)) {
      /* '<S108>:1:29' */
      /* '<S108>:1:30' */
      localB->triggerFaultRead = 1.0;
    } else {
      /* '<S108>:1:32' */
      localB->triggerFaultRead = 0.0;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S101>/fault monitor1'
 *    '<S114>/fault monitor1'
 *    '<S153>/fault monitor1'
 *    '<S166>/fault monitor1'
 */
void vmr_rwd_fix_leftarm_faultmonitor1_Init
  (DW_faultmonitor1_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->lastRegister = 0U;
  localDW->underVoltageCounter = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S101>/fault monitor1'
 *    '<S114>/fault monitor1'
 *    '<S153>/fault monitor1'
 *    '<S166>/fault monitor1'
 */
void vmr_rwd_fix_leftarm_faultmonitor1(const real_T rtu_SDOEMCY[3], uint32_T
  rtu_registerInfo, uint32_T rtu_registerInfo_b, uint32_T rtu_registerInfo_g,
  real_T rtu_drive, real_T rtu_statusWord, B_faultmonitor1_vmr_rwd_fix_leftarm_T
  *localB, DW_faultmonitor1_vmr_rwd_fix_leftarm_T *localDW)
{
  int32_T EMCY;
  uint32_T registerEMCY;
  int32_T recordLast;
  uint32_T c;

  /* SignalConversion: '<S109>/TmpSignal ConversionAt SFunction Inport2' */
  localB->TmpSignalConversionAtSFunctionInport2[0] = rtu_registerInfo;
  localB->TmpSignalConversionAtSFunctionInport2[1] = rtu_registerInfo_b;
  localB->TmpSignalConversionAtSFunctionInport2[2] = rtu_registerInfo_g;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor1': '<S109>:1' */
  /* grab the first 22 bits of the SR - any higher and the conversions from */
  /* uint32 to double to single loses information */
  /* '<S109>:1:12' */
  c = localB->TmpSignalConversionAtSFunctionInport2[2] & 4194303U;
  if (rtu_SDOEMCY[0] != 0.0) {
    /* '<S109>:1:14' */
    /* '<S109>:1:15' */
    localB->EMCYMsg[0] = rtu_SDOEMCY[0];
    localB->EMCYMsg[1] = rtu_SDOEMCY[1];
    localB->EMCYMsg[2] = rtu_SDOEMCY[2];
    localB->EMCYMsg[3] = rtu_statusWord;
    localB->EMCYMsg[4] = c;
  } else {
    /* '<S109>:1:19' */
    EMCY = 0;

    /* '<S109>:1:20' */
    registerEMCY = localB->TmpSignalConversionAtSFunctionInport2[0];

    /* '<S109>:1:21' */
    if (localB->TmpSignalConversionAtSFunctionInport2[1] != 0U) {
      /* '<S109>:1:24' */
      registerEMCY = 32U;
    }

    /* The status register's first 4 bits are the amp status. The meaning of the */
    /* bits can be found in MAN-G-CR v1.501.pdf under the StatusRegister section */
    if (localDW->lastRegister != registerEMCY) {
      /* '<S109>:1:29' */
      /* '<S109>:1:30' */
      recordLast = 1;
      if (registerEMCY == 3U) {
        /* '<S109>:1:32' */
        /* '<S109>:1:33' */
        localDW->underVoltageCounter++;
        if (localDW->underVoltageCounter >= 2.0) {
          /* '<S109>:1:34' */
          /* '<S109>:1:35' */
          EMCY = 12576;

          /* 0x3120 - Undervoltage */
        } else {
          /* '<S109>:1:37' */
          recordLast = 0;
        }
      } else if (registerEMCY == 5U) {
        /* '<S109>:1:39' */
        /* '<S109>:1:40' */
        EMCY = 13072;

        /* 0x3310 - Overvoltage */
      } else if (registerEMCY == 11U) {
        /* '<S109>:1:41' */
        /* '<S109>:1:42' */
        EMCY = 9024;

        /* 0x2340 - short protection */
      } else if (registerEMCY == 13U) {
        /* '<S109>:1:43' */
        /* '<S109>:1:44' */
        EMCY = 17168;

        /* 0x4310 - over temp */
      } else if (registerEMCY == 15U) {
        /* '<S109>:1:45' */
        /* '<S109>:1:46' */
        EMCY = 21570;

        /* 0x5442 - AdditionalAbort */
      } else {
        if (registerEMCY == 32U) {
          /* '<S109>:1:47' */
          /* '<S109>:1:48' */
          EMCY = 10;

          /* Current limit is activated */
        }
      }

      if (recordLast == 1) {
        /* '<S109>:1:51' */
        /* '<S109>:1:52' */
        localDW->lastRegister = registerEMCY;
      }
    }

    if (EMCY == 0) {
      /* '<S109>:1:56' */
      /* '<S109>:1:57' */
      for (EMCY = 0; EMCY < 5; EMCY++) {
        localB->EMCYMsg[EMCY] = 0.0;
      }
    } else {
      /* error message type 3 means that the error is from the status */
      /* register's amp status bits */
      /* '<S109>:1:61' */
      localB->EMCYMsg[0] = 3.0;
      localB->EMCYMsg[1] = rtu_drive;
      localB->EMCYMsg[2] = EMCY;
      localB->EMCYMsg[3] = rtu_statusWord;
      localB->EMCYMsg[4] = c;
    }
  }
}

/* Initial conditions for atomic system: '<S84>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_Init(void)
{
  /* InitializeConditions for MATLAB Function: '<S101>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor_Init(&vmr_rwd_fix_leftarm_DW.sf_faultmonitor);

  /* InitializeConditions for Memory: '<S105>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_o2;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_o2;

  /* InitializeConditions for Memory: '<S106>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_m;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S107>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_lw =
    vmr_rwd_fix_leftarm_P.Memory_X0;

  /* InitializeConditions for Chart: '<S101>/Read EMCY' */
  vmr_rwd_fix_leftarm_DW.sfEvent_p = vmr_rwd_fix_leftarm_CALL_EVENT_mm;
  vmr_rwd_fix_leftarm_DW.is_active_c99_ethercat = 0U;
  vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_jq;
  vmr_rwd_fix_leftarm_DW.currReadIdx_j = 0.0;
  vmr_rwd_fix_leftarm_DW.valuesToRead_b = 0.0;
  vmr_rwd_fix_leftarm_B.triggerCountRead_n = 0;
  vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0] = 0;
  vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[1] = 0;
  vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n = 0;
  vmr_rwd_fix_leftarm_B.emcyValPump_g[0] = 0.0;
  vmr_rwd_fix_leftarm_B.emcyValPump_g[1] = 0.0;
  vmr_rwd_fix_leftarm_B.emcyValPump_g[2] = 0.0;

  /* InitializeConditions for MATLAB Function: '<S101>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor1);
}

/* Start for atomic system: '<S84>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_Start(void)
{
  /* Start for Constant: '<S101>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_n2 = vmr_rwd_fix_leftarm_P.driveID_Value;
}

/* Outputs for atomic system: '<S84>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump(void)
{
  /* DataTypeConversion: '<S101>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_c3 =
    vmr_rwd_fix_leftarm_B.Statusword_k;

  /* MATLAB Function: '<S101>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor(vmr_rwd_fix_leftarm_B.Statusword_k,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor);

  /* Constant: '<S101>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_n2 = vmr_rwd_fix_leftarm_P.driveID_Value;

  /* Memory: '<S105>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_pr[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[0];
  vmr_rwd_fix_leftarm_B.Memory_pr[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[1];

  /* DataTypeConversion: '<S105>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[0] =
    vmr_rwd_fix_leftarm_B.Memory_pr[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[1] =
    vmr_rwd_fix_leftarm_B.Memory_pr[1];

  /* Memory: '<S106>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_ne[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[0];
  vmr_rwd_fix_leftarm_B.Memory_ne[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[1];

  /* DataTypeConversion: '<S106>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[0] =
    vmr_rwd_fix_leftarm_B.Memory_ne[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[1] =
    vmr_rwd_fix_leftarm_B.Memory_ne[1];

  /* Memory: '<S107>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_dp =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_lw;

  /* Chart: '<S101>/Read EMCY' */
  /* Gateway: EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY */
  vmr_rwd_fix_leftarm_DW.sfEvent_p = vmr_rwd_fix_leftarm_CALL_EVENT_mm;

  /* During: EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY */
  if (vmr_rwd_fix_leftarm_DW.is_active_c99_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY */
    vmr_rwd_fix_leftarm_DW.is_active_c99_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY */
    /* Transition: '<S104>:140' */
    vmr_rwd_fix_leftarm_DW.is_c99_ethercat = vmr_rwd_fix_leftarm_IN_setup_k;
  } else {
    switch (vmr_rwd_fix_leftarm_DW.is_c99_ethercat) {
     case vmr_rwd_fix_leftarm_IN_DoneClearing_g:
      /* During 'DoneClearing': '<S104>:197' */
      /* Transition: '<S104>:200' */
      vmr_rwd_fix_leftarm_DW.is_c99_ethercat = vmr_rwd_fix_leftarm_IN_setup_k;
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextEMCY_e:
      /* During 'ReadNextEMCY': '<S104>:184' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[1] == 1.0) {
        /* Transition: '<S104>:187' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_disableEMCY_g;

        /* Entry 'disableEMCY': '<S104>:186' */
        vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReceivedFloat_m:
      /* During 'ReceivedFloat': '<S104>:188' */
      if (vmr_rwd_fix_leftarm_DW.currReadIdx_j <=
          vmr_rwd_fix_leftarm_DW.valuesToRead_b) {
        /* Transition: '<S104>:192' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_ReadNextEMCY_e;

        /* Entry 'ReadNextEMCY': '<S104>:184' */
        vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0] = 1;
        vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[1] = (int32_T)
          vmr_rwd_fix_leftarm_DW.currReadIdx_j;
      } else {
        /* Transition: '<S104>:191' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_StartOverwrite_c;

        /* Entry 'StartOverwrite': '<S104>:193' */
        vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n = 1;
        vmr_rwd_fix_leftarm_B.emcyValPump_g[0] = 0.0;
        vmr_rwd_fix_leftarm_B.emcyValPump_g[1] = 0.0;
        vmr_rwd_fix_leftarm_B.emcyValPump_g[2] = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartOverwrite_c:
      /* During 'StartOverwrite': '<S104>:193' */
      if (vmr_rwd_fix_leftarm_B.Memory_dp == 1.0) {
        /* Transition: '<S104>:223' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_DoneClearing_g;

        /* Entry 'DoneClearing': '<S104>:197' */
        vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartReadingCount_f:
      /* During 'StartReadingCount': '<S104>:141' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[1] == 1.0) {
        /* Transition: '<S104>:157' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_disableCount_b;

        /* Entry 'disableCount': '<S104>:156' */
        vmr_rwd_fix_leftarm_B.triggerCountRead_n = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableCount_b:
      /* During 'disableCount': '<S104>:156' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[1] >= 2.0) {
        /* Transition: '<S104>:143' */
        if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[0] == 0.0) {
          /* Transition: '<S104>:219' */
          vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
            vmr_rwd_fix_leftarm_IN_setup_k;
        } else {
          /* Transition: '<S104>:220' */
          vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
            vmr_rwd_fix_leftarm_IN_startEMCYs_h;

          /* Entry 'startEMCYs': '<S104>:183' */
          vmr_rwd_fix_leftarm_DW.currReadIdx_j = 1.0;
          vmr_rwd_fix_leftarm_DW.valuesToRead_b =
            vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[1];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableEMCY_g:
      /* During 'disableEMCY': '<S104>:186' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[1] >= 2.0) {
        /* Transition: '<S104>:189' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_ReceivedFloat_m;

        /* Entry 'ReceivedFloat': '<S104>:188' */
        vmr_rwd_fix_leftarm_B.emcyValPump_g[0] = 1.0;

        /* ID for EMCY messge */
        vmr_rwd_fix_leftarm_B.emcyValPump_g[1] =
          vmr_rwd_fix_leftarm_B.driveID_n2;
        vmr_rwd_fix_leftarm_B.emcyValPump_g[2] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[0];
        vmr_rwd_fix_leftarm_DW.currReadIdx_j++;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_setup_k:
      /* During 'setup': '<S104>:139' */
      if (vmr_rwd_fix_leftarm_B.sf_faultmonitor.triggerFaultRead == 1.0) {
        /* Transition: '<S104>:145' */
        vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
          vmr_rwd_fix_leftarm_IN_StartReadingCount_f;

        /* Entry 'StartReadingCount': '<S104>:141' */
        vmr_rwd_fix_leftarm_B.triggerCountRead_n = 1;
      }
      break;

     default:
      /* During 'startEMCYs': '<S104>:183' */
      /* Transition: '<S104>:185' */
      vmr_rwd_fix_leftarm_DW.is_c99_ethercat =
        vmr_rwd_fix_leftarm_IN_ReadNextEMCY_e;

      /* Entry 'ReadNextEMCY': '<S104>:184' */
      vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0] = 1;
      vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[1] = (int32_T)
        vmr_rwd_fix_leftarm_DW.currReadIdx_j;
      break;
    }
  }

  /* End of Chart: '<S101>/Read EMCY' */

  /* DataTypeConversion: '<S105>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_je =
    vmr_rwd_fix_leftarm_B.triggerCountRead_n;

  /* S-Function (BKINethercatasyncsdoupload): '<S105>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_b;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_db;
        enInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_je;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_g0;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_h;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[7] != 0)
        {
          res = ecatAsyncSDOUpload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043257,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S105>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_jd = (uint32_T)
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_db;

  /* RateTransition: '<S105>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_e[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_b;
  vmr_rwd_fix_leftarm_B.RateTransition_e[1] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_jd;

  /* S-Function (BKINethercatasyncsdoupload): '<S106>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_h;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_di;
        enInputPtr = &vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_nd;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.emcyReadTrigger_e[1];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043265,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[7] = 1;
        ;
      }
    }
  }

  /* RateTransition: '<S106>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_cg[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_h;
  vmr_rwd_fix_leftarm_B.RateTransition_cg[1] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_di;

  /* DataTypeConversion: '<S107>/Data Type Conversion' incorporates:
   *  Constant: '<S107>/Constant'
   */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_mf = (int32_T)
    vmr_rwd_fix_leftarm_P.Constant_Value_p;

  /* S-Function (BKINethercatasyncsdodownload): '<S107>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_n;
        sigInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_p;
        enInputPtr = &vmr_rwd_fix_leftarm_B.countOverwriteTrigger_n;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_e;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_mf;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[7] != 0)
        {
          res = ecatAsyncSDODownload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            370043277,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S107>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_av =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_n;

  /* MATLAB Function: '<S101>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1(vmr_rwd_fix_leftarm_B.emcyValPump_g,
    vmr_rwd_fix_leftarm_B.sf_parsestatusregister.ampStatus,
    vmr_rwd_fix_leftarm_B.sf_parsestatusregister.currentLimitEnabled,
    vmr_rwd_fix_leftarm_B.statusregister_c4, vmr_rwd_fix_leftarm_B.driveID_n2,
    vmr_rwd_fix_leftarm_B.DataTypeConversion_c3,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor1,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor1);
}

/* Update for atomic system: '<S84>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_Update(void)
{
  /* Update for Memory: '<S105>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_e[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_nh[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_e[1];

  /* Update for Memory: '<S106>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_cg[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_he[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_cg[1];

  /* Update for Memory: '<S107>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_lw =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_av;
}

/* Termination for atomic system: '<S84>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S105>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043257, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1001);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S106>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043265, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1001);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S107>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex =
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370043277, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1001);
      }
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S85>/Control GDC Whistle State'
 *    '<S136>/Control GDC Whistle State'
 */
void vmr_rwd_fix_leftarm_ControlGDCWhistleState_Init
  (DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->permFaulted_not_empty = false;
  localDW->permFaulted = 0.0;
  localDW->countFaultSteps = 0.0;
  localDW->frameCounter = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S85>/Control GDC Whistle State'
 *    '<S136>/Control GDC Whistle State'
 */
void vmr_rwd_fix_leftarm_ControlGDCWhistleState(uint16_T rtu_StatusWord,
  uint32_T rtu_allOK, uint32_T rtu_motorOn, uint32_T rtu_ampStatus, uint32_T
  rtu_fault, uint32_T rtu_eStops, real_T rtu_EMCY, boolean_T rtu_masterEnabled,
  real_T rtu_requestEnable, real_T rtu_max_errors_to_fault,
  B_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localB,
  DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localDW)
{
  uint16_T StatusWord;
  uint16_T ControlWord;
  int32_T idx;
  int32_T b_ii;
  static const uint16_T ignorable_emcys[4] = { 0U, 10U, 65312U, 33072U };

  boolean_T exitg1;
  int32_T ii_sizes_idx_1;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State': '<S113>:1' */
  /*  This function outputs the appropriate ControlWord to control the state of the Elmo Drive. */
  /*  Need to decide why I would want Disabled state vs Ready to switch on state. */
  /*  TODO - deal with faults "better" */
  if (!localDW->permFaulted_not_empty) {
    /* '<S113>:1:8' */
    localDW->permFaulted_not_empty = true;

    /* '<S113>:1:12' */
    localDW->lastEStopState = rtu_eStops;
  }

  /*  Define the value of the StatusWord for different states of the Elmo drive.  */
  /*  Taken from the EtherCAT CoE Usage.xls from Elmo.  */
  /*  bit 9 = 1, because the Elmo drive is always in Remote mode, but I don't look at it. */
  /*  bit 4 = 1, because the voltage should be enabled */
  /*  bits 0-3, 6 define the state */
  /*  unclear on bits 10 and higher */
  /*  hex2dec('50'); */
  /*  hex2dec('31'); */
  /*  hex2dec('33');		% NOTE: We don't really need this state with the Elmo drive in Torque Mode */
  /*  hex2dec('37');		% Although we operate in this state, we don't actual need to query it */
  /*  hex2dec('18');		 */
  /*  Define the value of the ControlWord for different transitions */
  /*  Equal to transitions 7, 9 or 10 */
  /*  Technically this is just the "shutdown" transition. Equal to transitions 2, 6 or 8 */
  /*  Transition 3. As per SwitchedOn, we don't really need this one. */
  /*  Combines transitions 3 and 4 together = 0xF */
  /*  Transitions 15 together = 0x80 */
  /*  Mask the StatusWord input to bits 0-7 */
  /* '<S113>:1:36' */
  StatusWord = (uint16_T)(rtu_StatusWord & 127);

  /*  127 = 0x7F */
  /* '<S113>:1:38' */
  localB->motorStatus = 2U;

  /* motor is not working (red) */
  if ((!(rtu_fault != 0U)) && (rtu_allOK != 0U)) {
    /* '<S113>:1:39' */
    if (rtu_motorOn != 0U) {
      /* '<S113>:1:41' */
      localB->motorStatus = 0U;

      /* motor is working (green) */
    } else {
      /* '<S113>:1:43' */
      localB->motorStatus = 1U;

      /* motor is ready to work (yellow) */
    }
  }

  /* 0xff20 */
  /* 0xff10 */
  /* 0x8130 */
  /* 10 is a current limit */
  /* '<S113>:1:52' */
  idx = 0;
  ii_sizes_idx_1 = 1;
  b_ii = 1;
  exitg1 = false;
  while ((!exitg1) && (b_ii < 5)) {
    if (ignorable_emcys[b_ii - 1] == rtu_EMCY) {
      idx = 1;
      exitg1 = true;
    } else {
      b_ii++;
    }
  }

  if (idx == 0) {
    ii_sizes_idx_1 = 0;
  }

  /* '<S113>:1:53' */
  if ((rtu_EMCY != 0.0) && (!!(ii_sizes_idx_1 == 0))) {
    /* '<S113>:1:55' */
    if (rtu_EMCY == 65296.0) {
      /* '<S113>:1:56' */
      if (rtu_eStops == 0U) {
        /* '<S113>:1:57' */
        /* if the estops are not pressed but we couldn't start then we are truly faulted */
        /* '<S113>:1:58' */
        localDW->permFaulted = 1.0;
      }
    } else {
      /* '<S113>:1:61' */
      localDW->permFaulted = 1.0;
    }
  }

  /* is the amp is reporting it is working we can reset our count of faults */
  if (StatusWord == 55) {
    /* '<S113>:1:66' */
    /* '<S113>:1:67' */
    localDW->countFaultSteps = 0.0;
  }

  /* '<S113>:1:70' */
  ControlWord = 0U;
  if (StatusWord == 24) {
    /* '<S113>:1:72' */
    /* Only when the amp is ready to go can we try to enable it. Otherwise */
    /* we will flood the slrt stdout and slrt will CPU overload. */
    if ((rtu_ampStatus == 0U) && (localDW->permFaulted == 0.0) && (rtu_eStops ==
         0U) && rtu_masterEnabled) {
      /* '<S113>:1:75' */
      /*  change to the Disabled state if faulted */
      /* '<S113>:1:77' */
      ControlWord = 128U;

      /* if eStops == 0 %the emergency stops are not engaged, i.e. we can run with forces */
      /* '<S113>:1:79' */
      localDW->countFaultSteps++;

      /* when the emergency stop is released we get a few rounds where */
      /* there are faults. If we get lots of rounds where there are */
      /* faults then the motor is truly in a bad state and we should */
      /* not continue to ask it to start up. If we continue to ask then */
      /* we can get CPU overloads from all the MBX errors */
      if (localDW->countFaultSteps > rtu_max_errors_to_fault) {
        /* '<S113>:1:85' */
        /* '<S113>:1:86' */
        localDW->permFaulted = 1.0;
      }

      /*  end */
    } else {
      /* '<S113>:1:90' */
    }
  } else if ((StatusWord == 80) && (rtu_requestEnable != 0.0)) {
    /* '<S113>:1:92' */
    /*  change to the Ready to Switch On state if in the Switch On Disabled state AND enable has been requested */
    /* '<S113>:1:94' */
    ControlWord = 6U;
  } else {
    if (rtu_requestEnable != 0.0) {
      /* '<S113>:1:95' */
      /*  change to the Enabled state if in the Ready to Switch on state AND enable had been requested */
      /* '<S113>:1:97' */
      ControlWord = 15U;
    }
  }

  /* If the estop was hit while a task was running that generates a fault. When */
  /* the task is reset then later you disable the estop we need to try to clear */
  /* the error. */
  if ((ControlWord == 0) && (rtu_fault != 0U) && (!(rtu_eStops != 0U)) &&
      (localDW->lastEStopState != 0U)) {
    /* '<S113>:1:103' */
    /* '<S113>:1:104' */
    localDW->frameCounter = 0.0;
  }

  /* this code is trying to clear any faults found at start-up */
  /* 4khz * 3s - it takes ~1.8s to reach the op state and we need to do this after that */
  if ((localDW->frameCounter < 12000.0) && (rtu_allOK != 0U) && (rtu_ampStatus ==
       0U) && (!(localDW->permFaulted != 0.0)) && (!(rtu_eStops != 0U)) &&
      rtu_masterEnabled && (rtu_fault != 0U)) {
    /* '<S113>:1:109' */
    if (StatusWord == 80) {
      /* '<S113>:1:110' */
      /* '<S113>:1:111' */
      ControlWord = 6U;
    } else {
      if (StatusWord == 49) {
        /* '<S113>:1:112' */
        /* the only way to clear an error is to enable the drive. This should */
        /* enable the drive very briefly. The forces should still be off */
        /* though since they are controlled by the run state of the drive. */
        /* '<S113>:1:116' */
        ControlWord = 15U;
      }
    }
  }

  /* '<S113>:1:120' */
  localDW->lastEStopState = rtu_eStops;

  /* '<S113>:1:121' */
  localDW->frameCounter++;

  /* '<S113>:1:122' */
  localB->isPermFaulted = localDW->permFaulted;
  localB->ControlWord = ControlWord;
}

/* Initial conditions for atomic system: '<S85>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_m_Init(void)
{
  /* InitializeConditions for MATLAB Function: '<S114>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor_k);

  /* InitializeConditions for Memory: '<S118>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_hp;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_hp;

  /* InitializeConditions for Memory: '<S119>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_fd;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_fd;

  /* InitializeConditions for Memory: '<S120>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h3 =
    vmr_rwd_fix_leftarm_P.Memory_X0_a;

  /* InitializeConditions for Chart: '<S114>/Read EMCY' */
  vmr_rwd_fix_leftarm_DW.sfEvent_e = vmr_rwd_fix_leftarm_CALL_EVENT_il;
  vmr_rwd_fix_leftarm_DW.is_active_c101_ethercat = 0U;
  vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_p;
  vmr_rwd_fix_leftarm_DW.currReadIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.valuesToRead = 0.0;
  vmr_rwd_fix_leftarm_B.triggerCountRead = 0;
  vmr_rwd_fix_leftarm_B.emcyReadTrigger[0] = 0;
  vmr_rwd_fix_leftarm_B.emcyReadTrigger[1] = 0;
  vmr_rwd_fix_leftarm_B.countOverwriteTrigger = 0;
  vmr_rwd_fix_leftarm_B.emcyValPump[0] = 0.0;
  vmr_rwd_fix_leftarm_B.emcyValPump[1] = 0.0;
  vmr_rwd_fix_leftarm_B.emcyValPump[2] = 0.0;

  /* InitializeConditions for MATLAB Function: '<S114>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_l);
}

/* Start for atomic system: '<S85>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_k_Start(void)
{
  /* Start for Constant: '<S114>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_a = vmr_rwd_fix_leftarm_P.driveID_Value_c;
}

/* Outputs for atomic system: '<S85>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_o(void)
{
  /* DataTypeConversion: '<S114>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_kb =
    vmr_rwd_fix_leftarm_B.Statusword_b;

  /* MATLAB Function: '<S114>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor(vmr_rwd_fix_leftarm_B.Statusword_b,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor_k,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor_k);

  /* Constant: '<S114>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_a = vmr_rwd_fix_leftarm_P.driveID_Value_c;

  /* Memory: '<S118>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_d4[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[0];
  vmr_rwd_fix_leftarm_B.Memory_d4[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[1];

  /* DataTypeConversion: '<S118>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[0] =
    vmr_rwd_fix_leftarm_B.Memory_d4[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[1] =
    vmr_rwd_fix_leftarm_B.Memory_d4[1];

  /* Memory: '<S119>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_k[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[0];
  vmr_rwd_fix_leftarm_B.Memory_k[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[1];

  /* DataTypeConversion: '<S119>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_m[0] =
    vmr_rwd_fix_leftarm_B.Memory_k[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_m[1] =
    vmr_rwd_fix_leftarm_B.Memory_k[1];

  /* Memory: '<S120>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_dt =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h3;

  /* Chart: '<S114>/Read EMCY' */
  /* Gateway: EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY */
  vmr_rwd_fix_leftarm_DW.sfEvent_e = vmr_rwd_fix_leftarm_CALL_EVENT_il;

  /* During: EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY */
  if (vmr_rwd_fix_leftarm_DW.is_active_c101_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY */
    vmr_rwd_fix_leftarm_DW.is_active_c101_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY */
    /* Transition: '<S117>:140' */
    vmr_rwd_fix_leftarm_DW.is_c101_ethercat = vmr_rwd_fix_leftarm_IN_setup_m;
  } else {
    switch (vmr_rwd_fix_leftarm_DW.is_c101_ethercat) {
     case vmr_rwd_fix_leftarm_IN_DoneClearing_m:
      /* During 'DoneClearing': '<S117>:197' */
      /* Transition: '<S117>:200' */
      vmr_rwd_fix_leftarm_DW.is_c101_ethercat = vmr_rwd_fix_leftarm_IN_setup_m;
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextEMCY_l:
      /* During 'ReadNextEMCY': '<S117>:184' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion_m[1] == 1.0) {
        /* Transition: '<S117>:187' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_disableEMCY_m;

        /* Entry 'disableEMCY': '<S117>:186' */
        vmr_rwd_fix_leftarm_B.emcyReadTrigger[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReceivedFloat_a:
      /* During 'ReceivedFloat': '<S117>:188' */
      if (vmr_rwd_fix_leftarm_DW.currReadIdx <=
          vmr_rwd_fix_leftarm_DW.valuesToRead) {
        /* Transition: '<S117>:192' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_ReadNextEMCY_l;

        /* Entry 'ReadNextEMCY': '<S117>:184' */
        vmr_rwd_fix_leftarm_B.emcyReadTrigger[0] = 1;
        vmr_rwd_fix_leftarm_B.emcyReadTrigger[1] = (int32_T)
          vmr_rwd_fix_leftarm_DW.currReadIdx;
      } else {
        /* Transition: '<S117>:191' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_StartOverwrite_b;

        /* Entry 'StartOverwrite': '<S117>:193' */
        vmr_rwd_fix_leftarm_B.countOverwriteTrigger = 1;
        vmr_rwd_fix_leftarm_B.emcyValPump[0] = 0.0;
        vmr_rwd_fix_leftarm_B.emcyValPump[1] = 0.0;
        vmr_rwd_fix_leftarm_B.emcyValPump[2] = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartOverwrite_b:
      /* During 'StartOverwrite': '<S117>:193' */
      if (vmr_rwd_fix_leftarm_B.Memory_dt == 1.0) {
        /* Transition: '<S117>:223' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_DoneClearing_m;

        /* Entry 'DoneClearing': '<S117>:197' */
        vmr_rwd_fix_leftarm_B.countOverwriteTrigger = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartReadingCount_k:
      /* During 'StartReadingCount': '<S117>:141' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[1] == 1.0) {
        /* Transition: '<S117>:157' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_disableCount_c;

        /* Entry 'disableCount': '<S117>:156' */
        vmr_rwd_fix_leftarm_B.triggerCountRead = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableCount_c:
      /* During 'disableCount': '<S117>:156' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[1] >= 2.0) {
        /* Transition: '<S117>:143' */
        if (vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[0] == 0.0) {
          /* Transition: '<S117>:219' */
          vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
            vmr_rwd_fix_leftarm_IN_setup_m;
        } else {
          /* Transition: '<S117>:220' */
          vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
            vmr_rwd_fix_leftarm_IN_startEMCYs_hm;

          /* Entry 'startEMCYs': '<S117>:183' */
          vmr_rwd_fix_leftarm_DW.currReadIdx = 1.0;
          vmr_rwd_fix_leftarm_DW.valuesToRead =
            vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[1];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableEMCY_m:
      /* During 'disableEMCY': '<S117>:186' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion_m[1] >= 2.0) {
        /* Transition: '<S117>:189' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_ReceivedFloat_a;

        /* Entry 'ReceivedFloat': '<S117>:188' */
        vmr_rwd_fix_leftarm_B.emcyValPump[0] = 1.0;

        /* ID for EMCY messge */
        vmr_rwd_fix_leftarm_B.emcyValPump[1] = vmr_rwd_fix_leftarm_B.driveID_a;
        vmr_rwd_fix_leftarm_B.emcyValPump[2] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion_m[0];
        vmr_rwd_fix_leftarm_DW.currReadIdx++;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_setup_m:
      /* During 'setup': '<S117>:139' */
      if (vmr_rwd_fix_leftarm_B.sf_faultmonitor_k.triggerFaultRead == 1.0) {
        /* Transition: '<S117>:145' */
        vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
          vmr_rwd_fix_leftarm_IN_StartReadingCount_k;

        /* Entry 'StartReadingCount': '<S117>:141' */
        vmr_rwd_fix_leftarm_B.triggerCountRead = 1;
      }
      break;

     default:
      /* During 'startEMCYs': '<S117>:183' */
      /* Transition: '<S117>:185' */
      vmr_rwd_fix_leftarm_DW.is_c101_ethercat =
        vmr_rwd_fix_leftarm_IN_ReadNextEMCY_l;

      /* Entry 'ReadNextEMCY': '<S117>:184' */
      vmr_rwd_fix_leftarm_B.emcyReadTrigger[0] = 1;
      vmr_rwd_fix_leftarm_B.emcyReadTrigger[1] = (int32_T)
        vmr_rwd_fix_leftarm_DW.currReadIdx;
      break;
    }
  }

  /* End of Chart: '<S114>/Read EMCY' */

  /* DataTypeConversion: '<S118>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_n =
    vmr_rwd_fix_leftarm_B.triggerCountRead;

  /* S-Function (BKINethercatasyncsdoupload): '<S118>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_ln;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_d;
        enInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_n;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_gd;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_h4;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1002,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043341,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S118>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_ke = (uint32_T)
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_d;

  /* RateTransition: '<S118>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_m[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_ln;
  vmr_rwd_fix_leftarm_B.RateTransition_m[1] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_ke;

  /* S-Function (BKINethercatasyncsdoupload): '<S119>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_n;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_k;
        enInputPtr = &vmr_rwd_fix_leftarm_B.emcyReadTrigger[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_iv;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.emcyReadTrigger[1];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1002,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043352,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[7] = 1;
        ;
      }
    }
  }

  /* RateTransition: '<S119>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_o[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_n;
  vmr_rwd_fix_leftarm_B.RateTransition_o[1] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_k;

  /* DataTypeConversion: '<S120>/Data Type Conversion' incorporates:
   *  Constant: '<S120>/Constant'
   */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_gy = (int32_T)
    vmr_rwd_fix_leftarm_P.Constant_Value_nx;

  /* S-Function (BKINethercatasyncsdodownload): '<S120>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_a;
        sigInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_nx;
        enInputPtr = &vmr_rwd_fix_leftarm_B.countOverwriteTrigger;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_m;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_gy;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g[7] != 0)
        {
          res = ecatAsyncSDODownload(deviceIndex,
            1002,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            370043361,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S120>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_i =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_a;

  /* MATLAB Function: '<S114>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1(vmr_rwd_fix_leftarm_B.emcyValPump,
    vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.ampStatus,
    vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.currentLimitEnabled,
    vmr_rwd_fix_leftarm_B.statusregister_c, vmr_rwd_fix_leftarm_B.driveID_a,
    vmr_rwd_fix_leftarm_B.DataTypeConversion_kb,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_l);
}

/* Update for atomic system: '<S85>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_e_Update(void)
{
  /* Update for Memory: '<S118>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_m[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_n[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_m[1];

  /* Update for Memory: '<S119>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_o[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_id[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_o[1];

  /* Update for Memory: '<S120>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h3 =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i;
}

/* Termination for atomic system: '<S85>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_h_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S118>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043341, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1002);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S119>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043352, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1002);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S120>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370043361, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1002);
      }
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S74>/Find Robot type'
 *    '<S75>/Find Robot type'
 */
void vmr_rwd_fix_leftarm_FindRobottype(const int32_T rtu_intVals[20], const
  real_T rtu_epPNs[6], const real_T rtu_nhpPNs[6],
  B_FindRobottype_vmr_rwd_fix_leftarm_T *localB)
{
  boolean_T x[6];
  int32_T b_ii;
  boolean_T exitg2;
  int32_T i;
  int32_T ii_sizes;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/Find Robot type': '<S86>:1' */
  /* '<S86>:1:7' */
  localB->robotType = 0.0;

  /* 0=exo, 1=ep, 2=NHP     */
  /* '<S86>:1:8' */
  for (i = 0; i < 6; i++) {
    x[i] = (rtu_epPNs[i] == rtu_intVals[1]);
  }

  i = 0;
  ii_sizes = 1;
  b_ii = 1;
  exitg2 = false;
  while ((!exitg2) && (b_ii < 7)) {
    if (x[b_ii - 1]) {
      i = 1;
      exitg2 = true;
    } else {
      b_ii++;
    }
  }

  if (i == 0) {
    ii_sizes = 0;
  }

  if (!(ii_sizes == 0)) {
    /* '<S86>:1:9' */
    /* '<S86>:1:10' */
    localB->robotType = 1.0;
  } else {
    for (i = 0; i < 6; i++) {
      x[i] = (rtu_nhpPNs[i] == rtu_intVals[1]);
    }

    i = 0;
    ii_sizes = 1;
    b_ii = 1;
    exitg2 = false;
    while ((!exitg2) && (b_ii < 7)) {
      if (x[b_ii - 1]) {
        i = 1;
        exitg2 = true;
      } else {
        b_ii++;
      }
    }

    if (i == 0) {
      ii_sizes = 0;
    }

    if (!(ii_sizes == 0)) {
      /* '<S86>:1:11' */
      /* '<S86>:1:12' */
      localB->robotType = 2.0;
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S87>/AbsEncoder machine'
 *    '<S88>/AbsEncoder machine'
 *    '<S139>/AbsEncoder machine'
 *    '<S140>/AbsEncoder machine'
 */
void vmr_rwd_fix_leftarm_AbsEncodermachine_Init
  (B_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localB,
   DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_h;
  localDW->is_active_c43_ethercat = 0U;
  localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD;
  localDW->setupIdx = 0;
  localDW->donePolling = 0;
  localDW->encoderIdx = 0.0;
  localB->setupData[0] = 0;
  localB->setupData[1] = 0;
  localB->setupData[2] = 0;
  localB->setupData[3] = 0;
  localB->SDORequest[0] = 0;
  localB->SDORequest[1] = 0;
  localB->SDORequest[2] = 0;
  localB->encoderOutputs[0] = 0;
  localB->encoderOutputs[1] = 0;
  localB->encoderOutputs[2] = 0;
  localB->encoderOutputs[3] = 0;
  localB->encoderOutputs[4] = 0;
  localB->encoderOutputs[5] = 0;
  localB->complete = 0;
}

/*
 * Output and update for atomic system:
 *    '<S87>/AbsEncoder machine'
 *    '<S88>/AbsEncoder machine'
 *    '<S139>/AbsEncoder machine'
 *    '<S140>/AbsEncoder machine'
 */
void vmr_rwd_fix_leftarm_AbsEncodermachine(const real_T rtu_setupValues[24],
  real_T rtu_setupValuesCount, const real_T rtu_pollValues[3], const real_T
  rtu_encoderValues[12], real_T rtu_encoderValuesCount, int32_T rtu_intStatus,
  const int32_T rtu_pollResponse[2], B_AbsEncodermachine_vmr_rwd_fix_leftarm_T
  *localB, DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localDW)
{
  /* Gateway: EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine */
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_h;

  /* During: EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine */
  if (localDW->is_active_c43_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine */
    localDW->is_active_c43_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine */
    /* Transition: '<S124>:140' */
    localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_setup;

    /* Entry 'setup': '<S124>:139' */
    localDW->setupIdx = 0;
    localDW->donePolling = 0;
  } else {
    switch (localDW->is_c43_ethercat) {
     case vmr_rwd_fix_leftarm_IN_Complete:
      /* During 'Complete': '<S124>:200' */
      break;

     case vmr_rwd_fix_leftarm_IN_Done:
      /* During 'Done': '<S124>:146' */
      /* Transition: '<S124>:173' */
      localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_startPolling;

      /* Entry 'startPolling': '<S124>:172' */
      localB->SDORequest[0] = 1;
      localB->SDORequest[1] = (int32_T)rtu_pollValues[0];
      localB->SDORequest[2] = (int32_T)rtu_pollValues[1];
      break;

     case vmr_rwd_fix_leftarm_IN_PollingComplete:
      /* During 'PollingComplete': '<S124>:181' */
      /* Transition: '<S124>:192' */
      localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_encoderReadSetup;

      /* Entry 'encoderReadSetup': '<S124>:191' */
      localDW->encoderIdx = 0.0;
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNext:
      /* During 'ReadNext': '<S124>:141' */
      if (rtu_intStatus == 1) {
        /* Transition: '<S124>:157' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_disable;

        /* Entry 'disable': '<S124>:156' */
        localB->setupData[1] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextEncoder:
      /* During 'ReadNextEncoder': '<S124>:193' */
      if (rtu_pollResponse[1] == 1) {
        /* Transition: '<S124>:196' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_disableRead;

        /* Entry 'disableRead': '<S124>:195' */
        localB->SDORequest[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Received:
      /* During 'Received': '<S124>:142' */
      if (localDW->setupIdx + 1 > rtu_setupValuesCount) {
        /* Transition: '<S124>:147' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_Done;

        /* Entry 'Done': '<S124>:146' */
        localDW->setupIdx = -1;
      } else {
        if (rtu_intStatus == 0) {
          /* Transition: '<S124>:144' */
          localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_ReadNext;

          /* Entry 'ReadNext': '<S124>:141' */
          localDW->setupIdx++;
          localB->setupData[0] = (int32_T)rtu_setupValues[localDW->setupIdx + 15];
          localB->setupData[1] = 1;
          localB->setupData[2] = (int32_T)rtu_setupValues[localDW->setupIdx - 1];
          localB->setupData[3] = (int32_T)rtu_setupValues[localDW->setupIdx + 7];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disable:
      /* During 'disable': '<S124>:156' */
      if (rtu_intStatus >= 2) {
        /* Transition: '<S124>:143' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_Received;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disable1:
      /* During 'disable1': '<S124>:174' */
      if (rtu_pollResponse[1] >= 2) {
        /* Transition: '<S124>:179' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_pollReceived;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableRead:
      /* During 'disableRead': '<S124>:195' */
      if (rtu_pollResponse[1] >= 2) {
        /* Transition: '<S124>:198' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_receivedEncoder;

        /* Entry 'receivedEncoder': '<S124>:197' */
        localB->encoderOutputs[(int32_T)(localDW->encoderIdx - 1.0)] =
          rtu_pollResponse[0];
      }
      break;

     case vmr_rwd_fix_leftarm_IN_encoderReadSetup:
      /* During 'encoderReadSetup': '<S124>:191' */
      /* Transition: '<S124>:194' */
      localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextEncoder;

      /* Entry 'ReadNextEncoder': '<S124>:193' */
      localDW->encoderIdx++;
      localB->SDORequest[0] = 1;
      localB->SDORequest[1] = (int32_T)rtu_encoderValues[(int32_T)
        (localDW->encoderIdx - 1.0)];
      localB->SDORequest[2] = (int32_T)rtu_encoderValues[(int32_T)
        (localDW->encoderIdx - 1.0) + 6];
      break;

     case vmr_rwd_fix_leftarm_IN_pollReceived:
      /* During 'pollReceived': '<S124>:178' */
      if (rtu_pollResponse[0] != rtu_pollValues[2]) {
        /* Transition: '<S124>:180' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_startPolling;

        /* Entry 'startPolling': '<S124>:172' */
        localB->SDORequest[0] = 1;
        localB->SDORequest[1] = (int32_T)rtu_pollValues[0];
        localB->SDORequest[2] = (int32_T)rtu_pollValues[1];
      } else {
        /* Transition: '<S124>:189' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_PollingComplete;

        /* Entry 'PollingComplete': '<S124>:181' */
        localDW->donePolling = 1;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_receivedEncoder:
      /* During 'receivedEncoder': '<S124>:197' */
      if (localDW->encoderIdx + 1.0 > rtu_encoderValuesCount) {
        /* Transition: '<S124>:201' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_Complete;

        /* Entry 'Complete': '<S124>:200' */
        localB->complete = 1;
      } else {
        /* Transition: '<S124>:199' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextEncoder;

        /* Entry 'ReadNextEncoder': '<S124>:193' */
        localDW->encoderIdx++;
        localB->SDORequest[0] = 1;
        localB->SDORequest[1] = (int32_T)rtu_encoderValues[(int32_T)
          (localDW->encoderIdx - 1.0)];
        localB->SDORequest[2] = (int32_T)rtu_encoderValues[(int32_T)
          (localDW->encoderIdx - 1.0) + 6];
      }
      break;

     case vmr_rwd_fix_leftarm_IN_setup:
      /* During 'setup': '<S124>:139' */
      /* Transition: '<S124>:145' */
      localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_ReadNext;

      /* Entry 'ReadNext': '<S124>:141' */
      localDW->setupIdx++;
      localB->setupData[0] = (int32_T)rtu_setupValues[localDW->setupIdx + 15];
      localB->setupData[1] = 1;
      localB->setupData[2] = (int32_T)rtu_setupValues[localDW->setupIdx - 1];
      localB->setupData[3] = (int32_T)rtu_setupValues[localDW->setupIdx + 7];
      break;

     default:
      /* During 'startPolling': '<S124>:172' */
      if (rtu_pollResponse[1] == 1) {
        /* Transition: '<S124>:175' */
        localDW->is_c43_ethercat = vmr_rwd_fix_leftarm_IN_disable1;

        /* Entry 'disable1': '<S124>:174' */
        localB->SDORequest[0] = 0;
      }
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S87>/set-up values'
 *    '<S88>/set-up values'
 *    '<S139>/set-up values'
 *    '<S140>/set-up values'
 */
void vmr_rwd_fix_leftarm_setupvalues(B_setupvalues_vmr_rwd_fix_leftarm_T *localB)
{
  static const int16_T tmp[24] = { 12475, 12475, 12475, 12475, 12475, 12475,
    12475, 12475, 3, 4, 5, 10, 11, 12, 13, 1, 3, 2, 2, 2, 4, 19, 24, 6 };

  static const int16_T tmp_0[12] = { 12032, 12032, 12032, 12032, 12032, 12032,
    19, 20, 21, 22, 23, 24 };

  int32_T i;
  for (i = 0; i < 24; i++) {
    localB->setupValues[i] = tmp[i];
  }

  localB->pollValues[0] = 12475.0;
  localB->pollValues[1] = 1.0;
  localB->pollValues[2] = 0.0;
  for (i = 0; i < 12; i++) {
    localB->encoderValues[i] = tmp_0[i];
  }

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values': '<S125>:1' */
  /* this is an array of [address, sub index, value to write]. These all */
  /* came from HAR-568. */
  /*  %record the low to high transition */
  /*  %(do nothing when the capture is complete) */
  /*  % (do not change encoder position value to a present value upon completion; we need to use an algorithm to decide this afterwards) */
  /*  % (Socket used for this stuff; i.e. the secondary encoder is socket #2 */
  /*  % (Store in UI array where this is stored. Of the 5 options, only UI can be read using ECAT) */
  /*  %(start of capture array indices) */
  /*  % (end of capture array indices) */
  /*  %  (# events to record) */
  /* '<S125>:1:5' */
  /* '<S125>:1:16' */
  localB->setupValuesCount = 8.0;

  /* '<S125>:1:18' */
  /* When this addr is 0 then the values have all been read */
  /*  % GI - 0x2f00 */
  /* '<S125>:1:20' */
  /* '<S125>:1:29' */
  localB->encoderValuesCount = 6.0;
}

/* Function for Chart: '<S74>/SDO read machine' */
static void vmr_rwd_fix_leftarm_clearValues
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB)
{
  int32_T n;

  /* MATLAB Function 'clearValues': '<S89>:167' */
  /* '<S89>:167:2' */
  /* '<S89>:167:6' */
  for (n = 0; n < 20; n++) {
    /* '<S89>:167:2' */
    /* '<S89>:167:3' */
    localB->intSDOValues[n] = 0;

    /* '<S89>:167:2' */
    /* '<S89>:167:6' */
    /* '<S89>:167:7' */
    localB->floatSDOValues[n] = 0.0;

    /* '<S89>:167:6' */
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S74>/SDO read machine'
 *    '<S75>/SDO read machine'
 */
void vmr_rwd_fix_leftarm_SDOreadmachine_Init
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB,
   DW_SDOreadmachine_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_lt;
  localDW->is_active_c49_ethercat = 0U;
  localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c;
  localDW->valueIdx = 0;
  localDW->lastTrigger = -1;
  localDW->valueCount = 0.0;
  localB->SDOCommand[0] = 0;
  localB->SDOCommand[1] = 0;
  localB->SDOCommand[2] = 0;
  localB->intSDOValues[0] = 0;
  localB->intSDOValues[1] = 0;
  localB->intSDOValues[2] = 0;
  localB->intSDOValues[3] = 0;
  localB->intSDOValues[4] = 0;
  localB->intSDOValues[5] = 0;
  localB->intSDOValues[6] = 0;
  localB->intSDOValues[7] = 0;
  localB->intSDOValues[8] = 0;
  localB->intSDOValues[9] = 0;
  localB->intSDOValues[10] = 0;
  localB->intSDOValues[11] = 0;
  localB->intSDOValues[12] = 0;
  localB->intSDOValues[13] = 0;
  localB->intSDOValues[14] = 0;
  localB->intSDOValues[15] = 0;
  localB->intSDOValues[16] = 0;
  localB->intSDOValues[17] = 0;
  localB->intSDOValues[18] = 0;
  localB->intSDOValues[19] = 0;
  localB->floatSDOValues[0] = 0.0;
  localB->floatSDOValues[1] = 0.0;
  localB->floatSDOValues[2] = 0.0;
  localB->floatSDOValues[3] = 0.0;
  localB->floatSDOValues[4] = 0.0;
  localB->floatSDOValues[5] = 0.0;
  localB->floatSDOValues[6] = 0.0;
  localB->floatSDOValues[7] = 0.0;
  localB->floatSDOValues[8] = 0.0;
  localB->floatSDOValues[9] = 0.0;
  localB->floatSDOValues[10] = 0.0;
  localB->floatSDOValues[11] = 0.0;
  localB->floatSDOValues[12] = 0.0;
  localB->floatSDOValues[13] = 0.0;
  localB->floatSDOValues[14] = 0.0;
  localB->floatSDOValues[15] = 0.0;
  localB->floatSDOValues[16] = 0.0;
  localB->floatSDOValues[17] = 0.0;
  localB->floatSDOValues[18] = 0.0;
  localB->floatSDOValues[19] = 0.0;
  localB->complete = 0;
}

/*
 * Output and update for atomic system:
 *    '<S74>/SDO read machine'
 *    '<S75>/SDO read machine'
 */
void vmr_rwd_fix_leftarm_SDOreadmachine(int32_T rtu_triggerReading, const real_T
  rtu_intReadAddrs[24], real_T rtu_intCount, int32_T rtu_intSDOResponse, const
  real_T rtu_floatReadAddrs[24], real_T rtu_floatCount, real_T
  rtu_floatSDOResponse, real_T rtu_status,
  B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB,
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_T *localDW)
{
  /* Gateway: EtherCAT Subsystem/Arm 1/SDO read machine */
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_lt;

  /* During: EtherCAT Subsystem/Arm 1/SDO read machine */
  if (localDW->is_active_c49_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/SDO read machine */
    localDW->is_active_c49_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/SDO read machine */
    /* Transition: '<S89>:140' */
    localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_setup_g;

    /* Entry 'setup': '<S89>:139' */
    localDW->valueIdx = 0;
    localB->complete = 0;
    vmr_rwd_fix_leftarm_clearValues(localB);
    localDW->valueCount = rtu_intCount;
  } else {
    switch (localDW->is_c49_ethercat) {
     case vmr_rwd_fix_leftarm_IN_Done_e:
      /* During 'Done': '<S89>:146' */
      if (rtu_triggerReading != localDW->lastTrigger) {
        /* Transition: '<S89>:164' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_setup_g;

        /* Entry 'setup': '<S89>:139' */
        localDW->valueIdx = 0;
        localB->complete = 0;
        vmr_rwd_fix_leftarm_clearValues(localB);
        localDW->valueCount = rtu_intCount;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextFloat:
      /* During 'ReadNextFloat': '<S89>:184' */
      if (rtu_status == 1.0) {
        /* Transition: '<S89>:187' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_disableFloat;

        /* Entry 'disableFloat': '<S89>:186' */
        localB->SDOCommand[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextInt:
      /* During 'ReadNextInt': '<S89>:141' */
      if (rtu_status == 1.0) {
        /* Transition: '<S89>:157' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_disableInt;

        /* Entry 'disableInt': '<S89>:156' */
        localB->SDOCommand[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReceivedFloat:
      /* During 'ReceivedFloat': '<S89>:188' */
      if (localDW->valueIdx + 1 > localDW->valueCount) {
        /* Transition: '<S89>:191' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_Done_e;

        /* Entry 'Done': '<S89>:146' */
        localB->complete = 1;
        localDW->lastTrigger = rtu_triggerReading;
      } else {
        if (rtu_status == 0.0) {
          /* Transition: '<S89>:192' */
          localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextFloat;

          /* Entry 'ReadNextFloat': '<S89>:184' */
          localDW->valueIdx++;
          localB->SDOCommand[0] = 1;
          localB->SDOCommand[1] = (int32_T)rtu_floatReadAddrs[localDW->valueIdx
            - 1];
          localB->SDOCommand[2] = (int32_T)rtu_floatReadAddrs[localDW->valueIdx
            + 11];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReceivedInt:
      /* During 'ReceivedInt': '<S89>:142' */
      if (localDW->valueIdx + 1 > localDW->valueCount) {
        /* Transition: '<S89>:147' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_startFloats;

        /* Entry 'startFloats': '<S89>:183' */
        localDW->valueCount = rtu_floatCount;
        localDW->valueIdx = 0;
      } else {
        if (rtu_status == 0.0) {
          /* Transition: '<S89>:144' */
          localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextInt;

          /* Entry 'ReadNextInt': '<S89>:141' */
          localDW->valueIdx++;
          localB->SDOCommand[0] = 1;
          localB->SDOCommand[1] = (int32_T)rtu_intReadAddrs[localDW->valueIdx -
            1];
          localB->SDOCommand[2] = (int32_T)rtu_intReadAddrs[localDW->valueIdx +
            11];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableFloat:
      /* During 'disableFloat': '<S89>:186' */
      if (rtu_status >= 2.0) {
        /* Transition: '<S89>:189' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReceivedFloat;

        /* Entry 'ReceivedFloat': '<S89>:188' */
        localB->floatSDOValues[localDW->valueIdx - 1] = rtu_floatSDOResponse;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableInt:
      /* During 'disableInt': '<S89>:156' */
      if (rtu_status >= 2.0) {
        /* Transition: '<S89>:143' */
        localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReceivedInt;

        /* Entry 'ReceivedInt': '<S89>:142' */
        localB->intSDOValues[localDW->valueIdx - 1] = rtu_intSDOResponse;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_setup_g:
      /* During 'setup': '<S89>:139' */
      /* Transition: '<S89>:145' */
      localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextInt;

      /* Entry 'ReadNextInt': '<S89>:141' */
      localDW->valueIdx++;
      localB->SDOCommand[0] = 1;
      localB->SDOCommand[1] = (int32_T)rtu_intReadAddrs[localDW->valueIdx - 1];
      localB->SDOCommand[2] = (int32_T)rtu_intReadAddrs[localDW->valueIdx + 11];
      break;

     default:
      /* During 'startFloats': '<S89>:183' */
      /* Transition: '<S89>:185' */
      localDW->is_c49_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextFloat;

      /* Entry 'ReadNextFloat': '<S89>:184' */
      localDW->valueIdx++;
      localB->SDOCommand[0] = 1;
      localB->SDOCommand[1] = (int32_T)rtu_floatReadAddrs[localDW->valueIdx - 1];
      localB->SDOCommand[2] = (int32_T)rtu_floatReadAddrs[localDW->valueIdx + 11];
      break;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S128>/converter'
 *    '<S134>/converter'
 *    '<S180>/converter'
 *    '<S186>/converter'
 */
void vmr_rwd_fix_leftarm_converter(uint32_T rtu_inVal,
  B_converter_vmr_rwd_fix_leftarm_T *localB)
{
  uint32_T uint32Out;
  int32_T int32Out;
  real32_T y;

  /* MATLAB Function 'Read Drive 1 SDO/converter': '<S131>:1' */
  /* '<S131>:1:4' */
  memcpy(&uint32Out, &rtu_inVal, (size_t)1 * sizeof(uint32_T));

  /* '<S131>:1:5' */
  memcpy(&int32Out, &rtu_inVal, (size_t)1 * sizeof(int32_T));

  /* '<S131>:1:6' */
  memcpy(&y, &rtu_inVal, (size_t)1 * sizeof(real32_T));
  localB->uint32Out = uint32Out;
  localB->int32Out = int32Out;
  localB->doubleOut = y;
}

/* Output and update for atomic system: '<S90>/Read Drive 1 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive1SDO(void)
{
  /* S-Function (BKINethercatasyncsdoupload): '<S128>/BKIN EtherCAT Async SDO Upload1' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_p;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_i;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.enable;
        indexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_l;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion1_dx;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[7] != 0)
        {
          res = ecatAsyncSDOUpload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            35101310,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S128>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_ba =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_i;

  /* MATLAB Function: '<S128>/converter' */
  vmr_rwd_fix_leftarm_converter
    (vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_p,
     &vmr_rwd_fix_leftarm_B.sf_converter);
}

/* Termination for atomic system: '<S90>/Read Drive 1 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive1SDO_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S128>/BKIN EtherCAT Async SDO Upload1' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(35101310, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1001);
      }
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S90>/SDO read machine'
 *    '<S142>/SDO read machine'
 */
void vmr_rwd_fix_leftarm_SDOreadmachine_c_Init
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T *localB,
   DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T *localDW)
{
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_lg;
  localDW->is_active_c50_ethercat = 0U;
  localDW->is_c50_ethercat = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_b;
  localDW->lastTriggerValue = 0;
  localB->enable = 0;
  localB->complete = 0;
}

/*
 * Output and update for atomic system:
 *    '<S90>/SDO read machine'
 *    '<S142>/SDO read machine'
 */
void vmr_rwd_fix_leftarm_SDOreadmachine_p(real_T rtu_triggerWriting, real_T
  rtu_readState, B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T *localB,
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T *localDW)
{
  boolean_T guard1 = false;

  /* Gateway: EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine */
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_lg;

  /* During: EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine */
  if (localDW->is_active_c50_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine */
    localDW->is_active_c50_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine */
    /* Transition: '<S129>:140' */
    localDW->is_c50_ethercat = vmr_rwd_fix_leftarm_IN_setup_a;

    /* Entry 'setup': '<S129>:139' */
    localB->enable = 0;
  } else {
    switch (localDW->is_c50_ethercat) {
     case vmr_rwd_fix_leftarm_IN_ReadNext_n:
      /* During 'ReadNext': '<S129>:141' */
      if (rtu_readState == 1.0) {
        /* Transition: '<S129>:157' */
        localDW->is_c50_ethercat = vmr_rwd_fix_leftarm_IN_disable_a;

        /* Entry 'disable': '<S129>:156' */
        localB->enable = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disable_a:
      /* During 'disable': '<S129>:156' */
      if (rtu_readState == 2.0) {
        /* Transition: '<S129>:143' */
        localB->complete = 1;
        guard1 = true;
      } else {
        if (rtu_readState == 3.0) {
          /* Transition: '<S129>:169' */
          localB->complete = -1;
          guard1 = true;
        }
      }
      break;

     default:
      /* During 'setup': '<S129>:139' */
      if (rtu_triggerWriting != localDW->lastTriggerValue) {
        /* Transition: '<S129>:145' */
        localDW->is_c50_ethercat = vmr_rwd_fix_leftarm_IN_ReadNext_n;

        /* Entry 'ReadNext': '<S129>:141' */
        localB->enable = 1;
        localB->complete = 0;
      }
      break;
    }

    if (guard1) {
      /* Transition: '<S129>:167' */
      localDW->lastTriggerValue = (int32_T)rtu_triggerWriting;
      localDW->is_c50_ethercat = vmr_rwd_fix_leftarm_IN_setup_a;

      /* Entry 'setup': '<S129>:139' */
      localB->enable = 0;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S90>/values'
 *    '<S142>/values'
 */
void vmr_rwd_fix_leftarm_values(real_T rtu_inVal, real_T rtu_inVal_g, real_T
  rtu_inVal_o, B_values_vmr_rwd_fix_leftarm_T *localB)
{
  /* SignalConversion: '<S130>/TmpSignal ConversionAt SFunction Inport1' */
  localB->TmpSignalConversionAtSFunctionInport1[0] = rtu_inVal;
  localB->TmpSignalConversionAtSFunctionInport1[1] = rtu_inVal_g;
  localB->TmpSignalConversionAtSFunctionInport1[2] = rtu_inVal_o;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/SDO reading/values': '<S130>:1' */
  /* this is only useful so that I can read the signals! */
  /* '<S130>:1:4' */
  localB->outVal[0] = localB->TmpSignalConversionAtSFunctionInport1[0];
  localB->outVal[1] = localB->TmpSignalConversionAtSFunctionInport1[1];
  localB->outVal[2] = localB->TmpSignalConversionAtSFunctionInport1[2];
}

/* Initial conditions for atomic system: '<S74>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_Init(void)
{
  /* InitializeConditions for Memory: '<S90>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_d =
    vmr_rwd_fix_leftarm_P.Memory_X0_j;

  /* InitializeConditions for Chart: '<S90>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_c_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p,
     &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_p);
}

/* Start for atomic system: '<S74>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_Start(void)
{
  /* Start for Constant: '<S90>/readAddr' */
  vmr_rwd_fix_leftarm_B.readAddr_p[0] = vmr_rwd_fix_leftarm_P.readAddr_Value[0];
  vmr_rwd_fix_leftarm_B.readAddr_p[1] = vmr_rwd_fix_leftarm_P.readAddr_Value[1];
  vmr_rwd_fix_leftarm_B.readAddr_p[2] = vmr_rwd_fix_leftarm_P.readAddr_Value[2];
}

/* Outputs for atomic system: '<S74>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading(void)
{
  real_T tmp;

  /* Constant: '<S90>/readAddr' */
  vmr_rwd_fix_leftarm_B.readAddr_p[0] = vmr_rwd_fix_leftarm_P.readAddr_Value[0];
  vmr_rwd_fix_leftarm_B.readAddr_p[1] = vmr_rwd_fix_leftarm_P.readAddr_Value[1];
  vmr_rwd_fix_leftarm_B.readAddr_p[2] = vmr_rwd_fix_leftarm_P.readAddr_Value[2];

  /* DataTypeConversion: '<S90>/Data Type Conversion1' */
  tmp = floor(vmr_rwd_fix_leftarm_B.readAddr_p[2]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion1_dx = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S90>/Data Type Conversion1' */

  /* DataTypeConversion: '<S90>/Data Type Conversion2' */
  tmp = floor(vmr_rwd_fix_leftarm_B.readAddr_p[1]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion2_l = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S90>/Data Type Conversion2' */

  /* Memory: '<S90>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_ns =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_d;

  /* Chart: '<S90>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_p(vmr_rwd_fix_leftarm_B.readAddr_p[0],
    vmr_rwd_fix_leftarm_B.Memory_ns, &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p,
    &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_p);

  /* Outputs for Atomic SubSystem: '<S90>/Read Drive 1 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive1SDO();

  /* End of Outputs for SubSystem: '<S90>/Read Drive 1 SDO' */

  /* DataTypeConversion: '<S90>/convert' */
  vmr_rwd_fix_leftarm_B.convert_b = vmr_rwd_fix_leftarm_B.sf_converter.uint32Out;

  /* DataTypeConversion: '<S90>/convert1' */
  vmr_rwd_fix_leftarm_B.convert1_f = vmr_rwd_fix_leftarm_B.sf_converter.int32Out;

  /* DataTypeConversion: '<S90>/status' */
  vmr_rwd_fix_leftarm_B.status_d =
    vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_p.complete;

  /* MATLAB Function: '<S90>/values' */
  vmr_rwd_fix_leftarm_values(vmr_rwd_fix_leftarm_B.convert_b,
    vmr_rwd_fix_leftarm_B.convert1_f,
    vmr_rwd_fix_leftarm_B.sf_converter.doubleOut,
    &vmr_rwd_fix_leftarm_B.sf_values);
}

/* Update for atomic system: '<S74>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_Update(void)
{
  /* Update for Memory: '<S90>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_d =
    vmr_rwd_fix_leftarm_B.DataTypeConversion_ba;
}

/* Termination for atomic system: '<S74>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_Term(void)
{
  /* Terminate for Atomic SubSystem: '<S90>/Read Drive 1 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive1SDO_Term();

  /* End of Terminate for SubSystem: '<S90>/Read Drive 1 SDO' */
}

/*
 * Initial conditions for atomic system:
 *    '<S91>/SDO write machine'
 *    '<S143>/SDO write machine'
 */
void vmr_rwd_fix_leftarm_SDOwritemachine_Init
  (B_SDOwritemachine_vmr_rwd_fix_leftarm_T *localB,
   DW_SDOwritemachine_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_if;
  localDW->is_active_c52_ethercat = 0U;
  localDW->is_c52_ethercat = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_f;
  localDW->lastTriggerValue = 0;
  localB->enable = 0;
  localB->complete = 0;
}

/*
 * Output and update for atomic system:
 *    '<S91>/SDO write machine'
 *    '<S143>/SDO write machine'
 */
void vmr_rwd_fix_leftarm_SDOwritemachine(real_T rtu_triggerReading, int32_T
  rtu_writeState, B_SDOwritemachine_vmr_rwd_fix_leftarm_T *localB,
  DW_SDOwritemachine_vmr_rwd_fix_leftarm_T *localDW)
{
  boolean_T guard1 = false;

  /* Gateway: EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine */
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_if;

  /* During: EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine */
  if (localDW->is_active_c52_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine */
    localDW->is_active_c52_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine */
    /* Transition: '<S132>:140' */
    localDW->is_c52_ethercat = vmr_rwd_fix_leftarm_IN_setup_i;

    /* Entry 'setup': '<S132>:139' */
    localB->enable = 0;
  } else {
    switch (localDW->is_c52_ethercat) {
     case vmr_rwd_fix_leftarm_IN_ReadNext_o:
      /* During 'ReadNext': '<S132>:141' */
      if (rtu_writeState == 1) {
        /* Transition: '<S132>:157' */
        localDW->is_c52_ethercat = vmr_rwd_fix_leftarm_IN_disable_g;

        /* Entry 'disable': '<S132>:156' */
        localB->enable = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disable_g:
      /* During 'disable': '<S132>:156' */
      if (rtu_writeState == 2) {
        /* Transition: '<S132>:143' */
        localB->complete = 1;
        guard1 = true;
      } else {
        if (rtu_writeState == 3) {
          /* Transition: '<S132>:168' */
          localB->complete = -1;
          guard1 = true;
        }
      }
      break;

     default:
      /* During 'setup': '<S132>:139' */
      if (rtu_triggerReading != localDW->lastTriggerValue) {
        /* Transition: '<S132>:145' */
        localDW->is_c52_ethercat = vmr_rwd_fix_leftarm_IN_ReadNext_o;

        /* Entry 'ReadNext': '<S132>:141' */
        localB->enable = 1;
        localB->complete = 0;
      }
      break;
    }

    if (guard1) {
      /* Transition: '<S132>:170' */
      localDW->lastTriggerValue = (int32_T)rtu_triggerReading;
      localDW->is_c52_ethercat = vmr_rwd_fix_leftarm_IN_setup_i;

      /* Entry 'setup': '<S132>:139' */
      localB->enable = 0;
    }
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S91>/convert'
 *    '<S143>/convert'
 */
void vmr_rwd_fix_leftarm_convert(real_T rtu_u, real_T rtu_type,
  B_convert_vmr_rwd_fix_leftarm_T *localB)
{
  uint32_T y;
  real32_T x;
  int32_T b_x;
  real_T tmp;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/SDO writing/convert': '<S133>:1' */
  if (rtu_type == 1.0) {
    /* '<S133>:1:4' */
    /* '<S133>:1:5' */
    tmp = rt_roundd_snf(rtu_u);
    if (tmp < 4.294967296E+9) {
      if (tmp >= 0.0) {
        y = (uint32_T)tmp;
      } else {
        y = 0U;
      }
    } else {
      y = MAX_uint32_T;
    }
  } else if (rtu_type == 2.0) {
    /* '<S133>:1:6' */
    /* '<S133>:1:7' */
    tmp = rt_roundd_snf(rtu_u);
    if (tmp < 2.147483648E+9) {
      if (tmp >= -2.147483648E+9) {
        b_x = (int32_T)tmp;
      } else {
        b_x = MIN_int32_T;
      }
    } else {
      b_x = MAX_int32_T;
    }

    memcpy(&y, &b_x, (size_t)1 * sizeof(uint32_T));
  } else {
    /* '<S133>:1:9' */
    x = (real32_T)rtu_u;
    memcpy(&y, &x, (size_t)1 * sizeof(uint32_T));
  }

  localB->y = y;
}

/* Initial conditions for atomic system: '<S74>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_Init(void)
{
  /* InitializeConditions for Memory: '<S91>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ay =
    vmr_rwd_fix_leftarm_P.Memory_X0_hk;

  /* InitializeConditions for Chart: '<S91>/SDO write machine' */
  vmr_rwd_fix_leftarm_SDOwritemachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine,
     &vmr_rwd_fix_leftarm_DW.sf_SDOwritemachine);
}

/* Start for atomic system: '<S74>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_Start(void)
{
  int32_T i;

  /* Start for Constant: '<S91>/writeData' */
  for (i = 0; i < 5; i++) {
    vmr_rwd_fix_leftarm_B.writeData_e[i] =
      vmr_rwd_fix_leftarm_P.writeData_Value[i];
  }

  /* End of Start for Constant: '<S91>/writeData' */
}

/* Outputs for atomic system: '<S74>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting(void)
{
  int32_T i;
  real_T tmp;

  /* Constant: '<S91>/writeData' */
  for (i = 0; i < 5; i++) {
    vmr_rwd_fix_leftarm_B.writeData_e[i] =
      vmr_rwd_fix_leftarm_P.writeData_Value[i];
  }

  /* End of Constant: '<S91>/writeData' */

  /* MATLAB Function: '<S91>/convert' */
  vmr_rwd_fix_leftarm_convert(vmr_rwd_fix_leftarm_B.writeData_e[1],
    vmr_rwd_fix_leftarm_B.writeData_e[2], &vmr_rwd_fix_leftarm_B.sf_convert);

  /* Memory: '<S91>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_nf =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ay;

  /* Chart: '<S91>/SDO write machine' */
  vmr_rwd_fix_leftarm_SDOwritemachine(vmr_rwd_fix_leftarm_B.writeData_e[0],
    vmr_rwd_fix_leftarm_B.Memory_nf, &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine,
    &vmr_rwd_fix_leftarm_DW.sf_SDOwritemachine);

  /* DataTypeConversion: '<S91>/Data Type Conversion2' */
  tmp = floor(vmr_rwd_fix_leftarm_B.writeData_e[3]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion2_b = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S91>/Data Type Conversion2' */

  /* DataTypeConversion: '<S91>/Data Type Conversion1' */
  tmp = floor(vmr_rwd_fix_leftarm_B.writeData_e[4]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion1_d = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S91>/Data Type Conversion1' */

  /* S-Function (BKINethercatasyncsdodownload): '<S91>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_f;
        sigInputPtr = &vmr_rwd_fix_leftarm_B.sf_convert.y;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.enable;
        indexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_b;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion1_d;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e[7] != 0)
        {
          res = ecatAsyncSDODownload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            37004580,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S91>/status' */
  vmr_rwd_fix_leftarm_B.status_n =
    vmr_rwd_fix_leftarm_B.sf_SDOwritemachine.complete;
}

/* Update for atomic system: '<S74>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_Update(void)
{
  /* Update for Memory: '<S91>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ay =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_f;
}

/* Termination for atomic system: '<S74>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S91>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(37004580, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1001);
      }
    }
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S74>/forceEnableDisable'
 *    '<S75>/forceEnableDisable'
 */
void vmr_rwd_fix_leftarm_forceEnableDisable_Init
  (DW_forceEnableDisable_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->lastRunningState = 0.0;
  localDW->faultResetCycles = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S74>/forceEnableDisable'
 *    '<S75>/forceEnableDisable'
 */
void vmr_rwd_fix_leftarm_forceEnableDisable(real_T rtu_dexState, real_T
  rtu_task_state, const real_T rtu_forces[4], boolean_T rtu_allowEnableMotors,
  real_T rtu_motorFaults, real_T rtu_motorFaults_e, real_T
  rtu_fault_cycles_allowed, B_forceEnableDisable_vmr_rwd_fix_leftarm_T *localB,
  DW_forceEnableDisable_vmr_rwd_fix_leftarm_T *localDW)
{
  real_T y;
  boolean_T guard1 = false;

  /* SignalConversion: '<S92>/TmpSignal ConversionAt SFunction Inport5' */
  localB->TmpSignalConversionAtSFunctionInport5[0] = rtu_motorFaults;
  localB->TmpSignalConversionAtSFunctionInport5[1] = rtu_motorFaults_e;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/forceEnableDisable': '<S92>:1' */
  /* '<S92>:1:10' */
  localB->forceMotorState = 0.0;

  /* if either motor is faulted then fault both */
  if (localB->TmpSignalConversionAtSFunctionInport5[0] +
      localB->TmpSignalConversionAtSFunctionInport5[1] != 0.0) {
    /* '<S92>:1:13' */
    /* '<S92>:1:14' */
    localDW->faultResetCycles++;

    /* if there was a fault on a motor we need to reset the motor to clear */
    /* the fault. This allows us to wait 40 cycles, or 10ms for all faults to */
    /* clear before we assume the fault is bad enough to kill both motors */
    if (!(localDW->faultResetCycles > rtu_fault_cycles_allowed)) {
      guard1 = true;
    } else {
      /* '<S92>:1:18' */
    }
  } else {
    guard1 = true;
  }

  if (guard1 && (!((rtu_dexState == 0.0) || (!rtu_allowEnableMotors)))) {
    /* if dex says the motor should be off, force it off! */
    /* this should only happen during certain calibrations when there are no forces */
    /* this needs to check for running or complete because otherwise this will */
    /* kill the motors as we are stopping the task and then DEX will report */
    /* motors faulting during the task */
    if (!((rtu_task_state == 2.0) || (rtu_task_state == 4.0))) {
      /* '<S92>:1:32' */
      guard1 = false;
    } else {
      /* '<S92>:1:32' */
    }

    /* running or complete */
    if (guard1) {
      /* '<S92>:1:32' */
      /* '<S92>:1:35' */
      localB->forceMotorState = 1.0;

      /* '<S92>:1:36' */
      localDW->lastRunningState = 1.0;
    } else {
      if (localDW->lastRunningState == 1.0) {
        /* '<S92>:1:40' */
        y = rtu_forces[0];
        y += rtu_forces[1];
        y += rtu_forces[2];
        y += rtu_forces[3];
        if (y != 0.0) {
          /* '<S92>:1:41' */
          /* '<S92>:1:42' */
          localB->forceMotorState = 1.0;
        } else {
          /* '<S92>:1:44' */
          localDW->lastRunningState = 0.0;
        }
      }
    }
  } else {
    /* '<S92>:1:25' */
  }
}

/* Output and update for atomic system: '<S93>/Read Drive 1 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive1SDO_p(void)
{
  /* S-Function (BKINethercatasyncsdoupload): '<S134>/BKIN EtherCAT Async SDO Upload1' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_l;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_g;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.SDOCommand[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.SDOCommand[1];
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.SDOCommand[2];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[7] != 0)
        {
          res = ecatAsyncSDOUpload(deviceIndex,
            1001,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            35081310,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S134>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_f =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_g;

  /* MATLAB Function: '<S134>/converter' */
  vmr_rwd_fix_leftarm_converter
    (vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_l,
     &vmr_rwd_fix_leftarm_B.sf_converter_p);
}

/* Termination for atomic system: '<S93>/Read Drive 1 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive1SDO_i_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S134>/BKIN EtherCAT Async SDO Upload1' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(35081310, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1001);
      }
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S74>/size'
 *    '<S74>/size1'
 *    '<S75>/size'
 *    '<S75>/size1'
 */
void vmr_rwd_fix_leftarm_size(B_size_vmr_rwd_fix_leftarm_T *localB)
{
  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/size': '<S94>:1' */
  /* '<S94>:1:3' */
  localB->count = 12.0;
}

/*
 * Output and update for atomic system:
 *    '<S74>/split out constants1'
 *    '<S75>/split out constants1'
 */
void vmr_rwd_fix_leftarm_splitoutconstants1(const int32_T rtu_intVals[20],
  real_T rtu_forcePrimary, real_T rtu_robotType,
  B_splitoutconstants1_vmr_rwd_fix_leftarm_T *localB)
{
  int32_T c;
  int32_T orientation;
  int32_T b_orientation;

  /* MATLAB Function 'EtherCAT Subsystem/Arm 1/split out constants1': '<S97>:1' */
  /* '<S97>:1:4' */
  /* '<S97>:1:6' */
  /* '<S97>:1:7' */
  /* '<S97>:1:9' */
  /* '<S97>:1:10' */
  localB->hasSecondary = rtu_intVals[3] & 1;
  if (rtu_forcePrimary != 0.0) {
    /* '<S97>:1:12' */
    localB->hasSecondary = 0.0;
  }

  /* '<S97>:1:14' */
  localB->hasFT = rtu_intVals[3] >> 1 & 1;

  /* '<S97>:1:15' */
  c = rtu_intVals[3] >> 2 & 1;

  /*  robot orientation (0 - right Exo or left EP; 1 - left Exo or right EP) */
  /* '<S97>:1:16' */
  if ((rtu_intVals[3] >> 3 & 1) == 1) {
    /* '<S97>:1:38' */
    /* '<S97>:1:39' */
    orientation = -1;
  } else {
    /* '<S97>:1:41' */
    orientation = 1;
  }

  if ((rtu_intVals[3] >> 4 & 1) == 1) {
    /* '<S97>:1:38' */
    /* '<S97>:1:39' */
    b_orientation = -1;
  } else {
    /* '<S97>:1:41' */
    b_orientation = 1;
  }

  localB->motorOrientation[0] = orientation;
  localB->motorOrientation[1] = b_orientation;

  /* '<S97>:1:19' */
  if ((rtu_intVals[3] >> 5 & 1) == 1) {
    /* '<S97>:1:38' */
    /* '<S97>:1:39' */
    orientation = -1;
  } else {
    /* '<S97>:1:41' */
    orientation = 1;
  }

  if ((rtu_intVals[3] >> 6 & 1) == 1) {
    /* '<S97>:1:38' */
    /* '<S97>:1:39' */
    b_orientation = -1;
  } else {
    /* '<S97>:1:41' */
    b_orientation = 1;
  }

  localB->encOrientation[0] = orientation;
  localB->encOrientation[1] = b_orientation;
  if (rtu_robotType == 1.0) {
    /* '<S97>:1:22' */
    if (c == 0) {
      /* '<S97>:1:23' */
      /* '<S97>:1:24' */
      orientation = -1;
    } else {
      /* '<S97>:1:26' */
      orientation = 1;
    }
  } else if (c == 0) {
    /* '<S97>:1:29' */
    /* '<S97>:1:30' */
    orientation = 1;
  } else {
    /* '<S97>:1:32' */
    orientation = -1;
  }

  localB->robotOrientation = orientation;
}

/* Start for atomic system: '<S136>/A2M1 PDOs' */
void vmr_rwd_fix_leftarm_A2M1PDOs_Start(void)
{
  /* Level2 S-Function Block: '<S150>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S136>/A2M1 PDOs' */
void vmr_rwd_fix_leftarm_A2M1PDOs(void)
{
  /* Level2 S-Function Block: '<S150>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[14];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<S150>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_et = vmr_rwd_fix_leftarm_B.torque_g5;

  /* DataTypeConversion: '<S150>/A2M1Convert' */
  vmr_rwd_fix_leftarm_B.A2M1Convert[0] = vmr_rwd_fix_leftarm_B.primaryposition;
  vmr_rwd_fix_leftarm_B.A2M1Convert[1] = vmr_rwd_fix_leftarm_B.secondaryposition;
  vmr_rwd_fix_leftarm_B.A2M1Convert[2] = vmr_rwd_fix_leftarm_B.primaryvelocity;
  vmr_rwd_fix_leftarm_B.A2M1Convert[3] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion_et;
  vmr_rwd_fix_leftarm_B.A2M1Convert[4] = vmr_rwd_fix_leftarm_B.digitalinput_d;

  /* MATLAB Function: '<S150>/parse status register1' */
  vmr_rwd_fix_leftarm_parsestatusregister(vmr_rwd_fix_leftarm_B.statusregister_i,
    &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f);
}

/* Termination for atomic system: '<S136>/A2M1 PDOs' */
void vmr_rwd_fix_leftarm_A2M1PDOs_Term(void)
{
  /* Level2 S-Function Block: '<S150>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[14];
    sfcnTerminate(rts);
  }
}

/*
 * Initial conditions for atomic system:
 *    '<S153>/Read EMCY'
 *    '<S166>/Read EMCY'
 */
void vmr_rwd_fix_leftarm_ReadEMCY_Init(B_ReadEMCY_vmr_rwd_fix_leftarm_T *localB,
  DW_ReadEMCY_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_jm;
  localDW->is_active_c104_ethercat = 0U;
  localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_fq;
  localDW->currReadIdx = 0.0;
  localDW->valuesToRead = 0.0;
  localB->triggerCountRead = 0;
  localB->emcyReadTrigger[0] = 0;
  localB->emcyReadTrigger[1] = 0;
  localB->countOverwriteTrigger = 0;
  localB->emcyValPump[0] = 0.0;
  localB->emcyValPump[1] = 0.0;
  localB->emcyValPump[2] = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S153>/Read EMCY'
 *    '<S166>/Read EMCY'
 */
void vmr_rwd_fix_leftarm_ReadEMCY(real_T rtu_triggerReading, real_T rtu_driveID,
  const real_T rtu_countValues[2], const real_T rtu_emcyValues[2], real_T
  rtu_overwriteStatus, B_ReadEMCY_vmr_rwd_fix_leftarm_T *localB,
  DW_ReadEMCY_vmr_rwd_fix_leftarm_T *localDW)
{
  /* Gateway: EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY */
  localDW->sfEvent = vmr_rwd_fix_leftarm_CALL_EVENT_jm;

  /* During: EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY */
  if (localDW->is_active_c104_ethercat == 0U) {
    /* Entry: EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY */
    localDW->is_active_c104_ethercat = 1U;

    /* Entry Internal: EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY */
    /* Transition: '<S156>:140' */
    localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_setup_c;
  } else {
    switch (localDW->is_c104_ethercat) {
     case vmr_rwd_fix_leftarm_IN_DoneClearing:
      /* During 'DoneClearing': '<S156>:197' */
      /* Transition: '<S156>:200' */
      localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_setup_c;
      break;

     case vmr_rwd_fix_leftarm_IN_ReadNextEMCY:
      /* During 'ReadNextEMCY': '<S156>:184' */
      if (rtu_emcyValues[1] == 1.0) {
        /* Transition: '<S156>:187' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_disableEMCY;

        /* Entry 'disableEMCY': '<S156>:186' */
        localB->emcyReadTrigger[0] = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReceivedFloat_d:
      /* During 'ReceivedFloat': '<S156>:188' */
      if (localDW->currReadIdx <= localDW->valuesToRead) {
        /* Transition: '<S156>:192' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextEMCY;

        /* Entry 'ReadNextEMCY': '<S156>:184' */
        localB->emcyReadTrigger[0] = 1;
        localB->emcyReadTrigger[1] = (int32_T)localDW->currReadIdx;
      } else {
        /* Transition: '<S156>:191' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_StartOverwrite;

        /* Entry 'StartOverwrite': '<S156>:193' */
        localB->countOverwriteTrigger = 1;
        localB->emcyValPump[0] = 0.0;
        localB->emcyValPump[1] = 0.0;
        localB->emcyValPump[2] = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartOverwrite:
      /* During 'StartOverwrite': '<S156>:193' */
      if (rtu_overwriteStatus == 1.0) {
        /* Transition: '<S156>:223' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_DoneClearing;

        /* Entry 'DoneClearing': '<S156>:197' */
        localB->countOverwriteTrigger = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartReadingCount:
      /* During 'StartReadingCount': '<S156>:141' */
      if (rtu_countValues[1] == 1.0) {
        /* Transition: '<S156>:157' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_disableCount;

        /* Entry 'disableCount': '<S156>:156' */
        localB->triggerCountRead = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableCount:
      /* During 'disableCount': '<S156>:156' */
      if (rtu_countValues[1] >= 2.0) {
        /* Transition: '<S156>:143' */
        if (rtu_countValues[0] == 0.0) {
          /* Transition: '<S156>:219' */
          localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_setup_c;
        } else {
          /* Transition: '<S156>:220' */
          localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_startEMCYs;

          /* Entry 'startEMCYs': '<S156>:183' */
          localDW->currReadIdx = 1.0;
          localDW->valuesToRead = rtu_countValues[1];
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_disableEMCY:
      /* During 'disableEMCY': '<S156>:186' */
      if (rtu_emcyValues[1] >= 2.0) {
        /* Transition: '<S156>:189' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_ReceivedFloat_d;

        /* Entry 'ReceivedFloat': '<S156>:188' */
        localB->emcyValPump[0] = 1.0;

        /* ID for EMCY messge */
        localB->emcyValPump[1] = rtu_driveID;
        localB->emcyValPump[2] = rtu_emcyValues[0];
        localDW->currReadIdx++;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_setup_c:
      /* During 'setup': '<S156>:139' */
      if (rtu_triggerReading == 1.0) {
        /* Transition: '<S156>:145' */
        localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_StartReadingCount;

        /* Entry 'StartReadingCount': '<S156>:141' */
        localB->triggerCountRead = 1;
      }
      break;

     default:
      /* During 'startEMCYs': '<S156>:183' */
      /* Transition: '<S156>:185' */
      localDW->is_c104_ethercat = vmr_rwd_fix_leftarm_IN_ReadNextEMCY;

      /* Entry 'ReadNextEMCY': '<S156>:184' */
      localB->emcyReadTrigger[0] = 1;
      localB->emcyReadTrigger[1] = (int32_T)localDW->currReadIdx;
      break;
    }
  }
}

/* Initial conditions for atomic system: '<S136>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Init(void)
{
  /* InitializeConditions for MATLAB Function: '<S153>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor_f);

  /* InitializeConditions for Memory: '<S157>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_co;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_co;

  /* InitializeConditions for Memory: '<S158>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_n5;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_n5;

  /* InitializeConditions for Memory: '<S159>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_p =
    vmr_rwd_fix_leftarm_P.Memory_X0_n;

  /* InitializeConditions for Chart: '<S153>/Read EMCY' */
  vmr_rwd_fix_leftarm_ReadEMCY_Init(&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i,
    &vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_i);

  /* InitializeConditions for MATLAB Function: '<S153>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_c);
}

/* Start for atomic system: '<S136>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_l_Start(void)
{
  /* Start for Constant: '<S153>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_n = vmr_rwd_fix_leftarm_P.driveID_Value_i;
}

/* Outputs for atomic system: '<S136>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_o1(void)
{
  /* DataTypeConversion: '<S153>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_b = vmr_rwd_fix_leftarm_B.Statusword;

  /* MATLAB Function: '<S153>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor(vmr_rwd_fix_leftarm_B.Statusword,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor_f,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor_f);

  /* Constant: '<S153>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID_n = vmr_rwd_fix_leftarm_P.driveID_Value_i;

  /* Memory: '<S157>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_c1[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[0];
  vmr_rwd_fix_leftarm_B.Memory_c1[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[1];

  /* DataTypeConversion: '<S157>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[0] =
    vmr_rwd_fix_leftarm_B.Memory_c1[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[1] =
    vmr_rwd_fix_leftarm_B.Memory_c1[1];

  /* Memory: '<S158>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_a[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[0];
  vmr_rwd_fix_leftarm_B.Memory_a[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[1];

  /* DataTypeConversion: '<S158>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[0] =
    vmr_rwd_fix_leftarm_B.Memory_a[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[1] =
    vmr_rwd_fix_leftarm_B.Memory_a[1];

  /* Memory: '<S159>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_g = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_p;

  /* Chart: '<S153>/Read EMCY' */
  vmr_rwd_fix_leftarm_ReadEMCY
    (vmr_rwd_fix_leftarm_B.sf_faultmonitor_f.triggerFaultRead,
     vmr_rwd_fix_leftarm_B.driveID_n,
     vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh,
     vmr_rwd_fix_leftarm_B.DataTypeConversion_pr, vmr_rwd_fix_leftarm_B.Memory_g,
     &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i, &vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_i);

  /* DataTypeConversion: '<S157>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_b3 =
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.triggerCountRead;

  /* S-Function (BKINethercatasyncsdoupload): '<S157>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_l;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_c;
        enInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_b3;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_lk;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_o;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043381,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S157>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_ij = (uint32_T)
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_c;

  /* RateTransition: '<S157>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_l[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_l;
  vmr_rwd_fix_leftarm_B.RateTransition_l[1] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_ij;

  /* S-Function (BKINethercatasyncsdoupload): '<S158>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_d;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_p;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyReadTrigger[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_kv;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyReadTrigger
          [1];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043393,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[7] = 1;
        ;
      }
    }
  }

  /* RateTransition: '<S158>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_k4[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_d;
  vmr_rwd_fix_leftarm_B.RateTransition_k4[1] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_p;

  /* DataTypeConversion: '<S159>/Data Type Conversion' incorporates:
   *  Constant: '<S159>/Constant'
   */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_ek = (int32_T)
    vmr_rwd_fix_leftarm_P.Constant_Value_c;

  /* S-Function (BKINethercatasyncsdodownload): '<S159>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_c;
        sigInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_c;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.countOverwriteTrigger;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_g;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_ek;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o[7] != 0)
        {
          res = ecatAsyncSDODownload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            370043403,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S159>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_k =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_c;

  /* MATLAB Function: '<S153>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1
    (vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump,
     vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.ampStatus,
     vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.currentLimitEnabled,
     vmr_rwd_fix_leftarm_B.statusregister_i, vmr_rwd_fix_leftarm_B.driveID_n,
     vmr_rwd_fix_leftarm_B.DataTypeConversion_b,
     &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c,
     &vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_c);
}

/* Update for atomic system: '<S136>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Update(void)
{
  /* Update for Memory: '<S157>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_l[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_cn[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_l[1];

  /* Update for Memory: '<S158>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_k4[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_dg[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_k4[1];

  /* Update for Memory: '<S159>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_p =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_k;
}

/* Termination for atomic system: '<S136>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_j_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S157>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043381, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1003);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S158>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043393, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1003);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S159>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370043403, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1003);
      }
    }
  }
}

/* Start for atomic system: '<S137>/A2M2 PDOs' */
void vmr_rwd_fix_leftarm_A2M2PDOs_Start(void)
{
  /* Level2 S-Function Block: '<S163>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S137>/A2M2 PDOs' */
void vmr_rwd_fix_leftarm_A2M2PDOs(void)
{
  /* Level2 S-Function Block: '<S163>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[15];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<S163>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_bv = vmr_rwd_fix_leftarm_B.torque_k;

  /* DataTypeConversion: '<S163>/A2M2Convert' */
  vmr_rwd_fix_leftarm_B.A2M2Convert[0] = vmr_rwd_fix_leftarm_B.positionprimary;
  vmr_rwd_fix_leftarm_B.A2M2Convert[1] = vmr_rwd_fix_leftarm_B.positionsecondary;
  vmr_rwd_fix_leftarm_B.A2M2Convert[2] = vmr_rwd_fix_leftarm_B.velocityprimary;
  vmr_rwd_fix_leftarm_B.A2M2Convert[3] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion_bv;
  vmr_rwd_fix_leftarm_B.A2M2Convert[4] = vmr_rwd_fix_leftarm_B.digitalinput;

  /* MATLAB Function: '<S163>/parse status register1' */
  vmr_rwd_fix_leftarm_parsestatusregister(vmr_rwd_fix_leftarm_B.statusregister,
    &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq);
}

/* Termination for atomic system: '<S137>/A2M2 PDOs' */
void vmr_rwd_fix_leftarm_A2M2PDOs_Term(void)
{
  /* Level2 S-Function Block: '<S163>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[15];
    sfcnTerminate(rts);
  }
}

/* Initial conditions for atomic system: '<S137>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_k_Init(void)
{
  /* InitializeConditions for MATLAB Function: '<S166>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor_i);

  /* InitializeConditions for Memory: '<S170>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_er;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_er;

  /* InitializeConditions for Memory: '<S171>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[0] =
    vmr_rwd_fix_leftarm_P.Memory_X0_ic;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[1] =
    vmr_rwd_fix_leftarm_P.Memory_X0_ic;

  /* InitializeConditions for Memory: '<S172>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_m =
    vmr_rwd_fix_leftarm_P.Memory_X0_o;

  /* InitializeConditions for Chart: '<S166>/Read EMCY' */
  vmr_rwd_fix_leftarm_ReadEMCY_Init(&vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p,
    &vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_p);

  /* InitializeConditions for MATLAB Function: '<S166>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1_Init
    (&vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_h);
}

/* Start for atomic system: '<S137>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_ko_Start(void)
{
  /* Start for Constant: '<S166>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID = vmr_rwd_fix_leftarm_P.driveID_Value_p;
}

/* Outputs for atomic system: '<S137>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_i(void)
{
  /* DataTypeConversion: '<S166>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_ju = vmr_rwd_fix_leftarm_B.statusword;

  /* MATLAB Function: '<S166>/fault monitor' */
  vmr_rwd_fix_leftarm_faultmonitor(vmr_rwd_fix_leftarm_B.statusword,
    &vmr_rwd_fix_leftarm_B.sf_faultmonitor_i,
    &vmr_rwd_fix_leftarm_DW.sf_faultmonitor_i);

  /* Constant: '<S166>/driveID' */
  vmr_rwd_fix_leftarm_B.driveID = vmr_rwd_fix_leftarm_P.driveID_Value_p;

  /* Memory: '<S170>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_kg[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[0];
  vmr_rwd_fix_leftarm_B.Memory_kg[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[1];

  /* DataTypeConversion: '<S170>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[0] =
    vmr_rwd_fix_leftarm_B.Memory_kg[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[1] =
    vmr_rwd_fix_leftarm_B.Memory_kg[1];

  /* Memory: '<S171>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_f3[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[0];
  vmr_rwd_fix_leftarm_B.Memory_f3[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[1];

  /* DataTypeConversion: '<S171>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[0] =
    vmr_rwd_fix_leftarm_B.Memory_f3[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[1] =
    vmr_rwd_fix_leftarm_B.Memory_f3[1];

  /* Memory: '<S172>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_l = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_m;

  /* Chart: '<S166>/Read EMCY' */
  vmr_rwd_fix_leftarm_ReadEMCY
    (vmr_rwd_fix_leftarm_B.sf_faultmonitor_i.triggerFaultRead,
     vmr_rwd_fix_leftarm_B.driveID, vmr_rwd_fix_leftarm_B.DataTypeConversion2_g,
     vmr_rwd_fix_leftarm_B.DataTypeConversion_i1, vmr_rwd_fix_leftarm_B.Memory_l,
     &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p, &vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_p);

  /* DataTypeConversion: '<S170>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_dc =
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.triggerCountRead;

  /* S-Function (BKINethercatasyncsdoupload): '<S170>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_m;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_i;
        enInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_dc;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_ik;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_j;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1004,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043419,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S170>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_of = (uint32_T)
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_i;

  /* RateTransition: '<S170>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_gy[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_m;
  vmr_rwd_fix_leftarm_B.RateTransition_gy[1] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_of;

  /* S-Function (BKINethercatasyncsdoupload): '<S171>/BKIN EtherCAT Async SDO Upload' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_f;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_j;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyReadTrigger[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_ly;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyReadTrigger
          [1];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1004,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            370043431,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[7] = 1;
        ;
      }
    }
  }

  /* RateTransition: '<S171>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_i[0] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_f;
  vmr_rwd_fix_leftarm_B.RateTransition_i[1] =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_j;

  /* DataTypeConversion: '<S172>/Data Type Conversion' incorporates:
   *  Constant: '<S172>/Constant'
   */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_dh = (int32_T)
    vmr_rwd_fix_leftarm_P.Constant_Value_pq;

  /* S-Function (BKINethercatasyncsdodownload): '<S172>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_gy;
        sigInputPtr = &vmr_rwd_fix_leftarm_P.Constant_Value_pq;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.countOverwriteTrigger;
        indexInputPtr = &vmr_rwd_fix_leftarm_P.Constant1_Value_ol;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion_dh;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a[7] != 0)
        {
          res = ecatAsyncSDODownload(deviceIndex,
            1004,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            370043441,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S172>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_c =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_gy;

  /* MATLAB Function: '<S166>/fault monitor1' */
  vmr_rwd_fix_leftarm_faultmonitor1
    (vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump,
     vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.ampStatus,
     vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.currentLimitEnabled,
     vmr_rwd_fix_leftarm_B.statusregister, vmr_rwd_fix_leftarm_B.driveID,
     vmr_rwd_fix_leftarm_B.DataTypeConversion_ju,
     &vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h,
     &vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_h);
}

/* Update for atomic system: '<S137>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_j_Update(void)
{
  /* Update for Memory: '<S170>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_gy[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_ml[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_gy[1];

  /* Update for Memory: '<S171>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[0] =
    vmr_rwd_fix_leftarm_B.RateTransition_i[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_de[1] =
    vmr_rwd_fix_leftarm_B.RateTransition_i[1];

  /* Update for Memory: '<S172>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_m =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_c;
}

/* Termination for atomic system: '<S137>/EMCY Message pump' */
void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S170>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043419, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1004);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S171>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370043431, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1004);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S172>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370043441, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1004);
      }
    }
  }
}

/* Output and update for atomic system: '<S142>/Read Drive 3 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive3SDO(void)
{
  /* S-Function (BKINethercatasyncsdoupload): '<S180>/BKIN EtherCAT Async SDO Upload1' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_f;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_a;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.enable;
        indexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_m;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion1_k2;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[7] != 0)
        {
          res = ecatAsyncSDOUpload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            35471299,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S180>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_d =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2_a;

  /* MATLAB Function: '<S180>/converter' */
  vmr_rwd_fix_leftarm_converter
    (vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1_f,
     &vmr_rwd_fix_leftarm_B.sf_converter_j);
}

/* Termination for atomic system: '<S142>/Read Drive 3 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive3SDO_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S180>/BKIN EtherCAT Async SDO Upload1' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(35471299, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1003);
      }
    }
  }
}

/* Initial conditions for atomic system: '<S75>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_j_Init(void)
{
  /* InitializeConditions for Memory: '<S142>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_f =
    vmr_rwd_fix_leftarm_P.Memory_X0_i;

  /* InitializeConditions for Chart: '<S142>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_c_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g,
     &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_g);
}

/* Start for atomic system: '<S75>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_p_Start(void)
{
  /* Start for Constant: '<S142>/readAddr' */
  vmr_rwd_fix_leftarm_B.readAddr[0] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[0];
  vmr_rwd_fix_leftarm_B.readAddr[1] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[1];
  vmr_rwd_fix_leftarm_B.readAddr[2] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[2];
}

/* Outputs for atomic system: '<S75>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_n(void)
{
  real_T tmp;

  /* Constant: '<S142>/readAddr' */
  vmr_rwd_fix_leftarm_B.readAddr[0] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[0];
  vmr_rwd_fix_leftarm_B.readAddr[1] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[1];
  vmr_rwd_fix_leftarm_B.readAddr[2] = vmr_rwd_fix_leftarm_P.readAddr_Value_b[2];

  /* DataTypeConversion: '<S142>/Data Type Conversion1' */
  tmp = floor(vmr_rwd_fix_leftarm_B.readAddr[2]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion1_k2 = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S142>/Data Type Conversion1' */

  /* DataTypeConversion: '<S142>/Data Type Conversion2' */
  tmp = floor(vmr_rwd_fix_leftarm_B.readAddr[1]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion2_m = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S142>/Data Type Conversion2' */

  /* Memory: '<S142>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_ip =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_f;

  /* Chart: '<S142>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_p(vmr_rwd_fix_leftarm_B.readAddr[0],
    vmr_rwd_fix_leftarm_B.Memory_ip, &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g,
    &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_g);

  /* Outputs for Atomic SubSystem: '<S142>/Read Drive 3 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive3SDO();

  /* End of Outputs for SubSystem: '<S142>/Read Drive 3 SDO' */

  /* DataTypeConversion: '<S142>/convert' */
  vmr_rwd_fix_leftarm_B.convert_l =
    vmr_rwd_fix_leftarm_B.sf_converter_j.uint32Out;

  /* DataTypeConversion: '<S142>/convert1' */
  vmr_rwd_fix_leftarm_B.convert1 = vmr_rwd_fix_leftarm_B.sf_converter_j.int32Out;

  /* DataTypeConversion: '<S142>/status' */
  vmr_rwd_fix_leftarm_B.status_e =
    vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_g.complete;

  /* MATLAB Function: '<S142>/values' */
  vmr_rwd_fix_leftarm_values(vmr_rwd_fix_leftarm_B.convert_l,
    vmr_rwd_fix_leftarm_B.convert1,
    vmr_rwd_fix_leftarm_B.sf_converter_j.doubleOut,
    &vmr_rwd_fix_leftarm_B.sf_values_n);
}

/* Update for atomic system: '<S75>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_l_Update(void)
{
  /* Update for Memory: '<S142>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_f =
    vmr_rwd_fix_leftarm_B.DataTypeConversion_d;
}

/* Termination for atomic system: '<S75>/SDO reading' */
void vmr_rwd_fix_leftarm_SDOreading_e_Term(void)
{
  /* Terminate for Atomic SubSystem: '<S142>/Read Drive 3 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive3SDO_Term();

  /* End of Terminate for SubSystem: '<S142>/Read Drive 3 SDO' */
}

/* Initial conditions for atomic system: '<S75>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_l_Init(void)
{
  /* InitializeConditions for Memory: '<S143>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_do =
    vmr_rwd_fix_leftarm_P.Memory_X0_c;

  /* InitializeConditions for Chart: '<S143>/SDO write machine' */
  vmr_rwd_fix_leftarm_SDOwritemachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j,
     &vmr_rwd_fix_leftarm_DW.sf_SDOwritemachine_j);
}

/* Start for atomic system: '<S75>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_c_Start(void)
{
  int32_T i;

  /* Start for Constant: '<S143>/writeData' */
  for (i = 0; i < 5; i++) {
    vmr_rwd_fix_leftarm_B.writeData[i] =
      vmr_rwd_fix_leftarm_P.writeData_Value_f[i];
  }

  /* End of Start for Constant: '<S143>/writeData' */
}

/* Outputs for atomic system: '<S75>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_f(void)
{
  int32_T i;
  real_T tmp;

  /* Constant: '<S143>/writeData' */
  for (i = 0; i < 5; i++) {
    vmr_rwd_fix_leftarm_B.writeData[i] =
      vmr_rwd_fix_leftarm_P.writeData_Value_f[i];
  }

  /* End of Constant: '<S143>/writeData' */

  /* MATLAB Function: '<S143>/convert' */
  vmr_rwd_fix_leftarm_convert(vmr_rwd_fix_leftarm_B.writeData[1],
    vmr_rwd_fix_leftarm_B.writeData[2], &vmr_rwd_fix_leftarm_B.sf_convert_i);

  /* Memory: '<S143>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_lf =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_do;

  /* Chart: '<S143>/SDO write machine' */
  vmr_rwd_fix_leftarm_SDOwritemachine(vmr_rwd_fix_leftarm_B.writeData[0],
    vmr_rwd_fix_leftarm_B.Memory_lf, &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j,
    &vmr_rwd_fix_leftarm_DW.sf_SDOwritemachine_j);

  /* DataTypeConversion: '<S143>/Data Type Conversion2' */
  tmp = floor(vmr_rwd_fix_leftarm_B.writeData[3]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion2_p = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S143>/Data Type Conversion2' */

  /* DataTypeConversion: '<S143>/Data Type Conversion1' */
  tmp = floor(vmr_rwd_fix_leftarm_B.writeData[4]);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion1_aq = tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S143>/Data Type Conversion1' */

  /* S-Function (BKINethercatasyncsdodownload): '<S143>/BKIN EtherCAT Async SDO Download' */
  {
    int8_T *sigInputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload;
        sigInputPtr = &vmr_rwd_fix_leftarm_B.sf_convert_i.y;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.enable;
        indexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_p;
        subIndexInputPtr = &vmr_rwd_fix_leftarm_B.DataTypeConversion1_aq;
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[7] != 0) {
          res = ecatAsyncSDODownload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigInputPtr,
            1*4,
            500,
            370043537,
            sigStatusPtr,
            *enInputPtr);
        } else {
          *sigStatusPtr = 0;
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S143>/status' */
  vmr_rwd_fix_leftarm_B.status =
    vmr_rwd_fix_leftarm_B.sf_SDOwritemachine_j.complete;
}

/* Update for atomic system: '<S75>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_p_Update(void)
{
  /* Update for Memory: '<S143>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_do =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload;
}

/* Termination for atomic system: '<S75>/SDO writing' */
void vmr_rwd_fix_leftarm_SDOwriting_b_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S143>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370043537, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1003);
      }
    }
  }
}

/* Output and update for atomic system: '<S145>/Read Drive 3 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive3SDO_g(void)
{
  /* S-Function (BKINethercatasyncsdoupload): '<S186>/BKIN EtherCAT Async SDO Upload1' */
  {
    int8_T *sigOutputPtr;
    int32_T *sigStatusPtr;
    int32_T *enInputPtr;
    int_T deviceIndex;
    static int counter= 0;
    int_T actLen;
    int_T res;
    int_T state;
    int32_T *indexInputPtr;
    int32_T *subIndexInputPtr;
    deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[0];
    if (deviceIndex != NO_ETHERCAT) {
      state = xpcEtherCATgetState( deviceIndex );
      if (state >= 2 ) {
        sigOutputPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1;
        sigStatusPtr = &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2;
        enInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.SDOCommand[0];
        indexInputPtr = &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.SDOCommand[1];
        subIndexInputPtr =
          &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.SDOCommand[2];
        if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[7] != 0) {
          res = ecatAsyncSDOUpload(deviceIndex,
            1003,
            (unsigned short)*indexInputPtr,
            (unsigned char)*subIndexInputPtr,
            (void *)sigOutputPtr,
            1*4,
            &actLen,
            500,
            35091299,
            sigStatusPtr,
            *enInputPtr);
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[7] = 1;
        ;
      }
    }
  }

  /* DataTypeConversion: '<S186>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_iq =
    vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o2;

  /* MATLAB Function: '<S186>/converter' */
  vmr_rwd_fix_leftarm_converter
    (vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload1_o1,
     &vmr_rwd_fix_leftarm_B.sf_converter_jl);
}

/* Termination for atomic system: '<S145>/Read Drive 3 SDO' */
void vmr_rwd_fix_leftarm_ReadDrive3SDO_c_Term(void)
{
  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S186>/BKIN EtherCAT Async SDO Upload1' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(35091299, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1003);
      }
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S229>/decode robot'
 *    '<S230>/decode robot'
 */
void vmr_rwd_fix_leftarm_decoderobot(real_T rtu_system_type, real_T
  rtu_robot_type, real_T rtu_robot_version, B_decoderobot_vmr_rwd_fix_leftarm_T *
  localB)
{
  /* MATLAB Function 'DataLogging/Poll KINARM/constants/arm1/decode robot': '<S232>:1' */
  /* '<S232>:1:3' */
  localB->isEP = 0.0;

  /* '<S232>:1:4' */
  localB->isHumanEXO = 0.0;

  /* '<S232>:1:5' */
  localB->isNHPEXO = 0.0;

  /* '<S232>:1:6' */
  localB->isClassicExo = 0.0;

  /* '<S232>:1:7' */
  localB->isUTSEXO = 0.0;

  /* '<S232>:1:8' */
  localB->isPMAC = 0.0;

  /* '<S232>:1:9' */
  localB->isECAT = 0.0;
  if (rtu_robot_type == 0.0) {
    /* '<S232>:1:11' */
    /* '<S232>:1:12' */
    localB->isHumanEXO = 1.0;
    if (rtu_robot_version == 1.0) {
      /* '<S232>:1:13' */
      /* '<S232>:1:14' */
      localB->isClassicExo = 1.0;
    } else {
      if (rtu_robot_version == 2.0) {
        /* '<S232>:1:15' */
        /* '<S232>:1:16' */
        localB->isUTSEXO = 1.0;
      }
    }
  } else if (rtu_robot_type == 1.0) {
    /* '<S232>:1:18' */
    /* '<S232>:1:19' */
    localB->isEP = 1.0;
  } else {
    if (rtu_robot_type == 2.0) {
      /* '<S232>:1:20' */
      /* '<S232>:1:21' */
      localB->isNHPEXO = 1.0;
      if (rtu_robot_version == 1.0) {
        /* '<S232>:1:22' */
        /* '<S232>:1:23' */
        localB->isClassicExo = 1.0;
      } else {
        if (rtu_robot_version == 2.0) {
          /* '<S232>:1:24' */
          /* '<S232>:1:25' */
          localB->isUTSEXO = 1.0;
        }
      }
    }
  }

  if (rtu_system_type == 1.0) {
    /* '<S232>:1:29' */
    /* '<S232>:1:30' */
    localB->isPMAC = 1.0;
  } else {
    if (rtu_system_type == 2.0) {
      /* '<S232>:1:31' */
      /* '<S232>:1:32' */
      localB->isECAT = 1.0;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S73>/split_primary'
 *    '<S73>/split_primary1'
 */
void vmr_rwd_fix_leftarm_split_primary(const real_T rtu_primary_data[6],
  B_split_primary_vmr_rwd_fix_leftarm_T *localB)
{
  /* MATLAB Function 'DataLogging/Poll KINARM/split_primary/split_primary': '<S244>:1' */
  /* '<S244>:1:2' */
  localB->link_angles[0] = rtu_primary_data[0];
  localB->link_angles[1] = rtu_primary_data[1];

  /* '<S244>:1:3' */
  localB->link_velocities[0] = rtu_primary_data[2];
  localB->link_velocities[1] = rtu_primary_data[3];

  /* '<S244>:1:4' */
  localB->link_acceleration[0] = rtu_primary_data[4];
  localB->link_acceleration[1] = rtu_primary_data[5];
}

/* Function for MATLAB Function: '<S63>/latch_errors' */
static void vmr_rwd_fix_leftarm_circshift_j(real_T a[12])
{
  int32_T k;
  real_T buffer_idx_0;
  real_T buffer_idx_1;
  buffer_idx_0 = a[10];
  buffer_idx_1 = a[11];
  for (k = 9; k >= 0; k += -1) {
    a[k + 2] = a[k];
  }

  a[0] = buffer_idx_0;
  a[1] = buffer_idx_1;
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_convertL1L2ToShoElb(const real_T L1L2[4], const
  real_T orientation[2], real_T shoElb[4])
{
  real_T L2;
  real_T L1;

  /* '<S194>:1:63' */
  shoElb[0] = L1L2[0];
  shoElb[2] = L1L2[2];

  /* '<S194>:1:64' */
  /* '<S194>:1:65' */
  /* '<S194>:1:66' */
  L2 = L1L2[1];

  /* '<S194>:1:67' */
  L1 = L1L2[0];
  if (orientation[0] == -1.0) {
    /* '<S194>:1:69' */
    /* '<S194>:1:70' */
    L2 = -L1L2[1] + 3.1415926535897931;

    /* '<S194>:1:71' */
    L1 = -L1L2[0] + 3.1415926535897931;

    /* '<S194>:1:72' */
    shoElb[0] = -L1L2[0] + 3.1415926535897931;
  }

  /* '<S194>:1:75' */
  shoElb[1] = L2 - L1;

  /* convert L2 to elbow */
  /* '<S194>:1:76' */
  /* '<S194>:1:65' */
  /* '<S194>:1:66' */
  L2 = L1L2[3];

  /* '<S194>:1:67' */
  L1 = L1L2[2];
  if (orientation[1] == -1.0) {
    /* '<S194>:1:69' */
    /* '<S194>:1:70' */
    L2 = -L1L2[3] + 3.1415926535897931;

    /* '<S194>:1:71' */
    L1 = -L1L2[2] + 3.1415926535897931;

    /* '<S194>:1:72' */
    shoElb[2] = -L1L2[2] + 3.1415926535897931;
  }

  /* '<S194>:1:75' */
  shoElb[3] = L2 - L1;

  /* convert L2 to elbow */
  /* '<S194>:1:76' */
  /* '<S194>:1:65' */
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_convertL1L2ToShoElbVel(const real_T L1L2[4],
  const real_T orientation[2], real_T shoElb[4])
{
  real_T L2;
  real_T L1;

  /* '<S194>:1:81' */
  shoElb[0] = L1L2[0];
  shoElb[2] = L1L2[2];

  /* '<S194>:1:82' */
  /* '<S194>:1:83' */
  /* '<S194>:1:84' */
  L2 = L1L2[1];

  /* '<S194>:1:85' */
  L1 = L1L2[0];
  if (orientation[0] == -1.0) {
    /* '<S194>:1:87' */
    /* '<S194>:1:88' */
    L2 = -L1L2[1];

    /* '<S194>:1:89' */
    L1 = -L1L2[0];

    /* '<S194>:1:90' */
    shoElb[0] = -L1L2[0];
  }

  /* '<S194>:1:93' */
  shoElb[1] = L2 - L1;

  /* convert L2 to elbow */
  /* '<S194>:1:94' */
  /* '<S194>:1:83' */
  /* '<S194>:1:84' */
  L2 = L1L2[3];

  /* '<S194>:1:85' */
  L1 = L1L2[2];
  if (orientation[1] == -1.0) {
    /* '<S194>:1:87' */
    /* '<S194>:1:88' */
    L2 = -L1L2[3];

    /* '<S194>:1:89' */
    L1 = -L1L2[2];

    /* '<S194>:1:90' */
    shoElb[2] = -L1L2[2];
  }

  /* '<S194>:1:93' */
  shoElb[3] = L2 - L1;

  /* convert L2 to elbow */
  /* '<S194>:1:94' */
  /* '<S194>:1:83' */
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_reduce(const int32_T a_sizes[2], int32_T absp[2],
  boolean_T shiftright[2])
{
  int32_T b;
  boolean_T c;
  b = 0;
  c = true;
  if (0 > a_sizes[0]) {
    b = 1;
  }

  if (b > (a_sizes[0] >> 1)) {
    b = a_sizes[0] - 1;
    c = false;
  }

  absp[0] = b;
  shiftright[0] = c;
  b = 1;
  c = true;
  if (1 > (a_sizes[1] >> 1)) {
    b = a_sizes[1] - 1;
    c = false;
  }

  absp[1] = b;
  shiftright[1] = c;
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_circshift_c(real_T a_data[], int32_T a_sizes[2])
{
  int32_T ns;
  int32_T pagesize;
  int32_T absp[2];
  boolean_T shiftright[2];
  int32_T c;
  int32_T mtmp;
  int32_T pageroot;
  int32_T i1;
  int32_T i;
  int32_T j;
  int32_T e_k;
  real_T buffer_data[50];
  int8_T npages_idx_0;
  if (a_sizes[1] != 0) {
    vmr_rwd_fix_leftarm_reduce(a_sizes, absp, shiftright);
    npages_idx_0 = (int8_T)a_sizes[1];
    c = a_sizes[0];
    ns = absp[0];
    pagesize = a_sizes[0];
    if ((a_sizes[0] > 1) && (absp[0] > 0)) {
      for (i = 1; i <= npages_idx_0; i++) {
        pageroot = (i - 1) * pagesize;
        for (j = 0; j + 1 < 2; j++) {
          i1 = pageroot + j;
          if (shiftright[0]) {
            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              buffer_data[mtmp] = a_data[((i1 + mtmp) + c) - ns];
            }

            for (mtmp = c; mtmp >= ns + 1; mtmp--) {
              a_data[(i1 + mtmp) - 1] = a_data[((i1 + mtmp) - ns) - 1];
            }

            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              a_data[i1 + mtmp] = buffer_data[mtmp];
            }
          } else {
            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              buffer_data[mtmp] = a_data[i1 + mtmp];
            }

            mtmp = c - ns;
            for (e_k = 0; e_k + 1 <= mtmp; e_k++) {
              a_data[i1 + e_k] = a_data[(i1 + e_k) + ns];
            }

            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              a_data[((i1 + mtmp) + c) - ns] = buffer_data[mtmp];
            }
          }
        }
      }
    }

    c = a_sizes[1];
    ns = absp[1];
    if ((a_sizes[1] > 1) && (absp[1] > 0)) {
      i = 1;
      while (i <= 1) {
        for (j = 0; j + 1 <= pagesize; j++) {
          i1 = j;
          if (shiftright[1]) {
            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              buffer_data[mtmp] = a_data[((mtmp + c) - ns) * pagesize + i1];
            }

            for (mtmp = c; mtmp >= ns + 1; mtmp--) {
              a_data[i1 + (mtmp - 1) * pagesize] = a_data[((mtmp - ns) - 1) *
                pagesize + i1];
            }

            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              a_data[i1 + mtmp * pagesize] = buffer_data[mtmp];
            }
          } else {
            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              buffer_data[mtmp] = a_data[mtmp * pagesize + i1];
            }

            mtmp = c - ns;
            for (e_k = 0; e_k + 1 <= mtmp; e_k++) {
              a_data[i1 + e_k * pagesize] = a_data[(e_k + ns) * pagesize + i1];
            }

            for (mtmp = 0; mtmp + 1 <= ns; mtmp++) {
              a_data[i1 + ((mtmp + c) - ns) * pagesize] = buffer_data[mtmp];
            }
          }
        }

        i = 2;
      }
    }
  }
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_updateQueue(const real_T arr_data[], const
  int32_T arr_sizes[2], const real_T newVals[4], real_T encData_data[], int32_T
  encData_sizes[2])
{
  int32_T i;
  int32_T loop_ub;

  /* '<S194>:1:58' */
  encData_sizes[0] = 4;
  encData_sizes[1] = arr_sizes[1];
  loop_ub = arr_sizes[0] * arr_sizes[1];
  for (i = 0; i < loop_ub; i++) {
    encData_data[i] = arr_data[i];
  }

  vmr_rwd_fix_leftarm_circshift_c(encData_data, encData_sizes);

  /* '<S194>:1:59' */
  encData_data[0] = newVals[0];
  encData_data[1] = newVals[1];
  encData_data[2] = newVals[2];
  encData_data[3] = newVals[3];
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_calcDT(const real_T positions_data[], const
  int32_T positions_sizes[2], real_T stepTime, real_T velocity[4])
{
  real_T dt;
  int32_T positions;

  /* % Calculate the derrivative of the given signals. This will work with and  */
  /*  X, Y matrix of values. You will get out the X derrivaties, each */
  /*  calculated over Y times steps. */
  /* '<S194>:1:127' */
  dt = ((real_T)positions_sizes[1] - 1.0) * stepTime;

  /* '<S194>:1:128' */
  positions = positions_sizes[1];
  velocity[0] = (positions_data[0] - positions_data[(positions - 1) *
                 positions_sizes[0]]) / dt;
  velocity[1] = (positions_data[1] - positions_data[(positions - 1) *
                 positions_sizes[0] + 1]) / dt;
  velocity[2] = (positions_data[2] - positions_data[(positions - 1) *
                 positions_sizes[0] + 2]) / dt;
  velocity[3] = (positions_data[3] - positions_data[(positions - 1) *
                 positions_sizes[0] + 3]) / dt;
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_buildEncoderData(real_T queueSize, const real_T
  shoElb[4], real_T encData_data[], int32_T encData_sizes[2])
{
  real_T shoElb_0;
  real_T shoElb_1;
  real_T shoElb_2;
  real_T shoElb_3;
  int32_T i;
  int32_T tmp;
  int32_T tmp_0;
  int32_T tmp_1;
  int32_T tmp_2;

  /* '<S194>:1:52' */
  /* '<S194>:1:53' */
  tmp = (int32_T)queueSize;
  shoElb_0 = shoElb[0];
  tmp_0 = (int32_T)queueSize;
  shoElb_1 = shoElb[1];
  tmp_1 = (int32_T)queueSize;
  shoElb_2 = shoElb[2];
  tmp_2 = (int32_T)queueSize;
  shoElb_3 = shoElb[3];
  encData_sizes[0] = 4;
  encData_sizes[1] = tmp;
  for (i = 0; i < tmp; i++) {
    encData_data[i << 2] = shoElb_0;
  }

  for (i = 0; i < tmp_0; i++) {
    encData_data[1 + (i << 2)] = shoElb_1;
  }

  for (i = 0; i < tmp_1; i++) {
    encData_data[2 + (i << 2)] = shoElb_2;
  }

  for (i = 0; i < tmp_2; i++) {
    encData_data[3 + (i << 2)] = shoElb_3;
  }
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_buildEncoderData_j(real_T queueSize, real_T
  encData_data[], int32_T encData_sizes[2])
{
  int32_T i;
  int32_T tmp;
  int32_T tmp_0;
  int32_T tmp_1;
  int32_T tmp_2;

  /* '<S194>:1:52' */
  /* '<S194>:1:53' */
  tmp = (int32_T)queueSize;
  tmp_0 = (int32_T)queueSize;
  tmp_1 = (int32_T)queueSize;
  tmp_2 = (int32_T)queueSize;
  encData_sizes[0] = 4;
  encData_sizes[1] = tmp;
  for (i = 0; i < tmp; i++) {
    encData_data[i << 2] = 0.0;
  }

  for (i = 0; i < tmp_0; i++) {
    encData_data[1 + (i << 2)] = 0.0;
  }

  for (i = 0; i < tmp_1; i++) {
    encData_data[2 + (i << 2)] = 0.0;
  }

  for (i = 0; i < tmp_2; i++) {
    encData_data[3 + (i << 2)] = 0.0;
  }
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_buildKin(const real_T angles[2], const real_T
  velocities_data[], const int32_T velocities_sizes[2], real_T stepTime, const
  uint32_T motorStatuses[2], real_T kinOut[10])
{
  real_T dt;
  int32_T velocities;
  real_T kinOut_idx_1;

  /* % Build the KINData we need for secondary encoders */
  /* '<S194>:1:100' */
  /* '<S194>:1:102' */
  /* % We know that the shoulder and elbow should always be from -pi/2 to 3/2 pi, this method ensures  */
  /*  we always report in that range. */
  /*  NOTE: With appropriately chosen calibration values this is not required.  */
  /*  I have disabled this code because it can pose a danger if for some crazy */
  /*  reason we cross a threshold that makes us jump 2pi from the last measure */
  /*  this can accidentally create HUGE forces depending on the block being */
  /*  used. */
  /*      minVal = -pi/2; */
  /*      maxVal = 3/2 * pi; */
  /*       */
  /*      for n=1:2 */
  /*          while shoElb(n) < minVal */
  /*              shoElb(n) = shoElb(n) + (2 * pi); */
  /*          end */
  /*           */
  /*          while shoElb(n) > maxVal */
  /*              shoElb(n) = shoElb(n) - (2 * pi); */
  /*          end */
  /*      end */
  /* '<S194>:1:151' */
  kinOut[0] = angles[0];
  kinOut[1] = angles[1];

  /* sho, elb angle     */
  /* '<S194>:1:103' */
  kinOut[2] = velocities_data[0];
  kinOut[3] = velocities_data[1];

  /* sho, elb velocity */
  /* '<S194>:1:104' */
  /* % Calculate the derrivative of the given signals. This will work with and  */
  /*  X, Y matrix of values. You will get out the X derrivaties, each */
  /*  calculated over Y times steps. */
  /* '<S194>:1:127' */
  dt = ((real_T)velocities_sizes[1] - 1.0) * stepTime;

  /* '<S194>:1:128' */
  velocities = velocities_sizes[1];
  kinOut[4] = (velocities_data[0] - velocities_data[(velocities - 1) *
               velocities_sizes[0]]) / dt;
  kinOut[5] = (velocities_data[1] - velocities_data[(velocities - 1) *
               velocities_sizes[0] + 1]) / dt;

  /* accelerations, see DEX-2531 */
  /* '<S194>:1:105' */
  dt = kinOut[2];
  kinOut_idx_1 = kinOut[3];
  kinOut[6] = dt;
  kinOut[7] = kinOut_idx_1;

  /* filtered vel */
  /* '<S194>:1:106' */
  kinOut[8] = motorStatuses[0];
  kinOut[9] = motorStatuses[1];

  /* M1, M2 status */
}

/* Function for MATLAB Function: '<S83>/create kinematics' */
static void vmr_rwd_fix_leftarm_buildKinPrimary(const real_T angles[2], const
  real_T velocities_data[], const int32_T velocities_sizes[2], real_T stepTime,
  const uint32_T motorStatuses[2], real_T filteredVelocities_data[], int32_T
  filteredVelocities_sizes[2], real_T kinOut[10])
{
  int32_T b;
  int32_T ix;
  int32_T iy;
  real_T s;
  int32_T ns;
  int32_T pagesize;
  boolean_T f;
  int32_T pageroot;
  int32_T i1;
  int32_T i;
  int32_T b_j;
  real_T buffer_data[50];
  int8_T npages_idx_0;
  real_T y_idx_0;
  int8_T absp_idx_0;
  boolean_T shiftright_idx_0;
  int8_T absp_idx_1;

  /* % Build the KINData we need from the primary encoder data. */
  /* '<S194>:1:111' */
  /* '<S194>:1:113' */
  /* % We know that the shoulder and elbow should always be from -pi/2 to 3/2 pi, this method ensures  */
  /*  we always report in that range. */
  /*  NOTE: With appropriately chosen calibration values this is not required.  */
  /*  I have disabled this code because it can pose a danger if for some crazy */
  /*  reason we cross a threshold that makes us jump 2pi from the last measure */
  /*  this can accidentally create HUGE forces depending on the block being */
  /*  used. */
  /*      minVal = -pi/2; */
  /*      maxVal = 3/2 * pi; */
  /*       */
  /*      for n=1:2 */
  /*          while shoElb(n) < minVal */
  /*              shoElb(n) = shoElb(n) + (2 * pi); */
  /*          end */
  /*           */
  /*          while shoElb(n) > maxVal */
  /*              shoElb(n) = shoElb(n) - (2 * pi); */
  /*          end */
  /*      end */
  /* '<S194>:1:151' */
  kinOut[0] = angles[0];
  kinOut[1] = angles[1];

  /* sho, elb angle */
  if (1 > velocities_sizes[1] - 1) {
    b = 0;
  } else {
    b = velocities_sizes[1] - 1;
  }

  /* '<S194>:1:114' */
  if (b == 0) {
    y_idx_0 = 0.0;
    s = 0.0;
  } else {
    ix = 0;
    s = velocities_data[0];
    for (ns = 2; ns <= b; ns++) {
      ix += 2;
      s += velocities_data[ix / 2 * velocities_sizes[0] + ix % 2];
    }

    y_idx_0 = s;
    ix = 1;
    s = velocities_data[1];
    for (ns = 2; ns <= b; ns++) {
      ix += 2;
      s += velocities_data[ix / 2 * velocities_sizes[0] + ix % 2];
    }
  }

  kinOut[2] = y_idx_0 / (real_T)b;
  kinOut[3] = s / (real_T)b;

  /* velocities, see DEX-2531 */
  /* '<S194>:1:116' */
  /* '<S194>:1:58' */
  if (filteredVelocities_sizes[1] != 0) {
    iy = 0;
    f = true;
    if (0 > filteredVelocities_sizes[0]) {
      iy = 1;
    }

    if (iy > (filteredVelocities_sizes[0] >> 1)) {
      iy = filteredVelocities_sizes[0] - 1;
      f = false;
    }

    absp_idx_0 = (int8_T)iy;
    shiftright_idx_0 = f;
    iy = 1;
    f = true;
    if (1 > (filteredVelocities_sizes[1] >> 1)) {
      iy = filteredVelocities_sizes[1] - 1;
      f = false;
    }

    absp_idx_1 = (int8_T)iy;
    npages_idx_0 = (int8_T)filteredVelocities_sizes[1];
    ix = filteredVelocities_sizes[0];
    ns = absp_idx_0;
    pagesize = filteredVelocities_sizes[0];
    if ((filteredVelocities_sizes[0] > 1) && (absp_idx_0 > 0)) {
      for (i = 1; i <= npages_idx_0; i++) {
        pageroot = (i - 1) * pagesize;
        for (b_j = 0; b_j + 1 < 2; b_j++) {
          i1 = pageroot + b_j;
          if (shiftright_idx_0) {
            for (b = 0; b + 1 <= ns; b++) {
              buffer_data[b] = filteredVelocities_data[((i1 + b) + ix) - ns];
            }

            for (b = ix; b >= ns + 1; b--) {
              filteredVelocities_data[(i1 + b) - 1] = filteredVelocities_data
                [((i1 + b) - ns) - 1];
            }

            for (b = 0; b + 1 <= ns; b++) {
              filteredVelocities_data[i1 + b] = buffer_data[b];
            }
          } else {
            for (b = 0; b + 1 <= ns; b++) {
              buffer_data[b] = filteredVelocities_data[i1 + b];
            }

            b = ix - ns;
            for (iy = 0; iy + 1 <= b; iy++) {
              filteredVelocities_data[i1 + iy] = filteredVelocities_data[(i1 +
                iy) + ns];
            }

            for (b = 0; b + 1 <= ns; b++) {
              filteredVelocities_data[((i1 + b) + ix) - ns] = buffer_data[b];
            }
          }
        }
      }
    }

    ix = filteredVelocities_sizes[1];
    ns = absp_idx_1;
    if ((filteredVelocities_sizes[1] > 1) && (absp_idx_1 > 0)) {
      i = 1;
      while (i <= 1) {
        for (b_j = 0; b_j + 1 <= pagesize; b_j++) {
          i1 = b_j;
          if (f) {
            for (b = 0; b + 1 <= ns; b++) {
              buffer_data[b] = filteredVelocities_data[((b + ix) - ns) *
                pagesize + i1];
            }

            for (b = ix; b >= ns + 1; b--) {
              filteredVelocities_data[i1 + (b - 1) * pagesize] =
                filteredVelocities_data[((b - ns) - 1) * pagesize + i1];
            }

            for (b = 0; b + 1 <= ns; b++) {
              filteredVelocities_data[i1 + b * pagesize] = buffer_data[b];
            }
          } else {
            for (b = 0; b + 1 <= ns; b++) {
              buffer_data[b] = filteredVelocities_data[b * pagesize + i1];
            }

            b = ix - ns;
            for (iy = 0; iy + 1 <= b; iy++) {
              filteredVelocities_data[i1 + iy * pagesize] =
                filteredVelocities_data[(iy + ns) * pagesize + i1];
            }

            for (b = 0; b + 1 <= ns; b++) {
              filteredVelocities_data[i1 + ((b + ix) - ns) * pagesize] =
                buffer_data[b];
            }
          }
        }

        i = 2;
      }
    }
  }

  /* '<S194>:1:59' */
  filteredVelocities_data[0] = kinOut[2];
  filteredVelocities_data[1] = kinOut[3];

  /* '<S194>:1:118' */
  /* % Calculate the derrivative of the given signals. This will work with and  */
  /*  X, Y matrix of values. You will get out the X derrivaties, each */
  /*  calculated over Y times steps. */
  /* '<S194>:1:127' */
  s = ((real_T)filteredVelocities_sizes[1] - 1.0) * stepTime;

  /* '<S194>:1:128' */
  b = filteredVelocities_sizes[1];
  kinOut[4] = (filteredVelocities_data[0] - filteredVelocities_data[(b - 1) *
               filteredVelocities_sizes[0]]) / s;
  kinOut[5] = (filteredVelocities_data[1] - filteredVelocities_data[(b - 1) *
               filteredVelocities_sizes[0] + 1]) / s;

  /* accelerations, see DEX-2531 */
  /* '<S194>:1:119' */
  s = kinOut[2];
  y_idx_0 = kinOut[3];
  kinOut[6] = s;
  kinOut[7] = y_idx_0;

  /* filtered vel */
  /* '<S194>:1:120' */
  kinOut[8] = motorStatuses[0];
  kinOut[9] = motorStatuses[1];

  /* M1, M2 status */
}

/* Function for MATLAB Function: '<S193>/filter_velocities' */
static void vmr_rwd_fix_leftarm_insertVal(real_T arr[3], real_T v)
{
  real_T a_idx_2;
  real_T a_idx_0;
  real_T a_idx_1;

  /* '<S199>:1:39' */
  /* '<S199>:1:40' */
  a_idx_1 = arr[1];
  a_idx_2 = arr[2];
  a_idx_0 = a_idx_1;
  a_idx_1 = a_idx_2;
  a_idx_2 = arr[0];
  arr[0] = a_idx_0;
  arr[1] = a_idx_1;
  arr[2] = a_idx_2;

  /* '<S199>:1:41' */
  arr[2] = v;
}

/* Initial conditions for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM_Init(void)
{
  int32_T i;

  /* InitializeConditions for MATLAB Function: '<S78>/update digital outputs' */
  vmr_rwd_fix_leftarm_DW.prevRunStatus = 0U;

  /* InitializeConditions for Atomic SubSystem: '<S33>/Force Sensor Control' */
  vmr_rwd_fix_leftarm_ForceSensorControl_Init();

  /* End of InitializeConditions for SubSystem: '<S33>/Force Sensor Control' */

  /* InitializeConditions for UnitDelay: '<S77>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_c =
    vmr_rwd_fix_leftarm_P.Output_InitialCondition_pe;

  /* InitializeConditions for MATLAB Function: '<S63>/latch_errors' */
  vmr_rwd_fix_leftarm_DW.enteredOpStep = 0U;
  vmr_rwd_fix_leftarm_DW.sfEvent_n = -1;
  vmr_rwd_fix_leftarm_DW.is_active_c38_General = 0U;
  vmr_rwd_fix_leftarm_DW.is_c38_General =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_e;

  /* InitializeConditions for Chart: '<S33>/control read write' incorporates:
   *  InitializeConditions for SubSystem: '<S63>/update'
   */
  /* InitializeConditions for MATLAB Function: '<S83>/create kinematics' */
  vmr_rwd_fix_leftarm_DW.secondaryPosData_not_empty = false;
  for (i = 0; i < 12; i++) {
    /* InitializeConditions for MATLAB Function: '<S63>/latch_errors' */
    vmr_rwd_fix_leftarm_DW.latchedErrors[i] = 0.0;
    vmr_rwd_fix_leftarm_DW.latchedDCErrors[i] = 0.0;

    /* InitializeConditions for MATLAB Function: '<S193>/filter_velocities' */
    vmr_rwd_fix_leftarm_DW.rawVelocities_g[i] = 0.0;
    vmr_rwd_fix_leftarm_DW.filtVelocities_f[i] = 0.0;
  }

  /* InitializeConditions for MATLAB Function: '<S83>/create servo counter' */
  vmr_rwd_fix_leftarm_DW.servoCounter_not_empty = false;

  /* InitializeConditions for Chart: '<S33>/control read write' incorporates:
   *  InitializeConditions for SubSystem: '<S33>/createKINData'
   */
  vmr_rwd_fix_leftarm_createKINData_Init();
}

/* Disable for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S63>/Arm 1' */
  if (vmr_rwd_fix_leftarm_DW.Arm1_MODE) {
    /* Disable for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' */
    if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i) {
      vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i = false;
    }

    /* End of Disable for SubSystem: '<S74>/M1 AbsEnc Calibration' */

    /* Disable for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' */
    if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a) {
      vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a = false;
    }

    /* End of Disable for SubSystem: '<S74>/M2 AbsEnc Calibration' */
    vmr_rwd_fix_leftarm_DW.Arm1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S63>/Arm 1' */

  /* Disable for Enabled SubSystem: '<S63>/Arm 2' */
  if (vmr_rwd_fix_leftarm_DW.Arm2_MODE) {
    /* Disable for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' */
    if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE) {
      vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE = false;
    }

    /* End of Disable for SubSystem: '<S75>/M1 AbsEnc Calibration' */

    /* Disable for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' */
    if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE) {
      vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE = false;
    }

    /* End of Disable for SubSystem: '<S75>/M2 AbsEnc Calibration' */
    vmr_rwd_fix_leftarm_DW.Arm2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S63>/Arm 2' */
}

/* Start for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM_Start(void)
{
  int32_T i;

  /* Start for S-Function (BKINethercatinit): '<S63>/BKIN EtherCATinit1' */
  {
    int_T status = 1;
    char_T *errMsg;
    xpcPCIDevice pciInfo;
    char_T l_errMsg[128];
    int_T i;
    int_T j;
    uint8_T *DeviceType;

    /* From LinkOsLayer.h   Intel PRO-100 specific definitions */
    struct EtherCATDevices {
      uint16_T VendorID;
      uint16_T DeviceID;
      uint8_T *DeviceType;
    } EtherCATDeviceTable[] = {
      /* I8254x types */
      { 0x8086, 0xABB1, "I8254x" },    //

      { 0x8086, 0xABB2, "I8254x" },    //

      { 0x8086, 0x100E, "I8254x" },    //  PCI_DEVICE_I82540EM_DESKTOP

      { 0x8086, 0x1010, "I8254x" },    //  PCI_DEVICE_I82546EB_COPPER_DUAL

      { 0x8086, 0x1013, "I8254x" },    //  PCI_DEVICE_I82541EI_COPPER

      { 0x8086, 0x1019, "I8254x" },    //  PCI_DEVICE_I82547GI_COPPER

      { 0x8086, 0x1026, "I8254x" },    //  PCI_DEVICE_I82545GM_COPPER

      { 0x8086, 0x104A, "I8254x" },    //  PCI_DEVICE_I82566DM

      { 0x8086, 0x104D, "I8254x" },    //  PCI_DEVICE_I82566MC

      { 0x8086, 0x105E, "I8254x" },    //  PCI_DEVICE_N1E5132_SERVER

      { 0x8086, 0x1075, "I8254x" },    //  PCI_DEVICE_I82547EI

      { 0x8086, 0x1076, "I8254x" },    //  PCI_DEVICE_I82541GI_COPPER

      { 0x8086, 0x1078, "I8254x" },    //  PCI_DEVICE_I82541ER

      { 0x8086, 0x1079, "I8254x" },    //  PCI_DEVICE_I82546GB_COPPER_DUAL

      { 0x8086, 0x107C, "I8254x" },    //  PCI_DEVICE_I82541PI_DESKTOP

      { 0x8086, 0x107D, "I8254x" },    //  PCI_DEVICE_I82572EI

      { 0x8086, 0x108B, "I8254x" },    //  PCI_DEVICE_I82573E

      { 0x8086, 0x108C, "I8254x" },    //  PCI_DEVICE_I82573

      { 0x8086, 0x109A, "I8254x" },    //  PCI_DEVICE_I82573L

      { 0x8086, 0x10A4, "I8254x" },    //  PCI_DEVICE_I82571GB_QUAD

      { 0x8086, 0x10A7, "I8254x" },    //  PCI_DEVICE_I82575_ZOAR

      { 0x8086, 0x10B9, "I8254x" },    //  PCI_DEVICE_I82572GI

      { 0x8086, 0x10BC, "I8254x" },    //  PCI_DEVICE_I82571GB_QUAD_2

      { 0x8086, 0x10BD, "I8254x" },    //  PCI_DEVICE_I82566L

      { 0x8086, 0x10C9, "I8254x" },    //  PCI_DEVICE_I82576

      { 0x8086, 0x10CE, "I8254x" },    //  PCI_DEVICE_I82567V

      { 0x8086, 0x10D3, "I8254x" },    //  PCI_DEVICE_I82574L

      { 0x8086, 0x10DE, "I8254x" },    //  PCI_DEVICE_I82567LM3

      { 0x8086, 0x10EA, "I8254x" },    //  PCI_DEVICE_I82577LM

      { 0x8086, 0x10EB, "I8254x" },    //  PCI_DEVICE_I82577LC

      { 0x8086, 0x10EF, "I8254x" },    //  PCI_DEVICE_I82578DM

      { 0x8086, 0x10F0, "I8254x" },    //  PCI_DEVICE_I82578DC

      { 0x8086, 0x10F5, "I8254x" },    //  PCI_DEVICE_I82567LM

      { 0x8086, 0x1501, "I8254x" },    //  PCI_DEVICE_I82567V3

      { 0x8086, 0x1502, "I8254x" },    //  PCI_DEVICE_I82579LM

      { 0x8086, 0x1503, "I8254x" },    //  PCI_DEVICE_I82579V

      { 0x8086, 0x150C, "I8254x" },    //  PCI_DEVICE_I82583V

      { 0x8086, 0x150E, "I8254x" },    //  PCI_DEVICE_I82580_QUAD

      { 0x8086, 0x1521, "I8254x" },    //  PCI_DEVICE_I350

      { 0x8086, 0x1526, "I8254x" },    //  PCI_DEVICE_I82576_ET2

      { 0x8086, 0x1527, "I8254x" },    //  PCI_DEVICE_I82580_QUAD_FIBRE

      { 0x8086, 0x1533, "I8254x" },    //  PCI_DEVICE_I210_COPPER

      { 0x8086, 0x1539, "I8254x" },    //  PCI_DEVICE_I211AT

      { 0x8086, 0x157B, "I8254x" },    //  PCI_DEVICE_I210_COPPER_FLASHLESS

      { 0x8086, 0x153A, "I8254x" },    //  PCI_DEVICE_I217LM

      { 0x8086, 0x153B, "I8254x" },    //  PCI_DEVICE_I217V

      { 0x8086, 0x155A, "I8254x" },    //  PCI_DEVICE_I218LM

      { 0x8086, 0x1559, "I8254x" },    //  PCI_DEVICE_I218V

      /* I8255x types */
      { 0x8086, 0x103a, "I8255x" },    //  PCI device ID, Intel 82801DB(M) (ICH4) LAN Controller

      { 0x8086, 0x1229, "I8255x" },    //  82557 device ID

      { 0x8086, 0x1209, "I8255x" },    //  82557 ER device ID

      { 0x8086, 0x1050, "I8255x" },    //  PRO/100 VE device ID

      { 0x8086, 0x1039, "I8255x" },    //  82562 VE/VM device ID

      { 0x8086, 0x2449, "I8255x" },    //  82559 ER device ID

      { 0x8086, 0x27DC, "I8255x" },    //  PRO/100 VE device ID

      { 0x8086, 0x1059, "I8255x" },    //  Mobile version of 1229

      { 0x8086, 0x1092, "I8255x" }     //  PRO/100 VE3 device ID
    };

    if (!xpcIsModelInit()) {
      if (g_firstInitBlockToRunPlusOne == 0) {
        g_firstInitBlockToRunPlusOne = 1 + 1;
      }

      if (g_firstInitBlockToRunPlusOne == 1 + 1) {
        g_deviceIndex = NO_ETHERCAT;
      }

      vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2 = MC_TYPE_SIMULATION;
      vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3 = MC_TYPE_SIMULATION;

      /*  Initialize the first DWork vector so that by default EtherCAT for this EtherCAT network device is DISABLED */
      vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK1 = 0;
      if (xpcGetPCIDeviceInfo( PMAC_VENDOR_ID, (uint16_T)PMAC_DEVICE_ID,
                              XPC_NO_SUB, XPC_NO_SUB, XPC_NO_BUS_SLOT,
                              XPC_NO_BUS_SLOT, &pciInfo ) ) {
        if (1 == g_firstInitBlockToRunPlusOne - 1 )
          printf("PMAC not found.\n");
      } else {
        if (1 == g_firstInitBlockToRunPlusOne - 1 )
          printf("PMAC found.\n");
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2 =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2 + 1;// Bit 0 indicates if the PMAC is available
        if (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_PMAC) {
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3 = MC_TYPE_PMAC;
          printf("PMAC configuration enabled\n");
        }
      }

      status = xpcGetPciConfigAtSlot( vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
        vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1], &pciInfo);
      if (status ) {
        sprintf(l_errMsg, "You must specify a bus/slot, not auto search.\n");
        rtmSetErrorStatus(vmr_rwd_fix_leftarm_M, l_errMsg);
        return;
      }

      status = -1;                     // Preset to a failed search.
      DeviceType = "";
      for (j = 0 ; j < sizeof(EtherCATDeviceTable)/sizeof(struct EtherCATDevices)
           ; j++ ) {
        // Search through the device table for the matching vendor/device ID.
        if (( pciInfo.DeviceId == EtherCATDeviceTable[j].DeviceID )
            && ( pciInfo.VendorId == EtherCATDeviceTable[j].VendorID ) ) {
          status = 0;
          DeviceType = EtherCATDeviceTable[j].DeviceType;
          break;
        }
      }

      if (status ) {
        if (1 == g_firstInitBlockToRunPlusOne - 1 ) {
          printf("No valid EtherCAT NIC found at bus %d slot %d\n",
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1]);
        }
      } else {
        char *logfile = "c:\\dbglog.txt";
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2 =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2 + 2;// // Bit 1 indicates that the valid EtherCAT NIC found
        if (1 == g_firstInitBlockToRunPlusOne - 1) {
          printf("Valid EtherCAT NIC found at bus %d slot %d\n",
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1]);
          if ((vmr_rwd_fix_leftarm_P.activation_Value[1] >=
               MAX_NUMBER_ECAT_NETWORK_DEVICES ) &&
              (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_ETHERCAT) )
          {
            printf("Requested EtherCAT Network device %d is greater then max allowable value of %d\n",
                   vmr_rwd_fix_leftarm_P.activation_Value[1],
                   MAX_NUMBER_ECAT_NETWORK_DEVICES - 1 );
          }
        }

        if (( vmr_rwd_fix_leftarm_P.activation_Value[1] == 1 ) &&
            (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_ETHERCAT) ) {
          status = xpcEtherCATinitialize(1, DeviceType,
            vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
            vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1], 0, 1,
            xmlCharArr_1, sizeof(xmlCharArr_1),1048576, 1, logfile, 0.00025);
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(1, 0);
            rtmSetErrorStatus(vmr_rwd_fix_leftarm_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK1 = 1;// Indicate to the rest of this block that EtherCAT is enabled for THIS block
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3 = MC_TYPE_ETHERCAT;// Output that indicates that Motion Control Type of EtherCAT was requested and found (for this device)
          g_deviceIndex = 1;           // Store the device index into this global variable for the other EtherCAT blocks to access
          printf("EtherCAT Network device %d configured.\n", 1);
        }
      }
    }
  }

  /* Start for S-Function (BKINethercatinit): '<S63>/BKIN EtherCATinit' */
  {
    int_T status = 1;
    char_T *errMsg;
    xpcPCIDevice pciInfo;
    char_T l_errMsg[128];
    int_T i;
    int_T j;
    uint8_T *DeviceType;

    /* From LinkOsLayer.h   Intel PRO-100 specific definitions */
    struct EtherCATDevices {
      uint16_T VendorID;
      uint16_T DeviceID;
      uint8_T *DeviceType;
    } EtherCATDeviceTable[] = {
      /* I8254x types */
      { 0x8086, 0xABB1, "I8254x" },    //

      { 0x8086, 0xABB2, "I8254x" },    //

      { 0x8086, 0x100E, "I8254x" },    //  PCI_DEVICE_I82540EM_DESKTOP

      { 0x8086, 0x1010, "I8254x" },    //  PCI_DEVICE_I82546EB_COPPER_DUAL

      { 0x8086, 0x1013, "I8254x" },    //  PCI_DEVICE_I82541EI_COPPER

      { 0x8086, 0x1019, "I8254x" },    //  PCI_DEVICE_I82547GI_COPPER

      { 0x8086, 0x1026, "I8254x" },    //  PCI_DEVICE_I82545GM_COPPER

      { 0x8086, 0x104A, "I8254x" },    //  PCI_DEVICE_I82566DM

      { 0x8086, 0x104D, "I8254x" },    //  PCI_DEVICE_I82566MC

      { 0x8086, 0x105E, "I8254x" },    //  PCI_DEVICE_N1E5132_SERVER

      { 0x8086, 0x1075, "I8254x" },    //  PCI_DEVICE_I82547EI

      { 0x8086, 0x1076, "I8254x" },    //  PCI_DEVICE_I82541GI_COPPER

      { 0x8086, 0x1078, "I8254x" },    //  PCI_DEVICE_I82541ER

      { 0x8086, 0x1079, "I8254x" },    //  PCI_DEVICE_I82546GB_COPPER_DUAL

      { 0x8086, 0x107C, "I8254x" },    //  PCI_DEVICE_I82541PI_DESKTOP

      { 0x8086, 0x107D, "I8254x" },    //  PCI_DEVICE_I82572EI

      { 0x8086, 0x108B, "I8254x" },    //  PCI_DEVICE_I82573E

      { 0x8086, 0x108C, "I8254x" },    //  PCI_DEVICE_I82573

      { 0x8086, 0x109A, "I8254x" },    //  PCI_DEVICE_I82573L

      { 0x8086, 0x10A4, "I8254x" },    //  PCI_DEVICE_I82571GB_QUAD

      { 0x8086, 0x10A7, "I8254x" },    //  PCI_DEVICE_I82575_ZOAR

      { 0x8086, 0x10B9, "I8254x" },    //  PCI_DEVICE_I82572GI

      { 0x8086, 0x10BC, "I8254x" },    //  PCI_DEVICE_I82571GB_QUAD_2

      { 0x8086, 0x10BD, "I8254x" },    //  PCI_DEVICE_I82566L

      { 0x8086, 0x10C9, "I8254x" },    //  PCI_DEVICE_I82576

      { 0x8086, 0x10CE, "I8254x" },    //  PCI_DEVICE_I82567V

      { 0x8086, 0x10D3, "I8254x" },    //  PCI_DEVICE_I82574L

      { 0x8086, 0x10DE, "I8254x" },    //  PCI_DEVICE_I82567LM3

      { 0x8086, 0x10EA, "I8254x" },    //  PCI_DEVICE_I82577LM

      { 0x8086, 0x10EB, "I8254x" },    //  PCI_DEVICE_I82577LC

      { 0x8086, 0x10EF, "I8254x" },    //  PCI_DEVICE_I82578DM

      { 0x8086, 0x10F0, "I8254x" },    //  PCI_DEVICE_I82578DC

      { 0x8086, 0x10F5, "I8254x" },    //  PCI_DEVICE_I82567LM

      { 0x8086, 0x1501, "I8254x" },    //  PCI_DEVICE_I82567V3

      { 0x8086, 0x1502, "I8254x" },    //  PCI_DEVICE_I82579LM

      { 0x8086, 0x1503, "I8254x" },    //  PCI_DEVICE_I82579V

      { 0x8086, 0x150C, "I8254x" },    //  PCI_DEVICE_I82583V

      { 0x8086, 0x150E, "I8254x" },    //  PCI_DEVICE_I82580_QUAD

      { 0x8086, 0x1521, "I8254x" },    //  PCI_DEVICE_I350

      { 0x8086, 0x1526, "I8254x" },    //  PCI_DEVICE_I82576_ET2

      { 0x8086, 0x1527, "I8254x" },    //  PCI_DEVICE_I82580_QUAD_FIBRE

      { 0x8086, 0x1533, "I8254x" },    //  PCI_DEVICE_I210_COPPER

      { 0x8086, 0x1539, "I8254x" },    //  PCI_DEVICE_I211AT

      { 0x8086, 0x157B, "I8254x" },    //  PCI_DEVICE_I210_COPPER_FLASHLESS

      { 0x8086, 0x153A, "I8254x" },    //  PCI_DEVICE_I217LM

      { 0x8086, 0x153B, "I8254x" },    //  PCI_DEVICE_I217V

      { 0x8086, 0x155A, "I8254x" },    //  PCI_DEVICE_I218LM

      { 0x8086, 0x1559, "I8254x" },    //  PCI_DEVICE_I218V

      /* I8255x types */
      { 0x8086, 0x103a, "I8255x" },    //  PCI device ID, Intel 82801DB(M) (ICH4) LAN Controller

      { 0x8086, 0x1229, "I8255x" },    //  82557 device ID

      { 0x8086, 0x1209, "I8255x" },    //  82557 ER device ID

      { 0x8086, 0x1050, "I8255x" },    //  PRO/100 VE device ID

      { 0x8086, 0x1039, "I8255x" },    //  82562 VE/VM device ID

      { 0x8086, 0x2449, "I8255x" },    //  82559 ER device ID

      { 0x8086, 0x27DC, "I8255x" },    //  PRO/100 VE device ID

      { 0x8086, 0x1059, "I8255x" },    //  Mobile version of 1229

      { 0x8086, 0x1092, "I8255x" }     //  PRO/100 VE3 device ID
    };

    if (!xpcIsModelInit()) {
      if (g_firstInitBlockToRunPlusOne == 0) {
        g_firstInitBlockToRunPlusOne = 0 + 1;
      }

      if (g_firstInitBlockToRunPlusOne == 0 + 1) {
        g_deviceIndex = NO_ETHERCAT;
      }

      vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2 = MC_TYPE_SIMULATION;
      vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3 = MC_TYPE_SIMULATION;

      /*  Initialize the first DWork vector so that by default EtherCAT for this EtherCAT network device is DISABLED */
      vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK1 = 0;
      if (xpcGetPCIDeviceInfo( PMAC_VENDOR_ID, (uint16_T)PMAC_DEVICE_ID,
                              XPC_NO_SUB, XPC_NO_SUB, XPC_NO_BUS_SLOT,
                              XPC_NO_BUS_SLOT, &pciInfo ) ) {
        if (0 == g_firstInitBlockToRunPlusOne - 1 )
          printf("PMAC not found.\n");
      } else {
        if (0 == g_firstInitBlockToRunPlusOne - 1 )
          printf("PMAC found.\n");
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2 =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2 + 1;// Bit 0 indicates if the PMAC is available
        if (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_PMAC) {
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3 = MC_TYPE_PMAC;
          printf("PMAC configuration enabled\n");
        }
      }

      status = xpcGetPciConfigAtSlot( vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
        vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1], &pciInfo);
      if (status ) {
        sprintf(l_errMsg, "You must specify a bus/slot, not auto search.\n");
        rtmSetErrorStatus(vmr_rwd_fix_leftarm_M, l_errMsg);
        return;
      }

      status = -1;                     // Preset to a failed search.
      DeviceType = "";
      for (j = 0 ; j < sizeof(EtherCATDeviceTable)/sizeof(struct EtherCATDevices)
           ; j++ ) {
        // Search through the device table for the matching vendor/device ID.
        if (( pciInfo.DeviceId == EtherCATDeviceTable[j].DeviceID )
            && ( pciInfo.VendorId == EtherCATDeviceTable[j].VendorID ) ) {
          status = 0;
          DeviceType = EtherCATDeviceTable[j].DeviceType;
          break;
        }
      }

      if (status ) {
        if (0 == g_firstInitBlockToRunPlusOne - 1 ) {
          printf("No valid EtherCAT NIC found at bus %d slot %d\n",
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1]);
        }
      } else {
        char *logfile = "c:\\dbglog.txt";
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2 =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2 + 2;// // Bit 1 indicates that the valid EtherCAT NIC found
        if (0 == g_firstInitBlockToRunPlusOne - 1) {
          printf("Valid EtherCAT NIC found at bus %d slot %d\n",
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
                 vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1]);
          if ((vmr_rwd_fix_leftarm_P.activation_Value[1] >=
               MAX_NUMBER_ECAT_NETWORK_DEVICES ) &&
              (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_ETHERCAT) )
          {
            printf("Requested EtherCAT Network device %d is greater then max allowable value of %d\n",
                   vmr_rwd_fix_leftarm_P.activation_Value[1],
                   MAX_NUMBER_ECAT_NETWORK_DEVICES - 1 );
          }
        }

        if (( vmr_rwd_fix_leftarm_P.activation_Value[1] == 0 ) &&
            (vmr_rwd_fix_leftarm_P.activation_Value[0] == MC_TYPE_ETHERCAT) ) {
          status = xpcEtherCATinitialize(0, DeviceType,
            vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[0],
            vmr_rwd_fix_leftarm_P.PCIBusSlot_Value[1], 0, 1,
            xmlCharArr_0, sizeof(xmlCharArr_0),1048576, 1, logfile, 0.00025);
          if (status != XPC_ECAT_OK) {
            errMsg = xpcPrintEtherCATError(0, 0);
            rtmSetErrorStatus(vmr_rwd_fix_leftarm_M, errMsg);
            return;
          }

          //printf("init status = %08x\n", status );
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK1 = 1;// Indicate to the rest of this block that EtherCAT is enabled for THIS block
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3 = MC_TYPE_ETHERCAT;// Output that indicates that Motion Control Type of EtherCAT was requested and found (for this device)
          g_deviceIndex = 0;           // Store the device index into this global variable for the other EtherCAT blocks to access
          printf("EtherCAT Network device %d configured.\n", 0);
        }
      }
    }
  }

  /* Start for Constant: '<S33>/system type' */
  vmr_rwd_fix_leftarm_B.systemtype = vmr_rwd_fix_leftarm_P.systemtype_Value;

  /* Start for Enabled SubSystem: '<S63>/Arm 1' */
  vmr_rwd_fix_leftarm_DW.Arm1_MODE = false;

  /* Start for Constant: '<S74>/Torque Mode' */
  vmr_rwd_fix_leftarm_B.TorqueMode_i = vmr_rwd_fix_leftarm_P.TorqueMode_Value;

  /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Atomic SubSystem: '<S84>/A1M1 PDOs' */

  /* Level2 S-Function Block: '<S98>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S84>/A1M1 PDOs' */

  /* Start for Atomic SubSystem: '<S84>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_Start();

  /* End of Start for SubSystem: '<S84>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S84>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S74>/readTrigger' */
  vmr_rwd_fix_leftarm_B.readTrigger_k = vmr_rwd_fix_leftarm_P.readTrigger_Value;

  /* Start for Atomic SubSystem: '<S85>/A1M2 PDOs' */

  /* Level2 S-Function Block: '<S111>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S85>/A1M2 PDOs' */

  /* Start for Atomic SubSystem: '<S85>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_k_Start();

  /* End of Start for SubSystem: '<S85>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S85>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' */
  vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i = false;

  /* InitializeConditions for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' */
  /* InitializeConditions for Memory: '<S87>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hw =
    vmr_rwd_fix_leftarm_P.Memory_X0_e;

  /* InitializeConditions for Memory: '<S87>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[0] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_h;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[1] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_h;

  /* InitializeConditions for Chart: '<S87>/AbsEncoder machine' */
  vmr_rwd_fix_leftarm_AbsEncodermachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine,
     &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine);

  /* End of InitializeConditions for SubSystem: '<S74>/M1 AbsEnc Calibration' */

  /* Start for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' */
  vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a = false;

  /* InitializeConditions for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' */
  /* InitializeConditions for Memory: '<S88>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_i =
    vmr_rwd_fix_leftarm_P.Memory_X0_gr;

  /* InitializeConditions for Memory: '<S88>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[0] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_p;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[1] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_p;

  /* InitializeConditions for Chart: '<S88>/AbsEncoder machine' */
  vmr_rwd_fix_leftarm_AbsEncodermachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b,
     &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_b);

  /* End of InitializeConditions for SubSystem: '<S74>/M2 AbsEnc Calibration' */

  /* Start for Atomic SubSystem: '<S74>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_Start();

  /* End of Start for SubSystem: '<S74>/SDO reading' */

  /* Start for Atomic SubSystem: '<S74>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_Start();

  /* End of Start for SubSystem: '<S74>/SDO writing' */

  /* End of Start for SubSystem: '<S63>/Arm 1' */

  /* InitializeConditions for Enabled SubSystem: '<S63>/Arm 1' */

  /* InitializeConditions for Atomic SubSystem: '<S84>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_Init();

  /* End of InitializeConditions for SubSystem: '<S84>/EMCY Message pump' */

  /* InitializeConditions for Memory: '<S84>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_g =
    vmr_rwd_fix_leftarm_P.Memory_X0_f;

  /* InitializeConditions for Memory: '<S85>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pv =
    vmr_rwd_fix_leftarm_P.Memory_X0_jg;

  /* InitializeConditions for MATLAB Function: '<S74>/forceEnableDisable' */
  vmr_rwd_fix_leftarm_forceEnableDisable_Init
    (&vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable);

  /* InitializeConditions for MATLAB Function: '<S84>/Control GDC Whistle State' */
  vmr_rwd_fix_leftarm_DW.permFaulted_not_empty_n = false;
  vmr_rwd_fix_leftarm_DW.permFaulted_l = 0.0;
  vmr_rwd_fix_leftarm_DW.countFaultSteps_d = 0.0;
  vmr_rwd_fix_leftarm_DW.frameCounter_e = 0.0;

  /* InitializeConditions for Memory: '<S93>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pn =
    vmr_rwd_fix_leftarm_P.Memory_X0_hu;

  /* InitializeConditions for Memory: '<S93>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_ip =
    vmr_rwd_fix_leftarm_P.Memory1_X0;

  /* InitializeConditions for Memory: '<S93>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_p =
    vmr_rwd_fix_leftarm_P.Memory2_X0_k;

  /* InitializeConditions for Chart: '<S74>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine,
     &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine);

  /* InitializeConditions for Memory: '<S74>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[0] =
    vmr_rwd_fix_leftarm_P.Memory2_X0_i;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[1] =
    vmr_rwd_fix_leftarm_P.Memory2_X0_i;

  /* InitializeConditions for Memory: '<S74>/Memory3' */
  vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput_l =
    vmr_rwd_fix_leftarm_P.Memory3_X0;

  /* InitializeConditions for Atomic SubSystem: '<S85>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_m_Init();

  /* End of InitializeConditions for SubSystem: '<S85>/EMCY Message pump' */

  /* InitializeConditions for MATLAB Function: '<S85>/Control GDC Whistle State' */
  vmr_rwd_fix_leftarm_ControlGDCWhistleState_Init
    (&vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_f);

  /* InitializeConditions for Atomic SubSystem: '<S74>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_Init();

  /* End of InitializeConditions for SubSystem: '<S74>/SDO reading' */

  /* InitializeConditions for Atomic SubSystem: '<S74>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_Init();

  /* End of InitializeConditions for SubSystem: '<S74>/SDO writing' */

  /* End of InitializeConditions for SubSystem: '<S63>/Arm 1' */

  /* Start for Enabled SubSystem: '<S63>/Arm 2' */
  vmr_rwd_fix_leftarm_DW.Arm2_MODE = false;

  /* Start for Constant: '<S75>/Torque Mode' */
  vmr_rwd_fix_leftarm_B.TorqueMode = vmr_rwd_fix_leftarm_P.TorqueMode_Value_k;

  /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Atomic SubSystem: '<S136>/A2M1 PDOs' */
  vmr_rwd_fix_leftarm_A2M1PDOs_Start();

  /* End of Start for SubSystem: '<S136>/A2M1 PDOs' */

  /* Start for Atomic SubSystem: '<S136>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_l_Start();

  /* End of Start for SubSystem: '<S136>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S136>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S75>/readTrigger' */
  vmr_rwd_fix_leftarm_B.readTrigger = vmr_rwd_fix_leftarm_P.readTrigger_Value_l;

  /* Start for Atomic SubSystem: '<S137>/A2M2 PDOs' */
  vmr_rwd_fix_leftarm_A2M2PDOs_Start();

  /* End of Start for SubSystem: '<S137>/A2M2 PDOs' */

  /* Start for Atomic SubSystem: '<S137>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_ko_Start();

  /* End of Start for SubSystem: '<S137>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S137>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' */
  vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE = false;

  /* InitializeConditions for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' */
  /* InitializeConditions for Memory: '<S139>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_c =
    vmr_rwd_fix_leftarm_P.Memory_X0_nj;

  /* InitializeConditions for Memory: '<S139>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[0] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_hb;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[1] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_hb;

  /* InitializeConditions for Chart: '<S139>/AbsEncoder machine' */
  vmr_rwd_fix_leftarm_AbsEncodermachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i,
     &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_i);

  /* End of InitializeConditions for SubSystem: '<S75>/M1 AbsEnc Calibration' */

  /* Start for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' */
  vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE = false;

  /* InitializeConditions for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' */
  /* InitializeConditions for Memory: '<S140>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_o =
    vmr_rwd_fix_leftarm_P.Memory_X0_id;

  /* InitializeConditions for Memory: '<S140>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[0] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_a;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[1] =
    vmr_rwd_fix_leftarm_P.Memory1_X0_a;

  /* InitializeConditions for Chart: '<S140>/AbsEncoder machine' */
  vmr_rwd_fix_leftarm_AbsEncodermachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k,
     &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_k);

  /* End of InitializeConditions for SubSystem: '<S75>/M2 AbsEnc Calibration' */

  /* Start for Atomic SubSystem: '<S75>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_p_Start();

  /* End of Start for SubSystem: '<S75>/SDO reading' */

  /* Start for Atomic SubSystem: '<S75>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_c_Start();

  /* End of Start for SubSystem: '<S75>/SDO writing' */

  /* End of Start for SubSystem: '<S63>/Arm 2' */

  /* InitializeConditions for Enabled SubSystem: '<S63>/Arm 2' */

  /* InitializeConditions for Atomic SubSystem: '<S136>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_f_Init();

  /* End of InitializeConditions for SubSystem: '<S136>/EMCY Message pump' */

  /* InitializeConditions for Memory: '<S136>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_l =
    vmr_rwd_fix_leftarm_P.Memory_X0_g;

  /* InitializeConditions for Memory: '<S137>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hp =
    vmr_rwd_fix_leftarm_P.Memory_X0_fo;

  /* InitializeConditions for MATLAB Function: '<S75>/forceEnableDisable' */
  vmr_rwd_fix_leftarm_forceEnableDisable_Init
    (&vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable_k);

  /* InitializeConditions for MATLAB Function: '<S136>/Control GDC Whistle State' */
  vmr_rwd_fix_leftarm_ControlGDCWhistleState_Init
    (&vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_p);

  /* InitializeConditions for Memory: '<S145>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_b =
    vmr_rwd_fix_leftarm_P.Memory_X0_ge;

  /* InitializeConditions for Memory: '<S145>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_c =
    vmr_rwd_fix_leftarm_P.Memory1_X0_f;

  /* InitializeConditions for Memory: '<S145>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput =
    vmr_rwd_fix_leftarm_P.Memory2_X0_e;

  /* InitializeConditions for Chart: '<S75>/SDO read machine' */
  vmr_rwd_fix_leftarm_SDOreadmachine_Init
    (&vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h,
     &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_h);

  /* InitializeConditions for Memory: '<S75>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[0] =
    vmr_rwd_fix_leftarm_P.Memory2_X0_o;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[1] =
    vmr_rwd_fix_leftarm_P.Memory2_X0_o;

  /* InitializeConditions for Memory: '<S75>/Memory3' */
  vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput =
    vmr_rwd_fix_leftarm_P.Memory3_X0_i;

  /* InitializeConditions for Atomic SubSystem: '<S137>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_k_Init();

  /* End of InitializeConditions for SubSystem: '<S137>/EMCY Message pump' */

  /* InitializeConditions for MATLAB Function: '<S137>/Control GDC Whistle State' */
  vmr_rwd_fix_leftarm_DW.permFaulted_not_empty = false;
  vmr_rwd_fix_leftarm_DW.permFaulted = 0.0;
  vmr_rwd_fix_leftarm_DW.countFaultSteps = 0.0;
  vmr_rwd_fix_leftarm_DW.frameCounter = 0.0;

  /* InitializeConditions for Atomic SubSystem: '<S75>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_j_Init();

  /* End of InitializeConditions for SubSystem: '<S75>/SDO reading' */

  /* InitializeConditions for Atomic SubSystem: '<S75>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_l_Init();

  /* End of InitializeConditions for SubSystem: '<S75>/SDO writing' */

  /* End of InitializeConditions for SubSystem: '<S63>/Arm 2' */
  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 3' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Atomic SubSystem: '<S33>/Force Sensor Control' */
  vmr_rwd_fix_leftarm_ForceSensorControl_Start();

  /* End of Start for SubSystem: '<S33>/Force Sensor Control' */

  /* Start for Enabled SubSystem: '<S66>/Data receive' */

  /* Level2 S-Function Block: '<S222>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S66>/Data receive' */

  /* InitializeConditions for Enabled SubSystem: '<S66>/Data receive' */
  /* InitializeConditions for UnitDelay: '<S225>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_h =
    vmr_rwd_fix_leftarm_P.Output_InitialCondition_p;

  /* InitializeConditions for MATLAB Function: '<S222>/MATLAB Function' */
  vmr_rwd_fix_leftarm_DW.r1Sho[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Sho[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Sho[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Sho[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Elb[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Elb[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Elb[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.r1Elb[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Sho[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Sho[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Sho[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Sho[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Elb[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Elb[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Elb[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.r2Elb[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.last_tick[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.last_tick[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.last_tick[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.last_tick[3] = 0.0;

  /* End of InitializeConditions for SubSystem: '<S66>/Data receive' */

  /* Start for Enabled SubSystem: '<S66>/Data receive' */
  /* VirtualOutportStart for Outport: '<S222>/servo counter' */
  vmr_rwd_fix_leftarm_B.Output_e = vmr_rwd_fix_leftarm_P.servocounter_Y0;

  /* VirtualOutportStart for Outport: '<S222>/EP calibration btn' */
  vmr_rwd_fix_leftarm_B.Constant_k = vmr_rwd_fix_leftarm_P.EPcalibrationbtn_Y0;

  /* VirtualOutportStart for Outport: '<S222>/Status bits' */
  for (i = 0; i < 7; i++) {
    vmr_rwd_fix_leftarm_B.Constant1[i] = vmr_rwd_fix_leftarm_P.Statusbits_Y0[i];
  }

  /* End of VirtualOutportStart for Outport: '<S222>/Status bits' */
  /* End of Start for SubSystem: '<S66>/Data receive' */

  /* Start for Constant: '<S229>/Arm Orientation' */
  vmr_rwd_fix_leftarm_B.ArmOrientation_b =
    vmr_rwd_fix_leftarm_P.ArmOrientation_Value;

  /* Start for Constant: '<S229>/Arm Secondary Encoders' */
  vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n =
    vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value;

  /* Start for Constant: '<S230>/Arm Orientation' */
  vmr_rwd_fix_leftarm_B.ArmOrientation_l =
    vmr_rwd_fix_leftarm_P.ArmOrientation_Value_p;

  /* Start for Constant: '<S230>/Arm Secondary Encoders' */
  vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f =
    vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value_h;

  /* Start for Enabled SubSystem: '<S65>/read_pmac' */
  vmr_rwd_fix_leftarm_read_pmac_Start();

  /* End of Start for SubSystem: '<S65>/read_pmac' */

  /* Start for Constant: '<S229>/Arm robot type' */
  vmr_rwd_fix_leftarm_B.robottype_e = vmr_rwd_fix_leftarm_P.Armrobottype_Value;

  /* Start for Constant: '<S229>/Arm robot version' */
  vmr_rwd_fix_leftarm_B.robotversion_g =
    vmr_rwd_fix_leftarm_P.Armrobotversion_Value;

  /* Start for Constant: '<S230>/Arm robot type' */
  vmr_rwd_fix_leftarm_B.robottype_cs =
    vmr_rwd_fix_leftarm_P.Armrobottype_Value_m;

  /* Start for Constant: '<S230>/Arm robot version' */
  vmr_rwd_fix_leftarm_B.robotversion_f =
    vmr_rwd_fix_leftarm_P.Armrobotversion_Value_b;

  /* Start for DataStoreMemory: '<S33>/ECAT Digital in' */
  for (i = 0; i < 8; i++) {
    vmr_rwd_fix_leftarm_DW.ECATDigitalInput[i] =
      vmr_rwd_fix_leftarm_P.ECATDigitalin_InitialValue[i];
  }

  /* End of Start for DataStoreMemory: '<S33>/ECAT Digital in' */

  /* Start for DataStoreMemory: '<S33>/ECAT Err Msgs' */
  memcpy(&vmr_rwd_fix_leftarm_DW.ECATErrMsgs[0],
         &vmr_rwd_fix_leftarm_P.ECATErrMsgs_InitialValue[0], 20U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S33>/ECATTorque feedback' */
  memcpy(&vmr_rwd_fix_leftarm_DW.ECATExtraData[0],
         &vmr_rwd_fix_leftarm_P.ECATTorquefeedback_InitialValue[0], sizeof
         (real_T) << 3U);

  /* Start for DataStoreMemory: '<S33>/HW Settings' */
  memcpy(&vmr_rwd_fix_leftarm_DW.HardwareSettings[0],
         &vmr_rwd_fix_leftarm_P.HWSettings_InitialValue[0], 24U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S33>/Kinematics' */
  memcpy(&vmr_rwd_fix_leftarm_DW.Kinematics[0],
         &vmr_rwd_fix_leftarm_P.Kinematics_InitialValue[0], 20U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S33>/PrimaryEnc' */
  memcpy(&vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[0],
         &vmr_rwd_fix_leftarm_P.PrimaryEnc_InitialValue[0], 12U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S33>/Robot Calib' */
  memcpy(&vmr_rwd_fix_leftarm_DW.RobotCalibrations[0],
         &vmr_rwd_fix_leftarm_P.RobotCalib_InitialValue[0], sizeof(real_T) << 4U);

  /* Start for DataStoreMemory: '<S33>/RobotRevision' */
  vmr_rwd_fix_leftarm_DW.RobotRevision[0] =
    vmr_rwd_fix_leftarm_P.RobotRevision_InitialValue[0];
  vmr_rwd_fix_leftarm_DW.RobotRevision[1] =
    vmr_rwd_fix_leftarm_P.RobotRevision_InitialValue[1];

  /* Start for DataStoreMemory: '<S33>/ServoUpdate' */
  vmr_rwd_fix_leftarm_DW.ServoUpdate =
    vmr_rwd_fix_leftarm_P.ServoUpdate_InitialValue;

  /* Start for DataStoreMemory: '<S33>/System status' */
  for (i = 0; i < 7; i++) {
    vmr_rwd_fix_leftarm_DW.SystemStatus[i] =
      vmr_rwd_fix_leftarm_P.Systemstatus_InitialValue[i];
  }

  /* End of Start for DataStoreMemory: '<S33>/System status' */

  /* Start for DataStoreMemory: '<S33>/calib button' */
  vmr_rwd_fix_leftarm_DW.CalibrationButton =
    vmr_rwd_fix_leftarm_P.calibbutton_InitialValue;

  /* Start for DataStoreMemory: '<S33>/delays' */
  vmr_rwd_fix_leftarm_DW.DelayEstimates[0] =
    vmr_rwd_fix_leftarm_P.delays_InitialValue[0];
  vmr_rwd_fix_leftarm_DW.DelayEstimates[1] =
    vmr_rwd_fix_leftarm_P.delays_InitialValue[1];
  vmr_rwd_fix_leftarm_DW.DelayEstimates[2] =
    vmr_rwd_fix_leftarm_P.delays_InitialValue[2];
  vmr_rwd_fix_leftarm_DW.DelayEstimates[3] =
    vmr_rwd_fix_leftarm_P.delays_InitialValue[3];

  /* Start for DataStoreMemory: '<S33>/has FT sensors' */
  vmr_rwd_fix_leftarm_DW.ArmForceSensors[0] =
    vmr_rwd_fix_leftarm_P.hasFTsensors_InitialValue[0];
  vmr_rwd_fix_leftarm_DW.ArmForceSensors[1] =
    vmr_rwd_fix_leftarm_P.hasFTsensors_InitialValue[1];
}

/* Outputs for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM(void)
{
  uint32_T drive1;
  uint32_T drive2;
  uint32_T drive3;
  uint32_T drive4;
  int32_T status[8];
  uint16_T StatusWord;
  uint16_T ControlWord;
  int32_T b_ii;
  static const uint16_T ignorable_emcys[4] = { 0U, 10U, 65312U, 33072U };

  boolean_T exitg1;
  real_T ticksPerRad;
  static const uint16_T ignorable_emcys_0[4] = { 0U, 10U, 65312U, 33072U };

  real_T r1Calibs[8];
  real_T r2Calibs[8];
  real_T r1SettingsOut[12];
  real_T r2SettingsOut[12];
  real_T anglesPrimary[4];
  real_T queueSizePrimary;
  real_T queueSizeSecondary;
  real_T secondaryShoElb[4];
  real_T primaryShoElbVel[4];
  real_T r1SecondaryKinematicsOut[10];
  real_T r2SecondaryKinematicsOut[10];
  real_T r1PrimaryKinematicsOut[10];
  real_T r2PrimaryKinematicsOut[10];
  real_T b[3];
  int32_T i;
  static const int16_T tmp[24] = { 12032, 12032, 12032, 12032, 12032, 12032,
    12032, 12961, 12961, 12961, 12961, 12961, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5
  };

  static const int16_T tmp_0[24] = { 12033, 12033, 12033, 12033, 12033, 12033,
    12033, 12033, 12033, 12033, 12033, 12033, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12 };

  real_T anglesPrimary_0[4];
  real_T b_data[200];
  int32_T b_sizes[2];
  real_T tmp_data[400];
  int32_T tmp_sizes[2];
  int32_T tmp_sizes_0[2];
  int32_T tmp_sizes_1[2];
  int32_T tmp_sizes_2[2];
  real_T tmp_data_0[200];
  int32_T tmp_sizes_3[2];
  int32_T ii_sizes_idx_1;
  uint64_T tmp_1;

  {
    /* user code (Output function Header) */
    {
      int32_T data[6]= { 0 };

      int32_T ecatStatus;
      int32_T minPauseBeforeReadMicroSec = ECAT_MIN_PAUSE_BEFORE_READ_US;
      int32_T DCInitState;
      if (vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK1) {
        /*------------ S-Function Block: <S63>/BKIN EtherCATinit1 Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
        xpcEtherCATWriteProcessData(1,NULL);
        xpcEtherCATExecAdminJobs(1);
        xpcEtherCATWriteAcyclicData(1);
        mwErrorGet((int_T)1,
                   &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
        memcpy(&vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o1[0], data,6*sizeof
               (int32_T));
        mwErrorClear( (int_T)1 );

        // Clear all momentary triggered values
        vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK4 = xpcGetElapsedTime(NULL);
        ecatStatus = data[1];
        DCInitState = data[4];
        if (ecatStatus == ECAT_PREOP_STATE && DCInitState == 0) {
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK3 = true;
        } else {
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK3 = false;
        }

        if (vmr_rwd_fix_leftarm_P.activation_Value[0] == ECAT_OP_PAUSE_TEST &&
            ecatStatus == ECAT_OP_STATE) {
          minPauseBeforeReadMicroSec = vmr_rwd_fix_leftarm_P.activation_Value[1];
        }

        if (!vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK3) {
          xpcBusyWait(minPauseBeforeReadMicroSec * 1e-6);
          xpcEtherCATReadProcessData(1,NULL);
        }
      }
    }

    {
      int32_T data[6]= { 0 };

      int32_T ecatStatus;
      int32_T minPauseBeforeReadMicroSec = ECAT_MIN_PAUSE_BEFORE_READ_US;
      int32_T DCInitState;
      if (vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK1) {
        /*------------ S-Function Block: <S63>/BKIN EtherCATinit Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
        xpcEtherCATWriteProcessData(0,NULL);
        xpcEtherCATExecAdminJobs(0);
        xpcEtherCATWriteAcyclicData(0);
        mwErrorGet((int_T)0,
                   &data[0], &data[1], &data[2], &data[3],&data[4],&data[5]);
        memcpy(&vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o1[0], data,6*sizeof
               (int32_T));
        mwErrorClear( (int_T)0 );

        // Clear all momentary triggered values
        vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK4 = xpcGetElapsedTime(NULL);
        ecatStatus = data[1];
        DCInitState = data[4];
        if (ecatStatus == ECAT_PREOP_STATE && DCInitState == 0) {
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK3 = true;
        } else {
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK3 = false;
        }

        if (vmr_rwd_fix_leftarm_P.activation_Value[0] == ECAT_OP_PAUSE_TEST &&
            ecatStatus == ECAT_OP_STATE) {
          minPauseBeforeReadMicroSec = vmr_rwd_fix_leftarm_P.activation_Value[1];
        }

        if (!vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK3) {
          xpcBusyWait(minPauseBeforeReadMicroSec * 1e-6);
          xpcEtherCATReadProcessData(0,NULL);
        }
      }
    }

    /* MATLAB Function: '<S63>/sdo_addrs' */
    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.intAddresses[i] = tmp[i];
      vmr_rwd_fix_leftarm_B.floatAddresses[i] = tmp_0[i];
    }

    /* End of MATLAB Function: '<S63>/sdo_addrs' */

    /* DataTypeConversion: '<S63>/Data Type Conversion' */
    /* MATLAB Function 'EtherCAT Subsystem/sdo_addrs': '<S81>:1' */
    /*  %(0x2F00)  User Int - KINARM Lab Serial Number */
    /*  %(0x2F00)  User Int - KINARM Robot PN */
    /*  %(0x2F00)  User Int - KINARM Robot Rev */
    /*  %(0x2F00)  User Int - KINARM Robot Options */
    /*  %(0x2F00)  User Int -  Primary encoder resolution (quad-counts per motor revolution) */
    /*  %(0x2F00)  User Int -  secondary encoder resolution (quad-counts per robot axis revolution) */
    /*  %(0x2F00)  User Int - secondary encoder fundamental counts/revolution (I think this is needed for MMA) */
    /*  %(0x32A1)  User Int - Has the robot been calibrated (0 = no; 1 = yes) */
    /*  %(0x32A1)  User Int - L1 calibration angle offset (milli radians) */
    /*  %(0x32A1)  User Int - L2 calibration angle offset (milli radians) */
    /*  %(0x32A1)  User Int - L1 calibration angle offset (milli radians) for primary encoders */
    /*  %(0x32A1)  User Int - L2 calibration angle offset (milli radians) for primary encoders */
    /* '<S81>:1:3' */
    /*  %(0x2F01)  User float - Force Sensor Angle Offset (radians) */
    /*  %(0x2F01)  User float -  L1 Calibration pin angle (radians) (i.e. angle when calibration pin or block is in place; global coordinates) */
    /*  %(0x2F01)  User float -  L2 Calibration pin angle (radians) */
    /*  %(0x2F01)  User float -  L1 Absolute angle offset (radians) (i.e. angle of absolute encoder zero (i.e. index marking) relative to zero in global coordinates) */
    /*  %(0x2F01)  User float - L2 Absolute angle offset (radians) */
    /*  %(0x2F01)  User float - L1 Link length (m) - (For Exo, L1 is not stored) */
    /*  %(0x2F01)  User float - L2 Link length (m) - (For Exo, L2 is distance to calibration pin (IF THE UTS HAS ONE) */
    /*  %(0x2F01)  User float -  L2 Calibration pin offset (m) - Exo only (IF THE UTS HAS ONE) */
    /*  %(0x2F01)  User float - Motor1 actual_continuous_torque (Nm) */
    /*  %(0x2F01)  User float - Motor2 actual_continuous_torque (Nm) */
    /*  %(0x2F01)  User float - M1 Gear ratio */
    /*  %(0x2F01)  User float -  M2 Gear ratio */
    /* '<S81>:1:19' */
    vmr_rwd_fix_leftarm_B.DataTypeConversion_h = vmr_rwd_fix_leftarm_B.Convert20;

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/activation'
     */
    for (i = 0; i < 6; i++) {
      if (vmr_rwd_fix_leftarm_P.activation_Value[1] >=
          vmr_rwd_fix_leftarm_P.Switch_Threshold_b) {
        vmr_rwd_fix_leftarm_B.Switch_m[i] =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o1[i];
      } else {
        vmr_rwd_fix_leftarm_B.Switch_m[i] =
          vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o1[i];
      }
    }

    if (vmr_rwd_fix_leftarm_P.activation_Value[1] >=
        vmr_rwd_fix_leftarm_P.Switch_Threshold_b) {
      vmr_rwd_fix_leftarm_B.Switch_m[6] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o2;
      vmr_rwd_fix_leftarm_B.Switch_m[7] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3;
    } else {
      vmr_rwd_fix_leftarm_B.Switch_m[6] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o2;
      vmr_rwd_fix_leftarm_B.Switch_m[7] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3;
    }

    /* End of Switch: '<S63>/Switch' */

    /* MATLAB Function: '<S79>/split init' */
    /* MATLAB Function 'EtherCAT Subsystem/Init to Bus/split init': '<S191>:1' */
    /* '<S191>:1:4' */
    vmr_rwd_fix_leftarm_B.errVal = vmr_rwd_fix_leftarm_B.Switch_m[0];

    /* '<S191>:1:5' */
    vmr_rwd_fix_leftarm_B.masterState = vmr_rwd_fix_leftarm_B.Switch_m[1];

    /* '<S191>:1:6' */
    vmr_rwd_fix_leftarm_B.DCErrVal = vmr_rwd_fix_leftarm_B.Switch_m[2];

    /* '<S191>:1:7' */
    vmr_rwd_fix_leftarm_B.MasterToNetworkClkDiff =
      vmr_rwd_fix_leftarm_B.Switch_m[3];

    /* '<S191>:1:8' */
    vmr_rwd_fix_leftarm_B.DCInitState = vmr_rwd_fix_leftarm_B.Switch_m[4];

    /* '<S191>:1:9' */
    vmr_rwd_fix_leftarm_B.NetworkToSlaveClkDiff =
      vmr_rwd_fix_leftarm_B.Switch_m[5];

    /* MATLAB Function: '<S63>/setState' */
    /* MATLAB Function 'EtherCAT Subsystem/setState': '<S82>:1' */
    /* '<S82>:1:3' */
    /*  Cyclic command: working counter error.  */
    /*  This error occurs if the EtherCAT network is broken AFTER the first slave */
    /* '<S82>:1:5' */
    /*  Not all slave devices are in operational state when receiving cyclic frames.  */
    /*  This error occurs if the EtherCAT network is broken BEFORE the first slave */
    /* '<S82>:1:8' */
    vmr_rwd_fix_leftarm_B.motorEnableState = true;

    /*  default */
    if ((vmr_rwd_fix_leftarm_B.masterState == 8) &&
        ((vmr_rwd_fix_leftarm_B.errVal == 65537) ||
         (vmr_rwd_fix_leftarm_B.errVal == 65551))) {
      /* '<S82>:1:10' */
      /* '<S82>:1:11' */
      /* '<S82>:1:12' */
      vmr_rwd_fix_leftarm_B.motorEnableState = false;
    }

    /* End of MATLAB Function: '<S63>/setState' */

    /* Constant: '<S33>/system type' */
    vmr_rwd_fix_leftarm_B.systemtype = vmr_rwd_fix_leftarm_P.systemtype_Value;

    /* RelationalOperator: '<S70>/Compare' incorporates:
     *  Constant: '<S70>/Constant'
     */
    vmr_rwd_fix_leftarm_B.Compare_n = (vmr_rwd_fix_leftarm_B.systemtype ==
      vmr_rwd_fix_leftarm_P.isecat_const);

    /* Outputs for Enabled SubSystem: '<S63>/Arm 1' incorporates:
     *  EnablePort: '<S74>/Enable'
     */
    if (vmr_rwd_fix_leftarm_B.Compare_n) {
      if (!vmr_rwd_fix_leftarm_DW.Arm1_MODE) {
        vmr_rwd_fix_leftarm_DW.Arm1_MODE = true;
      }

      /* Constant: '<S74>/Torque Mode' */
      vmr_rwd_fix_leftarm_B.TorqueMode_i =
        vmr_rwd_fix_leftarm_P.TorqueMode_Value;

      /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[10];
        sfcnOutputs(rts, 1);
      }

      /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[11];
        sfcnOutputs(rts, 1);
      }

      /* Outputs for Atomic SubSystem: '<S84>/A1M1 PDOs' */

      /* Level2 S-Function Block: '<S98>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[8];
        sfcnOutputs(rts, 1);
      }

      /* DataTypeConversion: '<S98>/Data Type Conversion1' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_j1 =
        vmr_rwd_fix_leftarm_B.torque_ky;

      /* DataTypeConversion: '<S98>/A1M1Convert' */
      vmr_rwd_fix_leftarm_B.A1M1Convert[0] =
        vmr_rwd_fix_leftarm_B.primaryposition_l;
      vmr_rwd_fix_leftarm_B.A1M1Convert[1] =
        vmr_rwd_fix_leftarm_B.secondaryposition_n;
      vmr_rwd_fix_leftarm_B.A1M1Convert[2] =
        vmr_rwd_fix_leftarm_B.primaryvelocity_d;
      vmr_rwd_fix_leftarm_B.A1M1Convert[3] =
        vmr_rwd_fix_leftarm_B.DataTypeConversion1_j1;
      vmr_rwd_fix_leftarm_B.A1M1Convert[4] =
        vmr_rwd_fix_leftarm_B.digitalinputs_j;

      /* MATLAB Function: '<S98>/parse status register' */
      vmr_rwd_fix_leftarm_parsestatusregister
        (vmr_rwd_fix_leftarm_B.statusregister_c4,
         &vmr_rwd_fix_leftarm_B.sf_parsestatusregister);

      /* End of Outputs for SubSystem: '<S84>/A1M1 PDOs' */

      /* Outputs for Atomic SubSystem: '<S84>/EMCY Message pump' */
      vmr_rwd_fix_leftarm_EMCYMessagepump();

      /* End of Outputs for SubSystem: '<S84>/EMCY Message pump' */

      /* RelationalOperator: '<S99>/Compare' incorporates:
       *  Constant: '<S99>/Constant'
       */
      vmr_rwd_fix_leftarm_B.Compare_g = (vmr_rwd_fix_leftarm_B.masterState ==
        vmr_rwd_fix_leftarm_P.CompareToConstant_const_m);

      /* Memory: '<S84>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_j =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_g;

      /* Memory: '<S85>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_f =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pv;

      /* MATLAB Function: '<S74>/forceEnableDisable' incorporates:
       *  Constant: '<S63>/max errors to fault'
       *  Constant: '<S74>/enableMotors'
       */
      vmr_rwd_fix_leftarm_forceEnableDisable
        (vmr_rwd_fix_leftarm_P.enableMotors_Value,
         vmr_rwd_fix_leftarm_B.DataTypeConversion_h,
         vmr_rwd_fix_leftarm_B.Memory_n, vmr_rwd_fix_leftarm_B.motorEnableState,
         vmr_rwd_fix_leftarm_B.Memory_j, vmr_rwd_fix_leftarm_B.Memory_f,
         vmr_rwd_fix_leftarm_P.maxerrorstofault_Value,
         &vmr_rwd_fix_leftarm_B.sf_forceEnableDisable,
         &vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable);

      /* MATLAB Function: '<S84>/Control GDC Whistle State' incorporates:
       *  Constant: '<S63>/max errors to fault'
       */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State': '<S100>:1' */
      /*  This function outputs the appropriate ControlWord to control the state of the Elmo Drive. */
      /*  Need to decide why I would want Disabled state vs Ready to switch on state. */
      /*  TODO - deal with faults "better" */
      if (!vmr_rwd_fix_leftarm_DW.permFaulted_not_empty_n) {
        /* '<S100>:1:8' */
        vmr_rwd_fix_leftarm_DW.permFaulted_not_empty_n = true;

        /* '<S100>:1:12' */
        vmr_rwd_fix_leftarm_DW.lastEStopState_n =
          vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut;
      }

      /*  Define the value of the StatusWord for different states of the Elmo drive.  */
      /*  Taken from the EtherCAT CoE Usage.xls from Elmo.  */
      /*  bit 9 = 1, because the Elmo drive is always in Remote mode, but I don't look at it. */
      /*  bit 4 = 1, because the voltage should be enabled */
      /*  bits 0-3, 6 define the state */
      /*  unclear on bits 10 and higher */
      /*  hex2dec('50'); */
      /*  hex2dec('31'); */
      /*  hex2dec('33');		% NOTE: We don't really need this state with the Elmo drive in Torque Mode */
      /*  hex2dec('37');		% Although we operate in this state, we don't actual need to query it */
      /*  hex2dec('18');		 */
      /*  Define the value of the ControlWord for different transitions */
      /*  Equal to transitions 7, 9 or 10 */
      /*  Technically this is just the "shutdown" transition. Equal to transitions 2, 6 or 8 */
      /*  Transition 3. As per SwitchedOn, we don't really need this one. */
      /*  Combines transitions 3 and 4 together = 0xF */
      /*  Transitions 15 together = 0x80 */
      /*  Mask the StatusWord input to bits 0-7 */
      /* '<S100>:1:36' */
      StatusWord = (uint16_T)(vmr_rwd_fix_leftarm_B.Statusword_k & 127);

      /*  127 = 0x7F */
      /* '<S100>:1:38' */
      vmr_rwd_fix_leftarm_B.motorStatus_f = 2U;

      /* motor is not working (red) */
      if ((!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister.faultFound != 0U)) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.allOK != 0U)) {
        /* '<S100>:1:39' */
        if (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.motorOn != 0U) {
          /* '<S100>:1:41' */
          vmr_rwd_fix_leftarm_B.motorStatus_f = 0U;

          /* motor is working (green) */
        } else {
          /* '<S100>:1:43' */
          vmr_rwd_fix_leftarm_B.motorStatus_f = 1U;

          /* motor is ready to work (yellow) */
        }
      }

      /* 0xff20 */
      /* 0xff10 */
      /* 0x8130 */
      /* 10 is a current limit */
      /* '<S100>:1:52' */
      i = 0;
      ii_sizes_idx_1 = 1;
      b_ii = 1;
      exitg1 = false;
      while ((!exitg1) && (b_ii < 5)) {
        ticksPerRad = vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[2];
        if (ignorable_emcys[b_ii - 1] == ticksPerRad) {
          i = 1;
          exitg1 = true;
        } else {
          b_ii++;
        }
      }

      if (i == 0) {
        ii_sizes_idx_1 = 0;
      }

      /* '<S100>:1:53' */
      if ((vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[2] != 0.0) &&
          (!!(ii_sizes_idx_1 == 0))) {
        /* '<S100>:1:55' */
        if (vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[2] == 65296.0) {
          /* '<S100>:1:56' */
          if (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut == 0U) {
            /* '<S100>:1:57' */
            /* if the estops are not pressed but we couldn't start then we are truly faulted */
            /* '<S100>:1:58' */
            vmr_rwd_fix_leftarm_DW.permFaulted_l = 1.0;
          }
        } else {
          /* '<S100>:1:61' */
          vmr_rwd_fix_leftarm_DW.permFaulted_l = 1.0;
        }
      }

      /* is the amp is reporting it is working we can reset our count of faults */
      if (StatusWord == 55) {
        /* '<S100>:1:66' */
        /* '<S100>:1:67' */
        vmr_rwd_fix_leftarm_DW.countFaultSteps_d = 0.0;
      }

      /* '<S100>:1:70' */
      ControlWord = 0U;
      if (StatusWord == 24) {
        /* '<S100>:1:72' */
        /* Only when the amp is ready to go can we try to enable it. Otherwise */
        /* we will flood the slrt stdout and slrt will CPU overload. */
        if ((vmr_rwd_fix_leftarm_B.sf_parsestatusregister.ampStatus == 0U) &&
            (vmr_rwd_fix_leftarm_DW.permFaulted_l == 0.0) &&
            (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut == 0U) &&
            vmr_rwd_fix_leftarm_B.Compare_g) {
          /* '<S100>:1:75' */
          /*  change to the Disabled state if faulted */
          /* '<S100>:1:77' */
          ControlWord = 128U;

          /* if eStops == 0 %the emergency stops are not engaged, i.e. we can run with forces */
          /* '<S100>:1:79' */
          vmr_rwd_fix_leftarm_DW.countFaultSteps_d++;

          /* when the emergency stop is released we get a few rounds where */
          /* there are faults. If we get lots of rounds where there are */
          /* faults then the motor is truly in a bad state and we should */
          /* not continue to ask it to start up. If we continue to ask then */
          /* we can get CPU overloads from all the MBX errors */
          if (vmr_rwd_fix_leftarm_DW.countFaultSteps_d >
              vmr_rwd_fix_leftarm_P.maxerrorstofault_Value) {
            /* '<S100>:1:85' */
            /* '<S100>:1:86' */
            vmr_rwd_fix_leftarm_DW.permFaulted_l = 1.0;
          }

          /*  end */
        } else {
          /* '<S100>:1:90' */
        }
      } else if ((StatusWord == 80) &&
                 (vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState !=
                  0.0)) {
        /* '<S100>:1:92' */
        /*  change to the Ready to Switch On state if in the Switch On Disabled state AND enable has been requested */
        /* '<S100>:1:94' */
        ControlWord = 6U;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState != 0.0)
        {
          /* '<S100>:1:95' */
          /*  change to the Enabled state if in the Ready to Switch on state AND enable had been requested */
          /* '<S100>:1:97' */
          ControlWord = 15U;
        }
      }

      /* If the estop was hit while a task was running that generates a fault. When */
      /* the task is reset then later you disable the estop we need to try to clear */
      /* the error. */
      if ((ControlWord == 0) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.faultFound != 0U) &&
          (!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut != 0U)) &&
          (vmr_rwd_fix_leftarm_DW.lastEStopState_n != 0U)) {
        /* '<S100>:1:103' */
        /* '<S100>:1:104' */
        vmr_rwd_fix_leftarm_DW.frameCounter_e = 0.0;
      }

      /* this code is trying to clear any faults found at start-up */
      /* 4khz * 3s - it takes ~1.8s to reach the op state and we need to do this after that */
      if ((vmr_rwd_fix_leftarm_DW.frameCounter_e < 12000.0) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.allOK != 0U) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.ampStatus == 0U) &&
          (!(vmr_rwd_fix_leftarm_DW.permFaulted_l != 0.0)) &&
          (!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut != 0U)) &&
          vmr_rwd_fix_leftarm_B.Compare_g &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister.faultFound != 0U)) {
        /* '<S100>:1:109' */
        if (StatusWord == 80) {
          /* '<S100>:1:110' */
          /* '<S100>:1:111' */
          ControlWord = 6U;
        } else {
          if (StatusWord == 49) {
            /* '<S100>:1:112' */
            /* the only way to clear an error is to enable the drive. This should */
            /* enable the drive very briefly. The forces should still be off */
            /* though since they are controlled by the run state of the drive. */
            /* '<S100>:1:116' */
            ControlWord = 15U;
          }
        }
      }

      /* '<S100>:1:120' */
      vmr_rwd_fix_leftarm_DW.lastEStopState_n =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut;

      /* '<S100>:1:121' */
      vmr_rwd_fix_leftarm_DW.frameCounter_e++;

      /* '<S100>:1:122' */
      vmr_rwd_fix_leftarm_B.isPermFaulted_i =
        vmr_rwd_fix_leftarm_DW.permFaulted_l;
      vmr_rwd_fix_leftarm_B.ControlWord_o = ControlWord;

      /* End of MATLAB Function: '<S84>/Control GDC Whistle State' */

      /* Level2 S-Function Block: '<S84>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[12];
        sfcnOutputs(rts, 1);
      }

      /* Constant: '<S74>/readTrigger' */
      vmr_rwd_fix_leftarm_B.readTrigger_k =
        vmr_rwd_fix_leftarm_P.readTrigger_Value;

      /* MATLAB Function: '<S74>/size' */
      vmr_rwd_fix_leftarm_size(&vmr_rwd_fix_leftarm_B.sf_size);

      /* Memory: '<S93>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_d3 =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pn;

      /* MATLAB Function: '<S74>/size1' */
      vmr_rwd_fix_leftarm_size(&vmr_rwd_fix_leftarm_B.sf_size1);

      /* Memory: '<S93>/Memory1' */
      vmr_rwd_fix_leftarm_B.Memory1_o =
        vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_ip;

      /* Memory: '<S93>/Memory2' */
      vmr_rwd_fix_leftarm_B.Memory2_n =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_p;

      /* Chart: '<S74>/SDO read machine' */
      vmr_rwd_fix_leftarm_SDOreadmachine(vmr_rwd_fix_leftarm_B.readTrigger_k,
        vmr_rwd_fix_leftarm_B.intAddresses, vmr_rwd_fix_leftarm_B.sf_size.count,
        vmr_rwd_fix_leftarm_B.Memory_d3, vmr_rwd_fix_leftarm_B.floatAddresses,
        vmr_rwd_fix_leftarm_B.sf_size1.count, vmr_rwd_fix_leftarm_B.Memory1_o,
        vmr_rwd_fix_leftarm_B.Memory2_n,
        &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine,
        &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine);

      /* MATLAB Function: '<S74>/split out constants' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 1/split out constants': '<S96>:1' */
      /* '<S96>:1:3' */
      vmr_rwd_fix_leftarm_B.encoderCounts_h[0] = 0.0;
      vmr_rwd_fix_leftarm_B.encoderCounts_h[1] = 0.0;

      /* '<S96>:1:4' */
      vmr_rwd_fix_leftarm_B.calibPinAngles_m[0] = 0.0;
      vmr_rwd_fix_leftarm_B.calibPinAngles_m[1] = 0.0;

      /* '<S96>:1:5' */
      vmr_rwd_fix_leftarm_B.absAngOffsets_c[0] = 0.0;
      vmr_rwd_fix_leftarm_B.absAngOffsets_c[1] = 0.0;

      /* '<S96>:1:6' */
      vmr_rwd_fix_leftarm_B.linkLengths_j[0] = 0.0;
      vmr_rwd_fix_leftarm_B.linkLengths_j[1] = 0.0;

      /* '<S96>:1:7' */
      vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c = 0.0;

      /* '<S96>:1:8' */
      vmr_rwd_fix_leftarm_B.continuousTorques_j[0] = 0.0;
      vmr_rwd_fix_leftarm_B.continuousTorques_j[1] = 0.0;

      /* '<S96>:1:9' */
      vmr_rwd_fix_leftarm_B.gearRatios_p[0] = 0.0;
      vmr_rwd_fix_leftarm_B.gearRatios_p[1] = 0.0;

      /* '<S96>:1:10' */
      vmr_rwd_fix_leftarm_B.offsetRads_f[0] = 0.0;
      vmr_rwd_fix_leftarm_B.offsetRads_f[1] = 0.0;

      /* '<S96>:1:11' */
      vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0] = 0.0;
      vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[1] = 0.0;

      /* '<S96>:1:12' */
      vmr_rwd_fix_leftarm_B.isCalibrated_p = 0.0;

      /* '<S96>:1:13' */
      vmr_rwd_fix_leftarm_B.FTSensorOffset_j = 0.0;

      /* '<S96>:1:14' */
      vmr_rwd_fix_leftarm_B.robotRevision_n = 0.0;

      /* '<S96>:1:16' */
      vmr_rwd_fix_leftarm_B.constantsReady_j =
        vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.complete;
      if (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.complete != 0) {
        /* '<S96>:1:22' */
        vmr_rwd_fix_leftarm_B.encoderCounts_h[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[4];
        vmr_rwd_fix_leftarm_B.encoderCounts_h[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[5];

        /* '<S96>:1:24' */
        vmr_rwd_fix_leftarm_B.isCalibrated_p =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[7];

        /* '<S96>:1:25' */
        vmr_rwd_fix_leftarm_B.offsetRads_f[0] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[8] / 1000.0;
        vmr_rwd_fix_leftarm_B.offsetRads_f[1] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[9] / 1000.0;

        /* '<S96>:1:26' */
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[10] / 1000.0;
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[1] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[11] / 1000.0;

        /* '<S96>:1:28' */
        vmr_rwd_fix_leftarm_B.FTSensorOffset_j =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[0];

        /* '<S96>:1:29' */
        vmr_rwd_fix_leftarm_B.calibPinAngles_m[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[1];
        vmr_rwd_fix_leftarm_B.calibPinAngles_m[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[2];

        /* '<S96>:1:30' */
        vmr_rwd_fix_leftarm_B.absAngOffsets_c[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[3];
        vmr_rwd_fix_leftarm_B.absAngOffsets_c[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[4];

        /* '<S96>:1:31' */
        vmr_rwd_fix_leftarm_B.linkLengths_j[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[5];
        vmr_rwd_fix_leftarm_B.linkLengths_j[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[6];

        /* '<S96>:1:32' */
        vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[7];

        /* '<S96>:1:33' */
        vmr_rwd_fix_leftarm_B.continuousTorques_j[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[8];
        vmr_rwd_fix_leftarm_B.continuousTorques_j[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[9];

        /* '<S96>:1:34' */
        vmr_rwd_fix_leftarm_B.gearRatios_p[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[10];
        vmr_rwd_fix_leftarm_B.gearRatios_p[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[11];

        /* '<S96>:1:35' */
        vmr_rwd_fix_leftarm_B.robotRevision_n =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues[2];
      } else {
        /* '<S96>:1:18' */
      }

      /* End of MATLAB Function: '<S74>/split out constants' */

      /* Selector: '<S102>/L2 select' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select_i = vmr_rwd_fix_leftarm_B.offsetRads_f
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* MATLAB Function: '<S74>/Find Robot type' incorporates:
       *  Constant: '<S63>/ep part nums'
       *  Constant: '<S63>/nhp part nums'
       */
      vmr_rwd_fix_leftarm_FindRobottype
        (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues,
         vmr_rwd_fix_leftarm_P.eppartnums_Value,
         vmr_rwd_fix_leftarm_P.nhppartnums_Value,
         &vmr_rwd_fix_leftarm_B.sf_FindRobottype);

      /* MATLAB Function: '<S74>/split out constants1' incorporates:
       *  Constant: '<S63>/force primary only'
       */
      vmr_rwd_fix_leftarm_splitoutconstants1
        (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.intSDOValues,
         vmr_rwd_fix_leftarm_P.forceprimaryonly_Value,
         vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType,
         &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1);

      /* Selector: '<S102>/L2 select1' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select1_h =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* Selector: '<S102>/L2 select2' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select2_o =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* Selector: '<S102>/L2 select3' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select3_cn =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* Selector: '<S102>/L2 select4' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select4_o = vmr_rwd_fix_leftarm_B.gearRatios_p
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* Memory: '<S74>/Memory2' */
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[0] =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[0];
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[1] =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[1];

      /* Selector: '<S102>/L2 select5' incorporates:
       *  Constant: '<S84>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select5_c =
        vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value - 1];

      /* Memory: '<S74>/Memory3' */
      vmr_rwd_fix_leftarm_B.R1_constantsReady =
        vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput_l;

      /* MATLAB Function: '<S102>/countsToRads' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads': '<S110>:1' */
      /* '<S110>:1:3' */
      /* '<S110>:1:4' */
      vmr_rwd_fix_leftarm_B.digitalDiagnostics_e =
        vmr_rwd_fix_leftarm_B.A1M1Convert[4];

      /* The CR (command reference) manual says that */
      /* Digital inputs 5 and 6 are at bits 20 and 21 */
      /* '<S110>:1:7' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A1M1Convert[4]) >> 20ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_e[0] = (real_T)(tmp_1 & 1ULL);
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A1M1Convert[4]) >> 21ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_e[1] = (real_T)(tmp_1 & 1ULL);

      /* '<S110>:1:8' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A1M1Convert[4]) >> 16ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.calibrationButton_e = (real_T)(tmp_1 & 1ULL);
      if (vmr_rwd_fix_leftarm_B.R1_constantsReady != 1.0) {
        /* '<S110>:1:10' */
        /* '<S110>:1:11' */
        vmr_rwd_fix_leftarm_B.LinkAngle_c = 0.0;

        /* '<S110>:1:12' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m = 0.0;

        /* '<S110>:1:13' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m = 0.0;

        /* '<S110>:1:14' */
        ticksPerRad = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary != 0.0) {
          /* '<S110>:1:38' */
          /* '<S110>:1:39' */
          /* '<S110>:1:40' */
          /* '<S110>:1:19' */
          vmr_rwd_fix_leftarm_B.LinkAngle_c = vmr_rwd_fix_leftarm_B.A1M1Convert
            [1] / (vmr_rwd_fix_leftarm_B.encoderCounts_h[1] / 6.2831853071795862)
            * -vmr_rwd_fix_leftarm_B.L2select1_h +
            vmr_rwd_fix_leftarm_B.L2select_i;
        } else {
          /* '<S110>:1:38' */
          /* '<S110>:1:39' */
          /* '<S110>:1:40' */
          /* '<S110>:1:21' */
          vmr_rwd_fix_leftarm_B.LinkAngle_c = vmr_rwd_fix_leftarm_B.A1M1Convert
            [0] / (vmr_rwd_fix_leftarm_B.encoderCounts_h[0] *
                   vmr_rwd_fix_leftarm_B.L2select4_o / 6.2831853071795862) *
            vmr_rwd_fix_leftarm_B.L2select2_o +
            vmr_rwd_fix_leftarm_B.L2select3_cn;
        }

        /* '<S110>:1:38' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.encoderCounts_h[0] *
          vmr_rwd_fix_leftarm_B.L2select4_o / 6.2831853071795862;

        /* '<S110>:1:39' */
        /* '<S110>:1:40' */
        /* '<S110>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m =
          vmr_rwd_fix_leftarm_B.A1M1Convert[0] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_o + vmr_rwd_fix_leftarm_B.L2select3_cn;

        /* '<S110>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m =
          vmr_rwd_fix_leftarm_B.A1M1Convert[2] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_o;

        /* '<S110>:1:25' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.A1M1Convert[3] / 1000.0 *
          vmr_rwd_fix_leftarm_B.L2select5_c * vmr_rwd_fix_leftarm_B.L2select4_o *
          vmr_rwd_fix_leftarm_B.L2select2_o;

        /* I had to follow this around for a while to figure out why this is */
        /* required. There I think are 2 reasons: 1) the robot orientation I */
        /* calculate for ECAT is "backwards" (i.e. it is arm orientation) 2) if */
        /* you look at the apply loads blocks there is a reversal there as well. */
        /* '<S110>:1:31' */
        if (vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType == 1.0) {
          /* '<S110>:1:32' */
          /* '<S110>:1:33' */
          ticksPerRad = -ticksPerRad;
        }
      }

      vmr_rwd_fix_leftarm_B.torque_d = ticksPerRad;

      /* End of MATLAB Function: '<S102>/countsToRads' */

      /* Outputs for Atomic SubSystem: '<S85>/A1M2 PDOs' */

      /* Level2 S-Function Block: '<S111>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[9];
        sfcnOutputs(rts, 1);
      }

      /* DataTypeConversion: '<S111>/Data Type Conversion' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion_em =
        vmr_rwd_fix_leftarm_B.torque_h;

      /* DataTypeConversion: '<S111>/A1M2Convert' */
      vmr_rwd_fix_leftarm_B.A1M2Convert[0] =
        vmr_rwd_fix_leftarm_B.primaryposition_e;
      vmr_rwd_fix_leftarm_B.A1M2Convert[1] =
        vmr_rwd_fix_leftarm_B.secondaryposition_d;
      vmr_rwd_fix_leftarm_B.A1M2Convert[2] =
        vmr_rwd_fix_leftarm_B.primaryvelocity_p;
      vmr_rwd_fix_leftarm_B.A1M2Convert[3] =
        vmr_rwd_fix_leftarm_B.DataTypeConversion_em;
      vmr_rwd_fix_leftarm_B.A1M2Convert[4] = vmr_rwd_fix_leftarm_B.digitalinputs;

      /* MATLAB Function: '<S111>/parse status register1' */
      vmr_rwd_fix_leftarm_parsestatusregister
        (vmr_rwd_fix_leftarm_B.statusregister_c,
         &vmr_rwd_fix_leftarm_B.sf_parsestatusregister1);

      /* End of Outputs for SubSystem: '<S85>/A1M2 PDOs' */

      /* Outputs for Atomic SubSystem: '<S85>/EMCY Message pump' */
      vmr_rwd_fix_leftarm_EMCYMessagepump_o();

      /* End of Outputs for SubSystem: '<S85>/EMCY Message pump' */

      /* RelationalOperator: '<S112>/Compare' incorporates:
       *  Constant: '<S112>/Constant'
       */
      vmr_rwd_fix_leftarm_B.Compare_h = (vmr_rwd_fix_leftarm_B.masterState ==
        vmr_rwd_fix_leftarm_P.Compare_const);

      /* MATLAB Function: '<S85>/Control GDC Whistle State' incorporates:
       *  Constant: '<S63>/max errors to fault'
       */
      vmr_rwd_fix_leftarm_ControlGDCWhistleState
        (vmr_rwd_fix_leftarm_B.Statusword_b,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.allOK,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.motorOn,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.ampStatus,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.faultFound,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.eStopOut,
         vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l.EMCYMsg[2],
         vmr_rwd_fix_leftarm_B.Compare_h,
         vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState,
         vmr_rwd_fix_leftarm_P.maxerrorstofault_Value,
         &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f,
         &vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_f);

      /* Level2 S-Function Block: '<S85>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[13];
        sfcnOutputs(rts, 1);
      }

      /* Selector: '<S115>/L2 select' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select_e = vmr_rwd_fix_leftarm_B.offsetRads_f
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* Selector: '<S115>/L2 select1' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select1_hf =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* Selector: '<S115>/L2 select2' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select2_d =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* Selector: '<S115>/L2 select3' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select3_p =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* Selector: '<S115>/L2 select4' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select4_g = vmr_rwd_fix_leftarm_B.gearRatios_p
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* Selector: '<S115>/L2 select5' incorporates:
       *  Constant: '<S85>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select5_f =
        vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n - 1];

      /* MATLAB Function: '<S115>/countsToRads' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads': '<S123>:1' */
      /* '<S123>:1:4' */
      /* '<S123>:1:5' */
      vmr_rwd_fix_leftarm_B.digitalDiagnostics_a =
        vmr_rwd_fix_leftarm_B.A1M2Convert[4];

      /* The CR (command reference) manual says that */
      /* Digital inputs 5 and 6 are at bits 20 and 21 */
      /* '<S123>:1:8' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A1M2Convert[4]) >> 20ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_h[0] = (real_T)(tmp_1 & 1ULL);
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A1M2Convert[4]) >> 21ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_h[1] = (real_T)(tmp_1 & 1ULL);
      if (vmr_rwd_fix_leftarm_B.R1_constantsReady != 1.0) {
        /* '<S123>:1:10' */
        /* '<S123>:1:11' */
        vmr_rwd_fix_leftarm_B.LinkAngle_g = 0.0;

        /* '<S123>:1:12' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d = 0.0;

        /* '<S123>:1:13' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b = 0.0;

        /* '<S123>:1:14' */
        ticksPerRad = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary != 0.0) {
          /* '<S123>:1:38' */
          /* '<S123>:1:39' */
          /* '<S123>:1:40' */
          /* '<S123>:1:19' */
          vmr_rwd_fix_leftarm_B.LinkAngle_g = vmr_rwd_fix_leftarm_B.A1M2Convert
            [1] / (vmr_rwd_fix_leftarm_B.encoderCounts_h[1] / 6.2831853071795862)
            * -vmr_rwd_fix_leftarm_B.L2select1_hf +
            vmr_rwd_fix_leftarm_B.L2select_e;
        } else {
          /* '<S123>:1:38' */
          /* '<S123>:1:39' */
          /* '<S123>:1:40' */
          /* '<S123>:1:21' */
          vmr_rwd_fix_leftarm_B.LinkAngle_g = vmr_rwd_fix_leftarm_B.A1M2Convert
            [0] / (vmr_rwd_fix_leftarm_B.encoderCounts_h[0] *
                   vmr_rwd_fix_leftarm_B.L2select4_g / 6.2831853071795862) *
            vmr_rwd_fix_leftarm_B.L2select2_d +
            vmr_rwd_fix_leftarm_B.L2select3_p;
        }

        /* '<S123>:1:38' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.encoderCounts_h[0] *
          vmr_rwd_fix_leftarm_B.L2select4_g / 6.2831853071795862;

        /* '<S123>:1:39' */
        /* '<S123>:1:40' */
        /* '<S123>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b =
          vmr_rwd_fix_leftarm_B.A1M2Convert[0] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_d + vmr_rwd_fix_leftarm_B.L2select3_p;

        /* '<S123>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d =
          vmr_rwd_fix_leftarm_B.A1M2Convert[2] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_d;

        /* '<S123>:1:25' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.A1M2Convert[3] / 1000.0 *
          vmr_rwd_fix_leftarm_B.L2select5_f * vmr_rwd_fix_leftarm_B.L2select4_g *
          vmr_rwd_fix_leftarm_B.L2select2_d;

        /* I had to follow this around for a while to figure out why this is */
        /* required. There I think are 2 reasons: 1) the robot orientation I */
        /* calculate for ECAT is "backwards" (i.e. it is arm orientation) 2) if */
        /* you look at the apply loads blocks there is a reversal there as well. */
        /* '<S123>:1:31' */
        if (vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType == 1.0) {
          /* '<S123>:1:32' */
          /* '<S123>:1:33' */
          ticksPerRad = -ticksPerRad;
        }
      }

      vmr_rwd_fix_leftarm_B.torque_g = ticksPerRad;

      /* End of MATLAB Function: '<S115>/countsToRads' */

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_LinkAngle = vmr_rwd_fix_leftarm_B.LinkAngle_c;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_LinkAngle = vmr_rwd_fix_leftarm_B.LinkAngle_g;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkAngle =
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkVelocity =
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_RecordedTorque = vmr_rwd_fix_leftarm_B.torque_g;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[0] =
        vmr_rwd_fix_leftarm_B.digitalInputs_h[0];
      vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[1] =
        vmr_rwd_fix_leftarm_B.digitalInputs_h[1];

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_digitalDiagnostics =
        vmr_rwd_fix_leftarm_B.digitalDiagnostics_a;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M2_CurrentLimitEnabled =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister1.currentLimitEnabled;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkAngle =
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkVelocity =
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_RecordedTorque = vmr_rwd_fix_leftarm_B.torque_d;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[0] =
        vmr_rwd_fix_leftarm_B.digitalInputs_e[0];
      vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[1] =
        vmr_rwd_fix_leftarm_B.digitalInputs_e[1];

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_digitalDiagnostics =
        vmr_rwd_fix_leftarm_B.digitalDiagnostics_e;

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1_calibrationButton =
        vmr_rwd_fix_leftarm_B.calibrationButton_e;
      for (i = 0; i < 5; i++) {
        /* SignalConversion: '<S74>/Signal Conversion' */
        vmr_rwd_fix_leftarm_B.R1M2_EMCY_codes[i] =
          vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l.EMCYMsg[i];

        /* SignalConversion: '<S74>/Signal Conversion' */
        vmr_rwd_fix_leftarm_B.R1M1_EMCY_codes[i] =
          vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[i];
      }

      /* SignalConversion: '<S74>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R1M1_CurrentLimitEnabled =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister.currentLimitEnabled;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_RobotType =
        vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_absAngleOffset[0] =
        vmr_rwd_fix_leftarm_B.absAngOffsets_c[0];
      vmr_rwd_fix_leftarm_B.R1_absAngleOffset[1] =
        vmr_rwd_fix_leftarm_B.absAngOffsets_c[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_LinkLength[0] =
        vmr_rwd_fix_leftarm_B.linkLengths_j[0];
      vmr_rwd_fix_leftarm_B.R1_LinkLength[1] =
        vmr_rwd_fix_leftarm_B.linkLengths_j[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_L2CalibPinOffset =
        vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[0] =
        vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[0];
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[1] =
        vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_gearRatios[0] =
        vmr_rwd_fix_leftarm_B.gearRatios_p[0];
      vmr_rwd_fix_leftarm_B.R1_gearRatios[1] =
        vmr_rwd_fix_leftarm_B.gearRatios_p[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_isCalibrated =
        vmr_rwd_fix_leftarm_B.isCalibrated_p;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_OffsetRads[0] =
        vmr_rwd_fix_leftarm_B.offsetRads_f[0];
      vmr_rwd_fix_leftarm_B.R1_OffsetRads[1] =
        vmr_rwd_fix_leftarm_B.offsetRads_f[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_OffsetRadsPrimary[0] =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0];
      vmr_rwd_fix_leftarm_B.R1_OffsetRadsPrimary[1] =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_RobotRevision =
        vmr_rwd_fix_leftarm_B.robotRevision_n;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_constantsReady_p =
        vmr_rwd_fix_leftarm_B.R1_constantsReady;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_hasSecondary =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_hasFT =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasFT;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_robotOrientation =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.robotOrientation;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_motorOrientation[0] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[0];
      vmr_rwd_fix_leftarm_B.R1_motorOrientation[1] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_encOrientation[0] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[0];
      vmr_rwd_fix_leftarm_B.R1_encOrientation[1] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_encodercounts[0] =
        vmr_rwd_fix_leftarm_B.encoderCounts_h[0];
      vmr_rwd_fix_leftarm_B.R1_encodercounts[1] =
        vmr_rwd_fix_leftarm_B.encoderCounts_h[1];

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_FTSensorAngleOffset =
        vmr_rwd_fix_leftarm_B.FTSensorOffset_j;

      /* SignalConversion: '<S74>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R1_calibPinAngle[0] =
        vmr_rwd_fix_leftarm_B.calibPinAngles_m[0];
      vmr_rwd_fix_leftarm_B.R1_calibPinAngle[1] =
        vmr_rwd_fix_leftarm_B.calibPinAngles_m[1];

      /* Outputs for Atomic SubSystem: '<S93>/Read Drive 1 SDO' */
      vmr_rwd_fix_leftarm_ReadDrive1SDO_p();

      /* End of Outputs for SubSystem: '<S93>/Read Drive 1 SDO' */

      /* RateTransition: '<S93>/Rate Transition' */
      vmr_rwd_fix_leftarm_B.RateTransition_bs =
        vmr_rwd_fix_leftarm_B.sf_converter_p.int32Out;

      /* RateTransition: '<S93>/Rate Transition1' */
      vmr_rwd_fix_leftarm_B.RateTransition1_dsj =
        vmr_rwd_fix_leftarm_B.sf_converter_p.doubleOut;

      /* RateTransition: '<S93>/Rate Transition2' */
      vmr_rwd_fix_leftarm_B.RateTransition2_d =
        vmr_rwd_fix_leftarm_B.DataTypeConversion_f;

      /* Outputs for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' incorporates:
       *  EnablePort: '<S87>/Enable'
       */
      /* Constant: '<S74>/enableCalibration' */
      if (vmr_rwd_fix_leftarm_P.enableCalibration_Value > 0.0) {
        if (!vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i) {
          /* InitializeConditions for Memory: '<S87>/Memory' */
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hw =
            vmr_rwd_fix_leftarm_P.Memory_X0_e;

          /* InitializeConditions for Memory: '<S87>/Memory1' */
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[0] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_h;
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[1] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_h;

          /* InitializeConditions for Chart: '<S87>/AbsEncoder machine' */
          vmr_rwd_fix_leftarm_AbsEncodermachine_Init
            (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine,
             &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine);
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i = true;
        }

        /* MATLAB Function: '<S87>/set-up values' */
        vmr_rwd_fix_leftarm_setupvalues(&vmr_rwd_fix_leftarm_B.sf_setupvalues);

        /* Memory: '<S87>/Memory' */
        vmr_rwd_fix_leftarm_B.Memory_c =
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hw;

        /* Memory: '<S87>/Memory1' */
        vmr_rwd_fix_leftarm_B.Memory1_b[0] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[0];
        vmr_rwd_fix_leftarm_B.Memory1_b[1] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[1];

        /* Chart: '<S87>/AbsEncoder machine' */
        vmr_rwd_fix_leftarm_AbsEncodermachine
          (vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValuesCount,
           vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValuesCount,
           vmr_rwd_fix_leftarm_B.Memory_c, vmr_rwd_fix_leftarm_B.Memory1_b,
           &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine,
           &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine);

        /* S-Function (BKINethercatasyncsdodownload): '<S87>/BKIN EtherCAT Async SDO Download' */
        {
          int8_T *sigInputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_i;
              sigInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[0];
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[1];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[2];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.setupData[3];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j[7]
                  != 0) {
                res = ecatAsyncSDODownload(deviceIndex,
                  1001,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigInputPtr,
                  1*4,
                  500,
                  370041113,
                  sigStatusPtr,
                  *enInputPtr);
              } else {
                *sigStatusPtr = 0;
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j[7] = 1;
              ;
            }
          }
        }

        /* S-Function (BKINethercatasyncsdoupload): '<S87>/BKIN EtherCAT Async SDO Upload' */
        {
          int8_T *sigOutputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          static int counter= 0;
          int_T actLen;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigOutputPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_p;
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_a;
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.SDORequest[0];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.SDORequest[1];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine.SDORequest[2];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[7]
                  != 0) {
                res = ecatAsyncSDOUpload(deviceIndex,
                  1001,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigOutputPtr,
                  1*4,
                  &actLen,
                  500,
                  370041114,
                  sigStatusPtr,
                  *enInputPtr);
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[7] = 1;
              ;
            }
          }
        }

        srUpdateBC(vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_SubsysRanBC_h);
      } else {
        if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i) {
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i = false;
        }
      }

      /* End of Outputs for SubSystem: '<S74>/M1 AbsEnc Calibration' */

      /* Outputs for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' incorporates:
       *  EnablePort: '<S88>/Enable'
       */
      if (vmr_rwd_fix_leftarm_P.enableCalibration_Value > 0.0) {
        if (!vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a) {
          /* InitializeConditions for Memory: '<S88>/Memory' */
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_i =
            vmr_rwd_fix_leftarm_P.Memory_X0_gr;

          /* InitializeConditions for Memory: '<S88>/Memory1' */
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[0] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_p;
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[1] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_p;

          /* InitializeConditions for Chart: '<S88>/AbsEncoder machine' */
          vmr_rwd_fix_leftarm_AbsEncodermachine_Init
            (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b,
             &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_b);
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a = true;
        }

        /* MATLAB Function: '<S88>/set-up values' */
        vmr_rwd_fix_leftarm_setupvalues(&vmr_rwd_fix_leftarm_B.sf_setupvalues_p);

        /* Memory: '<S88>/Memory' */
        vmr_rwd_fix_leftarm_B.Memory_n0 =
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_i;

        /* Memory: '<S88>/Memory1' */
        vmr_rwd_fix_leftarm_B.Memory1_n[0] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[0];
        vmr_rwd_fix_leftarm_B.Memory1_n[1] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[1];

        /* Chart: '<S88>/AbsEncoder machine' */
        vmr_rwd_fix_leftarm_AbsEncodermachine
          (vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValuesCount,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValuesCount,
           vmr_rwd_fix_leftarm_B.Memory_n0, vmr_rwd_fix_leftarm_B.Memory1_n,
           &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b,
           &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_b);

        /* S-Function (BKINethercatasyncsdodownload): '<S88>/BKIN EtherCAT Async SDO Download' */
        {
          int8_T *sigInputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_ce;
              sigInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[0];
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[1];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[2];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.setupData[3];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[7]
                  != 0) {
                res = ecatAsyncSDODownload(deviceIndex,
                  1002,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigInputPtr,
                  1*4,
                  500,
                  370044267,
                  sigStatusPtr,
                  *enInputPtr);
              } else {
                *sigStatusPtr = 0;
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[7] =
                1;
              ;
            }
          }
        }

        /* S-Function (BKINethercatasyncsdoupload): '<S88>/BKIN EtherCAT Async SDO Upload' */
        {
          int8_T *sigOutputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          static int counter= 0;
          int_T actLen;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigOutputPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_dq;
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_m;
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.SDORequest[0];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.SDORequest[1];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_b.SDORequest[2];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[7]
                  != 0) {
                res = ecatAsyncSDOUpload(deviceIndex,
                  1002,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigOutputPtr,
                  1*4,
                  &actLen,
                  500,
                  370044268,
                  sigStatusPtr,
                  *enInputPtr);
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[7] = 1;
              ;
            }
          }
        }

        srUpdateBC(vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_SubsysRanBC_h);
      } else {
        if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a) {
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a = false;
        }
      }

      /* End of Constant: '<S74>/enableCalibration' */
      /* End of Outputs for SubSystem: '<S74>/M2 AbsEnc Calibration' */

      /* Outputs for Atomic SubSystem: '<S74>/SDO reading' */
      vmr_rwd_fix_leftarm_SDOreading();

      /* End of Outputs for SubSystem: '<S74>/SDO reading' */

      /* Outputs for Atomic SubSystem: '<S74>/SDO writing' */
      vmr_rwd_fix_leftarm_SDOwriting();

      /* End of Outputs for SubSystem: '<S74>/SDO writing' */
      srUpdateBC(vmr_rwd_fix_leftarm_DW.Arm1_SubsysRanBC);
    } else {
      if (vmr_rwd_fix_leftarm_DW.Arm1_MODE) {
        /* Disable for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' */
        if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i) {
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i = false;
        }

        /* End of Disable for SubSystem: '<S74>/M1 AbsEnc Calibration' */

        /* Disable for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' */
        if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a) {
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a = false;
        }

        /* End of Disable for SubSystem: '<S74>/M2 AbsEnc Calibration' */
        vmr_rwd_fix_leftarm_DW.Arm1_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S63>/Arm 1' */

    /* Outputs for Enabled SubSystem: '<S63>/Arm 2' incorporates:
     *  EnablePort: '<S75>/Enable'
     */
    if (vmr_rwd_fix_leftarm_B.Compare_n) {
      if (!vmr_rwd_fix_leftarm_DW.Arm2_MODE) {
        vmr_rwd_fix_leftarm_DW.Arm2_MODE = true;
      }

      /* Constant: '<S75>/Torque Mode' */
      vmr_rwd_fix_leftarm_B.TorqueMode =
        vmr_rwd_fix_leftarm_P.TorqueMode_Value_k;

      /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[16];
        sfcnOutputs(rts, 1);
      }

      /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[17];
        sfcnOutputs(rts, 1);
      }

      /* Outputs for Atomic SubSystem: '<S136>/A2M1 PDOs' */
      vmr_rwd_fix_leftarm_A2M1PDOs();

      /* End of Outputs for SubSystem: '<S136>/A2M1 PDOs' */

      /* Outputs for Atomic SubSystem: '<S136>/EMCY Message pump' */
      vmr_rwd_fix_leftarm_EMCYMessagepump_o1();

      /* End of Outputs for SubSystem: '<S136>/EMCY Message pump' */

      /* RelationalOperator: '<S151>/Compare' incorporates:
       *  Constant: '<S151>/Constant'
       */
      vmr_rwd_fix_leftarm_B.Compare_oe = (vmr_rwd_fix_leftarm_B.masterState ==
        vmr_rwd_fix_leftarm_P.Compare_const_b);

      /* Memory: '<S136>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_m =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_l;

      /* Memory: '<S137>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_i =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hp;

      /* MATLAB Function: '<S75>/forceEnableDisable' incorporates:
       *  Constant: '<S63>/max errors to fault'
       *  Constant: '<S75>/enableMotors'
       */
      vmr_rwd_fix_leftarm_forceEnableDisable
        (vmr_rwd_fix_leftarm_P.enableMotors_Value_c,
         vmr_rwd_fix_leftarm_B.DataTypeConversion_h,
         vmr_rwd_fix_leftarm_B.Memory_n, vmr_rwd_fix_leftarm_B.motorEnableState,
         vmr_rwd_fix_leftarm_B.Memory_m, vmr_rwd_fix_leftarm_B.Memory_i,
         vmr_rwd_fix_leftarm_P.maxerrorstofault_Value,
         &vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k,
         &vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable_k);

      /* MATLAB Function: '<S136>/Control GDC Whistle State' incorporates:
       *  Constant: '<S63>/max errors to fault'
       */
      vmr_rwd_fix_leftarm_ControlGDCWhistleState
        (vmr_rwd_fix_leftarm_B.Statusword,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.allOK,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.motorOn,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.ampStatus,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.faultFound,
         vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.eStopOut,
         vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c.EMCYMsg[2],
         vmr_rwd_fix_leftarm_B.Compare_oe,
         vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState,
         vmr_rwd_fix_leftarm_P.maxerrorstofault_Value,
         &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p,
         &vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_p);

      /* Level2 S-Function Block: '<S136>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[18];
        sfcnOutputs(rts, 1);
      }

      /* Constant: '<S75>/readTrigger' */
      vmr_rwd_fix_leftarm_B.readTrigger =
        vmr_rwd_fix_leftarm_P.readTrigger_Value_l;

      /* MATLAB Function: '<S75>/size' */
      vmr_rwd_fix_leftarm_size(&vmr_rwd_fix_leftarm_B.sf_size_d);

      /* Memory: '<S145>/Memory' */
      vmr_rwd_fix_leftarm_B.Memory_p =
        vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_b;

      /* MATLAB Function: '<S75>/size1' */
      vmr_rwd_fix_leftarm_size(&vmr_rwd_fix_leftarm_B.sf_size1_e);

      /* Memory: '<S145>/Memory1' */
      vmr_rwd_fix_leftarm_B.Memory1_e =
        vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_c;

      /* Memory: '<S145>/Memory2' */
      vmr_rwd_fix_leftarm_B.Memory2 =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput;

      /* Chart: '<S75>/SDO read machine' */
      vmr_rwd_fix_leftarm_SDOreadmachine(vmr_rwd_fix_leftarm_B.readTrigger,
        vmr_rwd_fix_leftarm_B.intAddresses,
        vmr_rwd_fix_leftarm_B.sf_size_d.count, vmr_rwd_fix_leftarm_B.Memory_p,
        vmr_rwd_fix_leftarm_B.floatAddresses,
        vmr_rwd_fix_leftarm_B.sf_size1_e.count, vmr_rwd_fix_leftarm_B.Memory1_e,
        vmr_rwd_fix_leftarm_B.Memory2,
        &vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h,
        &vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_h);

      /* MATLAB Function: '<S75>/split out constants' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 2/split out constants': '<S148>:1' */
      /* '<S148>:1:3' */
      vmr_rwd_fix_leftarm_B.encoderCounts[0] = 0.0;
      vmr_rwd_fix_leftarm_B.encoderCounts[1] = 0.0;

      /* '<S148>:1:4' */
      vmr_rwd_fix_leftarm_B.calibPinAngles[0] = 0.0;
      vmr_rwd_fix_leftarm_B.calibPinAngles[1] = 0.0;

      /* '<S148>:1:5' */
      vmr_rwd_fix_leftarm_B.absAngOffsets[0] = 0.0;
      vmr_rwd_fix_leftarm_B.absAngOffsets[1] = 0.0;

      /* '<S148>:1:6' */
      vmr_rwd_fix_leftarm_B.linkLengths[0] = 0.0;
      vmr_rwd_fix_leftarm_B.linkLengths[1] = 0.0;

      /* '<S148>:1:7' */
      vmr_rwd_fix_leftarm_B.L2CalibPinOffset = 0.0;

      /* '<S148>:1:8' */
      vmr_rwd_fix_leftarm_B.continuousTorques[0] = 0.0;
      vmr_rwd_fix_leftarm_B.continuousTorques[1] = 0.0;

      /* '<S148>:1:9' */
      vmr_rwd_fix_leftarm_B.gearRatios[0] = 0.0;
      vmr_rwd_fix_leftarm_B.gearRatios[1] = 0.0;

      /* '<S148>:1:10' */
      vmr_rwd_fix_leftarm_B.offsetRads[0] = 0.0;
      vmr_rwd_fix_leftarm_B.offsetRads[1] = 0.0;

      /* '<S148>:1:11' */
      vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0] = 0.0;
      vmr_rwd_fix_leftarm_B.offsetRadsPrimary[1] = 0.0;

      /* '<S148>:1:12' */
      vmr_rwd_fix_leftarm_B.isCalibrated = 0.0;

      /* '<S148>:1:13' */
      vmr_rwd_fix_leftarm_B.FTSensorOffset = 0.0;

      /* '<S148>:1:14' */
      vmr_rwd_fix_leftarm_B.robotRevision_o = 0.0;

      /* '<S148>:1:16' */
      vmr_rwd_fix_leftarm_B.constantsReady =
        vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.complete;
      if (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.complete != 0) {
        /* '<S148>:1:22' */
        vmr_rwd_fix_leftarm_B.encoderCounts[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[4];
        vmr_rwd_fix_leftarm_B.encoderCounts[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[5];

        /* '<S148>:1:24' */
        vmr_rwd_fix_leftarm_B.isCalibrated =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[7];

        /* '<S148>:1:25' */
        vmr_rwd_fix_leftarm_B.offsetRads[0] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[8] / 1000.0;
        vmr_rwd_fix_leftarm_B.offsetRads[1] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[9] / 1000.0;

        /* '<S148>:1:26' */
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[10] / 1000.0;
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary[1] = (real_T)
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[11] / 1000.0;

        /* '<S148>:1:28' */
        vmr_rwd_fix_leftarm_B.FTSensorOffset =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[0];

        /* '<S148>:1:29' */
        vmr_rwd_fix_leftarm_B.calibPinAngles[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[1];
        vmr_rwd_fix_leftarm_B.calibPinAngles[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[2];

        /* '<S148>:1:30' */
        vmr_rwd_fix_leftarm_B.absAngOffsets[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[3];
        vmr_rwd_fix_leftarm_B.absAngOffsets[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[4];

        /* '<S148>:1:31' */
        vmr_rwd_fix_leftarm_B.linkLengths[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[5];
        vmr_rwd_fix_leftarm_B.linkLengths[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[6];

        /* '<S148>:1:32' */
        vmr_rwd_fix_leftarm_B.L2CalibPinOffset =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[7];

        /* '<S148>:1:33' */
        vmr_rwd_fix_leftarm_B.continuousTorques[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[8];
        vmr_rwd_fix_leftarm_B.continuousTorques[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[9];

        /* '<S148>:1:34' */
        vmr_rwd_fix_leftarm_B.gearRatios[0] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[10];
        vmr_rwd_fix_leftarm_B.gearRatios[1] =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[11];

        /* '<S148>:1:35' */
        vmr_rwd_fix_leftarm_B.robotRevision_o =
          vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues[2];
      } else {
        /* '<S148>:1:18' */
      }

      /* End of MATLAB Function: '<S75>/split out constants' */

      /* Selector: '<S154>/L2 select' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.offsetrads = vmr_rwd_fix_leftarm_B.offsetRads
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* MATLAB Function: '<S75>/Find Robot type' incorporates:
       *  Constant: '<S63>/ep part nums'
       *  Constant: '<S63>/nhp part nums'
       */
      vmr_rwd_fix_leftarm_FindRobottype
        (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues,
         vmr_rwd_fix_leftarm_P.eppartnums_Value,
         vmr_rwd_fix_leftarm_P.nhppartnums_Value,
         &vmr_rwd_fix_leftarm_B.sf_FindRobottype_d);

      /* MATLAB Function: '<S75>/split out constants1' incorporates:
       *  Constant: '<S63>/force primary only'
       */
      vmr_rwd_fix_leftarm_splitoutconstants1
        (vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.intSDOValues,
         vmr_rwd_fix_leftarm_P.forceprimaryonly_Value,
         vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType,
         &vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o);

      /* Selector: '<S154>/L2 select1' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.encorient =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* Selector: '<S154>/L2 select2' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select2 =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* Selector: '<S154>/L2 select3' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select3 = vmr_rwd_fix_leftarm_B.offsetRadsPrimary
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* Selector: '<S154>/L2 select4' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select4 = vmr_rwd_fix_leftarm_B.gearRatios
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* Memory: '<S75>/Memory2' */
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[0] =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[0];
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[1] =
        vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[1];

      /* Selector: '<S154>/L2 select5' incorporates:
       *  Constant: '<S136>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select5 =
        vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_d - 1];

      /* Memory: '<S75>/Memory3' */
      vmr_rwd_fix_leftarm_B.R2_constantsReady =
        vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput;

      /* MATLAB Function: '<S154>/countsToRads' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads': '<S162>:1' */
      /* '<S162>:1:3' */
      /* '<S162>:1:4' */
      vmr_rwd_fix_leftarm_B.digitalDiagnostics_c =
        vmr_rwd_fix_leftarm_B.A2M1Convert[4];

      /* The CR (command reference) manual says that */
      /* Digital inputs 5 and 6 are at bits 20 and 21 */
      /* '<S162>:1:8' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A2M1Convert[4]) >> 20ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_m[0] = (real_T)(tmp_1 & 1ULL);
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A2M1Convert[4]) >> 21ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs_m[1] = (real_T)(tmp_1 & 1ULL);

      /* '<S162>:1:9' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A2M1Convert[4]) >> 16ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.calibrationButton = (real_T)(tmp_1 & 1ULL);
      if (vmr_rwd_fix_leftarm_B.R2_constantsReady != 1.0) {
        /* '<S162>:1:11' */
        /* '<S162>:1:12' */
        vmr_rwd_fix_leftarm_B.LinkAngle_l = 0.0;

        /* '<S162>:1:13' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i = 0.0;

        /* '<S162>:1:14' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f = 0.0;

        /* '<S162>:1:15' */
        ticksPerRad = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary != 0.0) {
          /* '<S162>:1:39' */
          /* '<S162>:1:40' */
          /* '<S162>:1:41' */
          /* '<S162>:1:20' */
          vmr_rwd_fix_leftarm_B.LinkAngle_l = vmr_rwd_fix_leftarm_B.A2M1Convert
            [1] / (vmr_rwd_fix_leftarm_B.encoderCounts[1] / 6.2831853071795862) *
            -vmr_rwd_fix_leftarm_B.encorient + vmr_rwd_fix_leftarm_B.offsetrads;
        } else {
          /* '<S162>:1:39' */
          /* '<S162>:1:40' */
          /* '<S162>:1:41' */
          /* '<S162>:1:22' */
          vmr_rwd_fix_leftarm_B.LinkAngle_l = vmr_rwd_fix_leftarm_B.A2M1Convert
            [0] / (vmr_rwd_fix_leftarm_B.encoderCounts[0] *
                   vmr_rwd_fix_leftarm_B.L2select4 / 6.2831853071795862) *
            vmr_rwd_fix_leftarm_B.L2select2 + vmr_rwd_fix_leftarm_B.L2select3;
        }

        /* '<S162>:1:39' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.encoderCounts[0] *
          vmr_rwd_fix_leftarm_B.L2select4 / 6.2831853071795862;

        /* '<S162>:1:40' */
        /* '<S162>:1:41' */
        /* '<S162>:1:25' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f =
          vmr_rwd_fix_leftarm_B.A2M1Convert[0] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2 + vmr_rwd_fix_leftarm_B.L2select3;

        /* '<S162>:1:25' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i =
          vmr_rwd_fix_leftarm_B.A2M1Convert[2] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2;

        /* '<S162>:1:26' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.A2M1Convert[3] / 1000.0 *
          vmr_rwd_fix_leftarm_B.L2select5 * vmr_rwd_fix_leftarm_B.L2select4 *
          vmr_rwd_fix_leftarm_B.L2select2;

        /* I had to follow this around for a while to figure out why this is */
        /* required. There I think are 2 reasons: 1) the robot orientation I */
        /* calculate for ECAT is "backwards" (i.e. it is arm orientation) 2) if */
        /* you look at the apply loads blocks there is a reversal there as well. */
        /* '<S162>:1:32' */
        if (vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType == 1.0) {
          /* '<S162>:1:33' */
          /* '<S162>:1:34' */
          ticksPerRad = -ticksPerRad;
        }
      }

      vmr_rwd_fix_leftarm_B.torque_f = ticksPerRad;

      /* End of MATLAB Function: '<S154>/countsToRads' */

      /* Outputs for Atomic SubSystem: '<S137>/A2M2 PDOs' */
      vmr_rwd_fix_leftarm_A2M2PDOs();

      /* End of Outputs for SubSystem: '<S137>/A2M2 PDOs' */

      /* Outputs for Atomic SubSystem: '<S137>/EMCY Message pump' */
      vmr_rwd_fix_leftarm_EMCYMessagepump_i();

      /* End of Outputs for SubSystem: '<S137>/EMCY Message pump' */

      /* RelationalOperator: '<S164>/Compare' incorporates:
       *  Constant: '<S164>/Constant'
       */
      vmr_rwd_fix_leftarm_B.Compare_oo = (vmr_rwd_fix_leftarm_B.masterState ==
        vmr_rwd_fix_leftarm_P.Compare_const_h);

      /* MATLAB Function: '<S137>/Control GDC Whistle State' incorporates:
       *  Constant: '<S63>/max errors to fault'
       */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State': '<S165>:1' */
      /*  This function outputs the appropriate ControlWord to control the state of the Elmo Drive. */
      /*  Need to decide why I would want Disabled state vs Ready to switch on state. */
      /*  TODO - deal with faults "better" */
      if (!vmr_rwd_fix_leftarm_DW.permFaulted_not_empty) {
        /* '<S165>:1:8' */
        vmr_rwd_fix_leftarm_DW.permFaulted_not_empty = true;

        /* '<S165>:1:12' */
        vmr_rwd_fix_leftarm_DW.lastEStopState =
          vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut;
      }

      /*  Define the value of the StatusWord for different states of the Elmo drive.  */
      /*  Taken from the EtherCAT CoE Usage.xls from Elmo.  */
      /*  bit 9 = 1, because the Elmo drive is always in Remote mode, but I don't look at it. */
      /*  bit 4 = 1, because the voltage should be enabled */
      /*  bits 0-3, 6 define the state */
      /*  unclear on bits 10 and higher */
      /*  hex2dec('50'); */
      /*  hex2dec('31'); */
      /*  hex2dec('33');		% NOTE: We don't really need this state with the Elmo drive in Torque Mode */
      /*  hex2dec('37');		% Although we operate in this state, we don't actual need to query it */
      /*  hex2dec('18');		 */
      /*  Define the value of the ControlWord for different transitions */
      /*  Equal to transitions 7, 9 or 10 */
      /*  Technically this is just the "shutdown" transition. Equal to transitions 2, 6 or 8 */
      /*  Transition 3. As per SwitchedOn, we don't really need this one. */
      /*  Combines transitions 3 and 4 together = 0xF */
      /*  Transitions 15 together = 0x80 */
      /*  Mask the StatusWord input to bits 0-7 */
      /* '<S165>:1:36' */
      StatusWord = (uint16_T)(vmr_rwd_fix_leftarm_B.statusword & 127);

      /*  127 = 0x7F */
      /* '<S165>:1:38' */
      vmr_rwd_fix_leftarm_B.motorStatus = 2U;

      /* motor is not working (red) */
      if ((!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.faultFound != 0U))
          && (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.allOK != 0U)) {
        /* '<S165>:1:39' */
        if (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.motorOn != 0U) {
          /* '<S165>:1:41' */
          vmr_rwd_fix_leftarm_B.motorStatus = 0U;

          /* motor is working (green) */
        } else {
          /* '<S165>:1:43' */
          vmr_rwd_fix_leftarm_B.motorStatus = 1U;

          /* motor is ready to work (yellow) */
        }
      }

      /* 0xff20 */
      /* 0xff10 */
      /* 0x8130 */
      /* 10 is a current limit */
      /* '<S165>:1:52' */
      i = 0;
      ii_sizes_idx_1 = 1;
      b_ii = 1;
      exitg1 = false;
      while ((!exitg1) && (b_ii < 5)) {
        ticksPerRad = vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[2];
        if (ignorable_emcys_0[b_ii - 1] == ticksPerRad) {
          i = 1;
          exitg1 = true;
        } else {
          b_ii++;
        }
      }

      if (i == 0) {
        ii_sizes_idx_1 = 0;
      }

      /* '<S165>:1:53' */
      if ((vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[2] != 0.0) &&
          (!!(ii_sizes_idx_1 == 0))) {
        /* '<S165>:1:55' */
        if (vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[2] == 65296.0) {
          /* '<S165>:1:56' */
          if (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut == 0U) {
            /* '<S165>:1:57' */
            /* if the estops are not pressed but we couldn't start then we are truly faulted */
            /* '<S165>:1:58' */
            vmr_rwd_fix_leftarm_DW.permFaulted = 1.0;
          }
        } else {
          /* '<S165>:1:61' */
          vmr_rwd_fix_leftarm_DW.permFaulted = 1.0;
        }
      }

      /* is the amp is reporting it is working we can reset our count of faults */
      if (StatusWord == 55) {
        /* '<S165>:1:66' */
        /* '<S165>:1:67' */
        vmr_rwd_fix_leftarm_DW.countFaultSteps = 0.0;
      }

      /* '<S165>:1:70' */
      ControlWord = 0U;
      if (StatusWord == 24) {
        /* '<S165>:1:72' */
        /* Only when the amp is ready to go can we try to enable it. Otherwise */
        /* we will flood the slrt stdout and slrt will CPU overload. */
        if ((vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.ampStatus == 0U) &&
            (vmr_rwd_fix_leftarm_DW.permFaulted == 0.0) &&
            (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut == 0U) &&
            vmr_rwd_fix_leftarm_B.Compare_oo) {
          /* '<S165>:1:75' */
          /*  change to the Disabled state if faulted */
          /* '<S165>:1:77' */
          ControlWord = 128U;

          /* if eStops == 0 %the emergency stops are not engaged, i.e. we can run with forces */
          /* '<S165>:1:79' */
          vmr_rwd_fix_leftarm_DW.countFaultSteps++;

          /* when the emergency stop is released we get a few rounds where */
          /* there are faults. If we get lots of rounds where there are */
          /* faults then the motor is truly in a bad state and we should */
          /* not continue to ask it to start up. If we continue to ask then */
          /* we can get CPU overloads from all the MBX errors */
          if (vmr_rwd_fix_leftarm_DW.countFaultSteps >
              vmr_rwd_fix_leftarm_P.maxerrorstofault_Value) {
            /* '<S165>:1:85' */
            /* '<S165>:1:86' */
            vmr_rwd_fix_leftarm_DW.permFaulted = 1.0;
          }

          /*  end */
        } else {
          /* '<S165>:1:90' */
        }
      } else if ((StatusWord == 80) &&
                 (vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState
                  != 0.0)) {
        /* '<S165>:1:92' */
        /*  change to the Ready to Switch On state if in the Switch On Disabled state AND enable has been requested */
        /* '<S165>:1:94' */
        ControlWord = 6U;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState != 0.0)
        {
          /* '<S165>:1:95' */
          /*  change to the Enabled state if in the Ready to Switch on state AND enable had been requested */
          /* '<S165>:1:97' */
          ControlWord = 15U;
        }
      }

      /* If the estop was hit while a task was running that generates a fault. When */
      /* the task is reset then later you disable the estop we need to try to clear */
      /* the error. */
      if ((ControlWord == 0) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.faultFound != 0U) &&
          (!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut != 0U)) &&
          (vmr_rwd_fix_leftarm_DW.lastEStopState != 0U)) {
        /* '<S165>:1:103' */
        /* '<S165>:1:104' */
        vmr_rwd_fix_leftarm_DW.frameCounter = 0.0;
      }

      /* this code is trying to clear any faults found at start-up */
      /* 4khz * 3s - it takes ~1.8s to reach the op state and we need to do this after that */
      if ((vmr_rwd_fix_leftarm_DW.frameCounter < 12000.0) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.allOK != 0U) &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.ampStatus == 0U) &&
          (!(vmr_rwd_fix_leftarm_DW.permFaulted != 0.0)) &&
          (!(vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut != 0U)) &&
          vmr_rwd_fix_leftarm_B.Compare_oo &&
          (vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.faultFound != 0U)) {
        /* '<S165>:1:109' */
        if (StatusWord == 80) {
          /* '<S165>:1:110' */
          /* '<S165>:1:111' */
          ControlWord = 6U;
        } else {
          if (StatusWord == 49) {
            /* '<S165>:1:112' */
            /* the only way to clear an error is to enable the drive. This should */
            /* enable the drive very briefly. The forces should still be off */
            /* though since they are controlled by the run state of the drive. */
            /* '<S165>:1:116' */
            ControlWord = 15U;
          }
        }
      }

      /* '<S165>:1:120' */
      vmr_rwd_fix_leftarm_DW.lastEStopState =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.eStopOut;

      /* '<S165>:1:121' */
      vmr_rwd_fix_leftarm_DW.frameCounter++;

      /* '<S165>:1:122' */
      vmr_rwd_fix_leftarm_B.isPermFaulted = vmr_rwd_fix_leftarm_DW.permFaulted;
      vmr_rwd_fix_leftarm_B.ControlWord = ControlWord;

      /* End of MATLAB Function: '<S137>/Control GDC Whistle State' */

      /* Level2 S-Function Block: '<S137>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[19];
        sfcnOutputs(rts, 1);
      }

      /* Selector: '<S167>/L2 select' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select = vmr_rwd_fix_leftarm_B.offsetRads[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* Selector: '<S167>/L2 select1' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select1 =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* Selector: '<S167>/L2 select2' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select2_p =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* Selector: '<S167>/L2 select3' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select3_c =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* Selector: '<S167>/L2 select4' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select4_b = vmr_rwd_fix_leftarm_B.gearRatios
        [(int32_T)vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* Selector: '<S167>/L2 select5' incorporates:
       *  Constant: '<S137>/MotorIdx'
       */
      vmr_rwd_fix_leftarm_B.L2select5_a =
        vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[(int32_T)
        vmr_rwd_fix_leftarm_P.MotorIdx_Value_n1 - 1];

      /* MATLAB Function: '<S167>/countsToRads' */
      /* MATLAB Function 'EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads': '<S175>:1' */
      /* '<S175>:1:3' */
      /* '<S175>:1:4' */
      vmr_rwd_fix_leftarm_B.digitalDiagnostics =
        vmr_rwd_fix_leftarm_B.A2M2Convert[4];

      /* The CR (command reference) manual says that */
      /* Digital inputs 5 and 6 are at bits 20 and 21 */
      /* '<S175>:1:8' */
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A2M2Convert[4]) >> 20ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs[0] = (real_T)(tmp_1 & 1ULL);
      ticksPerRad = rt_roundd_snf((real_T)((uint64_T)rt_roundd_snf
        (vmr_rwd_fix_leftarm_B.A2M2Convert[4]) >> 21ULL));
      if (ticksPerRad < 1.8446744073709552E+19) {
        if (ticksPerRad >= 0.0) {
          tmp_1 = (uint64_T)ticksPerRad;
        } else {
          tmp_1 = 0ULL;
        }
      } else {
        tmp_1 = MAX_uint64_T;
      }

      vmr_rwd_fix_leftarm_B.digitalInputs[1] = (real_T)(tmp_1 & 1ULL);
      if (vmr_rwd_fix_leftarm_B.R2_constantsReady != 1.0) {
        /* '<S175>:1:10' */
        /* '<S175>:1:11' */
        vmr_rwd_fix_leftarm_B.LinkAngle = 0.0;

        /* '<S175>:1:12' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel = 0.0;

        /* '<S175>:1:13' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle = 0.0;

        /* '<S175>:1:14' */
        ticksPerRad = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary != 0.0) {
          /* '<S175>:1:38' */
          /* '<S175>:1:39' */
          /* '<S175>:1:40' */
          /* '<S175>:1:19' */
          vmr_rwd_fix_leftarm_B.LinkAngle = vmr_rwd_fix_leftarm_B.A2M2Convert[1]
            / (vmr_rwd_fix_leftarm_B.encoderCounts[1] / 6.2831853071795862) *
            -vmr_rwd_fix_leftarm_B.L2select1 + vmr_rwd_fix_leftarm_B.L2select;
        } else {
          /* '<S175>:1:38' */
          /* '<S175>:1:39' */
          /* '<S175>:1:40' */
          /* '<S175>:1:21' */
          vmr_rwd_fix_leftarm_B.LinkAngle = vmr_rwd_fix_leftarm_B.A2M2Convert[0]
            / (vmr_rwd_fix_leftarm_B.encoderCounts[0] *
               vmr_rwd_fix_leftarm_B.L2select4_b / 6.2831853071795862) *
            vmr_rwd_fix_leftarm_B.L2select2_p +
            vmr_rwd_fix_leftarm_B.L2select3_c;
        }

        /* '<S175>:1:38' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.encoderCounts[0] *
          vmr_rwd_fix_leftarm_B.L2select4_b / 6.2831853071795862;

        /* '<S175>:1:39' */
        /* '<S175>:1:40' */
        /* '<S175>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle =
          vmr_rwd_fix_leftarm_B.A2M2Convert[0] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_p + vmr_rwd_fix_leftarm_B.L2select3_c;

        /* '<S175>:1:24' */
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel =
          vmr_rwd_fix_leftarm_B.A2M2Convert[2] / ticksPerRad *
          vmr_rwd_fix_leftarm_B.L2select2_p;

        /* '<S175>:1:25' */
        ticksPerRad = vmr_rwd_fix_leftarm_B.A2M2Convert[3] / 1000.0 *
          vmr_rwd_fix_leftarm_B.L2select5_a * vmr_rwd_fix_leftarm_B.L2select4_b *
          vmr_rwd_fix_leftarm_B.L2select2_p;

        /* I had to follow this around for a while to figure out why this is */
        /* required. There I think are 2 reasons: 1) the robot orientation I */
        /* calculate for ECAT is "backwards" (i.e. it is arm orientation) 2) if */
        /* you look at the apply loads blocks there is a reversal there as well. */
        /* '<S175>:1:31' */
        if (vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType == 1.0) {
          /* '<S175>:1:32' */
          /* '<S175>:1:33' */
          ticksPerRad = -ticksPerRad;
        }
      }

      vmr_rwd_fix_leftarm_B.torque = ticksPerRad;

      /* End of MATLAB Function: '<S167>/countsToRads' */

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_LinkAngle = vmr_rwd_fix_leftarm_B.LinkAngle_l;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_LinkAngle = vmr_rwd_fix_leftarm_B.LinkAngle;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkAngle =
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkVelocity =
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_RecordedTorque = vmr_rwd_fix_leftarm_B.torque;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[0] =
        vmr_rwd_fix_leftarm_B.digitalInputs[0];
      vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[1] =
        vmr_rwd_fix_leftarm_B.digitalInputs[1];

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_digitalDiagnostics =
        vmr_rwd_fix_leftarm_B.digitalDiagnostics;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M2_CurrentLimitEnabled =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_fq.currentLimitEnabled;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkAngle =
        vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkVelocity =
        vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_RecordedTorque = vmr_rwd_fix_leftarm_B.torque_f;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[0] =
        vmr_rwd_fix_leftarm_B.digitalInputs_m[0];
      vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[1] =
        vmr_rwd_fix_leftarm_B.digitalInputs_m[1];

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_digitalDiagnostics =
        vmr_rwd_fix_leftarm_B.digitalDiagnostics_c;

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2_calibrationButton =
        vmr_rwd_fix_leftarm_B.calibrationButton;
      for (i = 0; i < 5; i++) {
        /* SignalConversion: '<S75>/Signal Conversion' */
        vmr_rwd_fix_leftarm_B.R2M2_EMCY_codes[i] =
          vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[i];

        /* SignalConversion: '<S75>/Signal Conversion' */
        vmr_rwd_fix_leftarm_B.R2M1_EMCY_codes[i] =
          vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c.EMCYMsg[i];
      }

      /* SignalConversion: '<S75>/Signal Conversion' */
      vmr_rwd_fix_leftarm_B.R2M1_CurrentLimitEnabled =
        vmr_rwd_fix_leftarm_B.sf_parsestatusregister1_f.currentLimitEnabled;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_RobotType =
        vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_absAngleOffset[0] =
        vmr_rwd_fix_leftarm_B.absAngOffsets[0];
      vmr_rwd_fix_leftarm_B.R2_absAngleOffset[1] =
        vmr_rwd_fix_leftarm_B.absAngOffsets[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_LinkLength[0] =
        vmr_rwd_fix_leftarm_B.linkLengths[0];
      vmr_rwd_fix_leftarm_B.R2_LinkLength[1] =
        vmr_rwd_fix_leftarm_B.linkLengths[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_L2CalibPinOffset =
        vmr_rwd_fix_leftarm_B.L2CalibPinOffset;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[0] =
        vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[0];
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[1] =
        vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_gearRatios[0] = vmr_rwd_fix_leftarm_B.gearRatios
        [0];
      vmr_rwd_fix_leftarm_B.R2_gearRatios[1] = vmr_rwd_fix_leftarm_B.gearRatios
        [1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_isCalibrated = vmr_rwd_fix_leftarm_B.isCalibrated;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_OffsetRads[0] = vmr_rwd_fix_leftarm_B.offsetRads
        [0];
      vmr_rwd_fix_leftarm_B.R2_OffsetRads[1] = vmr_rwd_fix_leftarm_B.offsetRads
        [1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_OffsetRadsPrimary[0] =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0];
      vmr_rwd_fix_leftarm_B.R2_OffsetRadsPrimary[1] =
        vmr_rwd_fix_leftarm_B.offsetRadsPrimary[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_RobotRevision =
        vmr_rwd_fix_leftarm_B.robotRevision_o;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_constantsReady_j =
        vmr_rwd_fix_leftarm_B.R2_constantsReady;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_hasSecondary =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_hasFT =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasFT;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_robotOrientation =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.robotOrientation;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_motorOrientation[0] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[0];
      vmr_rwd_fix_leftarm_B.R2_motorOrientation[1] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_encOrientation[0] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[0];
      vmr_rwd_fix_leftarm_B.R2_encOrientation[1] =
        vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_encodercounts[0] =
        vmr_rwd_fix_leftarm_B.encoderCounts[0];
      vmr_rwd_fix_leftarm_B.R2_encodercounts[1] =
        vmr_rwd_fix_leftarm_B.encoderCounts[1];

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_FTSensorAngleOffset =
        vmr_rwd_fix_leftarm_B.FTSensorOffset;

      /* SignalConversion: '<S75>/Signal Conversion1' */
      vmr_rwd_fix_leftarm_B.R2_calibPinAngle[0] =
        vmr_rwd_fix_leftarm_B.calibPinAngles[0];
      vmr_rwd_fix_leftarm_B.R2_calibPinAngle[1] =
        vmr_rwd_fix_leftarm_B.calibPinAngles[1];

      /* Outputs for Atomic SubSystem: '<S145>/Read Drive 3 SDO' */
      vmr_rwd_fix_leftarm_ReadDrive3SDO_g();

      /* End of Outputs for SubSystem: '<S145>/Read Drive 3 SDO' */

      /* RateTransition: '<S145>/Rate Transition' */
      vmr_rwd_fix_leftarm_B.RateTransition_bx =
        vmr_rwd_fix_leftarm_B.sf_converter_jl.int32Out;

      /* RateTransition: '<S145>/Rate Transition1' */
      vmr_rwd_fix_leftarm_B.RateTransition1_ds =
        vmr_rwd_fix_leftarm_B.sf_converter_jl.doubleOut;

      /* RateTransition: '<S145>/Rate Transition2' */
      vmr_rwd_fix_leftarm_B.RateTransition2_jr =
        vmr_rwd_fix_leftarm_B.DataTypeConversion_iq;

      /* Outputs for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' incorporates:
       *  EnablePort: '<S139>/Enable'
       */
      /* Constant: '<S75>/enableCalibration' */
      if (vmr_rwd_fix_leftarm_P.enableCalibration_Value_h > 0.0) {
        if (!vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE) {
          /* InitializeConditions for Memory: '<S139>/Memory' */
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_c =
            vmr_rwd_fix_leftarm_P.Memory_X0_nj;

          /* InitializeConditions for Memory: '<S139>/Memory1' */
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[0] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_hb;
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[1] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_hb;

          /* InitializeConditions for Chart: '<S139>/AbsEncoder machine' */
          vmr_rwd_fix_leftarm_AbsEncodermachine_Init
            (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i,
             &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_i);
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE = true;
        }

        /* MATLAB Function: '<S139>/set-up values' */
        vmr_rwd_fix_leftarm_setupvalues(&vmr_rwd_fix_leftarm_B.sf_setupvalues_k);

        /* Memory: '<S139>/Memory' */
        vmr_rwd_fix_leftarm_B.Memory_h =
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_c;

        /* Memory: '<S139>/Memory1' */
        vmr_rwd_fix_leftarm_B.Memory1_f[0] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[0];
        vmr_rwd_fix_leftarm_B.Memory1_f[1] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[1];

        /* Chart: '<S139>/AbsEncoder machine' */
        vmr_rwd_fix_leftarm_AbsEncodermachine
          (vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValuesCount,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValuesCount,
           vmr_rwd_fix_leftarm_B.Memory_h, vmr_rwd_fix_leftarm_B.Memory1_f,
           &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i,
           &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_i);

        /* S-Function (BKINethercatasyncsdodownload): '<S139>/BKIN EtherCAT Async SDO Download' */
        {
          int8_T *sigInputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g0;
              sigInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[0];
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[1];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[2];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.setupData[3];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m[7]
                  != 0) {
                res = ecatAsyncSDODownload(deviceIndex,
                  1003,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigInputPtr,
                  1*4,
                  500,
                  370044277,
                  sigStatusPtr,
                  *enInputPtr);
              } else {
                *sigStatusPtr = 0;
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m[7] = 1;
              ;
            }
          }
        }

        /* S-Function (BKINethercatasyncsdoupload): '<S139>/BKIN EtherCAT Async SDO Upload' */
        {
          int8_T *sigOutputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          static int counter= 0;
          int_T actLen;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigOutputPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_k;
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_o;
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.SDORequest[0];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.SDORequest[1];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_i.SDORequest[2];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[7]
                  != 0) {
                res = ecatAsyncSDOUpload(deviceIndex,
                  1003,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigOutputPtr,
                  1*4,
                  &actLen,
                  500,
                  370044278,
                  sigStatusPtr,
                  *enInputPtr);
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[7] = 1;
              ;
            }
          }
        }

        srUpdateBC(vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_SubsysRanBC);
      } else {
        if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE) {
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S75>/M1 AbsEnc Calibration' */

      /* Outputs for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' incorporates:
       *  EnablePort: '<S140>/Enable'
       */
      if (vmr_rwd_fix_leftarm_P.enableCalibration_Value_h > 0.0) {
        if (!vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE) {
          /* InitializeConditions for Memory: '<S140>/Memory' */
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_o =
            vmr_rwd_fix_leftarm_P.Memory_X0_id;

          /* InitializeConditions for Memory: '<S140>/Memory1' */
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[0] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_a;
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[1] =
            vmr_rwd_fix_leftarm_P.Memory1_X0_a;

          /* InitializeConditions for Chart: '<S140>/AbsEncoder machine' */
          vmr_rwd_fix_leftarm_AbsEncodermachine_Init
            (&vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k,
             &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_k);
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE = true;
        }

        /* MATLAB Function: '<S140>/set-up values' */
        vmr_rwd_fix_leftarm_setupvalues(&vmr_rwd_fix_leftarm_B.sf_setupvalues_g);

        /* Memory: '<S140>/Memory' */
        vmr_rwd_fix_leftarm_B.Memory_pb =
          vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_o;

        /* Memory: '<S140>/Memory1' */
        vmr_rwd_fix_leftarm_B.Memory1_et[0] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[0];
        vmr_rwd_fix_leftarm_B.Memory1_et[1] =
          vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[1];

        /* Chart: '<S140>/AbsEncoder machine' */
        vmr_rwd_fix_leftarm_AbsEncodermachine
          (vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValuesCount,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValues,
           vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValuesCount,
           vmr_rwd_fix_leftarm_B.Memory_pb, vmr_rwd_fix_leftarm_B.Memory1_et,
           &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k,
           &vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_k);

        /* S-Function (BKINethercatasyncsdodownload): '<S140>/BKIN EtherCAT Async SDO Download' */
        {
          int8_T *sigInputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex =
            vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k[0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g;
              sigInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[0];
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[1];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[2];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.setupData[3];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k[7]
                  != 0) {
                res = ecatAsyncSDODownload(deviceIndex,
                  1004,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigInputPtr,
                  1*4,
                  500,
                  370044287,
                  sigStatusPtr,
                  *enInputPtr);
              } else {
                *sigStatusPtr = 0;
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k[7] = 1;
              ;
            }
          }
        }

        /* S-Function (BKINethercatasyncsdoupload): '<S140>/BKIN EtherCAT Async SDO Upload' */
        {
          int8_T *sigOutputPtr;
          int32_T *sigStatusPtr;
          int32_T *enInputPtr;
          int_T deviceIndex;
          static int counter= 0;
          int_T actLen;
          int_T res;
          int_T state;
          int32_T *indexInputPtr;
          int32_T *subIndexInputPtr;
          deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK
            [0];
          if (deviceIndex != NO_ETHERCAT) {
            state = xpcEtherCATgetState( deviceIndex );
            if (state >= 2 ) {
              sigOutputPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1;
              sigStatusPtr =
                &vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2;
              enInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.SDORequest[0];
              indexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.SDORequest[1];
              subIndexInputPtr =
                &vmr_rwd_fix_leftarm_B.sf_AbsEncodermachine_k.SDORequest[2];
              if (vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK[7] !=
                  0) {
                res = ecatAsyncSDOUpload(deviceIndex,
                  1004,
                  (unsigned short)*indexInputPtr,
                  (unsigned char)*subIndexInputPtr,
                  (void *)sigOutputPtr,
                  1*4,
                  &actLen,
                  500,
                  370044288,
                  sigStatusPtr,
                  *enInputPtr);
              }

              vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK[7] = 1;
              ;
            }
          }
        }

        srUpdateBC(vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_SubsysRanBC);
      } else {
        if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE) {
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE = false;
        }
      }

      /* End of Constant: '<S75>/enableCalibration' */
      /* End of Outputs for SubSystem: '<S75>/M2 AbsEnc Calibration' */

      /* Outputs for Atomic SubSystem: '<S75>/SDO reading' */
      vmr_rwd_fix_leftarm_SDOreading_n();

      /* End of Outputs for SubSystem: '<S75>/SDO reading' */

      /* Outputs for Atomic SubSystem: '<S75>/SDO writing' */
      vmr_rwd_fix_leftarm_SDOwriting_f();

      /* End of Outputs for SubSystem: '<S75>/SDO writing' */
      srUpdateBC(vmr_rwd_fix_leftarm_DW.Arm2_SubsysRanBC);
    } else {
      if (vmr_rwd_fix_leftarm_DW.Arm2_MODE) {
        /* Disable for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' */
        if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE) {
          vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE = false;
        }

        /* End of Disable for SubSystem: '<S75>/M1 AbsEnc Calibration' */

        /* Disable for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' */
        if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE) {
          vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE = false;
        }

        /* End of Disable for SubSystem: '<S75>/M2 AbsEnc Calibration' */
        vmr_rwd_fix_leftarm_DW.Arm2_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S63>/Arm 2' */

    /* DataStoreWrite: '<S63>/Data Store Write' */
    vmr_rwd_fix_leftarm_DW.ECATHardware[0] =
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[1] =
      vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[1];
    vmr_rwd_fix_leftarm_DW.ECATHardware[2] =
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[3] =
      vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[1];
    vmr_rwd_fix_leftarm_DW.ECATHardware[4] =
      vmr_rwd_fix_leftarm_B.R1_gearRatios[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[5] =
      vmr_rwd_fix_leftarm_B.R1_gearRatios[1];
    vmr_rwd_fix_leftarm_DW.ECATHardware[6] =
      vmr_rwd_fix_leftarm_B.R2_gearRatios[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[7] =
      vmr_rwd_fix_leftarm_B.R2_gearRatios[1];
    vmr_rwd_fix_leftarm_DW.ECATHardware[8] =
      vmr_rwd_fix_leftarm_B.R1_robotOrientation;
    vmr_rwd_fix_leftarm_DW.ECATHardware[9] =
      vmr_rwd_fix_leftarm_B.R2_robotOrientation;
    vmr_rwd_fix_leftarm_DW.ECATHardware[10] =
      vmr_rwd_fix_leftarm_B.R1_motorOrientation[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[11] =
      vmr_rwd_fix_leftarm_B.R1_motorOrientation[1];
    vmr_rwd_fix_leftarm_DW.ECATHardware[12] =
      vmr_rwd_fix_leftarm_B.R2_motorOrientation[0];
    vmr_rwd_fix_leftarm_DW.ECATHardware[13] =
      vmr_rwd_fix_leftarm_B.R2_motorOrientation[1];
    for (i = 0; i < 8; i++) {
      /* DataTypeConversion: '<S63>/convert' */
      vmr_rwd_fix_leftarm_B.convert[i] = vmr_rwd_fix_leftarm_B.Switch_m[i];

      /* DataStoreWrite: '<S63>/ECat status write' */
      vmr_rwd_fix_leftarm_DW.ECATStatus[i] = vmr_rwd_fix_leftarm_B.convert[i];
    }

    /* RelationalOperator: '<S76>/Compare' incorporates:
     *  Constant: '<S76>/Constant'
     */
    vmr_rwd_fix_leftarm_B.Compare_i = (uint8_T)(vmr_rwd_fix_leftarm_B.Convert20 ==
      vmr_rwd_fix_leftarm_P.Compare_const_j);

    /* MATLAB Function: '<S78>/update digital outputs' incorporates:
     *  Constant: '<S2>/ZeroDigOut'
     */
    /* MATLAB Function 'EtherCAT Subsystem/Digital output/update digital outputs': '<S190>:1' */
    /* '<S190>:1:9' */
    i = 0;

    /* do nothing to the laser */
    if ((vmr_rwd_fix_leftarm_B.Compare_i == 1) &&
        (vmr_rwd_fix_leftarm_B.Compare_i != vmr_rwd_fix_leftarm_DW.prevRunStatus))
    {
      /* '<S190>:1:10' */
      /* if this is the first cycle where we are running, turn the laser */
      /* off */
      /* '<S190>:1:13' */
      i = 1;
    }

    /* '<S190>:1:15' */
    vmr_rwd_fix_leftarm_DW.prevRunStatus = vmr_rwd_fix_leftarm_B.Compare_i;

    /* '<S190>:1:17' */
    /* '<S190>:1:25' */
    drive1 = 0U;

    /*      if ampStatus ~= 0 */
    /*          outVal = outVal + 1; */
    /*      end */
    /*   */
    /*      if mototStatus ~= 0 */
    /*          outVal = outVal + 2; */
    /*      end */
    if (i != 0) {
      /* '<S190>:1:35' */
      /* '<S190>:1:36' */
      drive1 = 262144U;
    }

    if (vmr_rwd_fix_leftarm_P.ZeroDigOut_Value[0] != 0.0) {
      /* '<S190>:1:39' */
      /* '<S190>:1:40' */
      drive1 += 524288U;
    }

    /* '<S190>:1:18' */
    /* '<S190>:1:25' */
    drive2 = 0U;

    /*      if ampStatus ~= 0 */
    /*          outVal = outVal + 1; */
    /*      end */
    /*   */
    /*      if mototStatus ~= 0 */
    /*          outVal = outVal + 2; */
    /*      end */
    if (vmr_rwd_fix_leftarm_P.ZeroDigOut_Value[1] != 0.0) {
      /* '<S190>:1:39' */
      /* '<S190>:1:40' */
      drive2 = 524288U;
    }

    /* '<S190>:1:19' */
    /* '<S190>:1:25' */
    drive3 = 0U;

    /*      if ampStatus ~= 0 */
    /*          outVal = outVal + 1; */
    /*      end */
    /*   */
    /*      if mototStatus ~= 0 */
    /*          outVal = outVal + 2; */
    /*      end */
    if (vmr_rwd_fix_leftarm_P.ZeroDigOut_Value[2] != 0.0) {
      /* '<S190>:1:39' */
      /* '<S190>:1:40' */
      drive3 = 524288U;
    }

    /* '<S190>:1:20' */
    /* '<S190>:1:25' */
    drive4 = 0U;

    /*      if ampStatus ~= 0 */
    /*          outVal = outVal + 1; */
    /*      end */
    /*   */
    /*      if mototStatus ~= 0 */
    /*          outVal = outVal + 2; */
    /*      end */
    if (vmr_rwd_fix_leftarm_P.ZeroDigOut_Value[3] != 0.0) {
      /* '<S190>:1:39' */
      /* '<S190>:1:40' */
      drive4 = 524288U;
    }

    vmr_rwd_fix_leftarm_B.drive1 = drive1;
    vmr_rwd_fix_leftarm_B.drive2 = drive2;
    vmr_rwd_fix_leftarm_B.drive3 = drive3;
    vmr_rwd_fix_leftarm_B.drive4 = drive4;

    /* End of MATLAB Function: '<S78>/update digital outputs' */

    /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[29];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[30];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[31];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 3' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[32];
      sfcnOutputs(rts, 1);
    }

    /* DataStoreRead: '<S33>/Read HasFT' */
    vmr_rwd_fix_leftarm_B.ReadHasFT[0] = vmr_rwd_fix_leftarm_DW.ArmForceSensors
      [0];
    vmr_rwd_fix_leftarm_B.ReadHasFT[1] = vmr_rwd_fix_leftarm_DW.ArmForceSensors
      [1];

    /* Outputs for Atomic SubSystem: '<S33>/Force Sensor Control' */
    vmr_rwd_fix_leftarm_ForceSensorControl();

    /* End of Outputs for SubSystem: '<S33>/Force Sensor Control' */

    /* RelationalOperator: '<S224>/Compare' incorporates:
     *  Constant: '<S224>/Constant'
     */
    vmr_rwd_fix_leftarm_B.Compare_a = (vmr_rwd_fix_leftarm_B.systemtype ==
      vmr_rwd_fix_leftarm_P.ispmac1_const);

    /* Outputs for Enabled SubSystem: '<S66>/Data receive' incorporates:
     *  EnablePort: '<S222>/Enable'
     */
    if (vmr_rwd_fix_leftarm_B.Compare_a) {
      /* UnitDelay: '<S225>/Output' */
      vmr_rwd_fix_leftarm_B.Output_e = vmr_rwd_fix_leftarm_DW.Output_DSTATE_h;

      /* Sum: '<S227>/FixPt Sum1' incorporates:
       *  Constant: '<S227>/FixPt Constant'
       */
      vmr_rwd_fix_leftarm_B.FixPtSum1_n = vmr_rwd_fix_leftarm_B.Output_e +
        vmr_rwd_fix_leftarm_P.FixPtConstant_Value_j;

      /* Switch: '<S228>/FixPt Switch' incorporates:
       *  Constant: '<S228>/Constant'
       */
      if (vmr_rwd_fix_leftarm_B.FixPtSum1_n >
          vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_k) {
        vmr_rwd_fix_leftarm_B.FixPtSwitch_d =
          vmr_rwd_fix_leftarm_P.Constant_Value_dz;
      } else {
        vmr_rwd_fix_leftarm_B.FixPtSwitch_d = vmr_rwd_fix_leftarm_B.FixPtSum1_n;
      }

      /* End of Switch: '<S228>/FixPt Switch' */

      /* Level2 S-Function Block: '<S222>/Receive' (xpcudpbytereceive) */
      {
        SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[28];
        sfcnOutputs(rts, 1);
      }

      /* Unpack: <S222>/Unpack */
      (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack_o1[0],
                    &vmr_rwd_fix_leftarm_B.Receive_o1_n[0],
                    8);
      (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack_o2[0],
                    &vmr_rwd_fix_leftarm_B.Receive_o1_n[8],
                    8);

      /* DataTypeConversion: '<S222>/Data Type Conversion' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion_k[0] =
        vmr_rwd_fix_leftarm_B.Unpack_o1[0];
      vmr_rwd_fix_leftarm_B.DataTypeConversion_k[1] =
        vmr_rwd_fix_leftarm_B.Unpack_o1[1];

      /* DataTypeConversion: '<S222>/Data Type Conversion1' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[0] =
        vmr_rwd_fix_leftarm_B.Unpack_o2[0];
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[1] =
        vmr_rwd_fix_leftarm_B.Unpack_o2[1];

      /* DataTypeConversion: '<S222>/Data Type Conversion2' */
      vmr_rwd_fix_leftarm_B.DataTypeConversion2_i =
        vmr_rwd_fix_leftarm_B.Output_e;

      /* MATLAB Function: '<S222>/MATLAB Function' */
      /* MATLAB Function 'DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function': '<S226>:1' */
      if (vmr_rwd_fix_leftarm_B.Receive_o2_o == 1.0) {
        /* '<S226>:1:14' */
        /* '<S226>:1:15' */
        ticksPerRad = vmr_rwd_fix_leftarm_DW.r1Sho[0];
        queueSizePrimary = vmr_rwd_fix_leftarm_DW.r1Sho[1];
        queueSizeSecondary = vmr_rwd_fix_leftarm_DW.r1Sho[2];
        vmr_rwd_fix_leftarm_DW.r1Sho[1] = ticksPerRad;
        vmr_rwd_fix_leftarm_DW.r1Sho[2] = queueSizePrimary;
        vmr_rwd_fix_leftarm_DW.r1Sho[3] = queueSizeSecondary;

        /* '<S226>:1:16' */
        ticksPerRad = vmr_rwd_fix_leftarm_DW.r1Elb[0];
        queueSizePrimary = vmr_rwd_fix_leftarm_DW.r1Elb[1];
        queueSizeSecondary = vmr_rwd_fix_leftarm_DW.r1Elb[2];
        vmr_rwd_fix_leftarm_DW.r1Elb[1] = ticksPerRad;
        vmr_rwd_fix_leftarm_DW.r1Elb[2] = queueSizePrimary;
        vmr_rwd_fix_leftarm_DW.r1Elb[3] = queueSizeSecondary;

        /* '<S226>:1:17' */
        ticksPerRad = vmr_rwd_fix_leftarm_DW.r2Sho[0];
        queueSizePrimary = vmr_rwd_fix_leftarm_DW.r2Sho[1];
        queueSizeSecondary = vmr_rwd_fix_leftarm_DW.r2Sho[2];
        vmr_rwd_fix_leftarm_DW.r2Sho[1] = ticksPerRad;
        vmr_rwd_fix_leftarm_DW.r2Sho[2] = queueSizePrimary;
        vmr_rwd_fix_leftarm_DW.r2Sho[3] = queueSizeSecondary;

        /* '<S226>:1:18' */
        ticksPerRad = vmr_rwd_fix_leftarm_DW.r2Elb[0];
        queueSizePrimary = vmr_rwd_fix_leftarm_DW.r2Elb[1];
        queueSizeSecondary = vmr_rwd_fix_leftarm_DW.r2Elb[2];
        vmr_rwd_fix_leftarm_DW.r2Elb[1] = ticksPerRad;
        vmr_rwd_fix_leftarm_DW.r2Elb[2] = queueSizePrimary;
        vmr_rwd_fix_leftarm_DW.r2Elb[3] = queueSizeSecondary;

        /* '<S226>:1:20' */
        vmr_rwd_fix_leftarm_DW.r1Sho[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion_k[0];

        /* '<S226>:1:21' */
        vmr_rwd_fix_leftarm_DW.r1Elb[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion_k[1];

        /* '<S226>:1:22' */
        vmr_rwd_fix_leftarm_DW.r2Sho[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[0];

        /* '<S226>:1:23' */
        vmr_rwd_fix_leftarm_DW.r2Elb[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[1];

        /* '<S226>:1:25' */
        ticksPerRad = vmr_rwd_fix_leftarm_DW.last_tick[0];
        queueSizePrimary = vmr_rwd_fix_leftarm_DW.last_tick[1];
        queueSizeSecondary = vmr_rwd_fix_leftarm_DW.last_tick[2];
        vmr_rwd_fix_leftarm_DW.last_tick[1] = ticksPerRad;
        vmr_rwd_fix_leftarm_DW.last_tick[2] = queueSizePrimary;
        vmr_rwd_fix_leftarm_DW.last_tick[3] = queueSizeSecondary;

        /* '<S226>:1:26' */
        vmr_rwd_fix_leftarm_DW.last_tick[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion2_i *
          vmr_rwd_fix_leftarm_P.MATLABFunction_BKIN_STEP_TIME;
      }

      /* '<S226>:1:29' */
      for (i = 0; i < 20; i++) {
        vmr_rwd_fix_leftarm_B.kinematics[i] = 0.0;
      }

      /* '<S226>:1:30' */
      for (i = 0; i < 12; i++) {
        vmr_rwd_fix_leftarm_B.primary[i] = 0.0;
      }

      /* '<S226>:1:32' */
      vmr_rwd_fix_leftarm_B.kinematics[0] = vmr_rwd_fix_leftarm_DW.r1Sho[0];
      vmr_rwd_fix_leftarm_B.kinematics[1] = vmr_rwd_fix_leftarm_DW.r1Elb[0];

      /* [kinematics(3), kinematics(5)] = velAndAcc(r1Sho, last_tick); */
      /* [kinematics(4), kinematics(6)] = velAndAcc(r1Elb, last_tick); */
      /* kinematics(7:8) = kinematics(5:6); */
      /* '<S226>:1:37' */
      vmr_rwd_fix_leftarm_B.kinematics[10] = vmr_rwd_fix_leftarm_DW.r2Sho[0];
      vmr_rwd_fix_leftarm_B.kinematics[11] = vmr_rwd_fix_leftarm_DW.r2Elb[0];

      /* [kinematics(13), kinematics(15)] = velAndAcc(r2Sho, last_tick); */
      /* [kinematics(14), kinematics(16)] = velAndAcc(r2Elb, last_tick); */
      /* kinematics(17:18) = kinematics(15:16); */
      /* '<S226>:1:42' */
      for (i = 0; i < 6; i++) {
        vmr_rwd_fix_leftarm_B.primary[i] = vmr_rwd_fix_leftarm_B.kinematics[i];
      }

      /* '<S226>:1:43' */
      for (i = 0; i < 6; i++) {
        vmr_rwd_fix_leftarm_B.primary[i + 6] =
          vmr_rwd_fix_leftarm_B.kinematics[i + 10];
      }

      /* End of MATLAB Function: '<S222>/MATLAB Function' */

      /* Constant: '<S222>/Constant' */
      vmr_rwd_fix_leftarm_B.Constant_k = vmr_rwd_fix_leftarm_P.Constant_Value_di;

      /* Constant: '<S222>/Constant1' */
      for (i = 0; i < 7; i++) {
        vmr_rwd_fix_leftarm_B.Constant1[i] =
          vmr_rwd_fix_leftarm_P.Constant1_Value_gt[i];
      }

      /* End of Constant: '<S222>/Constant1' */
      srUpdateBC(vmr_rwd_fix_leftarm_DW.Datareceive_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S66>/Data receive' */

    /* Constant: '<S229>/Arm Orientation' */
    vmr_rwd_fix_leftarm_B.ArmOrientation_b =
      vmr_rwd_fix_leftarm_P.ArmOrientation_Value;

    /* Constant: '<S229>/Arm Motor1 Orientation' */
    vmr_rwd_fix_leftarm_B.M1orientation_h =
      vmr_rwd_fix_leftarm_P.ArmMotor1Orientation_Value;

    /* Constant: '<S229>/Arm Motor2 Orientation' */
    vmr_rwd_fix_leftarm_B.M2Orientation_l =
      vmr_rwd_fix_leftarm_P.ArmMotor2Orientation_Value;

    /* Constant: '<S229>/Arm Motor1 Gear Ratio' */
    vmr_rwd_fix_leftarm_B.M1GearRatio_b =
      vmr_rwd_fix_leftarm_P.ArmMotor1GearRatio_Value;

    /* Constant: '<S229>/Arm Motor2 Gear Ratio' */
    vmr_rwd_fix_leftarm_B.M2GearRatio_p =
      vmr_rwd_fix_leftarm_P.ArmMotor2GearRatio_Value;

    /* Constant: '<S229>/Arm Secondary Encoders' */
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n =
      vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value;

    /* Constant: '<S230>/Arm Orientation' */
    vmr_rwd_fix_leftarm_B.ArmOrientation_l =
      vmr_rwd_fix_leftarm_P.ArmOrientation_Value_p;

    /* Constant: '<S230>/Arm Motor1 Orientation' */
    vmr_rwd_fix_leftarm_B.M1orientation_n =
      vmr_rwd_fix_leftarm_P.ArmMotor1Orientation_Value_a;

    /* Constant: '<S230>/Arm Motor2 Orientation' */
    vmr_rwd_fix_leftarm_B.M2Orientation_cw =
      vmr_rwd_fix_leftarm_P.ArmMotor2Orientation_Value_a;

    /* Constant: '<S230>/Arm Motor1 Gear Ratio' */
    vmr_rwd_fix_leftarm_B.M1GearRatio_k =
      vmr_rwd_fix_leftarm_P.ArmMotor1GearRatio_Value_b;

    /* Constant: '<S230>/Arm Motor2 Gear Ratio' */
    vmr_rwd_fix_leftarm_B.M2GearRatio_l =
      vmr_rwd_fix_leftarm_P.ArmMotor2GearRatio_Value_a;

    /* Constant: '<S230>/Arm Secondary Encoders' */
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f =
      vmr_rwd_fix_leftarm_P.ArmSecondaryEncoders_Value_h;

    /* RelationalOperator: '<S71>/Compare' incorporates:
     *  Constant: '<S71>/Constant'
     */
    vmr_rwd_fix_leftarm_B.Compare_c = (vmr_rwd_fix_leftarm_B.systemtype ==
      vmr_rwd_fix_leftarm_P.ispmac_const);

    /* Outputs for Enabled SubSystem: '<S65>/read_pmac' */
    vmr_rwd_fix_leftarm_read_pmac();

    /* End of Outputs for SubSystem: '<S65>/read_pmac' */

    /* UnitDelay: '<S77>/Output' */
    vmr_rwd_fix_leftarm_B.Output_a = vmr_rwd_fix_leftarm_DW.Output_DSTATE_c;

    /* MATLAB Function: '<S63>/latch_errors' */
    for (i = 0; i < 8; i++) {
      status[i] = vmr_rwd_fix_leftarm_B.Switch_m[i];
    }

    drive1 = vmr_rwd_fix_leftarm_B.Output_a;

    /* MATLAB Function 'EtherCAT Subsystem/latch_errors': '<S80>:1' */
    if ((vmr_rwd_fix_leftarm_B.Switch_m[1] == 8) &&
        (vmr_rwd_fix_leftarm_DW.enteredOpStep == 0U)) {
      /* '<S80>:1:12' */
      /* '<S80>:1:13' */
      vmr_rwd_fix_leftarm_DW.enteredOpStep = vmr_rwd_fix_leftarm_B.Output_a;
    }

    /* ignore these 2 error types before we hit the OP state and for at least */
    /* a few rounds after. */
    drive2 = vmr_rwd_fix_leftarm_B.Output_a;
    drive3 = drive2 - vmr_rwd_fix_leftarm_DW.enteredOpStep;
    if (drive3 > drive2) {
      drive3 = 0U;
    }

    if (((vmr_rwd_fix_leftarm_B.Switch_m[0] == 65551) ||
         (vmr_rwd_fix_leftarm_B.Switch_m[0] == 65569)) &&
        ((vmr_rwd_fix_leftarm_DW.enteredOpStep == 0U) || (drive3 < 10U))) {
      /* '<S80>:1:18' */
      /* '<S80>:1:19' */
      /* '<S80>:1:20' */
      status[0] = 22;
    }

    if ((vmr_rwd_fix_leftarm_DW.latchedErrors[0] != status[0]) && (status[0] !=
         0)) {
      /* '<S80>:1:24' */
      /* '<S80>:1:25' */
      vmr_rwd_fix_leftarm_circshift_j(vmr_rwd_fix_leftarm_DW.latchedErrors);

      /* '<S80>:1:26' */
      vmr_rwd_fix_leftarm_DW.latchedErrors[0] = status[0];

      /* '<S80>:1:27' */
      vmr_rwd_fix_leftarm_DW.latchedErrors[1] = drive1;
    }

    if ((vmr_rwd_fix_leftarm_DW.latchedDCErrors[0] != status[2]) && (status[2]
         != 0)) {
      /* '<S80>:1:30' */
      /* '<S80>:1:31' */
      vmr_rwd_fix_leftarm_circshift_j(vmr_rwd_fix_leftarm_DW.latchedDCErrors);

      /* '<S80>:1:32' */
      vmr_rwd_fix_leftarm_DW.latchedDCErrors[0] = status[2];

      /* '<S80>:1:33' */
      vmr_rwd_fix_leftarm_DW.latchedDCErrors[1] = drive1;
    }

    /* '<S80>:1:36' */
    /* '<S80>:1:37' */
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.errVals[i] = vmr_rwd_fix_leftarm_DW.latchedErrors[i];
      vmr_rwd_fix_leftarm_B.DCErrVals[i] =
        vmr_rwd_fix_leftarm_DW.latchedDCErrors[i];
    }

    /* End of MATLAB Function: '<S63>/latch_errors' */

    /* Chart: '<S33>/control read write' */
    /* Gateway: DataLogging/Poll KINARM/control read write */
    vmr_rwd_fix_leftarm_DW.sfEvent_n = -1;

    /* During: DataLogging/Poll KINARM/control read write */
    if (vmr_rwd_fix_leftarm_DW.is_active_c38_General == 0U) {
      /* Entry: DataLogging/Poll KINARM/control read write */
      vmr_rwd_fix_leftarm_DW.is_active_c38_General = 1U;

      /* Entry Internal: DataLogging/Poll KINARM/control read write */
      /* Transition: '<S68>:215' */
      if (vmr_rwd_fix_leftarm_B.systemtype == 2.0) {
        /* Transition: '<S68>:220' */
        vmr_rwd_fix_leftarm_DW.is_c38_General = vmr_rwd_fix_leftarm_IN_RunECat;
      } else if (vmr_rwd_fix_leftarm_B.systemtype == 1.0) {
        /* Transition: '<S68>:222' */
        vmr_rwd_fix_leftarm_DW.is_c38_General = vmr_rwd_fix_leftarm_IN_RunPMAC;
      } else {
        /* Transition: '<S68>:218' */
        vmr_rwd_fix_leftarm_DW.is_c38_General = vmr_rwd_fix_leftarm_IN_RunSim;
      }
    } else {
      switch (vmr_rwd_fix_leftarm_DW.is_c38_General) {
       case vmr_rwd_fix_leftarm_IN_RunECat:
        /* Outputs for Function Call SubSystem: '<S63>/update' */
        /* DataTypeConversion: '<S83>/Data Type Conversion1' */
        /* During 'RunECat': '<S68>:219' */
        /* Event: '<S68>:207' */
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1_calibrationButton);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[0] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2_calibrationButton);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[1] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;

        /* End of DataTypeConversion: '<S83>/Data Type Conversion1' */

        /* MATLAB Function: '<S83>/convert to bit field' */
        /* MATLAB Function 'EtherCAT Subsystem/update/convert to bit field': '<S192>:1' */
        /* '<S192>:1:3' */
        tmp_1 = (uint64_T)(vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[1] << 1U)
          + vmr_rwd_fix_leftarm_B.DataTypeConversion1_ju[0];
        if (tmp_1 > 4294967295ULL) {
          tmp_1 = 4294967295ULL;
        }

        vmr_rwd_fix_leftarm_B.bitField = (uint32_T)tmp_1;

        /* End of MATLAB Function: '<S83>/convert to bit field' */

        /* DataStoreWrite: '<S83>/Calib write' */
        vmr_rwd_fix_leftarm_DW.CalibrationButton =
          vmr_rwd_fix_leftarm_B.bitField;

        /* DataTypeConversion: '<S83>/Data Type Conversion' */
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[0]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[0] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[1]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[1] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[0]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[2] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[1]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[3] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[0]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[4] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[1]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[5] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[0]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[6] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[1]);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[7] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;

        /* End of DataTypeConversion: '<S83>/Data Type Conversion' */

        /* DataStoreWrite: '<S83>/Data Store Write' */
        for (i = 0; i < 8; i++) {
          vmr_rwd_fix_leftarm_DW.ECATDigitalInput[i] =
            vmr_rwd_fix_leftarm_B.DataTypeConversion_jq[i];
        }

        /* End of DataStoreWrite: '<S83>/Data Store Write' */

        /* DataStoreWrite: '<S83>/Data Store Write6' */
        vmr_rwd_fix_leftarm_DW.RobotRevision[0] =
          vmr_rwd_fix_leftarm_B.R1_RobotRevision;
        vmr_rwd_fix_leftarm_DW.RobotRevision[1] =
          vmr_rwd_fix_leftarm_B.R2_RobotRevision;

        /* DataTypeConversion: '<S83>/Data Type Conversion4' */
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M1_digitalDiagnostics);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[0] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R1M2_digitalDiagnostics);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[1] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M1_digitalDiagnostics);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[2] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;
        ticksPerRad = floor(vmr_rwd_fix_leftarm_B.R2M2_digitalDiagnostics);
        if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
          ticksPerRad = 0.0;
        } else {
          ticksPerRad = fmod(ticksPerRad, 4.294967296E+9);
        }

        vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[3] = ticksPerRad < 0.0 ?
          (uint32_T)-(int32_T)(uint32_T)-ticksPerRad : (uint32_T)ticksPerRad;

        /* End of DataTypeConversion: '<S83>/Data Type Conversion4' */

        /* DataStoreWrite: '<S83>/ECat status write' */
        vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[0] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[0];
        vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[1] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[1];
        vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[2] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[2];
        vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[3] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion4_j[3];

        /* DataStoreWrite: '<S83>/Force sensor write' */
        vmr_rwd_fix_leftarm_DW.ArmForceSensors[0] =
          vmr_rwd_fix_leftarm_B.R1_hasFT;
        vmr_rwd_fix_leftarm_DW.ArmForceSensors[1] =
          vmr_rwd_fix_leftarm_B.R2_hasFT;

        /* DataTypeConversion: '<S83>/Data Type Conversion2' */
        vmr_rwd_fix_leftarm_B.DataTypeConversion2_ir = (uint32_T)
          vmr_rwd_fix_leftarm_B.masterState;

        /* DataStoreWrite: '<S83>/Status write' incorporates:
         *  Constant: '<S83>/Constant1'
         */
        vmr_rwd_fix_leftarm_DW.SystemStatus[0] =
          vmr_rwd_fix_leftarm_B.motorStatus_f;
        vmr_rwd_fix_leftarm_DW.SystemStatus[1] =
          vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.motorStatus;
        vmr_rwd_fix_leftarm_DW.SystemStatus[2] =
          vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.motorStatus;
        vmr_rwd_fix_leftarm_DW.SystemStatus[3] =
          vmr_rwd_fix_leftarm_B.motorStatus;
        vmr_rwd_fix_leftarm_DW.SystemStatus[4] =
          vmr_rwd_fix_leftarm_P.Constant1_Value_k;
        vmr_rwd_fix_leftarm_DW.SystemStatus[5] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion2_ir;
        vmr_rwd_fix_leftarm_DW.SystemStatus[6] =
          vmr_rwd_fix_leftarm_B.sf_parsestatusregister.eStopOut;

        /* DataStoreRead: '<S83>/Data Store' */
        memcpy(&vmr_rwd_fix_leftarm_B.DataStore[0],
               &vmr_rwd_fix_leftarm_DW.RobotCalibrations[0], sizeof(real_T) <<
               4U);

        /* SignalConversion: '<S198>/TmpSignal ConversionAt SFunction Inport2' incorporates:
         *  MATLAB Function: '<S83>/update calibrations'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[0] =
          vmr_rwd_fix_leftarm_B.R1_LinkLength[0];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[1] =
          vmr_rwd_fix_leftarm_B.R1_LinkLength[1];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[2] =
          vmr_rwd_fix_leftarm_B.R2_LinkLength[0];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[3] =
          vmr_rwd_fix_leftarm_B.R2_LinkLength[1];

        /* SignalConversion: '<S198>/TmpSignal ConversionAt SFunction Inport4' incorporates:
         *  MATLAB Function: '<S83>/update calibrations'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[0] =
          vmr_rwd_fix_leftarm_B.R1_RobotType;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[1] =
          vmr_rwd_fix_leftarm_B.R2_RobotType;

        /* MATLAB Function: '<S83>/update calibrations' */
        /* MATLAB Function 'EtherCAT Subsystem/update/update calibrations': '<S198>:1' */
        /* '<S198>:1:3' */
        /* '<S198>:1:4' */
        for (i = 0; i < 8; i++) {
          r1Calibs[i] = vmr_rwd_fix_leftarm_B.DataStore[i];
          r2Calibs[i] = vmr_rwd_fix_leftarm_B.DataStore[i + 8];
        }

        /* only EP's can read teh link lengths from the drive */
        if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[0] ==
            1.0) {
          /* '<S198>:1:7' */
          /* '<S198>:1:8' */
          r1Calibs[4] =
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[0];

          /* '<S198>:1:9' */
          r1Calibs[5] =
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[1];
        }

        /* only EP's can read teh link lengths from the drive */
        if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[1] ==
            1.0) {
          /* '<S198>:1:13' */
          /* '<S198>:1:14' */
          r2Calibs[4] =
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[0];

          /* '<S198>:1:15' */
          r2Calibs[5] =
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[1];
        }

        /* '<S198>:1:17' */
        memcpy(&vmr_rwd_fix_leftarm_B.calibrationsOut[0], &r1Calibs[0], sizeof
               (real_T) << 3U);
        memcpy(&vmr_rwd_fix_leftarm_B.calibrationsOut[8], &r2Calibs[0], sizeof
               (real_T) << 3U);

        /* DataStoreWrite: '<S83>/calib write' */
        memcpy(&vmr_rwd_fix_leftarm_DW.RobotCalibrations[0],
               &vmr_rwd_fix_leftarm_B.calibrationsOut[0], sizeof(real_T) << 4U);

        /* DataStoreRead: '<S83>/Data Store1' */
        memcpy(&vmr_rwd_fix_leftarm_B.DataStore1[0],
               &vmr_rwd_fix_leftarm_DW.HardwareSettings[0], 24U * sizeof(real_T));

        /* SignalConversion: '<S197>/TmpSignal ConversionAt SFunction Inport2' incorporates:
         *  MATLAB Function: '<S83>/update HW settings'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[0] =
          vmr_rwd_fix_leftarm_B.R1_RobotType;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[1] =
          vmr_rwd_fix_leftarm_B.R2_RobotType;

        /* SignalConversion: '<S197>/TmpSignal ConversionAt SFunction Inport3' incorporates:
         *  MATLAB Function: '<S83>/update HW settings'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[0] =
          vmr_rwd_fix_leftarm_B.R1_FTSensorAngleOffset;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[1] =
          vmr_rwd_fix_leftarm_B.R2_FTSensorAngleOffset;

        /* SignalConversion: '<S197>/TmpSignal ConversionAt SFunction Inport4' incorporates:
         *  MATLAB Function: '<S83>/update HW settings'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[0] =
          vmr_rwd_fix_leftarm_B.R1_robotOrientation;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[1] =
          vmr_rwd_fix_leftarm_B.R2_robotOrientation;

        /* MATLAB Function: '<S83>/update HW settings' */
        /* MATLAB Function 'EtherCAT Subsystem/update/update HW settings': '<S197>:1' */
        /* '<S197>:1:3' */
        /* '<S197>:1:4' */
        for (i = 0; i < 12; i++) {
          r1SettingsOut[i] = vmr_rwd_fix_leftarm_B.DataStore1[i];
          r2SettingsOut[i] = vmr_rwd_fix_leftarm_B.DataStore1[i + 12];
        }

        /* '<S197>:1:5' */
        r1SettingsOut[0] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[0];

        /* '<S197>:1:6' */
        r2SettingsOut[0] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[1];

        /* '<S197>:1:7' */
        r1SettingsOut[4] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[0];

        /* '<S197>:1:8' */
        r2SettingsOut[4] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[1];

        /* '<S197>:1:9' */
        r1SettingsOut[6] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[0];

        /* '<S197>:1:10' */
        r2SettingsOut[6] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[1];

        /* '<S197>:1:12' */
        memcpy(&vmr_rwd_fix_leftarm_B.settingsOut[0], &r1SettingsOut[0], 12U *
               sizeof(real_T));
        memcpy(&vmr_rwd_fix_leftarm_B.settingsOut[12], &r2SettingsOut[0], 12U *
               sizeof(real_T));

        /* DataStoreWrite: '<S83>/hardware write' */
        memcpy(&vmr_rwd_fix_leftarm_DW.HardwareSettings[0],
               &vmr_rwd_fix_leftarm_B.settingsOut[0], 24U * sizeof(real_T));

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport1' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[0] =
          vmr_rwd_fix_leftarm_B.R1M1_LinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[1] =
          vmr_rwd_fix_leftarm_B.R1M2_LinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[2] =
          vmr_rwd_fix_leftarm_B.R2M1_LinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[3] =
          vmr_rwd_fix_leftarm_B.R2M2_LinkAngle;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport2' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[0] =
          vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[1] =
          vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[2] =
          vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkAngle;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[3] =
          vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkAngle;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport3' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[0] =
          vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkVelocity;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[1] =
          vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkVelocity;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[2] =
          vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkVelocity;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[3] =
          vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkVelocity;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport4' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[0] =
          vmr_rwd_fix_leftarm_B.R1_hasSecondary;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[1] =
          vmr_rwd_fix_leftarm_B.R2_hasSecondary;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport5' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[0] =
          vmr_rwd_fix_leftarm_B.motorStatus_f;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[1] =
          vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.motorStatus;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[2] =
          vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.motorStatus;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[3] =
          vmr_rwd_fix_leftarm_B.motorStatus;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport6' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6[0] =
          vmr_rwd_fix_leftarm_B.R1_robotOrientation;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6[1] =
          vmr_rwd_fix_leftarm_B.R2_robotOrientation;

        /* SignalConversion: '<S194>/TmpSignal ConversionAt SFunction Inport8' incorporates:
         *  MATLAB Function: '<S83>/create kinematics'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[0] =
          vmr_rwd_fix_leftarm_B.R1_constantsReady_p;
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[1] =
          vmr_rwd_fix_leftarm_B.R2_constantsReady_j;

        /* MATLAB Function: '<S83>/create kinematics' incorporates:
         *  Constant: '<S83>/Constant'
         */
        vmr_rwd_fix_leftarm_B.delays[0] = 0.001;
        vmr_rwd_fix_leftarm_B.delays[1] = 0.002;
        vmr_rwd_fix_leftarm_B.delays[2] = 0.0005;
        vmr_rwd_fix_leftarm_B.delays[3] = 0.001;
        anglesPrimary[0] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[0];
        anglesPrimary[1] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[1];
        anglesPrimary[2] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[2];
        anglesPrimary[3] =
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[3];
        ticksPerRad = vmr_rwd_fix_leftarm_P.Constant_Value_d;

        /* MATLAB Function 'EtherCAT Subsystem/update/create kinematics': '<S194>:1' */
        /*  %primary enc 1ms velocity delay */
        /*  %primary enc 2ms acceleration delay */
        /*  %secondary encoder 0.5ms velocity delay */
        /* '<S194>:1:5' */
        /* secondary encoder 1ms acceleration delay */
        if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[0] +
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[1] ==
            0.0) {
          /* '<S194>:1:10' */
          /* '<S194>:1:11' */
          for (i = 0; i < 20; i++) {
            vmr_rwd_fix_leftarm_B.kinematicsOut[i] = 0.0;
          }

          /* '<S194>:1:12' */
          for (i = 0; i < 12; i++) {
            vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[i] = 0.0;
          }
        } else {
          /* These min calls are required to avoid compile errors. */
          /* '<S194>:1:17' */
          queueSizePrimary = 0.002 / vmr_rwd_fix_leftarm_P.Constant_Value_d +
            1.0;
          if (!(queueSizePrimary <= 100.0)) {
            queueSizePrimary = 100.0;
          }

          /* '<S194>:1:18' */
          queueSizeSecondary = 0.001 / vmr_rwd_fix_leftarm_P.Constant_Value_d +
            1.0;
          if (!(queueSizeSecondary <= 100.0)) {
            queueSizeSecondary = 100.0;
          }

          /* '<S194>:1:19' */
          vmr_rwd_fix_leftarm_convertL1L2ToShoElb
            (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p,
             vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6,
             secondaryShoElb);

          /* '<S194>:1:20' */
          vmr_rwd_fix_leftarm_convertL1L2ToShoElbVel
            (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g,
             vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6,
             primaryShoElbVel);
          if (!vmr_rwd_fix_leftarm_DW.secondaryPosData_not_empty) {
            /* '<S194>:1:22' */
            /* '<S194>:1:23' */
            vmr_rwd_fix_leftarm_buildEncoderData(queueSizeSecondary,
              secondaryShoElb, tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.secondaryPosData_data[i] = tmp_data[i];
            }

            vmr_rwd_fix_leftarm_DW.secondaryPosData_not_empty =
              !(vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[1] == 0);

            /* '<S194>:1:24' */
            vmr_rwd_fix_leftarm_buildEncoderData_j(queueSizeSecondary, tmp_data,
              tmp_sizes);
            vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[i] = tmp_data[i];
            }

            /* '<S194>:1:25' */
            vmr_rwd_fix_leftarm_buildEncoderData(queueSizePrimary,
              primaryShoElbVel, tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[i] = tmp_data[i];
            }

            /* '<S194>:1:26' */
            vmr_rwd_fix_leftarm_buildEncoderData(queueSizePrimary,
              primaryShoElbVel, tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[i] = tmp_data[i];
            }
          } else {
            /* '<S194>:1:28' */
            vmr_rwd_fix_leftarm_updateQueue
              (vmr_rwd_fix_leftarm_DW.secondaryPosData_data,
               vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes, secondaryShoElb,
               tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.secondaryPosData_data[i] = tmp_data[i];
            }

            vmr_rwd_fix_leftarm_DW.secondaryPosData_not_empty =
              !(vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes[1] == 0);

            /* '<S194>:1:29' */
            vmr_rwd_fix_leftarm_calcDT
              (vmr_rwd_fix_leftarm_DW.secondaryPosData_data,
               vmr_rwd_fix_leftarm_DW.secondaryPosData_sizes, ticksPerRad,
               secondaryShoElb);
            vmr_rwd_fix_leftarm_updateQueue
              (vmr_rwd_fix_leftarm_DW.secondaryVelData_data,
               vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes, secondaryShoElb,
               tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[i] = tmp_data[i];
            }

            /* '<S194>:1:30' */
            vmr_rwd_fix_leftarm_updateQueue
              (vmr_rwd_fix_leftarm_DW.primaryVelData_data,
               vmr_rwd_fix_leftarm_DW.primaryVelData_sizes, primaryShoElbVel,
               tmp_data, tmp_sizes);
            vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[0] = tmp_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[1] = tmp_sizes[1];
            ii_sizes_idx_1 = tmp_sizes[0] * tmp_sizes[1];
            for (i = 0; i < ii_sizes_idx_1; i++) {
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[i] = tmp_data[i];
            }
          }

          /* '<S194>:1:33' */
          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[1];
          tmp_sizes_3[0] = 2;
          tmp_sizes_3[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            tmp_data_0[i << 1] =
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes
              [0] * i];
            tmp_data_0[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes
              [0] * i + 1];
          }

          vmr_rwd_fix_leftarm_buildKin(*(real_T (*)[2])&
            vmr_rwd_fix_leftarm_DW.secondaryPosData_data[0], tmp_data_0,
            tmp_sizes_3, ticksPerRad, *(uint32_T (*)[2])&
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[0],
            r1SecondaryKinematicsOut);

          /* '<S194>:1:34' */
          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes[1];
          tmp_sizes_2[0] = 2;
          tmp_sizes_2[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            tmp_data_0[i << 1] =
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes
              [0] * i + 2];
            tmp_data_0[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.secondaryVelData_data[vmr_rwd_fix_leftarm_DW.secondaryVelData_sizes
              [0] * i + 3];
          }

          vmr_rwd_fix_leftarm_buildKin(*(real_T (*)[2])&
            vmr_rwd_fix_leftarm_DW.secondaryPosData_data[2], tmp_data_0,
            tmp_sizes_2, ticksPerRad, *(uint32_T (*)[2])&
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[2],
            r2SecondaryKinematicsOut);

          /* '<S194>:1:36' */
          anglesPrimary_0[0] = anglesPrimary[0];
          anglesPrimary_0[1] = anglesPrimary[1];
          anglesPrimary_0[2] = anglesPrimary[2];
          anglesPrimary_0[3] = anglesPrimary[3];
          vmr_rwd_fix_leftarm_convertL1L2ToShoElb(anglesPrimary_0,
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6,
            anglesPrimary);
          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[1];
          b_sizes[0] = 2;
          b_sizes[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            b_data[i << 1] =
              vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes
              [0] * i];
            b_data[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes
              [0] * i + 1];
          }

          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[1];
          tmp_sizes_1[0] = 2;
          tmp_sizes_1[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            tmp_data_0[i << 1] =
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[vmr_rwd_fix_leftarm_DW.primaryVelData_sizes
              [0] * i];
            tmp_data_0[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[vmr_rwd_fix_leftarm_DW.primaryVelData_sizes
              [0] * i + 1];
          }

          vmr_rwd_fix_leftarm_buildKinPrimary(*(real_T (*)[2])&anglesPrimary[0],
            tmp_data_0, tmp_sizes_1, ticksPerRad, *(uint32_T (*)[2])&
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[0],
            b_data, b_sizes, r1PrimaryKinematicsOut);

          /* '<S194>:1:37' */
          ii_sizes_idx_1 = b_sizes[1];
          for (i = 0; i < ii_sizes_idx_1; i++) {
            b_ii = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[b_ii * i] =
              b_data[b_sizes[0] * i];
            b_ii = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[1 + b_ii * i] =
              b_data[b_sizes[0] * i + 1];
          }

          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[1];
          b_sizes[0] = 2;
          b_sizes[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            b_data[i << 1] =
              vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes
              [0] * i + 2];
            b_data[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes
              [0] * i + 3];
          }

          ii_sizes_idx_1 = vmr_rwd_fix_leftarm_DW.primaryVelData_sizes[1];
          tmp_sizes_0[0] = 2;
          tmp_sizes_0[1] = ii_sizes_idx_1;
          for (i = 0; i < ii_sizes_idx_1; i++) {
            tmp_data_0[i << 1] =
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[vmr_rwd_fix_leftarm_DW.primaryVelData_sizes
              [0] * i + 2];
            tmp_data_0[1 + (i << 1)] =
              vmr_rwd_fix_leftarm_DW.primaryVelData_data[vmr_rwd_fix_leftarm_DW.primaryVelData_sizes
              [0] * i + 3];
          }

          vmr_rwd_fix_leftarm_buildKinPrimary(*(real_T (*)[2])&anglesPrimary[2],
            tmp_data_0, tmp_sizes_0, ticksPerRad, *(uint32_T (*)[2])&
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport5[2],
            b_data, b_sizes, r2PrimaryKinematicsOut);

          /* '<S194>:1:38' */
          ii_sizes_idx_1 = b_sizes[1];
          for (i = 0; i < ii_sizes_idx_1; i++) {
            b_ii = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[b_ii * i + 2] =
              b_data[b_sizes[0] * i];
            b_ii = vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_sizes[0];
            vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[b_ii * i + 3] =
              b_data[b_sizes[0] * i + 1];
          }

          if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[0]
              != 1.0) {
            /* '<S194>:1:40' */
            /* '<S194>:1:41' */
            memcpy(&r1SecondaryKinematicsOut[0], &r1PrimaryKinematicsOut[0], 10U
                   * sizeof(real_T));
          }

          if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[1]
              != 1.0) {
            /* '<S194>:1:43' */
            /* '<S194>:1:44' */
            memcpy(&r2SecondaryKinematicsOut[0], &r2PrimaryKinematicsOut[0], 10U
                   * sizeof(real_T));
          }

          /* '<S194>:1:47' */
          memcpy(&vmr_rwd_fix_leftarm_B.kinematicsOut[0],
                 &r1SecondaryKinematicsOut[0], 10U * sizeof(real_T));
          memcpy(&vmr_rwd_fix_leftarm_B.kinematicsOut[10],
                 &r2SecondaryKinematicsOut[0], 10U * sizeof(real_T));

          /* '<S194>:1:48' */
          for (i = 0; i < 6; i++) {
            vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[i] =
              r1PrimaryKinematicsOut[i];
          }

          for (i = 0; i < 6; i++) {
            vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[i + 6] =
              r2PrimaryKinematicsOut[i];
          }
        }

        /* SignalConversion: '<S199>/TmpSignal ConversionAt SFunction Inport1' incorporates:
         *  MATLAB Function: '<S193>/filter_velocities'
         */
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[0] =
          vmr_rwd_fix_leftarm_B.kinematicsOut[2];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[1] =
          vmr_rwd_fix_leftarm_B.kinematicsOut[3];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[2] =
          vmr_rwd_fix_leftarm_B.kinematicsOut[12];
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[3] =
          vmr_rwd_fix_leftarm_B.kinematicsOut[13];

        /* MATLAB Function: '<S193>/filter_velocities' incorporates:
         *  Constant: '<S193>/2nd order butterworth, 4Khz, 10hz cutoff'
         */
        /* MATLAB Function 'EtherCAT Subsystem/update/create filtered velocities/filter_velocities': '<S199>:1' */
        /* given any number of input values this will filter those values based */
        /* on a 2nd order Butterworth filter. You will need to get the constants */
        /* from http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
        /* '<S199>:1:14' */
        vmr_rwd_fix_leftarm_B.filteredVels[0] = 0.0;
        vmr_rwd_fix_leftarm_B.filteredVels[1] = 0.0;
        vmr_rwd_fix_leftarm_B.filteredVels[2] = 0.0;
        vmr_rwd_fix_leftarm_B.filteredVels[3] = 0.0;

        /* this code is roughly derrived from the example code given when you */
        /* generate filter constants at: http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
        /* '<S199>:1:18' */
        for (i = 0; i < 4; i++) {
          /* '<S199>:1:18' */
          /* '<S199>:1:19' */
          /* '<S199>:1:20' */
          b[0] = vmr_rwd_fix_leftarm_DW.rawVelocities_g[i];
          b[1] = vmr_rwd_fix_leftarm_DW.rawVelocities_g[i + 4];
          b[2] = vmr_rwd_fix_leftarm_DW.rawVelocities_g[i + 8];
          vmr_rwd_fix_leftarm_insertVal(b,
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[i] /
            vmr_rwd_fix_leftarm_P.ndorderbutterworth4Khz10hzcutoff_Value[0]);
          vmr_rwd_fix_leftarm_DW.rawVelocities_g[i] = b[0];
          vmr_rwd_fix_leftarm_DW.rawVelocities_g[i + 4] = b[1];
          vmr_rwd_fix_leftarm_DW.rawVelocities_g[i + 8] = b[2];

          /* '<S199>:1:21' */
          b[0] = vmr_rwd_fix_leftarm_DW.filtVelocities_f[i];
          b[1] = vmr_rwd_fix_leftarm_DW.filtVelocities_f[i + 4];
          b[2] = vmr_rwd_fix_leftarm_DW.filtVelocities_f[i + 8];
          vmr_rwd_fix_leftarm_insertVal(b, 0.0);
          vmr_rwd_fix_leftarm_DW.filtVelocities_f[i] = b[0];
          vmr_rwd_fix_leftarm_DW.filtVelocities_f[i + 4] = b[1];
          vmr_rwd_fix_leftarm_DW.filtVelocities_f[i + 8] = b[2];

          /* '<S199>:1:22' */
          /* all filter constants from http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
          /* '<S199>:1:29' */
          ticksPerRad = (((vmr_rwd_fix_leftarm_DW.rawVelocities_g[4 + i] * 2.0 +
                           vmr_rwd_fix_leftarm_DW.rawVelocities_g[i]) +
                          vmr_rwd_fix_leftarm_DW.rawVelocities_g[8 + i]) +
                         vmr_rwd_fix_leftarm_DW.filtVelocities_f[i] *
                         vmr_rwd_fix_leftarm_P.ndorderbutterworth4Khz10hzcutoff_Value
                         [1]) + vmr_rwd_fix_leftarm_DW.filtVelocities_f[4 + i] *
            vmr_rwd_fix_leftarm_P.ndorderbutterworth4Khz10hzcutoff_Value[2];
          if (rtIsNaN(ticksPerRad) || rtIsInf(ticksPerRad)) {
            /* '<S199>:1:35' */
            ticksPerRad = 0.0;
          }

          vmr_rwd_fix_leftarm_DW.filtVelocities_f[8 + i] = ticksPerRad;

          /* '<S199>:1:23' */
          vmr_rwd_fix_leftarm_B.filteredVels[i] =
            vmr_rwd_fix_leftarm_DW.filtVelocities_f[8 + i];

          /* '<S199>:1:18' */
        }

        /* MATLAB Function: '<S193>/rebuild' */
        /* MATLAB Function 'EtherCAT Subsystem/update/create filtered velocities/rebuild': '<S200>:1' */
        /* '<S200>:1:2' */
        memcpy(&vmr_rwd_fix_leftarm_B.outVals[0],
               &vmr_rwd_fix_leftarm_B.kinematicsOut[0], 20U * sizeof(real_T));

        /* '<S200>:1:3' */
        vmr_rwd_fix_leftarm_B.outVals[6] = vmr_rwd_fix_leftarm_B.filteredVels[0];
        vmr_rwd_fix_leftarm_B.outVals[7] = vmr_rwd_fix_leftarm_B.filteredVels[1];

        /* '<S200>:1:4' */
        vmr_rwd_fix_leftarm_B.outVals[16] = vmr_rwd_fix_leftarm_B.filteredVels[2];
        vmr_rwd_fix_leftarm_B.outVals[17] = vmr_rwd_fix_leftarm_B.filteredVels[3];

        /* DataStoreWrite: '<S83>/kin write' */
        memcpy(&vmr_rwd_fix_leftarm_DW.Kinematics[0],
               &vmr_rwd_fix_leftarm_B.outVals[0], 20U * sizeof(real_T));

        /* DataStoreWrite: '<S83>/primary write' */
        memcpy(&vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[0],
               &vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[0], 12U * sizeof
               (real_T));

        /* DataStoreWrite: '<S83>/write delays' */
        vmr_rwd_fix_leftarm_DW.DelayEstimates[0] = vmr_rwd_fix_leftarm_B.delays
          [0];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[1] = vmr_rwd_fix_leftarm_B.delays
          [1];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[2] = vmr_rwd_fix_leftarm_B.delays
          [2];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[3] = vmr_rwd_fix_leftarm_B.delays
          [3];

        /* MATLAB Function: '<S83>/robottype1' */
        /* MATLAB Function 'EtherCAT Subsystem/update/robottype1': '<S196>:1' */
        /* '<S196>:1:3' */
        for (i = 0; i < 5; i++) {
          vmr_rwd_fix_leftarm_B.outMem[i << 2] =
            vmr_rwd_fix_leftarm_B.R1M1_EMCY_codes[i];
        }

        for (i = 0; i < 5; i++) {
          vmr_rwd_fix_leftarm_B.outMem[1 + (i << 2)] =
            vmr_rwd_fix_leftarm_B.R1M2_EMCY_codes[i];
        }

        for (i = 0; i < 5; i++) {
          vmr_rwd_fix_leftarm_B.outMem[2 + (i << 2)] =
            vmr_rwd_fix_leftarm_B.R2M1_EMCY_codes[i];
        }

        for (i = 0; i < 5; i++) {
          vmr_rwd_fix_leftarm_B.outMem[3 + (i << 2)] =
            vmr_rwd_fix_leftarm_B.R2M2_EMCY_codes[i];
        }

        /* End of MATLAB Function: '<S83>/robottype1' */

        /* DataStoreWrite: '<S83>/write errs' */
        memcpy(&vmr_rwd_fix_leftarm_DW.ECATErrMsgs[0],
               &vmr_rwd_fix_leftarm_B.outMem[0], 20U * sizeof(real_T));

        /* DataTypeConversion: '<S83>/Data Type Conversion3' */
        vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[0] =
          vmr_rwd_fix_leftarm_B.R1M1_CurrentLimitEnabled;
        vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[1] =
          vmr_rwd_fix_leftarm_B.R1M2_CurrentLimitEnabled;
        vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[2] =
          vmr_rwd_fix_leftarm_B.R2M1_CurrentLimitEnabled;
        vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[3] =
          vmr_rwd_fix_leftarm_B.R2M2_CurrentLimitEnabled;

        /* DataStoreWrite: '<S83>/write torque' */
        vmr_rwd_fix_leftarm_DW.ECATExtraData[0] =
          vmr_rwd_fix_leftarm_B.R1M1_RecordedTorque;
        vmr_rwd_fix_leftarm_DW.ECATExtraData[1] =
          vmr_rwd_fix_leftarm_B.R1M2_RecordedTorque;
        vmr_rwd_fix_leftarm_DW.ECATExtraData[2] =
          vmr_rwd_fix_leftarm_B.R2M1_RecordedTorque;
        vmr_rwd_fix_leftarm_DW.ECATExtraData[3] =
          vmr_rwd_fix_leftarm_B.R2M2_RecordedTorque;
        vmr_rwd_fix_leftarm_DW.ECATExtraData[4] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[0];
        vmr_rwd_fix_leftarm_DW.ECATExtraData[5] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[1];
        vmr_rwd_fix_leftarm_DW.ECATExtraData[6] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[2];
        vmr_rwd_fix_leftarm_DW.ECATExtraData[7] =
          vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[3];

        /* MATLAB Function: '<S83>/create servo counter' */
        /* MATLAB Function 'EtherCAT Subsystem/update/create servo counter': '<S195>:1' */
        /*  % Not all slave devices are in operational state when receiving cyclic frames */
        /*  %Ethernet link (cable) not connected */
        /*  % Cyclic command: working counter error. his error occurs if the EtherCAT network is broken AFTER the first slave */
        if (!vmr_rwd_fix_leftarm_DW.servoCounter_not_empty) {
          /* '<S195>:1:10' */
          /* '<S195>:1:11' */
          vmr_rwd_fix_leftarm_DW.servoCounter = 0U;
          vmr_rwd_fix_leftarm_DW.servoCounter_not_empty = true;
        } else {
          i = 0;
          if (65551.0 == vmr_rwd_fix_leftarm_B.errVals[0]) {
            /* '<S195>:1:12' */
            i = 1;
          }

          if (65552.0 == vmr_rwd_fix_leftarm_B.errVals[0]) {
            /* '<S195>:1:12' */
            i++;
          }

          if (65537.0 == vmr_rwd_fix_leftarm_B.errVals[0]) {
            /* '<S195>:1:12' */
            i++;
          }

          if (!(i == 0)) {
            /* '<S195>:1:12' */
            /* if we find a fatal error just set the servo amp counter to */
            /* that error value so it's easier to report to the operator */
            /* '<S195>:1:15' */
            ticksPerRad = rt_roundd_snf(vmr_rwd_fix_leftarm_B.errVals[0]);
            if (ticksPerRad < 4.294967296E+9) {
              if (ticksPerRad >= 0.0) {
                drive2 = (uint32_T)ticksPerRad;
              } else {
                drive2 = 0U;
              }
            } else {
              drive2 = MAX_uint32_T;
            }

            vmr_rwd_fix_leftarm_DW.servoCounter = drive2;
          } else {
            /* '<S195>:1:17' */
            tmp_1 = vmr_rwd_fix_leftarm_DW.servoCounter + 1ULL;
            if (tmp_1 > 4294967295ULL) {
              tmp_1 = 4294967295ULL;
            }

            vmr_rwd_fix_leftarm_DW.servoCounter = (uint32_T)tmp_1;
          }
        }

        /* '<S195>:1:20' */
        vmr_rwd_fix_leftarm_B.servoCounterOut =
          vmr_rwd_fix_leftarm_DW.servoCounter;

        /* End of MATLAB Function: '<S83>/create servo counter' */

        /* DataStoreWrite: '<S83>/Servo Write' */
        vmr_rwd_fix_leftarm_DW.ServoUpdate =
          vmr_rwd_fix_leftarm_B.servoCounterOut;
        vmr_rwd_fix_leftarm_DW.update_SubsysRanBC = 4;

        /* End of Outputs for SubSystem: '<S63>/update' */

        /* Outputs for Function Call SubSystem: '<S33>/createKINData' */

        /* Event: '<S68>:209' */
        vmr_rwd_fix_leftarm_createKINData();

        /* End of Outputs for SubSystem: '<S33>/createKINData' */
        break;

       case vmr_rwd_fix_leftarm_IN_RunPMAC:
        /* Outputs for Function Call SubSystem: '<S65>/update settings' */
        /* DataStoreWrite: '<S210>/Data Store Write1' */
        /* During 'RunPMAC': '<S68>:221' */
        /* Event: '<S68>:208' */
        memcpy(&vmr_rwd_fix_leftarm_DW.Kinematics[0],
               &vmr_rwd_fix_leftarm_B.robot1DataOut[0], 10U * sizeof(real_T));
        memcpy(&vmr_rwd_fix_leftarm_DW.Kinematics[10],
               &vmr_rwd_fix_leftarm_B.robot2DataOut[0], 10U * sizeof(real_T));

        /* DataStoreWrite: '<S210>/Data Store Write2' */
        vmr_rwd_fix_leftarm_DW.ServoUpdate = vmr_rwd_fix_leftarm_B.MinMax1;

        /* DataStoreWrite: '<S210>/Data Store Write3' */
        vmr_rwd_fix_leftarm_DW.DelayEstimates[0] =
          vmr_rwd_fix_leftarm_B.Conversion7[0];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[1] =
          vmr_rwd_fix_leftarm_B.Conversion7[1];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[2] =
          vmr_rwd_fix_leftarm_B.Conversion7[2];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[3] =
          vmr_rwd_fix_leftarm_B.Conversion7[3];

        /* DataStoreWrite: '<S210>/Data Store Write4' */
        for (i = 0; i < 6; i++) {
          vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[i] =
            vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[i];
        }

        for (i = 0; i < 6; i++) {
          vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[i + 6] =
            vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[i];
        }

        /* End of DataStoreWrite: '<S210>/Data Store Write4' */

        /* DataStoreWrite: '<S210>/Data Store Write5' */
        vmr_rwd_fix_leftarm_DW.CalibrationButton =
          vmr_rwd_fix_leftarm_B.SFunction_o7;

        /* MATLAB Function: '<S210>/update status format' */
        /* MATLAB Function 'DataLogging/Poll KINARM/PMAC Subsystem/update settings/update status format': '<S221>:1' */
        /* '<S221>:1:4' */
        for (i = 0; i < 7; i++) {
          vmr_rwd_fix_leftarm_B.outStatus[i] = 0U;
        }

        /* '<S221>:1:5' */
        vmr_rwd_fix_leftarm_B.outStatus[4] = vmr_rwd_fix_leftarm_B.Convert2_n[1];
        vmr_rwd_fix_leftarm_B.outStatus[5] = vmr_rwd_fix_leftarm_B.Convert2_n[2];

        /* '<S221>:1:7' */
        /* '<S221>:1:9' */
        /* Each motor has 2 possible states: 0 working, 1 faulted. The READY state is only used by EtherCAT */
        /* '<S221>:1:12' */
        /* '<S221>:1:13' */
        drive1 = vmr_rwd_fix_leftarm_B.Convert2_n[0];
        if ((int32_T)(drive1 & 1U) == 1) {
          /* '<S221>:1:14' */
          /* '<S221>:1:15' */
          vmr_rwd_fix_leftarm_B.outStatus[0] = 2U;
        } else {
          /* '<S221>:1:17' */
          vmr_rwd_fix_leftarm_B.outStatus[0] = 0U;
        }

        /* '<S221>:1:12' */
        /* '<S221>:1:13' */
        drive1 = vmr_rwd_fix_leftarm_B.Convert2_n[0] >> 1U;
        if ((int32_T)(drive1 & 1U) == 1) {
          /* '<S221>:1:14' */
          /* '<S221>:1:15' */
          vmr_rwd_fix_leftarm_B.outStatus[1] = 2U;
        } else {
          /* '<S221>:1:17' */
          vmr_rwd_fix_leftarm_B.outStatus[1] = 0U;
        }

        /* '<S221>:1:12' */
        /* '<S221>:1:13' */
        drive1 = vmr_rwd_fix_leftarm_B.Convert2_n[0] >> 2U;
        if ((int32_T)(drive1 & 1U) == 1) {
          /* '<S221>:1:14' */
          /* '<S221>:1:15' */
          vmr_rwd_fix_leftarm_B.outStatus[2] = 2U;
        } else {
          /* '<S221>:1:17' */
          vmr_rwd_fix_leftarm_B.outStatus[2] = 0U;
        }

        /* '<S221>:1:12' */
        /* '<S221>:1:13' */
        drive1 = vmr_rwd_fix_leftarm_B.Convert2_n[0] >> 3U;
        if ((int32_T)(drive1 & 1U) == 1) {
          /* '<S221>:1:14' */
          /* '<S221>:1:15' */
          vmr_rwd_fix_leftarm_B.outStatus[3] = 2U;
        } else {
          /* '<S221>:1:17' */
          vmr_rwd_fix_leftarm_B.outStatus[3] = 0U;
        }

        /* End of MATLAB Function: '<S210>/update status format' */

        /* DataStoreWrite: '<S210>/Data Store Write7' */
        /* '<S221>:1:12' */
        for (i = 0; i < 7; i++) {
          vmr_rwd_fix_leftarm_DW.SystemStatus[i] =
            vmr_rwd_fix_leftarm_B.outStatus[i];
        }

        /* End of DataStoreWrite: '<S210>/Data Store Write7' */
        vmr_rwd_fix_leftarm_DW.updatesettings_SubsysRanBC = 4;

        /* End of Outputs for SubSystem: '<S65>/update settings' */

        /* Outputs for Function Call SubSystem: '<S33>/createKINData' */

        /* Event: '<S68>:209' */
        vmr_rwd_fix_leftarm_createKINData();

        /* End of Outputs for SubSystem: '<S33>/createKINData' */
        break;

       default:
        /* Outputs for Function Call SubSystem: '<S66>/Data write' */
        /* DataStoreWrite: '<S223>/Data Store Write1' */
        /* During 'RunSim': '<S68>:217' */
        /* Event: '<S68>:206' */
        memcpy(&vmr_rwd_fix_leftarm_DW.Kinematics[0],
               &vmr_rwd_fix_leftarm_B.kinematics[0], 20U * sizeof(real_T));

        /* DataStoreWrite: '<S223>/Data Store Write4' */
        memcpy(&vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[0],
               &vmr_rwd_fix_leftarm_B.primary[0], 12U * sizeof(real_T));

        /* DataStoreWrite: '<S223>/Data Store Write2' */
        vmr_rwd_fix_leftarm_DW.ServoUpdate = vmr_rwd_fix_leftarm_B.Output_e;

        /* DataStoreWrite: '<S223>/Data Store Write5' */
        vmr_rwd_fix_leftarm_DW.CalibrationButton =
          vmr_rwd_fix_leftarm_B.Constant_k;

        /* DataStoreWrite: '<S223>/Data Store Write7' */
        for (i = 0; i < 7; i++) {
          vmr_rwd_fix_leftarm_DW.SystemStatus[i] =
            vmr_rwd_fix_leftarm_B.Constant1[i];
        }

        /* End of DataStoreWrite: '<S223>/Data Store Write7' */

        /* DataStoreWrite: '<S223>/Data Store Write3' incorporates:
         *  Constant: '<S223>/Constant'
         */
        vmr_rwd_fix_leftarm_DW.DelayEstimates[0] =
          vmr_rwd_fix_leftarm_P.Constant_Value_l[0];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[1] =
          vmr_rwd_fix_leftarm_P.Constant_Value_l[1];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[2] =
          vmr_rwd_fix_leftarm_P.Constant_Value_l[2];
        vmr_rwd_fix_leftarm_DW.DelayEstimates[3] =
          vmr_rwd_fix_leftarm_P.Constant_Value_l[3];
        vmr_rwd_fix_leftarm_DW.Datawrite_SubsysRanBC = 4;

        /* End of Outputs for SubSystem: '<S66>/Data write' */

        /* Outputs for Function Call SubSystem: '<S33>/createKINData' */

        /* Event: '<S68>:209' */
        vmr_rwd_fix_leftarm_createKINData();

        /* End of Outputs for SubSystem: '<S33>/createKINData' */
        break;
      }
    }

    /* End of Chart: '<S33>/control read write' */

    /* Sum: '<S188>/FixPt Sum1' incorporates:
     *  Constant: '<S188>/FixPt Constant'
     */
    vmr_rwd_fix_leftarm_B.FixPtSum1_e = vmr_rwd_fix_leftarm_B.Output_a +
      vmr_rwd_fix_leftarm_P.FixPtConstant_Value_m;

    /* Switch: '<S189>/FixPt Switch' incorporates:
     *  Constant: '<S189>/Constant'
     */
    if (vmr_rwd_fix_leftarm_B.FixPtSum1_e >
        vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_e) {
      vmr_rwd_fix_leftarm_B.FixPtSwitch_m =
        vmr_rwd_fix_leftarm_P.Constant_Value_kn;
    } else {
      vmr_rwd_fix_leftarm_B.FixPtSwitch_m = vmr_rwd_fix_leftarm_B.FixPtSum1_e;
    }

    /* End of Switch: '<S189>/FixPt Switch' */

    /* Constant: '<S229>/Arm Shoulder Angle Offset' */
    vmr_rwd_fix_leftarm_B.shoulderangleoffset =
      vmr_rwd_fix_leftarm_P.ArmShoulderAngleOffset_Value;

    /* Constant: '<S229>/Arm Elbow Angle Offset' */
    vmr_rwd_fix_leftarm_B.elbowangleoffset =
      vmr_rwd_fix_leftarm_P.ArmElbowAngleOffset_Value;

    /* Constant: '<S229>/Arm Shoulder X' */
    vmr_rwd_fix_leftarm_B.ShoulderX = vmr_rwd_fix_leftarm_P.ArmShoulderX_Value;

    /* Constant: '<S229>/Arm Shoulder Y' */
    vmr_rwd_fix_leftarm_B.ShoulderY = vmr_rwd_fix_leftarm_P.ArmShoulderY_Value;

    /* Constant: '<S229>/Arm L1' */
    vmr_rwd_fix_leftarm_B.L1 = vmr_rwd_fix_leftarm_P.ArmL1_Value;

    /* Constant: '<S229>/Arm L2' */
    vmr_rwd_fix_leftarm_B.L2 = vmr_rwd_fix_leftarm_P.ArmL2_Value;

    /* Constant: '<S229>/Arm Pointer Offset' */
    vmr_rwd_fix_leftarm_B.Pointeroffset =
      vmr_rwd_fix_leftarm_P.ArmPointerOffset_Value;

    /* Constant: '<S229>/Arm L3 Error' */
    vmr_rwd_fix_leftarm_B.L3Error = vmr_rwd_fix_leftarm_P.ArmL3Error_Value;

    /* Constant: '<S229>/Arm robot type' */
    vmr_rwd_fix_leftarm_B.robottype_e = vmr_rwd_fix_leftarm_P.Armrobottype_Value;

    /* Constant: '<S229>/Arm Torque Constant' */
    vmr_rwd_fix_leftarm_B.torqueconstant_g =
      vmr_rwd_fix_leftarm_P.ArmTorqueConstant_Value;

    /* Constant: '<S229>/Arm robot version' */
    vmr_rwd_fix_leftarm_B.robotversion_g =
      vmr_rwd_fix_leftarm_P.Armrobotversion_Value;

    /* Constant: '<S230>/Arm Shoulder Angle Offset' */
    vmr_rwd_fix_leftarm_B.shoulderangleoffset_b =
      vmr_rwd_fix_leftarm_P.ArmShoulderAngleOffset_Value_l;

    /* Constant: '<S230>/Arm Elbow Angle Offset' */
    vmr_rwd_fix_leftarm_B.elbowangleoffset_a =
      vmr_rwd_fix_leftarm_P.ArmElbowAngleOffset_Value_n;

    /* Constant: '<S230>/Arm Shoulder X' */
    vmr_rwd_fix_leftarm_B.ShoulderX_a =
      vmr_rwd_fix_leftarm_P.ArmShoulderX_Value_j;

    /* Constant: '<S230>/Arm Shoulder Y' */
    vmr_rwd_fix_leftarm_B.ShoulderY_b =
      vmr_rwd_fix_leftarm_P.ArmShoulderY_Value_p;

    /* Constant: '<S230>/Arm L1' */
    vmr_rwd_fix_leftarm_B.L1_c = vmr_rwd_fix_leftarm_P.ArmL1_Value_c;

    /* Constant: '<S230>/Arm L2' */
    vmr_rwd_fix_leftarm_B.L2_f = vmr_rwd_fix_leftarm_P.ArmL2_Value_i;

    /* Constant: '<S230>/Arm Pointer Offset' */
    vmr_rwd_fix_leftarm_B.Pointeroffset_b =
      vmr_rwd_fix_leftarm_P.ArmPointerOffset_Value_b;

    /* Constant: '<S230>/Arm L3 Error' */
    vmr_rwd_fix_leftarm_B.L3Error_f = vmr_rwd_fix_leftarm_P.ArmL3Error_Value_l;

    /* Constant: '<S230>/Arm robot type' */
    vmr_rwd_fix_leftarm_B.robottype_cs =
      vmr_rwd_fix_leftarm_P.Armrobottype_Value_m;

    /* Constant: '<S230>/Arm Torque Constant' */
    vmr_rwd_fix_leftarm_B.torqueconstant_i =
      vmr_rwd_fix_leftarm_P.ArmTorqueConstant_Value_a;

    /* Constant: '<S230>/Arm robot version' */
    vmr_rwd_fix_leftarm_B.robotversion_f =
      vmr_rwd_fix_leftarm_P.Armrobotversion_Value_b;

    /* Outputs for Enabled SubSystem: '<S67>/update constants subsystem' incorporates:
     *  EnablePort: '<S231>/Enable'
     */
    /* Constant: '<S67>/update constants' */
    if (vmr_rwd_fix_leftarm_P.updateconstants_Value > 0.0) {
      /* DataStoreWrite: '<S231>/Data Store Write' */
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[0] =
        vmr_rwd_fix_leftarm_B.shoulderangleoffset;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[1] =
        vmr_rwd_fix_leftarm_B.elbowangleoffset;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[2] =
        vmr_rwd_fix_leftarm_B.ShoulderX;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[3] =
        vmr_rwd_fix_leftarm_B.ShoulderY;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[4] = vmr_rwd_fix_leftarm_B.L1;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[5] = vmr_rwd_fix_leftarm_B.L2;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[6] =
        vmr_rwd_fix_leftarm_B.Pointeroffset;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[7] =
        vmr_rwd_fix_leftarm_B.L3Error;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[8] =
        vmr_rwd_fix_leftarm_B.shoulderangleoffset_b;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[9] =
        vmr_rwd_fix_leftarm_B.elbowangleoffset_a;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[10] =
        vmr_rwd_fix_leftarm_B.ShoulderX_a;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[11] =
        vmr_rwd_fix_leftarm_B.ShoulderY_b;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[12] = vmr_rwd_fix_leftarm_B.L1_c;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[13] = vmr_rwd_fix_leftarm_B.L2_f;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[14] =
        vmr_rwd_fix_leftarm_B.Pointeroffset_b;
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[15] =
        vmr_rwd_fix_leftarm_B.L3Error_f;

      /* DataStoreWrite: '<S231>/Data Store Write1' incorporates:
       *  Constant: '<S229>/Arm Force Sensor Angle Offset'
       *  Constant: '<S229>/Arm L2 L5 Angle'
       *  Constant: '<S229>/Arm L5'
       *  Constant: '<S230>/Arm Force Sensor Angle Offset'
       *  Constant: '<S230>/Arm L2 L5 Angle'
       *  Constant: '<S230>/Arm L5'
       */
      vmr_rwd_fix_leftarm_DW.HardwareSettings[0] =
        vmr_rwd_fix_leftarm_B.robottype_e;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[1] =
        vmr_rwd_fix_leftarm_B.torqueconstant_g;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[2] =
        vmr_rwd_fix_leftarm_P.ArmL5_Value;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[3] =
        vmr_rwd_fix_leftarm_P.ArmL2L5Angle_Value;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[4] =
        vmr_rwd_fix_leftarm_P.ArmForceSensorAngleOffset_Value;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[5] =
        vmr_rwd_fix_leftarm_B.ArmOrientation_b;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[6] =
        vmr_rwd_fix_leftarm_B.M1orientation_h;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[7] =
        vmr_rwd_fix_leftarm_B.M2Orientation_l;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[8] =
        vmr_rwd_fix_leftarm_B.M1GearRatio_b;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[9] =
        vmr_rwd_fix_leftarm_B.M2GearRatio_p;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[10] =
        vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[11] =
        vmr_rwd_fix_leftarm_B.robotversion_g;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[12] =
        vmr_rwd_fix_leftarm_B.robottype_cs;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[13] =
        vmr_rwd_fix_leftarm_B.torqueconstant_i;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[14] =
        vmr_rwd_fix_leftarm_P.ArmL5_Value_m;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[15] =
        vmr_rwd_fix_leftarm_P.ArmL2L5Angle_Value_g;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[16] =
        vmr_rwd_fix_leftarm_P.ArmForceSensorAngleOffset_Value_c;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[17] =
        vmr_rwd_fix_leftarm_B.ArmOrientation_l;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[18] =
        vmr_rwd_fix_leftarm_B.M1orientation_n;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[19] =
        vmr_rwd_fix_leftarm_B.M2Orientation_cw;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[20] =
        vmr_rwd_fix_leftarm_B.M1GearRatio_k;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[21] =
        vmr_rwd_fix_leftarm_B.M2GearRatio_l;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[22] =
        vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;
      vmr_rwd_fix_leftarm_DW.HardwareSettings[23] =
        vmr_rwd_fix_leftarm_B.robotversion_f;

      /* DataStoreWrite: '<S231>/Data Store Write8' incorporates:
       *  Constant: '<S231>/Arm Force Sensors'
       */
      vmr_rwd_fix_leftarm_DW.ArmForceSensors[0] =
        vmr_rwd_fix_leftarm_P.ArmForceSensors_Value[0];
      vmr_rwd_fix_leftarm_DW.ArmForceSensors[1] =
        vmr_rwd_fix_leftarm_P.ArmForceSensors_Value[1];
      srUpdateBC(vmr_rwd_fix_leftarm_DW.updateconstantssubsystem_SubsysRanBC);
    }

    /* End of Constant: '<S67>/update constants' */
    /* End of Outputs for SubSystem: '<S67>/update constants subsystem' */

    /* DataStoreRead: '<S229>/Status read1' */
    vmr_rwd_fix_leftarm_B.Statusread1[0] = vmr_rwd_fix_leftarm_DW.RobotRevision
      [0];
    vmr_rwd_fix_leftarm_B.Statusread1[1] = vmr_rwd_fix_leftarm_DW.RobotRevision
      [1];

    /* MATLAB Function: '<S229>/decode robot' */
    vmr_rwd_fix_leftarm_decoderobot(vmr_rwd_fix_leftarm_B.systemtype,
      vmr_rwd_fix_leftarm_B.robottype_e, vmr_rwd_fix_leftarm_B.robotversion_g,
      &vmr_rwd_fix_leftarm_B.sf_decoderobot);

    /* DataStoreRead: '<S230>/Status read1' */
    vmr_rwd_fix_leftarm_B.Statusread1_m[0] =
      vmr_rwd_fix_leftarm_DW.RobotRevision[0];
    vmr_rwd_fix_leftarm_B.Statusread1_m[1] =
      vmr_rwd_fix_leftarm_DW.RobotRevision[1];

    /* MATLAB Function: '<S230>/decode robot' */
    vmr_rwd_fix_leftarm_decoderobot(vmr_rwd_fix_leftarm_B.systemtype,
      vmr_rwd_fix_leftarm_B.robottype_cs, vmr_rwd_fix_leftarm_B.robotversion_f,
      &vmr_rwd_fix_leftarm_B.sf_decoderobot_p);
    for (i = 0; i < 50; i++) {
      /* Selector: '<S72>/Selector' */
      vmr_rwd_fix_leftarm_B.Selector_c[i] = vmr_rwd_fix_leftarm_B.kinarm_data[3 *
        i];

      /* Selector: '<S72>/Selector1' */
      vmr_rwd_fix_leftarm_B.Selector1_m[i] = vmr_rwd_fix_leftarm_B.kinarm_data[3
        * i + 1];

      /* Selector: '<S72>/Selector2' */
      vmr_rwd_fix_leftarm_B.Selector2_o[i] = vmr_rwd_fix_leftarm_B.kinarm_data[3
        * i + 2];
    }

    /* MATLAB Function: '<S72>/splitKINData arm1' */
    /* MATLAB Function 'DataLogging/Poll KINARM/make KINData bus/splitKINData arm1': '<S241>:1' */
    /* '<S241>:1:9' */
    vmr_rwd_fix_leftarm_B.link_lengths_o[0] = vmr_rwd_fix_leftarm_B.Selector_c[0];
    vmr_rwd_fix_leftarm_B.link_lengths_o[1] = vmr_rwd_fix_leftarm_B.Selector_c[1];

    /*  L1, L2 length in m */
    /* '<S241>:1:10' */
    vmr_rwd_fix_leftarm_B.pointer_offset_k = vmr_rwd_fix_leftarm_B.Selector_c[2];

    /*  perpendicular distance from L2 to subject pointer (m) */
    /* '<S241>:1:11' */
    vmr_rwd_fix_leftarm_B.shoulder_loc_o[0] = vmr_rwd_fix_leftarm_B.Selector_c[3];
    vmr_rwd_fix_leftarm_B.shoulder_loc_o[1] = vmr_rwd_fix_leftarm_B.Selector_c[4];

    /*  shoulder x,y position (m) (global coordinates) */
    /* '<S241>:1:12' */
    vmr_rwd_fix_leftarm_B.arm_orientation_o = vmr_rwd_fix_leftarm_B.Selector_c[5];

    /*  subject's expected arm orientation (1: right, 2: left) */
    /* '<S241>:1:13' */
    vmr_rwd_fix_leftarm_B.shoulder_ang_h = vmr_rwd_fix_leftarm_B.Selector_c[6];

    /*  shoulder joint angle, with correction for offsets (see above) (rad) */
    /* '<S241>:1:14' */
    vmr_rwd_fix_leftarm_B.elbow_ang_k = vmr_rwd_fix_leftarm_B.Selector_c[7];

    /*  elbow joint angle, with correction for offsets (see above) (rad) */
    /* '<S241>:1:15' */
    vmr_rwd_fix_leftarm_B.shoulder_velocity_k =
      vmr_rwd_fix_leftarm_B.Selector_c[8];

    /*  shoulder joint angular velocity (rad/s) */
    /* '<S241>:1:16' */
    vmr_rwd_fix_leftarm_B.elbow_velocity_j = vmr_rwd_fix_leftarm_B.Selector_c[9];

    /*  elbow joint angular velocity (rad/s) */
    /* '<S241>:1:17' */
    vmr_rwd_fix_leftarm_B.shoulder_acceleration_c =
      vmr_rwd_fix_leftarm_B.Selector_c[10];

    /*  shoulder joint angular acceleration (rad/s^2) */
    /* '<S241>:1:18' */
    vmr_rwd_fix_leftarm_B.elbow_acceleration_j =
      vmr_rwd_fix_leftarm_B.Selector_c[11];

    /*  elbow joint angular acceleration (rad/s^2) */
    /* '<S241>:1:19' */
    vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[12];
    vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[13];

    /*  commanded shoulder (1), and elbow (2) torque (Nm) */
    /* '<S241>:1:20' */
    vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[14];
    vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[15];

    /*  commanded motor 1 (1) and 2 (2) torque (shoulder torque less elbow torque) (Nm) */
    /* '<S241>:1:22' */
    vmr_rwd_fix_leftarm_B.link_angle_b[0] = vmr_rwd_fix_leftarm_B.Selector_c[16];
    vmr_rwd_fix_leftarm_B.link_angle_b[1] = vmr_rwd_fix_leftarm_B.Selector_c[17];

    /*  upper arm angle with corrections, orientation-independent (see above) (rad) */
    /* '<S241>:1:23' */
    vmr_rwd_fix_leftarm_B.link_velocity_k[0] = vmr_rwd_fix_leftarm_B.Selector_c
      [18];
    vmr_rwd_fix_leftarm_B.link_velocity_k[1] = vmr_rwd_fix_leftarm_B.Selector_c
      [19];

    /*  upper arm angular velocity, orientation-independent (see above) (rad/s) */
    /* '<S241>:1:24' */
    vmr_rwd_fix_leftarm_B.link_acceleration_c[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[20];
    vmr_rwd_fix_leftarm_B.link_acceleration_c[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[21];

    /*  upper arm angular acceleration, orientation-independent (see above) (rad/s^2) */
    /* '<S241>:1:27' */
    vmr_rwd_fix_leftarm_B.hand_position_g[0] = vmr_rwd_fix_leftarm_B.Selector_c
      [22];
    vmr_rwd_fix_leftarm_B.hand_position_g[1] = vmr_rwd_fix_leftarm_B.Selector_c
      [23];

    /*  fingertip position in x,y (m) */
    /* '<S241>:1:28' */
    vmr_rwd_fix_leftarm_B.hand_velocity_p[0] = vmr_rwd_fix_leftarm_B.Selector_c
      [24];
    vmr_rwd_fix_leftarm_B.hand_velocity_p[1] = vmr_rwd_fix_leftarm_B.Selector_c
      [25];

    /*  fingertip velocity in x,y (m/s) */
    /* '<S241>:1:29' */
    vmr_rwd_fix_leftarm_B.hand_acceleration_e[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[26];
    vmr_rwd_fix_leftarm_B.hand_acceleration_e[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[27];

    /*  fingertip acceleration in x,y (m/s^2) */
    /*  shoulder_velocity_filt = robot_row(1,35); */
    /*  elbow_velocity_filt = robot_row(1,36); */
    /* '<S241>:1:34' */
    vmr_rwd_fix_leftarm_B.motor_status_c = vmr_rwd_fix_leftarm_B.Selector_c[36];

    /*  motor status (bitfield; each 0: motor enabled, 1: motor disabled/faulted) */
    /* '<S241>:1:36' */
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[37];
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[38];
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[2] =
      vmr_rwd_fix_leftarm_B.Selector_c[39];

    /*  force measured by force sensor along u,v,w in its local coordinate system (N) */
    /* '<S241>:1:37' */
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[40];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[41];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[2] =
      vmr_rwd_fix_leftarm_B.Selector_c[42];

    /*  torque measured by force sensor along u,v,w in its local coordinate system (Nm) */
    /* '<S241>:1:39' */
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[43];
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[44];
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[2] =
      vmr_rwd_fix_leftarm_B.Selector_c[45];

    /*  force measured by force sensor along x,y,z in the global coordinate system (N) */
    /* '<S241>:1:40' */
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[0] =
      vmr_rwd_fix_leftarm_B.Selector_c[46];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[1] =
      vmr_rwd_fix_leftarm_B.Selector_c[47];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[2] =
      vmr_rwd_fix_leftarm_B.Selector_c[48];

    /*  torque measured by force sensor along x in its local coordinate system (Nm) */
    /* '<S241>:1:41' */
    vmr_rwd_fix_leftarm_B.force_sensor_timestamp_k =
      vmr_rwd_fix_leftarm_B.Selector_c[49];

    /* MATLAB Function: '<S72>/splitKINData arm2' */
    /*  The timestamp from the force sensor(s) */
    /* MATLAB Function 'DataLogging/Poll KINARM/make KINData bus/splitKINData arm2': '<S242>:1' */
    /* '<S242>:1:9' */
    vmr_rwd_fix_leftarm_B.link_lengths[0] = vmr_rwd_fix_leftarm_B.Selector1_m[0];
    vmr_rwd_fix_leftarm_B.link_lengths[1] = vmr_rwd_fix_leftarm_B.Selector1_m[1];

    /*  L1, L2 length in m */
    /* '<S242>:1:10' */
    vmr_rwd_fix_leftarm_B.pointer_offset = vmr_rwd_fix_leftarm_B.Selector1_m[2];

    /*  perpendicular distance from L2 to subject pointer (m) */
    /* '<S242>:1:11' */
    vmr_rwd_fix_leftarm_B.shoulder_loc[0] = vmr_rwd_fix_leftarm_B.Selector1_m[3];
    vmr_rwd_fix_leftarm_B.shoulder_loc[1] = vmr_rwd_fix_leftarm_B.Selector1_m[4];

    /*  shoulder x,y position (m) (global coordinates) */
    /* '<S242>:1:12' */
    vmr_rwd_fix_leftarm_B.arm_orientation = vmr_rwd_fix_leftarm_B.Selector1_m[5];

    /*  subject's expected arm orientation (1: right, 2: left) */
    /* '<S242>:1:13' */
    vmr_rwd_fix_leftarm_B.shoulder_ang = vmr_rwd_fix_leftarm_B.Selector1_m[6];

    /*  shoulder joint angle, with correction for offsets (see above) (rad) */
    /* '<S242>:1:14' */
    vmr_rwd_fix_leftarm_B.elbow_ang = vmr_rwd_fix_leftarm_B.Selector1_m[7];

    /*  elbow joint angle, with correction for offsets (see above) (rad) */
    /* '<S242>:1:15' */
    vmr_rwd_fix_leftarm_B.shoulder_velocity = vmr_rwd_fix_leftarm_B.Selector1_m
      [8];

    /*  shoulder joint angular velocity (rad/s) */
    /* '<S242>:1:16' */
    vmr_rwd_fix_leftarm_B.elbow_velocity = vmr_rwd_fix_leftarm_B.Selector1_m[9];

    /*  elbow joint angular velocity (rad/s) */
    /* '<S242>:1:17' */
    vmr_rwd_fix_leftarm_B.shoulder_acceleration =
      vmr_rwd_fix_leftarm_B.Selector1_m[10];

    /*  shoulder joint angular acceleration (rad/s^2) */
    /* '<S242>:1:18' */
    vmr_rwd_fix_leftarm_B.elbow_acceleration =
      vmr_rwd_fix_leftarm_B.Selector1_m[11];

    /*  elbow joint angular acceleration (rad/s^2) */
    /* '<S242>:1:19' */
    vmr_rwd_fix_leftarm_B.joint_torque_cmd[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[12];
    vmr_rwd_fix_leftarm_B.joint_torque_cmd[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[13];

    /*  commanded shoulder (1), and elbow (2) torque (Nm) */
    /* '<S242>:1:20' */
    vmr_rwd_fix_leftarm_B.motor_torque_cmd[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[14];
    vmr_rwd_fix_leftarm_B.motor_torque_cmd[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[15];

    /*  commanded motor 1 (1) and 2 (2) torque (shoulder torque less elbow torque) (Nm) */
    /* '<S242>:1:22' */
    vmr_rwd_fix_leftarm_B.link_angle[0] = vmr_rwd_fix_leftarm_B.Selector1_m[16];
    vmr_rwd_fix_leftarm_B.link_angle[1] = vmr_rwd_fix_leftarm_B.Selector1_m[17];

    /*  upper arm angle with corrections, orientation-independent (see above) (rad) */
    /* '<S242>:1:23' */
    vmr_rwd_fix_leftarm_B.link_velocity[0] = vmr_rwd_fix_leftarm_B.Selector1_m
      [18];
    vmr_rwd_fix_leftarm_B.link_velocity[1] = vmr_rwd_fix_leftarm_B.Selector1_m
      [19];

    /*  upper arm angular velocity, orientation-independent (see above) (rad/s) */
    /* '<S242>:1:24' */
    vmr_rwd_fix_leftarm_B.link_acceleration[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[20];
    vmr_rwd_fix_leftarm_B.link_acceleration[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[21];

    /*  upper arm angular acceleration, orientation-independent (see above) (rad/s^2) */
    /* '<S242>:1:27' */
    vmr_rwd_fix_leftarm_B.hand_position[0] = vmr_rwd_fix_leftarm_B.Selector1_m
      [22];
    vmr_rwd_fix_leftarm_B.hand_position[1] = vmr_rwd_fix_leftarm_B.Selector1_m
      [23];

    /*  fingertip position in x,y (m) */
    /* '<S242>:1:28' */
    vmr_rwd_fix_leftarm_B.hand_velocity[0] = vmr_rwd_fix_leftarm_B.Selector1_m
      [24];
    vmr_rwd_fix_leftarm_B.hand_velocity[1] = vmr_rwd_fix_leftarm_B.Selector1_m
      [25];

    /*  fingertip velocity in x,y (m/s) */
    /* '<S242>:1:29' */
    vmr_rwd_fix_leftarm_B.hand_acceleration[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[26];
    vmr_rwd_fix_leftarm_B.hand_acceleration[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[27];

    /*  fingertip acceleration in x,y (m/s^2) */
    /*  shoulder_velocity_filt = robot_row(1,35); */
    /*  elbow_velocity_filt = robot_row(1,36); */
    /* '<S242>:1:34' */
    vmr_rwd_fix_leftarm_B.motor_status = vmr_rwd_fix_leftarm_B.Selector1_m[36];

    /*  motor status (bitfield; each 0: motor enabled, 1: motor disabled/faulted) */
    /* '<S242>:1:36' */
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[37];
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[38];
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[2] =
      vmr_rwd_fix_leftarm_B.Selector1_m[39];

    /*  force measured by force sensor along u,v,w in its local coordinate system (N) */
    /* '<S242>:1:37' */
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[40];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[41];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[2] =
      vmr_rwd_fix_leftarm_B.Selector1_m[42];

    /*  torque measured by force sensor along u,v,w in its local coordinate system (Nm) */
    /* '<S242>:1:39' */
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[43];
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[44];
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[2] =
      vmr_rwd_fix_leftarm_B.Selector1_m[45];

    /*  force measured by force sensor along x,y,z in the global coordinate system (N) */
    /* '<S242>:1:40' */
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[0] =
      vmr_rwd_fix_leftarm_B.Selector1_m[46];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[1] =
      vmr_rwd_fix_leftarm_B.Selector1_m[47];
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[2] =
      vmr_rwd_fix_leftarm_B.Selector1_m[48];

    /*  torque measured by force sensor along x in its local coordinate system (Nm) */
    /* '<S242>:1:41' */
    vmr_rwd_fix_leftarm_B.force_sensor_timestamp =
      vmr_rwd_fix_leftarm_B.Selector1_m[49];

    /* MATLAB Function: '<S72>/splitKINDataGeneral' */
    /*  The timestamp from the force sensor(s) */
    /* MATLAB Function 'DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral': '<S243>:1' */
    /* '<S243>:1:5' */
    vmr_rwd_fix_leftarm_B.active_arm = vmr_rwd_fix_leftarm_B.Selector2_o[0];

    /*  dominant KINARM for the experiment (1: arm 1, 2: arm 2) */
    /* '<S243>:1:6' */
    vmr_rwd_fix_leftarm_B.handFF = vmr_rwd_fix_leftarm_B.Selector2_o[1];

    /*  duration of feed forward for position of hand feedback (s) */
    /* '<S243>:1:7' */
    vmr_rwd_fix_leftarm_B.handFF_Dex = vmr_rwd_fix_leftarm_B.Selector2_o[6];

    /*  the true feed forward time set in Dexterit-E */
    /* '<S243>:1:8' */
    vmr_rwd_fix_leftarm_B.handFBArm = vmr_rwd_fix_leftarm_B.Selector2_o[2];

    /*  hand feedback arm (0: none, 1: dominant, 2: non-dominant, 3: both, 4: controlled by task program) */
    /* '<S243>:1:9' */
    vmr_rwd_fix_leftarm_B.handFBControl = vmr_rwd_fix_leftarm_B.Selector2_o[3];

    /*  hand feedback settings source (0: GUI, 1: from task program) */
    /* '<S243>:1:10' */
    vmr_rwd_fix_leftarm_B.handFBColor = vmr_rwd_fix_leftarm_B.Selector2_o[4];

    /*  feedback colour (RRRGGGBBB string converted to integer) */
    /* '<S243>:1:11' */
    vmr_rwd_fix_leftarm_B.handFBRadius = vmr_rwd_fix_leftarm_B.Selector2_o[5];

    /*  feedback radius (m) */
    /* '<S243>:1:13' */
    vmr_rwd_fix_leftarm_B.delayEstimates[0] = vmr_rwd_fix_leftarm_B.Selector2_o
      [7];
    vmr_rwd_fix_leftarm_B.delayEstimates[1] = vmr_rwd_fix_leftarm_B.Selector2_o
      [8];
    vmr_rwd_fix_leftarm_B.delayEstimates[2] = vmr_rwd_fix_leftarm_B.Selector2_o
      [9];
    vmr_rwd_fix_leftarm_B.delayEstimates[3] = vmr_rwd_fix_leftarm_B.Selector2_o
      [10];

    /*  primary encoders velocity(1), acceleration(2), seconadary enc velocity(3) and acceleration(4) delay estimate (s) */
    /* '<S243>:1:14' */
    vmr_rwd_fix_leftarm_B.servoCounter = vmr_rwd_fix_leftarm_B.Selector2_o[11];

    /*  servo update count */
    /* '<S243>:1:15' */
    vmr_rwd_fix_leftarm_B.calibrationButtonBits =
      vmr_rwd_fix_leftarm_B.Selector2_o[12];

    /*  EP calibration button status bitfield */
    /* '<S243>:1:18' */
    vmr_rwd_fix_leftarm_B.hasGaze = vmr_rwd_fix_leftarm_B.Selector2_o[13];

    /*  is Gaze tracking hardware available */
    /* '<S243>:1:19' */
    vmr_rwd_fix_leftarm_B.gazeFB = vmr_rwd_fix_leftarm_B.Selector2_o[14];

    /*  Gaze feedback (0: on, 1: controlled by task program) */
    /* '<S243>:1:21' */
    vmr_rwd_fix_leftarm_B.gazeLocation[0] = vmr_rwd_fix_leftarm_B.Selector2_o[15];
    vmr_rwd_fix_leftarm_B.gazeLocation[1] = vmr_rwd_fix_leftarm_B.Selector2_o[16];

    /*  Gaze X,Y location in global coordinates */
    /* '<S243>:1:22' */
    vmr_rwd_fix_leftarm_B.gazeTimestamp = vmr_rwd_fix_leftarm_B.Selector2_o[17];

    /*  Gaze Timestamp in seconds */
    /* '<S243>:1:23' */
    vmr_rwd_fix_leftarm_B.gazePupilArea = vmr_rwd_fix_leftarm_B.Selector2_o[18];

    /*  Gaze pupil area */
    /* '<S243>:1:24' */
    vmr_rwd_fix_leftarm_B.gazeEvent[0] = vmr_rwd_fix_leftarm_B.Selector2_o[19];
    vmr_rwd_fix_leftarm_B.gazeEvent[1] = vmr_rwd_fix_leftarm_B.Selector2_o[20];
    vmr_rwd_fix_leftarm_B.gazeEvent[2] = vmr_rwd_fix_leftarm_B.Selector2_o[21];

    /*  Gaze Event ID(1), start time(2), end time (3)  */
    /* '<S243>:1:25' */
    vmr_rwd_fix_leftarm_B.gazeVector[0] = vmr_rwd_fix_leftarm_B.Selector2_o[22];
    vmr_rwd_fix_leftarm_B.gazeVector[1] = vmr_rwd_fix_leftarm_B.Selector2_o[23];
    vmr_rwd_fix_leftarm_B.gazeVector[2] = vmr_rwd_fix_leftarm_B.Selector2_o[24];

    /*  Gaze vector in global coordinates */
    /* '<S243>:1:26' */
    vmr_rwd_fix_leftarm_B.gazePupilLoc[0] = vmr_rwd_fix_leftarm_B.Selector2_o[25];
    vmr_rwd_fix_leftarm_B.gazePupilLoc[1] = vmr_rwd_fix_leftarm_B.Selector2_o[26];
    vmr_rwd_fix_leftarm_B.gazePupilLoc[2] = vmr_rwd_fix_leftarm_B.Selector2_o[27];

    /*  Gaze pupil location in global coordinates */
    for (i = 0; i < 6; i++) {
      /* Selector: '<S73>/Selector1' */
      vmr_rwd_fix_leftarm_B.Selector1_a[i] =
        vmr_rwd_fix_leftarm_B.primary_encoder_data_out[(i << 1) + 1];

      /* Selector: '<S73>/Selector2' */
      vmr_rwd_fix_leftarm_B.Selector2_i[i] =
        vmr_rwd_fix_leftarm_B.primary_encoder_data_out[i << 1];
    }

    /* MATLAB Function: '<S73>/split_primary' */
    vmr_rwd_fix_leftarm_split_primary(vmr_rwd_fix_leftarm_B.Selector2_i,
      &vmr_rwd_fix_leftarm_B.sf_split_primary);

    /* MATLAB Function: '<S73>/split_primary1' */
    vmr_rwd_fix_leftarm_split_primary(vmr_rwd_fix_leftarm_B.Selector1_a,
      &vmr_rwd_fix_leftarm_B.sf_split_primary1);/* user code (Output function Trailer) */

    {
      /*------------ S-Function Block: <S63>/BKIN EtherCATinit1 Process Received Frames ------------*/
      real_T pauseDuration;
      real_T elapsedTime;
      real_T minDCSyncPauseDuration;
      int32_T minDCSyncPauseDurationMicroSec =
        ECAT_MIN_PAUSE_BEFORE_READ_PREOP_US;
      if (vmr_rwd_fix_leftarm_P.activation_Value[0] == ECAT_PREOP_PAUSE_TEST) {
        minDCSyncPauseDurationMicroSec = vmr_rwd_fix_leftarm_P.activation_Value
          [1];
      }

      if (vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK3) {
        minDCSyncPauseDuration = minDCSyncPauseDurationMicroSec * 1e-6;
        elapsedTime = xpcGetElapsedTime(NULL) -
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK4;
        if (elapsedTime < minDCSyncPauseDuration) {
          pauseDuration = minDCSyncPauseDuration - elapsedTime;
          xpcBusyWait(pauseDuration);
        }

        xpcEtherCATReadProcessData(1,NULL);
      }
    }

    {
      /*------------ S-Function Block: <S63>/BKIN EtherCATinit Process Received Frames ------------*/
      real_T pauseDuration;
      real_T elapsedTime;
      real_T minDCSyncPauseDuration;
      int32_T minDCSyncPauseDurationMicroSec =
        ECAT_MIN_PAUSE_BEFORE_READ_PREOP_US;
      if (vmr_rwd_fix_leftarm_P.activation_Value[0] == ECAT_PREOP_PAUSE_TEST) {
        minDCSyncPauseDurationMicroSec = vmr_rwd_fix_leftarm_P.activation_Value
          [1];
      }

      if (vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK3) {
        minDCSyncPauseDuration = minDCSyncPauseDurationMicroSec * 1e-6;
        elapsedTime = xpcGetElapsedTime(NULL) -
          vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK4;
        if (elapsedTime < minDCSyncPauseDuration) {
          pauseDuration = minDCSyncPauseDuration - elapsedTime;
          xpcBusyWait(pauseDuration);
        }

        xpcEtherCATReadProcessData(0,NULL);
      }
    }
  }
}

/* Update for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM_Update(void)
{
  /* Update for Enabled SubSystem: '<S63>/Arm 1' incorporates:
   *  Update for EnablePort: '<S74>/Enable'
   */
  if (vmr_rwd_fix_leftarm_DW.Arm1_MODE) {
    /* Update for Atomic SubSystem: '<S84>/EMCY Message pump' */
    vmr_rwd_fix_leftarm_EMCYMessagepump_Update();

    /* End of Update for SubSystem: '<S84>/EMCY Message pump' */

    /* Update for Memory: '<S84>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_g =
      vmr_rwd_fix_leftarm_B.isPermFaulted_i;

    /* Update for Memory: '<S85>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pv =
      vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.isPermFaulted;

    /* Update for Memory: '<S93>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pn =
      vmr_rwd_fix_leftarm_B.RateTransition_bs;

    /* Update for Memory: '<S93>/Memory1' */
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_ip =
      vmr_rwd_fix_leftarm_B.RateTransition1_dsj;

    /* Update for Memory: '<S93>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_p =
      vmr_rwd_fix_leftarm_B.RateTransition2_d;

    /* Update for Memory: '<S74>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[0] =
      vmr_rwd_fix_leftarm_B.continuousTorques_j[0];
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[1] =
      vmr_rwd_fix_leftarm_B.continuousTorques_j[1];

    /* Update for Memory: '<S74>/Memory3' */
    vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput_l =
      vmr_rwd_fix_leftarm_B.constantsReady_j;

    /* Update for Atomic SubSystem: '<S85>/EMCY Message pump' */
    vmr_rwd_fix_leftarm_EMCYMessagepump_e_Update();

    /* End of Update for SubSystem: '<S85>/EMCY Message pump' */

    /* Update for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' incorporates:
     *  Update for EnablePort: '<S87>/Enable'
     */
    if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE_i) {
      /* Update for Memory: '<S87>/Memory' */
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hw =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_i;

      /* Update for Memory: '<S87>/Memory1' */
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[0] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_p;
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g2[1] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_a;
    }

    /* End of Update for SubSystem: '<S74>/M1 AbsEnc Calibration' */

    /* Update for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' incorporates:
     *  Update for EnablePort: '<S88>/Enable'
     */
    if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE_a) {
      /* Update for Memory: '<S88>/Memory' */
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_i =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_ce;

      /* Update for Memory: '<S88>/Memory1' */
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[0] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_dq;
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_a[1] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_m;
    }

    /* End of Update for SubSystem: '<S74>/M2 AbsEnc Calibration' */

    /* Update for Atomic SubSystem: '<S74>/SDO reading' */
    vmr_rwd_fix_leftarm_SDOreading_Update();

    /* End of Update for SubSystem: '<S74>/SDO reading' */

    /* Update for Atomic SubSystem: '<S74>/SDO writing' */
    vmr_rwd_fix_leftarm_SDOwriting_Update();

    /* End of Update for SubSystem: '<S74>/SDO writing' */
  }

  /* End of Update for SubSystem: '<S63>/Arm 1' */

  /* Update for Enabled SubSystem: '<S63>/Arm 2' incorporates:
   *  Update for EnablePort: '<S75>/Enable'
   */
  if (vmr_rwd_fix_leftarm_DW.Arm2_MODE) {
    /* Update for Atomic SubSystem: '<S136>/EMCY Message pump' */
    vmr_rwd_fix_leftarm_EMCYMessagepump_f_Update();

    /* End of Update for SubSystem: '<S136>/EMCY Message pump' */

    /* Update for Memory: '<S136>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_l =
      vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.isPermFaulted;

    /* Update for Memory: '<S137>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hp =
      vmr_rwd_fix_leftarm_B.isPermFaulted;

    /* Update for Memory: '<S145>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_b =
      vmr_rwd_fix_leftarm_B.RateTransition_bx;

    /* Update for Memory: '<S145>/Memory1' */
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_c =
      vmr_rwd_fix_leftarm_B.RateTransition1_ds;

    /* Update for Memory: '<S145>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput =
      vmr_rwd_fix_leftarm_B.RateTransition2_jr;

    /* Update for Memory: '<S75>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[0] =
      vmr_rwd_fix_leftarm_B.continuousTorques[0];
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[1] =
      vmr_rwd_fix_leftarm_B.continuousTorques[1];

    /* Update for Memory: '<S75>/Memory3' */
    vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput =
      vmr_rwd_fix_leftarm_B.constantsReady;

    /* Update for Atomic SubSystem: '<S137>/EMCY Message pump' */
    vmr_rwd_fix_leftarm_EMCYMessagepump_j_Update();

    /* End of Update for SubSystem: '<S137>/EMCY Message pump' */

    /* Update for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' incorporates:
     *  Update for EnablePort: '<S139>/Enable'
     */
    if (vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_MODE) {
      /* Update for Memory: '<S139>/Memory' */
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_c =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g0;

      /* Update for Memory: '<S139>/Memory1' */
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[0] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1_k;
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_io[1] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2_o;
    }

    /* End of Update for SubSystem: '<S75>/M1 AbsEnc Calibration' */

    /* Update for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' incorporates:
     *  Update for EnablePort: '<S140>/Enable'
     */
    if (vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_MODE) {
      /* Update for Memory: '<S140>/Memory' */
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_o =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDODownload_g;

      /* Update for Memory: '<S140>/Memory1' */
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[0] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o1;
      vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_l[1] =
        vmr_rwd_fix_leftarm_B.BKINEtherCATAsyncSDOUpload_o2;
    }

    /* End of Update for SubSystem: '<S75>/M2 AbsEnc Calibration' */

    /* Update for Atomic SubSystem: '<S75>/SDO reading' */
    vmr_rwd_fix_leftarm_SDOreading_l_Update();

    /* End of Update for SubSystem: '<S75>/SDO reading' */

    /* Update for Atomic SubSystem: '<S75>/SDO writing' */
    vmr_rwd_fix_leftarm_SDOwriting_p_Update();

    /* End of Update for SubSystem: '<S75>/SDO writing' */
  }

  /* End of Update for SubSystem: '<S63>/Arm 2' */

  /* Update for Atomic SubSystem: '<S33>/Force Sensor Control' */
  vmr_rwd_fix_leftarm_ForceSensorControl_Update();

  /* End of Update for SubSystem: '<S33>/Force Sensor Control' */

  /* Update for Enabled SubSystem: '<S66>/Data receive' incorporates:
   *  Update for EnablePort: '<S222>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.Compare_a) {
    /* Update for UnitDelay: '<S225>/Output' */
    vmr_rwd_fix_leftarm_DW.Output_DSTATE_h = vmr_rwd_fix_leftarm_B.FixPtSwitch_d;
  }

  /* End of Update for SubSystem: '<S66>/Data receive' */

  /* Update for Enabled SubSystem: '<S65>/read_pmac' */
  vmr_rwd_fix_leftarm_read_pmac_Update();

  /* End of Update for SubSystem: '<S65>/read_pmac' */

  /* Update for UnitDelay: '<S77>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_c = vmr_rwd_fix_leftarm_B.FixPtSwitch_m;
}

/* Termination for atomic system: '<S2>/Poll KINARM' */
void vmr_rwd_fix_leftarm_PollKINARM_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S63>/Arm 1' */

  /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S74>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S84>/A1M1 PDOs' */

  /* Level2 S-Function Block: '<S98>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S84>/A1M1 PDOs' */

  /* Terminate for Atomic SubSystem: '<S84>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_Term();

  /* End of Terminate for SubSystem: '<S84>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S84>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S85>/A1M2 PDOs' */

  /* Level2 S-Function Block: '<S111>/BKIN PDO Receive ElmoDrive' (BKINethercatpdorxElmoDrive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S85>/A1M2 PDOs' */

  /* Terminate for Atomic SubSystem: '<S85>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_h_Term();

  /* End of Terminate for SubSystem: '<S85>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S85>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S93>/Read Drive 1 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive1SDO_i_Term();

  /* End of Terminate for SubSystem: '<S93>/Read Drive 1 SDO' */

  /* Terminate for Enabled SubSystem: '<S74>/M1 AbsEnc Calibration' */

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S87>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370041113, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1001);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S87>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370041114, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1001);
      }
    }
  }

  /* End of Terminate for SubSystem: '<S74>/M1 AbsEnc Calibration' */

  /* Terminate for Enabled SubSystem: '<S74>/M2 AbsEnc Calibration' */

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S88>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex =
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370044267, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1002);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S88>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370044268, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1002);
      }
    }
  }

  /* End of Terminate for SubSystem: '<S74>/M2 AbsEnc Calibration' */

  /* Terminate for Atomic SubSystem: '<S74>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_Term();

  /* End of Terminate for SubSystem: '<S74>/SDO reading' */

  /* Terminate for Atomic SubSystem: '<S74>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_Term();

  /* End of Terminate for SubSystem: '<S74>/SDO writing' */

  /* End of Terminate for SubSystem: '<S63>/Arm 1' */

  /* Terminate for Enabled SubSystem: '<S63>/Arm 2' */

  /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S75>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S136>/A2M1 PDOs' */
  vmr_rwd_fix_leftarm_A2M1PDOs_Term();

  /* End of Terminate for SubSystem: '<S136>/A2M1 PDOs' */

  /* Terminate for Atomic SubSystem: '<S136>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_j_Term();

  /* End of Terminate for SubSystem: '<S136>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S136>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S137>/A2M2 PDOs' */
  vmr_rwd_fix_leftarm_A2M2PDOs_Term();

  /* End of Terminate for SubSystem: '<S137>/A2M2 PDOs' */

  /* Terminate for Atomic SubSystem: '<S137>/EMCY Message pump' */
  vmr_rwd_fix_leftarm_EMCYMessagepump_f_Term();

  /* End of Terminate for SubSystem: '<S137>/EMCY Message pump' */

  /* Level2 S-Function Block: '<S137>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S145>/Read Drive 3 SDO' */
  vmr_rwd_fix_leftarm_ReadDrive3SDO_c_Term();

  /* End of Terminate for SubSystem: '<S145>/Read Drive 3 SDO' */

  /* Terminate for Enabled SubSystem: '<S75>/M1 AbsEnc Calibration' */

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S139>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370044277, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1003);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S139>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370044278, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1003);
      }
    }
  }

  /* End of Terminate for SubSystem: '<S75>/M1 AbsEnc Calibration' */

  /* Terminate for Enabled SubSystem: '<S75>/M2 AbsEnc Calibration' */

  /* Terminate for S-Function (BKINethercatasyncsdodownload): '<S140>/BKIN EtherCAT Async SDO Download' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k
        [0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDODownload(370044287, deviceIndex);
        printf("SDO Download. Unregister device %d, slave addr: %d\n",
               deviceIndex, 1004);
      }
    }
  }

  /* Terminate for S-Function (BKINethercatasyncsdoupload): '<S140>/BKIN EtherCAT Async SDO Upload' */
  {
    int_T deviceIndex;
    if (!xpcIsModelInit()) {
      deviceIndex = vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK[0];
      if (deviceIndex != NO_ETHERCAT) {
        unregisterAsyncSDOUpload(370044288, deviceIndex);
        printf("SDO Upload. Unregister device %d, slave addr: %d\n", deviceIndex,
               1004);
      }
    }
  }

  /* End of Terminate for SubSystem: '<S75>/M2 AbsEnc Calibration' */

  /* Terminate for Atomic SubSystem: '<S75>/SDO reading' */
  vmr_rwd_fix_leftarm_SDOreading_e_Term();

  /* End of Terminate for SubSystem: '<S75>/SDO reading' */

  /* Terminate for Atomic SubSystem: '<S75>/SDO writing' */
  vmr_rwd_fix_leftarm_SDOwriting_b_Term();

  /* End of Terminate for SubSystem: '<S75>/SDO writing' */

  /* End of Terminate for SubSystem: '<S63>/Arm 2' */

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit ' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S78>/BKIN EtherCAT PDO Transmit 3' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S33>/Force Sensor Control' */
  vmr_rwd_fix_leftarm_ForceSensorControl_Term();

  /* End of Terminate for SubSystem: '<S33>/Force Sensor Control' */

  /* Terminate for Enabled SubSystem: '<S66>/Data receive' */

  /* Level2 S-Function Block: '<S222>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S66>/Data receive' */

  /* Terminate for Enabled SubSystem: '<S65>/read_pmac' */
  vmr_rwd_fix_leftarm_read_pmac_Term();

  /* End of Terminate for SubSystem: '<S65>/read_pmac' */
}
