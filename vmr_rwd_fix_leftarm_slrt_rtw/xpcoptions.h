#ifndef __vmr_rwd_fix_leftarm_XPCOPTIONS_H___
#define __vmr_rwd_fix_leftarm_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "vmr_rwd_fix_leftarm.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_vmr_rwd_fix_leftarm_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            512
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0

/* Change all stepsize using the newBaseRateStepSize */
void vmr_rwd_fix_leftarm_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_vmr_rwd_fix_leftarm_T *const vmr_rwd_fix_leftarm_M)
{
  real_T ratio = newBaseRateStepSize / 0.00025;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  vmr_rwd_fix_leftarm_M->Timing.stepSize0 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize0 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize1 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize1 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize2 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize2 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize3 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize3 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize4 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize4 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize5 =
    vmr_rwd_fix_leftarm_M->Timing.stepSize5 * ratio;
  vmr_rwd_fix_leftarm_M->Timing.stepSize =
    vmr_rwd_fix_leftarm_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  vmr_rwd_fix_leftarm_ChangeStepSize(stepSize, vmr_rwd_fix_leftarm_M);
}

#endif                                 /* __vmr_rwd_fix_leftarm_XPCOPTIONS_H___ */
