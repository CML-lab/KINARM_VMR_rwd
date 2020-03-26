/*
 * Code generation for system system '<S2>/Keep alive'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_Keepalive.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Start for atomic system: '<S2>/Keep alive' */
void vmr_rwd_fix_leftarm_Keepalive_Start(void)
{
  /* Level2 S-Function Block: '<S30>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S2>/Keep alive' */
void vmr_rwd_fix_leftarm_Keepalive(void)
{
  /* Pack: <S30>/Pack */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack_g[0],
                &vmr_rwd_fix_leftarm_P.const_Value[0],
                40);

  /* Level2 S-Function Block: '<S30>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[0];
    sfcnOutputs(rts, 5);
  }
}

/* Termination for atomic system: '<S2>/Keep alive' */
void vmr_rwd_fix_leftarm_Keepalive_Term(void)
{
  /* Level2 S-Function Block: '<S30>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}
