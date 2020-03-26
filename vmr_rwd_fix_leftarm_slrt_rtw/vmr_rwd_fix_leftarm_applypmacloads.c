/*
 * Code generation for system system '<S36>/apply pmac loads'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_applypmacloads.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Start for enable system: '<S36>/apply pmac loads' */
void vmr_rwd_fix_leftarm_applypmacloads_Start(void)
{
  /* Level2 S-Function Block: '<S251>/S-Function1' (mcc_apply_loads) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[39];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Output and update for enable system: '<S36>/apply pmac loads' */
void vmr_rwd_fix_leftarm_applypmacloads(void)
{
  /* Outputs for Enabled SubSystem: '<S36>/apply pmac loads' incorporates:
   *  EnablePort: '<S251>/Enable'
   */
  if (vmr_rwd_fix_leftarm_B.Compare_l) {
    /* Product: '<S251>/Product' */
    vmr_rwd_fix_leftarm_B.Product_m[0] = vmr_rwd_fix_leftarm_B.AddTorques[0] *
      vmr_rwd_fix_leftarm_B.Memory1_p;
    vmr_rwd_fix_leftarm_B.Product_m[1] = vmr_rwd_fix_leftarm_B.AddTorques[1] *
      vmr_rwd_fix_leftarm_B.Memory1_p;
    vmr_rwd_fix_leftarm_B.Product_m[2] = vmr_rwd_fix_leftarm_B.AddTorques[2] *
      vmr_rwd_fix_leftarm_B.Memory1_p;
    vmr_rwd_fix_leftarm_B.Product_m[3] = vmr_rwd_fix_leftarm_B.AddTorques[3] *
      vmr_rwd_fix_leftarm_B.Memory1_p;

    /* DataTypeConversion: '<S251>/Data Type Conversion6' */
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[0] = (real32_T)
      vmr_rwd_fix_leftarm_B.Product_m[0];
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[1] = (real32_T)
      vmr_rwd_fix_leftarm_B.Product_m[1];
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[2] = (real32_T)
      vmr_rwd_fix_leftarm_B.Product_m[2];
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[3] = (real32_T)
      vmr_rwd_fix_leftarm_B.Product_m[3];

    /* DataTypeConversion: '<S251>/Data Type Conversion' */
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[0] = (real32_T)
      vmr_rwd_fix_leftarm_B.ArmOrientation;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[1] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1orientation;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[2] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2Orientation;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[3] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1GearRatio;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[4] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2GearRatio;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[5] = (real32_T)
      vmr_rwd_fix_leftarm_B.torqueconstant;

    /* DataTypeConversion: '<S251>/Data Type Conversion1' */
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[0] = (real32_T)
      vmr_rwd_fix_leftarm_B.ArmOrientation_c;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[1] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1orientation_f;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[2] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2Orientation_c;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[3] = (real32_T)
      vmr_rwd_fix_leftarm_B.M1GearRatio_h;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[4] = (real32_T)
      vmr_rwd_fix_leftarm_B.M2GearRatio_d;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[5] = (real32_T)
      vmr_rwd_fix_leftarm_B.torqueconstant_m;

    /* Level2 S-Function Block: '<S251>/S-Function1' (mcc_apply_loads) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[39];
      sfcnOutputs(rts, 1);
    }

    srUpdateBC(vmr_rwd_fix_leftarm_DW.applypmacloads_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S36>/apply pmac loads' */
}

/* Termination for enable system: '<S36>/apply pmac loads' */
void vmr_rwd_fix_leftarm_applypmacloads_Term(void)
{
  /* Level2 S-Function Block: '<S251>/S-Function1' (mcc_apply_loads) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[39];
    sfcnTerminate(rts);
  }
}
