/*
 * Code generation for system system '<S2>/Poll KINARM'
 * For more details, see corresponding source file vmr_rwd_fix_leftarm_PollKINARM.c
 *
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_PollKINARM_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_PollKINARM_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef vmr_rwd_fix_leftarm_COMMON_INCLUDES_
# define vmr_rwd_fix_leftarm_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#include "xpctarget.h"
#include "BKINethercat.h"
#include "io_config_xml_1.h"
#include "io_config_xml_0.h"
#endif                                 /* vmr_rwd_fix_leftarm_COMMON_INCLUDES_ */

#include "vmr_rwd_fix_leftarm_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "vmr_rwd_fix_leftarm_ForceSensorControl.h"
#include "vmr_rwd_fix_leftarm_createKINData.h"
#include "vmr_rwd_fix_leftarm_read_pmac.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S98>/parse status register' */
typedef struct {
  uint32_T allOK;                      /* '<S98>/parse status register' */
  uint32_T ampStatus;                  /* '<S98>/parse status register' */
  uint32_T servoEnabled;               /* '<S98>/parse status register' */
  uint32_T faultFound;                 /* '<S98>/parse status register' */
  uint32_T currentLimitEnabled;        /* '<S98>/parse status register' */
  uint32_T eStopOut;                   /* '<S98>/parse status register' */
  uint32_T motorOn;                    /* '<S98>/parse status register' */
} B_parsestatusregister_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S101>/fault monitor' */
typedef struct {
  real_T triggerFaultRead;             /* '<S101>/fault monitor' */
} B_faultmonitor_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S101>/fault monitor' */
typedef struct {
  real_T preOpCounter;                 /* '<S101>/fault monitor' */
} DW_faultmonitor_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S101>/fault monitor1' */
typedef struct {
  real_T EMCYMsg[5];                   /* '<S101>/fault monitor1' */
  uint32_T TmpSignalConversionAtSFunctionInport2[3];/* '<S101>/fault monitor1' */
} B_faultmonitor1_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S101>/fault monitor1' */
typedef struct {
  real_T underVoltageCounter;          /* '<S101>/fault monitor1' */
  uint32_T lastRegister;               /* '<S101>/fault monitor1' */
} DW_faultmonitor1_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S85>/Control GDC Whistle State' */
typedef struct {
  real_T isPermFaulted;                /* '<S85>/Control GDC Whistle State' */
  uint32_T motorStatus;                /* '<S85>/Control GDC Whistle State' */
  uint16_T ControlWord;                /* '<S85>/Control GDC Whistle State' */
} B_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S85>/Control GDC Whistle State' */
typedef struct {
  real_T permFaulted;                  /* '<S85>/Control GDC Whistle State' */
  real_T countFaultSteps;              /* '<S85>/Control GDC Whistle State' */
  real_T frameCounter;                 /* '<S85>/Control GDC Whistle State' */
  uint32_T lastEStopState;             /* '<S85>/Control GDC Whistle State' */
  boolean_T permFaulted_not_empty;     /* '<S85>/Control GDC Whistle State' */
} DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S74>/Find Robot type' */
typedef struct {
  real_T robotType;                    /* '<S74>/Find Robot type' */
} B_FindRobottype_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S87>/AbsEncoder machine' */
typedef struct {
  int32_T setupData[4];                /* '<S87>/AbsEncoder machine' */
  int32_T SDORequest[3];               /* '<S87>/AbsEncoder machine' */
  int32_T encoderOutputs[6];           /* '<S87>/AbsEncoder machine' */
  int32_T complete;                    /* '<S87>/AbsEncoder machine' */
} B_AbsEncodermachine_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S87>/AbsEncoder machine' */
typedef struct {
  real_T encoderIdx;                   /* '<S87>/AbsEncoder machine' */
  int32_T sfEvent;                     /* '<S87>/AbsEncoder machine' */
  int32_T setupIdx;                    /* '<S87>/AbsEncoder machine' */
  int32_T donePolling;                 /* '<S87>/AbsEncoder machine' */
  uint8_T is_active_c43_ethercat;      /* '<S87>/AbsEncoder machine' */
  uint8_T is_c43_ethercat;             /* '<S87>/AbsEncoder machine' */
  boolean_T isStable;                  /* '<S87>/AbsEncoder machine' */
} DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S87>/set-up values' */
typedef struct {
  real_T setupValues[24];              /* '<S87>/set-up values' */
  real_T setupValuesCount;             /* '<S87>/set-up values' */
  real_T pollValues[3];                /* '<S87>/set-up values' */
  real_T encoderValues[12];            /* '<S87>/set-up values' */
  real_T encoderValuesCount;           /* '<S87>/set-up values' */
} B_setupvalues_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S74>/SDO read machine' */
typedef struct {
  real_T floatSDOValues[20];           /* '<S74>/SDO read machine' */
  int32_T SDOCommand[3];               /* '<S74>/SDO read machine' */
  int32_T intSDOValues[20];            /* '<S74>/SDO read machine' */
  int32_T complete;                    /* '<S74>/SDO read machine' */
} B_SDOreadmachine_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S74>/SDO read machine' */
typedef struct {
  real_T valueCount;                   /* '<S74>/SDO read machine' */
  int32_T sfEvent;                     /* '<S74>/SDO read machine' */
  int32_T valueIdx;                    /* '<S74>/SDO read machine' */
  int32_T lastTrigger;                 /* '<S74>/SDO read machine' */
  uint8_T is_active_c49_ethercat;      /* '<S74>/SDO read machine' */
  uint8_T is_c49_ethercat;             /* '<S74>/SDO read machine' */
  boolean_T isStable;                  /* '<S74>/SDO read machine' */
} DW_SDOreadmachine_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S128>/converter' */
typedef struct {
  real_T doubleOut;                    /* '<S128>/converter' */
  int32_T int32Out;                    /* '<S128>/converter' */
  uint32_T uint32Out;                  /* '<S128>/converter' */
} B_converter_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S90>/SDO read machine' */
typedef struct {
  int32_T enable;                      /* '<S90>/SDO read machine' */
  int32_T complete;                    /* '<S90>/SDO read machine' */
} B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T;

/* Block states (auto storage) for system '<S90>/SDO read machine' */
typedef struct {
  int32_T sfEvent;                     /* '<S90>/SDO read machine' */
  int32_T lastTriggerValue;            /* '<S90>/SDO read machine' */
  uint8_T is_active_c50_ethercat;      /* '<S90>/SDO read machine' */
  uint8_T is_c50_ethercat;             /* '<S90>/SDO read machine' */
  boolean_T isStable;                  /* '<S90>/SDO read machine' */
} DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T;

/* Block signals for system '<S90>/values' */
typedef struct {
  real_T TmpSignalConversionAtSFunctionInport1[3];/* '<S90>/values' */
  real_T outVal[3];                    /* '<S90>/values' */
} B_values_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S91>/SDO write machine' */
typedef struct {
  int32_T enable;                      /* '<S91>/SDO write machine' */
  int32_T complete;                    /* '<S91>/SDO write machine' */
} B_SDOwritemachine_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S91>/SDO write machine' */
typedef struct {
  int32_T sfEvent;                     /* '<S91>/SDO write machine' */
  int32_T lastTriggerValue;            /* '<S91>/SDO write machine' */
  uint8_T is_active_c52_ethercat;      /* '<S91>/SDO write machine' */
  uint8_T is_c52_ethercat;             /* '<S91>/SDO write machine' */
  boolean_T isStable;                  /* '<S91>/SDO write machine' */
} DW_SDOwritemachine_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S91>/convert' */
typedef struct {
  uint32_T y;                          /* '<S91>/convert' */
} B_convert_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S74>/forceEnableDisable' */
typedef struct {
  real_T TmpSignalConversionAtSFunctionInport5[2];/* '<S74>/forceEnableDisable' */
  real_T forceMotorState;              /* '<S74>/forceEnableDisable' */
} B_forceEnableDisable_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S74>/forceEnableDisable' */
typedef struct {
  real_T lastRunningState;             /* '<S74>/forceEnableDisable' */
  real_T faultResetCycles;             /* '<S74>/forceEnableDisable' */
} DW_forceEnableDisable_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S74>/size' */
typedef struct {
  real_T count;                        /* '<S74>/size' */
} B_size_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S74>/split out constants1' */
typedef struct {
  real_T hasSecondary;                 /* '<S74>/split out constants1' */
  real_T hasFT;                        /* '<S74>/split out constants1' */
  real_T robotOrientation;             /* '<S74>/split out constants1' */
  real_T motorOrientation[2];          /* '<S74>/split out constants1' */
  real_T encOrientation[2];            /* '<S74>/split out constants1' */
} B_splitoutconstants1_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S153>/Read EMCY' */
typedef struct {
  real_T emcyValPump[3];               /* '<S153>/Read EMCY' */
  int32_T triggerCountRead;            /* '<S153>/Read EMCY' */
  int32_T emcyReadTrigger[2];          /* '<S153>/Read EMCY' */
  int32_T countOverwriteTrigger;       /* '<S153>/Read EMCY' */
} B_ReadEMCY_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S153>/Read EMCY' */
typedef struct {
  real_T currReadIdx;                  /* '<S153>/Read EMCY' */
  real_T valuesToRead;                 /* '<S153>/Read EMCY' */
  int32_T sfEvent;                     /* '<S153>/Read EMCY' */
  uint8_T is_active_c104_ethercat;     /* '<S153>/Read EMCY' */
  uint8_T is_c104_ethercat;            /* '<S153>/Read EMCY' */
  boolean_T isStable;                  /* '<S153>/Read EMCY' */
} DW_ReadEMCY_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S229>/decode robot' */
typedef struct {
  real_T isEP;                         /* '<S229>/decode robot' */
  real_T isHumanEXO;                   /* '<S229>/decode robot' */
  real_T isNHPEXO;                     /* '<S229>/decode robot' */
  real_T isClassicExo;                 /* '<S229>/decode robot' */
  real_T isUTSEXO;                     /* '<S229>/decode robot' */
  real_T isPMAC;                       /* '<S229>/decode robot' */
  real_T isECAT;                       /* '<S229>/decode robot' */
} B_decoderobot_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S73>/split_primary' */
typedef struct {
  real_T link_angles[2];               /* '<S73>/split_primary' */
  real_T link_velocities[2];           /* '<S73>/split_primary' */
  real_T link_acceleration[2];         /* '<S73>/split_primary' */
} B_split_primary_vmr_rwd_fix_leftarm_T;

extern void vmr_rwd_fix_leftarm_parsestatusregister(uint32_T rtu_statusRegister,
  B_parsestatusregister_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_faultmonitor_Init
  (DW_faultmonitor_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_faultmonitor(uint16_T rtu_StatusWord,
  B_faultmonitor_vmr_rwd_fix_leftarm_T *localB,
  DW_faultmonitor_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_faultmonitor1_Init
  (DW_faultmonitor1_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_faultmonitor1(const real_T rtu_SDOEMCY[3],
  uint32_T rtu_registerInfo, uint32_T rtu_registerInfo_b, uint32_T
  rtu_registerInfo_g, real_T rtu_drive, real_T rtu_statusWord,
  B_faultmonitor1_vmr_rwd_fix_leftarm_T *localB,
  DW_faultmonitor1_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_ControlGDCWhistleState_Init
  (DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_ControlGDCWhistleState(uint16_T rtu_StatusWord,
  uint32_T rtu_allOK, uint32_T rtu_motorOn, uint32_T rtu_ampStatus, uint32_T
  rtu_fault, uint32_T rtu_eStops, real_T rtu_EMCY, boolean_T rtu_masterEnabled,
  real_T rtu_requestEnable, real_T rtu_max_errors_to_fault,
  B_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localB,
  DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_FindRobottype(const int32_T rtu_intVals[20],
  const real_T rtu_epPNs[6], const real_T rtu_nhpPNs[6],
  B_FindRobottype_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_AbsEncodermachine_Init
  (B_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localB,
   DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_AbsEncodermachine(const real_T rtu_setupValues
  [24], real_T rtu_setupValuesCount, const real_T rtu_pollValues[3], const
  real_T rtu_encoderValues[12], real_T rtu_encoderValuesCount, int32_T
  rtu_intStatus, const int32_T rtu_pollResponse[2],
  B_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localB,
  DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_setupvalues(B_setupvalues_vmr_rwd_fix_leftarm_T *
  localB);
extern void vmr_rwd_fix_leftarm_SDOreadmachine_Init
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB,
   DW_SDOreadmachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_SDOreadmachine(int32_T rtu_triggerReading, const
  real_T rtu_intReadAddrs[24], real_T rtu_intCount, int32_T rtu_intSDOResponse,
  const real_T rtu_floatReadAddrs[24], real_T rtu_floatCount, real_T
  rtu_floatSDOResponse, real_T rtu_status,
  B_SDOreadmachine_vmr_rwd_fix_leftarm_T *localB,
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_converter(uint32_T rtu_inVal,
  B_converter_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_SDOreadmachine_c_Init
  (B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T *localB,
   DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T *localDW);
extern void vmr_rwd_fix_leftarm_SDOreadmachine_p(real_T rtu_triggerWriting,
  real_T rtu_readState, B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T *localB,
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T *localDW);
extern void vmr_rwd_fix_leftarm_values(real_T rtu_inVal, real_T rtu_inVal_g,
  real_T rtu_inVal_o, B_values_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_SDOwritemachine_Init
  (B_SDOwritemachine_vmr_rwd_fix_leftarm_T *localB,
   DW_SDOwritemachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_SDOwritemachine(real_T rtu_triggerReading,
  int32_T rtu_writeState, B_SDOwritemachine_vmr_rwd_fix_leftarm_T *localB,
  DW_SDOwritemachine_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_convert(real_T rtu_u, real_T rtu_type,
  B_convert_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_forceEnableDisable_Init
  (DW_forceEnableDisable_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_forceEnableDisable(real_T rtu_dexState, real_T
  rtu_task_state, const real_T rtu_forces[4], boolean_T rtu_allowEnableMotors,
  real_T rtu_motorFaults, real_T rtu_motorFaults_e, real_T
  rtu_fault_cycles_allowed, B_forceEnableDisable_vmr_rwd_fix_leftarm_T *localB,
  DW_forceEnableDisable_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_size(B_size_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_splitoutconstants1(const int32_T rtu_intVals[20],
  real_T rtu_forcePrimary, real_T rtu_robotType,
  B_splitoutconstants1_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_ReadEMCY_Init(B_ReadEMCY_vmr_rwd_fix_leftarm_T
  *localB, DW_ReadEMCY_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_ReadEMCY(real_T rtu_triggerReading, real_T
  rtu_driveID, const real_T rtu_countValues[2], const real_T rtu_emcyValues[2],
  real_T rtu_overwriteStatus, B_ReadEMCY_vmr_rwd_fix_leftarm_T *localB,
  DW_ReadEMCY_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_decoderobot(real_T rtu_system_type, real_T
  rtu_robot_type, real_T rtu_robot_version, B_decoderobot_vmr_rwd_fix_leftarm_T *
  localB);
extern void vmr_rwd_fix_leftarm_split_primary(const real_T rtu_primary_data[6],
  B_split_primary_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_Init(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_Start(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_Update(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_m_Init(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_k_Start(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_e_Update(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_o(void);
extern void vmr_rwd_fix_leftarm_ReadDrive1SDO(void);
extern void vmr_rwd_fix_leftarm_SDOreading_Init(void);
extern void vmr_rwd_fix_leftarm_SDOreading_Start(void);
extern void vmr_rwd_fix_leftarm_SDOreading_Update(void);
extern void vmr_rwd_fix_leftarm_SDOreading(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_Init(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_Start(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_Update(void);
extern void vmr_rwd_fix_leftarm_SDOwriting(void);
extern void vmr_rwd_fix_leftarm_ReadDrive1SDO_p(void);
extern void vmr_rwd_fix_leftarm_A2M1PDOs_Start(void);
extern void vmr_rwd_fix_leftarm_A2M1PDOs(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Init(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_l_Start(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Update(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_o1(void);
extern void vmr_rwd_fix_leftarm_A2M2PDOs_Start(void);
extern void vmr_rwd_fix_leftarm_A2M2PDOs(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_k_Init(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_ko_Start(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_j_Update(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_i(void);
extern void vmr_rwd_fix_leftarm_ReadDrive3SDO(void);
extern void vmr_rwd_fix_leftarm_SDOreading_j_Init(void);
extern void vmr_rwd_fix_leftarm_SDOreading_p_Start(void);
extern void vmr_rwd_fix_leftarm_SDOreading_l_Update(void);
extern void vmr_rwd_fix_leftarm_SDOreading_n(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_l_Init(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_c_Start(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_p_Update(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_f(void);
extern void vmr_rwd_fix_leftarm_ReadDrive3SDO_g(void);
extern void vmr_rwd_fix_leftarm_PollKINARM_Init(void);
extern void vmr_rwd_fix_leftarm_PollKINARM_Start(void);
extern void vmr_rwd_fix_leftarm_PollKINARM_Disable(void);
extern void vmr_rwd_fix_leftarm_PollKINARM_Update(void);
extern void vmr_rwd_fix_leftarm_PollKINARM(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_Term(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_h_Term(void);
extern void vmr_rwd_fix_leftarm_ReadDrive1SDO_Term(void);
extern void vmr_rwd_fix_leftarm_SDOreading_Term(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_Term(void);
extern void vmr_rwd_fix_leftarm_ReadDrive1SDO_i_Term(void);
extern void vmr_rwd_fix_leftarm_A2M1PDOs_Term(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_j_Term(void);
extern void vmr_rwd_fix_leftarm_A2M2PDOs_Term(void);
extern void vmr_rwd_fix_leftarm_EMCYMessagepump_f_Term(void);
extern void vmr_rwd_fix_leftarm_ReadDrive3SDO_Term(void);
extern void vmr_rwd_fix_leftarm_SDOreading_e_Term(void);
extern void vmr_rwd_fix_leftarm_SDOwriting_b_Term(void);
extern void vmr_rwd_fix_leftarm_ReadDrive3SDO_c_Term(void);
extern void vmr_rwd_fix_leftarm_PollKINARM_Term(void);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_PollKINARM_h_ */
