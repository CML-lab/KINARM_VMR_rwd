/*
 * Code generation for system system '<S2>/apply loads'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_applyloads.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Start for atomic system: '<S2>/apply loads' */
void vmr_rwd_fix_leftarm_applyloads_Start(void)
{
  /* Start for Enabled SubSystem: '<S36>/EtherCAT Apply Loads' */

  /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[36];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[38];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S36>/EtherCAT Apply Loads' */

  /* Start for Enabled SubSystem: '<S36>/apply pmac loads' */
  vmr_rwd_fix_leftarm_applypmacloads_Start();

  /* End of Start for SubSystem: '<S36>/apply pmac loads' */
}

/* Output and update for atomic system: '<S2>/apply loads' */
void vmr_rwd_fix_leftarm_applyloads(void)
{
  real_T motorTorques_idx_0;
  real_T motorTorques_idx_1;
  real_T motorTorques_idx_2;
  real_T motorTorques_idx_3;
  int16_T tmp;

  /* RelationalOperator: '<S252>/Compare' incorporates:
   *  Constant: '<S252>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Compare_b = (vmr_rwd_fix_leftarm_B.systemtype ==
    vmr_rwd_fix_leftarm_P.isecat_const_a);

  /* Outputs for Enabled SubSystem: '<S36>/EtherCAT Apply Loads' incorporates:
   *  EnablePort: '<S250>/Enable1'
   */
  if (vmr_rwd_fix_leftarm_B.Compare_b) {
    /* DataStoreRead: '<S250>/Data Store Read' */
    memcpy(&vmr_rwd_fix_leftarm_B.DataStoreRead[0],
           &vmr_rwd_fix_leftarm_DW.ECATHardware[0], 14U * sizeof(real_T));

    /* MATLAB Function: '<S250>/convert torques' */
    /* MATLAB Function 'ECAT Apply Loads/convert torques': '<S256>:1' */
    /* convert the shoulder and elbow torques to M1 and M2 torques */
    /* '<S256>:1:5' */
    motorTorques_idx_0 = (vmr_rwd_fix_leftarm_B.AddTorques[0] -
                          vmr_rwd_fix_leftarm_B.AddTorques[1]) *
      vmr_rwd_fix_leftarm_B.DataStoreRead[8];
    motorTorques_idx_1 = vmr_rwd_fix_leftarm_B.AddTorques[1] *
      vmr_rwd_fix_leftarm_B.DataStoreRead[8];
    motorTorques_idx_2 = (vmr_rwd_fix_leftarm_B.AddTorques[2] -
                          vmr_rwd_fix_leftarm_B.AddTorques[3]) *
      vmr_rwd_fix_leftarm_B.DataStoreRead[9];
    motorTorques_idx_3 = vmr_rwd_fix_leftarm_B.AddTorques[3] *
      vmr_rwd_fix_leftarm_B.DataStoreRead[9];

    /* this is converting the requested torque to units of 1/1000th of */
    /* maximum continuous torque. This statement will auto clip to the min */
    /* and max for an int16. */
    /* '<S256>:1:13' */
    vmr_rwd_fix_leftarm_B.ecatTorques[0] = 0;
    vmr_rwd_fix_leftarm_B.ecatTorques[1] = 0;
    vmr_rwd_fix_leftarm_B.ecatTorques[2] = 0;
    vmr_rwd_fix_leftarm_B.ecatTorques[3] = 0;

    /* '<S256>:1:15' */
    /* We are trying to avoid a divide by zero. If either of these are zero */
    /* then that means we don't have that arm! */
    if (!((vmr_rwd_fix_leftarm_B.DataStoreRead[0] <= 0.0) ||
          (vmr_rwd_fix_leftarm_B.DataStoreRead[4] <= 0.0))) {
      /* '<S256>:1:21' */
      motorTorques_idx_0 = rt_roundd_snf(motorTorques_idx_0 *
        vmr_rwd_fix_leftarm_B.DataStoreRead[10] /
        vmr_rwd_fix_leftarm_B.DataStoreRead[4] * 1000.0 /
        vmr_rwd_fix_leftarm_B.DataStoreRead[0]);
      if (motorTorques_idx_0 < 32768.0) {
        if (motorTorques_idx_0 >= -32768.0) {
          tmp = (int16_T)motorTorques_idx_0;
        } else {
          tmp = MIN_int16_T;
        }
      } else {
        tmp = MAX_int16_T;
      }

      vmr_rwd_fix_leftarm_B.ecatTorques[0] = tmp;
    } else {
      /* '<S256>:1:18' */
    }

    /* '<S256>:1:15' */
    /* We are trying to avoid a divide by zero. If either of these are zero */
    /* then that means we don't have that arm! */
    if (!((vmr_rwd_fix_leftarm_B.DataStoreRead[1] <= 0.0) ||
          (vmr_rwd_fix_leftarm_B.DataStoreRead[5] <= 0.0))) {
      /* '<S256>:1:21' */
      motorTorques_idx_0 = rt_roundd_snf(motorTorques_idx_1 *
        vmr_rwd_fix_leftarm_B.DataStoreRead[11] /
        vmr_rwd_fix_leftarm_B.DataStoreRead[5] * 1000.0 /
        vmr_rwd_fix_leftarm_B.DataStoreRead[1]);
      if (motorTorques_idx_0 < 32768.0) {
        if (motorTorques_idx_0 >= -32768.0) {
          tmp = (int16_T)motorTorques_idx_0;
        } else {
          tmp = MIN_int16_T;
        }
      } else {
        tmp = MAX_int16_T;
      }

      vmr_rwd_fix_leftarm_B.ecatTorques[1] = tmp;
    } else {
      /* '<S256>:1:18' */
    }

    /* '<S256>:1:15' */
    /* We are trying to avoid a divide by zero. If either of these are zero */
    /* then that means we don't have that arm! */
    if (!((vmr_rwd_fix_leftarm_B.DataStoreRead[2] <= 0.0) ||
          (vmr_rwd_fix_leftarm_B.DataStoreRead[6] <= 0.0))) {
      /* '<S256>:1:21' */
      motorTorques_idx_0 = rt_roundd_snf(motorTorques_idx_2 *
        vmr_rwd_fix_leftarm_B.DataStoreRead[12] /
        vmr_rwd_fix_leftarm_B.DataStoreRead[6] * 1000.0 /
        vmr_rwd_fix_leftarm_B.DataStoreRead[2]);
      if (motorTorques_idx_0 < 32768.0) {
        if (motorTorques_idx_0 >= -32768.0) {
          tmp = (int16_T)motorTorques_idx_0;
        } else {
          tmp = MIN_int16_T;
        }
      } else {
        tmp = MAX_int16_T;
      }

      vmr_rwd_fix_leftarm_B.ecatTorques[2] = tmp;
    } else {
      /* '<S256>:1:18' */
    }

    /* '<S256>:1:15' */
    /* We are trying to avoid a divide by zero. If either of these are zero */
    /* then that means we don't have that arm! */
    if (!((vmr_rwd_fix_leftarm_B.DataStoreRead[3] <= 0.0) ||
          (vmr_rwd_fix_leftarm_B.DataStoreRead[7] <= 0.0))) {
      /* '<S256>:1:21' */
      motorTorques_idx_0 = rt_roundd_snf(motorTorques_idx_3 *
        vmr_rwd_fix_leftarm_B.DataStoreRead[13] /
        vmr_rwd_fix_leftarm_B.DataStoreRead[7] * 1000.0 /
        vmr_rwd_fix_leftarm_B.DataStoreRead[3]);
      if (motorTorques_idx_0 < 32768.0) {
        if (motorTorques_idx_0 >= -32768.0) {
          tmp = (int16_T)motorTorques_idx_0;
        } else {
          tmp = MIN_int16_T;
        }
      } else {
        tmp = MAX_int16_T;
      }

      vmr_rwd_fix_leftarm_B.ecatTorques[3] = tmp;
    } else {
      /* '<S256>:1:18' */
    }

    /* End of MATLAB Function: '<S250>/convert torques' */
    /* '<S256>:1:15' */

    /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[35];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[36];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[37];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[38];
      sfcnOutputs(rts, 1);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.EtherCATApplyLoads_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S36>/EtherCAT Apply Loads' */

  /* RelationalOperator: '<S253>/Compare' incorporates:
   *  Constant: '<S253>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Compare_l = (vmr_rwd_fix_leftarm_B.systemtype ==
    vmr_rwd_fix_leftarm_P.isecat1_const);

  /* Outputs for Enabled SubSystem: '<S36>/apply pmac loads' */
  vmr_rwd_fix_leftarm_applypmacloads();

  /* End of Outputs for SubSystem: '<S36>/apply pmac loads' */
}

/* Termination for atomic system: '<S2>/apply loads' */
void vmr_rwd_fix_leftarm_applyloads_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S36>/EtherCAT Apply Loads' */

  /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S254>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 1' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S255>/BKIN EtherCAT PDO Transmit 2' (BKINethercatpdotx) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S36>/EtherCAT Apply Loads' */

  /* Terminate for Enabled SubSystem: '<S36>/apply pmac loads' */
  vmr_rwd_fix_leftarm_applypmacloads_Term();

  /* End of Terminate for SubSystem: '<S36>/apply pmac loads' */
}
