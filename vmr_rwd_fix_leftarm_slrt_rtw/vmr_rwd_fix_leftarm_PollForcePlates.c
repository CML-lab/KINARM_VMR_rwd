/*
 * Code generation for system system '<S2>/Poll Force Plates'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_PollForcePlates.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Start for atomic system: '<S2>/Poll Force Plates' */
void vmr_rwd_fix_leftarm_PollForcePlates_Start(void)
{
  /* Start for Enabled SubSystem: '<S32>/send poll 1' */

  /* Level2 S-Function Block: '<S59>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S32>/send poll 1' */

  /* Start for Enabled SubSystem: '<S32>/send poll 2' */

  /* Level2 S-Function Block: '<S60>/Send1' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S32>/send poll 2' */

  /* Start for Enabled SubSystem: '<S32>/plate1' */

  /* Level2 S-Function Block: '<S57>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S32>/plate1' */

  /* Start for Enabled SubSystem: '<S32>/plate2' */

  /* Level2 S-Function Block: '<S58>/Receive1' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S32>/plate2' */
}

/* Output and update for atomic system: '<S2>/Poll Force Plates' */
void vmr_rwd_fix_leftarm_PollForcePlatesTID0(void)
{
  real_T voltages[8];
  real_T values[6];
  int32_T i;
  int32_T i_0;
  real_T voltages_0[8];
  uint32_T timers_idx_0;
  real_T values_0;

  /* DataTypeConversion: '<S32>/Convert1' incorporates:
   *  Constant: '<S32>/request_packet'
   */
  for (i = 0; i < 34; i++) {
    vmr_rwd_fix_leftarm_B.Convert1_c[i] = (uint8_T)
      vmr_rwd_fix_leftarm_P.request_packet_Value[i];
  }

  /* End of DataTypeConversion: '<S32>/Convert1' */

  /* RateTransition: '<S32>/TmpRTBAtConvert1Outport1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_2) {
    for (i = 0; i < 34; i++) {
      vmr_rwd_fix_leftarm_B.TmpRTBAtConvert1Outport1[i] =
        vmr_rwd_fix_leftarm_B.Convert1_c[i];
    }

    /* RateTransition: '<S32>/Rate Transition' incorporates:
     *  Constant: '<S32>/enable_plate1'
     */
    vmr_rwd_fix_leftarm_B.RateTransition_g =
      vmr_rwd_fix_leftarm_P.enable_plate1_Value;

    /* RateTransition: '<S32>/Rate Transition1' incorporates:
     *  Constant: '<S32>/enable_plate2'
     */
    vmr_rwd_fix_leftarm_B.RateTransition1_h =
      vmr_rwd_fix_leftarm_P.enable_plate2_Value;
  }

  /* End of RateTransition: '<S32>/TmpRTBAtConvert1Outport1' */

  /* Outputs for Enabled SubSystem: '<S32>/plate1' incorporates:
   *  EnablePort: '<S57>/Enable'
   */
  /* Constant: '<S32>/enable_plate1' */
  if (vmr_rwd_fix_leftarm_P.enable_plate1_Value > 0.0) {
    /* Level2 S-Function Block: '<S57>/Receive' (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[4];
      sfcnOutputs(rts, 1);
    }

    /* MATLAB Function: '<S57>/parse packet 1' incorporates:
     *  Constant: '<S32>/ain_offset1'
     *  Constant: '<S32>/ain_slope1'
     *  Constant: '<S32>/calibration_matrix1'
     *  Constant: '<S32>/gain'
     *  Constant: '<S32>/orientation1'
     *  Constant: '<S32>/zero_voltage'
     */
    /* MATLAB Function 'DataLogging/Poll Force Plates/plate1/parse packet 1': '<S61>:1' */
    /* This pulls voltages and timer infomation from the packet we got back from */
    /* the lab jack. */
    /* '<S61>:1:5' */
    /* '<S61>:1:6' */
    /* '<S61>:1:8' */
    for (i_0 = 0; i_0 < 8; i_0++) {
      voltages[i_0] = 0.0;

      /* '<S61>:1:8' */
      /* '<S61>:1:9' */
      i = (i_0 << 1) + 12;

      /* '<S61>:1:59' */
      /* '<S61>:1:60' */
      /* '<S61>:1:61' */
      /* '<S61>:1:10' */
      /* '<S61>:1:73' */
      voltages[i_0] = (real_T)(((uint32_T)vmr_rwd_fix_leftarm_B.Receive_o1_k[i +
        1] << 8) + vmr_rwd_fix_leftarm_B.Receive_o1_k[i]) *
        vmr_rwd_fix_leftarm_P.ain_slope1_Value +
        vmr_rwd_fix_leftarm_P.ain_offset1_Value;

      /* '<S61>:1:8' */
    }

    /* '<S61>:1:13' */
    /* '<S61>:1:14' */
    /* '<S61>:1:65' */
    /* '<S61>:1:66' */
    /* '<S61>:1:67' */
    /* '<S61>:1:68' */
    /* '<S61>:1:69' */
    timers_idx_0 = ((((uint32_T)vmr_rwd_fix_leftarm_B.Receive_o1_k[53] << 8) +
                     vmr_rwd_fix_leftarm_B.Receive_o1_k[52]) + ((uint32_T)
      vmr_rwd_fix_leftarm_B.Receive_o1_k[54] << 16)) + ((uint32_T)
      vmr_rwd_fix_leftarm_B.Receive_o1_k[55] << 24);

    /* '<S61>:1:13' */
    /* '<S61>:1:14' */
    /* '<S61>:1:65' */
    /* '<S61>:1:66' */
    /* '<S61>:1:67' */
    /* '<S61>:1:68' */
    /* '<S61>:1:69' */
    /* '<S61>:1:13' */
    /* '<S61>:1:14' */
    /* '<S61>:1:65' */
    /* '<S61>:1:66' */
    /* '<S61>:1:67' */
    /* '<S61>:1:68' */
    /* '<S61>:1:69' */
    /* '<S61>:1:13' */
    /* convert the time stamp to a time in seconds. */
    /* '<S61>:1:18' */
    vmr_rwd_fix_leftarm_B.timer_c = (real_T)timers_idx_0 / 750000.0;

    /* all voltages are between -2.5 to 2.5, here we are normalizeing what we read to zero. */
    /* '<S61>:1:21' */
    /* '<S61>:1:22' */
    /*  only the first 8 channels matter. */
    /* using the calibration matrix we convert the to the forces and moments */
    /* '<S61>:1:25' */
    for (i_0 = 0; i_0 < 8; i_0++) {
      values_0 = voltages[i_0];
      values_0 -= vmr_rwd_fix_leftarm_P.zero_voltage_Value;
      voltages_0[i_0] = values_0 / vmr_rwd_fix_leftarm_P.gain_Value;
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      values[i_0] = 0.0;
      for (i = 0; i < 8; i++) {
        values_0 = values[i_0];
        values_0 += vmr_rwd_fix_leftarm_P.calibration_matrix1_Value[6 * i + i_0]
          * voltages_0[i];
        values[i_0] = values_0;
      }
    }

    /* '<S61>:1:26' */
    vmr_rwd_fix_leftarm_B.forces_g[0] = values[0];
    vmr_rwd_fix_leftarm_B.forces_g[1] = values[1];
    vmr_rwd_fix_leftarm_B.forces_g[2] = values[2];

    /* '<S61>:1:27' */
    vmr_rwd_fix_leftarm_B.moments_p[0] = values[3];
    vmr_rwd_fix_leftarm_B.moments_p[1] = values[4];
    vmr_rwd_fix_leftarm_B.moments_p[2] = values[5];

    /* reverse the Z force to get it into global coordinates. */
    /* '<S61>:1:30' */
    vmr_rwd_fix_leftarm_B.forces_g[2] = -values[2];

    /* considering the positions of the cables push all measures into global coordinates */
    if (vmr_rwd_fix_leftarm_P.orientation1_Value == 0.0) {
      /* '<S61>:1:33' */
      /* '<S61>:1:34' */
      vmr_rwd_fix_leftarm_B.forces_g[1] = -values[1];

      /* '<S61>:1:35' */
      vmr_rwd_fix_leftarm_B.moments_p[1] = -values[4];
    } else if (vmr_rwd_fix_leftarm_P.orientation1_Value == 90.0) {
      /* '<S61>:1:36' */
      /* '<S61>:1:37' */
      /* '<S61>:1:38' */
      vmr_rwd_fix_leftarm_B.forces_g[1] = -values[0];

      /* '<S61>:1:39' */
      vmr_rwd_fix_leftarm_B.forces_g[0] = -values[1];

      /* '<S61>:1:41' */
      /* '<S61>:1:42' */
      vmr_rwd_fix_leftarm_B.moments_p[1] = -values[3];

      /* '<S61>:1:43' */
      vmr_rwd_fix_leftarm_B.moments_p[0] = -values[4];
    } else if (vmr_rwd_fix_leftarm_P.orientation1_Value == 180.0) {
      /* '<S61>:1:44' */
      /* '<S61>:1:45' */
      vmr_rwd_fix_leftarm_B.forces_g[0] = -values[0];

      /* '<S61>:1:46' */
      vmr_rwd_fix_leftarm_B.moments_p[0] = -values[3];
    } else {
      if (vmr_rwd_fix_leftarm_P.orientation1_Value == 270.0) {
        /* '<S61>:1:47' */
        /* '<S61>:1:48' */
        /* '<S61>:1:49' */
        vmr_rwd_fix_leftarm_B.forces_g[1] = values[0];

        /* '<S61>:1:50' */
        vmr_rwd_fix_leftarm_B.forces_g[0] = values[1];

        /* '<S61>:1:52' */
        /* '<S61>:1:53' */
        vmr_rwd_fix_leftarm_B.moments_p[1] = values[3];

        /* '<S61>:1:54' */
        vmr_rwd_fix_leftarm_B.moments_p[0] = values[4];
      }
    }

    /* End of MATLAB Function: '<S57>/parse packet 1' */
    srUpdateBC(vmr_rwd_fix_leftarm_DW.plate1_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S32>/plate1' */

  /* Outputs for Enabled SubSystem: '<S32>/plate2' incorporates:
   *  EnablePort: '<S58>/Enable'
   */
  /* Constant: '<S32>/enable_plate2' */
  if (vmr_rwd_fix_leftarm_P.enable_plate2_Value > 0.0) {
    /* Level2 S-Function Block: '<S58>/Receive1' (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[5];
      sfcnOutputs(rts, 1);
    }

    /* MATLAB Function: '<S58>/parse packet 1' incorporates:
     *  Constant: '<S32>/ain_offset2'
     *  Constant: '<S32>/ain_slope2'
     *  Constant: '<S32>/calibration_matrix2'
     *  Constant: '<S32>/gain'
     *  Constant: '<S32>/orientation2'
     *  Constant: '<S32>/zero_voltage'
     */
    /* MATLAB Function 'DataLogging/Poll Force Plates/plate2/parse packet 1': '<S62>:1' */
    /* This pulls voltages and timer infomation from the packet we got back from */
    /* the lab jack. */
    /* '<S62>:1:5' */
    /* '<S62>:1:6' */
    /* '<S62>:1:8' */
    for (i_0 = 0; i_0 < 8; i_0++) {
      voltages[i_0] = 0.0;

      /* '<S62>:1:8' */
      /* '<S62>:1:9' */
      i = (i_0 << 1) + 12;

      /* '<S62>:1:59' */
      /* '<S62>:1:60' */
      /* '<S62>:1:61' */
      /* '<S62>:1:10' */
      /* '<S62>:1:73' */
      voltages[i_0] = (real_T)(((uint32_T)vmr_rwd_fix_leftarm_B.Receive1_o1[i +
        1] << 8) + vmr_rwd_fix_leftarm_B.Receive1_o1[i]) *
        vmr_rwd_fix_leftarm_P.ain_slope2_Value +
        vmr_rwd_fix_leftarm_P.ain_offset2_Value;

      /* '<S62>:1:8' */
    }

    /* '<S62>:1:13' */
    /* '<S62>:1:14' */
    /* '<S62>:1:65' */
    /* '<S62>:1:66' */
    /* '<S62>:1:67' */
    /* '<S62>:1:68' */
    /* '<S62>:1:69' */
    timers_idx_0 = ((((uint32_T)vmr_rwd_fix_leftarm_B.Receive1_o1[53] << 8) +
                     vmr_rwd_fix_leftarm_B.Receive1_o1[52]) + ((uint32_T)
      vmr_rwd_fix_leftarm_B.Receive1_o1[54] << 16)) + ((uint32_T)
      vmr_rwd_fix_leftarm_B.Receive1_o1[55] << 24);

    /* '<S62>:1:13' */
    /* '<S62>:1:14' */
    /* '<S62>:1:65' */
    /* '<S62>:1:66' */
    /* '<S62>:1:67' */
    /* '<S62>:1:68' */
    /* '<S62>:1:69' */
    /* '<S62>:1:13' */
    /* '<S62>:1:14' */
    /* '<S62>:1:65' */
    /* '<S62>:1:66' */
    /* '<S62>:1:67' */
    /* '<S62>:1:68' */
    /* '<S62>:1:69' */
    /* '<S62>:1:13' */
    /* convert the time stamp to a time in seconds. */
    /* '<S62>:1:18' */
    vmr_rwd_fix_leftarm_B.timer = (real_T)timers_idx_0 / 750000.0;

    /* all voltages are between -2.5 to 2.5, here we are normalizeing what we read to zero. */
    /* '<S62>:1:21' */
    /* '<S62>:1:22' */
    /*  only the first 8 channels matter. */
    /* using the calibration matrix we convert the to the forces and moments */
    /* '<S62>:1:25' */
    for (i_0 = 0; i_0 < 8; i_0++) {
      values_0 = voltages[i_0];
      values_0 -= vmr_rwd_fix_leftarm_P.zero_voltage_Value;
      voltages_0[i_0] = values_0 / vmr_rwd_fix_leftarm_P.gain_Value;
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      values[i_0] = 0.0;
      for (i = 0; i < 8; i++) {
        values_0 = values[i_0];
        values_0 += vmr_rwd_fix_leftarm_P.calibration_matrix2_Value[6 * i + i_0]
          * voltages_0[i];
        values[i_0] = values_0;
      }
    }

    /* '<S62>:1:26' */
    vmr_rwd_fix_leftarm_B.forces[0] = values[0];
    vmr_rwd_fix_leftarm_B.forces[1] = values[1];
    vmr_rwd_fix_leftarm_B.forces[2] = values[2];

    /* '<S62>:1:27' */
    vmr_rwd_fix_leftarm_B.moments[0] = values[3];
    vmr_rwd_fix_leftarm_B.moments[1] = values[4];
    vmr_rwd_fix_leftarm_B.moments[2] = values[5];

    /* reverse the Z force to get it into global coordinates. */
    /* '<S62>:1:30' */
    vmr_rwd_fix_leftarm_B.forces[2] = -values[2];

    /* considering the positions of the cables push all measures into global coordinates */
    if (vmr_rwd_fix_leftarm_P.orientation2_Value == 0.0) {
      /* '<S62>:1:33' */
      /* '<S62>:1:34' */
      vmr_rwd_fix_leftarm_B.forces[1] = -values[1];

      /* '<S62>:1:35' */
      vmr_rwd_fix_leftarm_B.moments[1] = -values[4];
    } else if (vmr_rwd_fix_leftarm_P.orientation2_Value == 90.0) {
      /* '<S62>:1:36' */
      /* '<S62>:1:37' */
      /* '<S62>:1:38' */
      vmr_rwd_fix_leftarm_B.forces[1] = -values[0];

      /* '<S62>:1:39' */
      vmr_rwd_fix_leftarm_B.forces[0] = -values[1];

      /* '<S62>:1:41' */
      /* '<S62>:1:42' */
      vmr_rwd_fix_leftarm_B.moments[1] = -values[3];

      /* '<S62>:1:43' */
      vmr_rwd_fix_leftarm_B.moments[0] = -values[4];
    } else if (vmr_rwd_fix_leftarm_P.orientation2_Value == 180.0) {
      /* '<S62>:1:44' */
      /* '<S62>:1:45' */
      vmr_rwd_fix_leftarm_B.forces[0] = -values[0];

      /* '<S62>:1:46' */
      vmr_rwd_fix_leftarm_B.moments[0] = -values[3];
    } else {
      if (vmr_rwd_fix_leftarm_P.orientation2_Value == 270.0) {
        /* '<S62>:1:47' */
        /* '<S62>:1:48' */
        /* '<S62>:1:49' */
        vmr_rwd_fix_leftarm_B.forces[1] = values[0];

        /* '<S62>:1:50' */
        vmr_rwd_fix_leftarm_B.forces[0] = values[1];

        /* '<S62>:1:52' */
        /* '<S62>:1:53' */
        vmr_rwd_fix_leftarm_B.moments[1] = values[3];

        /* '<S62>:1:54' */
        vmr_rwd_fix_leftarm_B.moments[0] = values[4];
      }
    }

    /* End of MATLAB Function: '<S58>/parse packet 1' */
    srUpdateBC(vmr_rwd_fix_leftarm_DW.plate2_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S32>/plate2' */

  /* DataTypeConversion: '<S32>/Convert19' */
  vmr_rwd_fix_leftarm_B.Convert19_e[0] = vmr_rwd_fix_leftarm_B.forces_g[0];
  vmr_rwd_fix_leftarm_B.Convert19_e[1] = vmr_rwd_fix_leftarm_B.forces_g[1];
  vmr_rwd_fix_leftarm_B.Convert19_e[2] = vmr_rwd_fix_leftarm_B.forces_g[2];
  vmr_rwd_fix_leftarm_B.Convert19_e[3] = vmr_rwd_fix_leftarm_B.moments_p[0];
  vmr_rwd_fix_leftarm_B.Convert19_e[4] = vmr_rwd_fix_leftarm_B.moments_p[1];
  vmr_rwd_fix_leftarm_B.Convert19_e[5] = vmr_rwd_fix_leftarm_B.moments_p[2];
  vmr_rwd_fix_leftarm_B.Convert19_e[6] = vmr_rwd_fix_leftarm_B.timer_c;
  vmr_rwd_fix_leftarm_B.Convert19_e[7] = vmr_rwd_fix_leftarm_B.forces[0];
  vmr_rwd_fix_leftarm_B.Convert19_e[8] = vmr_rwd_fix_leftarm_B.forces[1];
  vmr_rwd_fix_leftarm_B.Convert19_e[9] = vmr_rwd_fix_leftarm_B.forces[2];
  vmr_rwd_fix_leftarm_B.Convert19_e[10] = vmr_rwd_fix_leftarm_B.moments[0];
  vmr_rwd_fix_leftarm_B.Convert19_e[11] = vmr_rwd_fix_leftarm_B.moments[1];
  vmr_rwd_fix_leftarm_B.Convert19_e[12] = vmr_rwd_fix_leftarm_B.moments[2];
  vmr_rwd_fix_leftarm_B.Convert19_e[13] = vmr_rwd_fix_leftarm_B.timer;
}

/* Output and update for atomic system: '<S2>/Poll Force Plates' */
void vmr_rwd_fix_leftarm_PollForcePlatesTID2(void)
{
  /* Outputs for Enabled SubSystem: '<S32>/send poll 1' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.RateTransition_g > 0.0) {
    /* Level2 S-Function Block: '<S59>/Send' (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[6];
      sfcnOutputs(rts, 2);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.sendpoll1_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S32>/send poll 1' */

  /* Outputs for Enabled SubSystem: '<S32>/send poll 2' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.RateTransition1_h > 0.0) {
    /* Level2 S-Function Block: '<S60>/Send1' (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[7];
      sfcnOutputs(rts, 2);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.sendpoll2_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S32>/send poll 2' */
}

/* Termination for atomic system: '<S2>/Poll Force Plates' */
void vmr_rwd_fix_leftarm_PollForcePlates_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S32>/send poll 1' */

  /* Level2 S-Function Block: '<S59>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S32>/send poll 1' */

  /* Terminate for Enabled SubSystem: '<S32>/send poll 2' */

  /* Level2 S-Function Block: '<S60>/Send1' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S32>/send poll 2' */

  /* Terminate for Enabled SubSystem: '<S32>/plate1' */

  /* Level2 S-Function Block: '<S57>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S32>/plate1' */

  /* Terminate for Enabled SubSystem: '<S32>/plate2' */

  /* Level2 S-Function Block: '<S58>/Receive1' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S32>/plate2' */
}
