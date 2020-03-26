/*
 * Code generation for system system '<S2>/Network Transfer Subsystem'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_NetworkTransferSubsystem.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Named constants for Chart: '<S31>/Send Control Machine' */
#define vmr_rwd_fix_leftarm_FULL_PACKET_SIZE (410.0)
#define vmr_rwd_fix_leftarm_IN_AddPacketToQueue ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Fix     ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Fixed   ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Idle    ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_NoFix   ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_ResetUDPPort ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_SendPacket ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_KINEMATIC_LEN (400.0)
#define vmr_rwd_fix_leftarm_event_e_clk_n (2)
#define vmr_rwd_fix_leftarm_event_e_data_ready_strobe (1)
#define vmr_rwd_fix_leftarm_event_e_fast_clk (3)
#define vmr_rwd_fix_leftarm_event_e_reset_UDP (0)

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_TrackQueueSize(void);
static void vmr_rwd_fix_leftarm_SendControlMachine(void);
static void vmr_rwd_fix_leftarm_chartstep_c8_General(void);

/* Initial conditions for function-call system: '<S31>/UDP Send Subsystem' */
void vmr_rwd_fix_leftarm_UDPSendSubsystem_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S53>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_h5 =
    vmr_rwd_fix_leftarm_P.Output_InitialCondition;
}

/* Start for function-call system: '<S31>/UDP Send Subsystem' */
void vmr_rwd_fix_leftarm_UDPSendSubsystem_Start(void)
{
  /* Level2 S-Function Block: '<S50>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* VirtualOutportStart for Outport: '<S50>/total_packets_sent' */
  vmr_rwd_fix_leftarm_B.Output_n = vmr_rwd_fix_leftarm_P.total_packets_sent_Y0;
}

/* Output and update for function-call system: '<S31>/UDP Send Subsystem' */
void vmr_rwd_fix_leftarm_UDPSendSubsystem(void)
{
  /* UnitDelay: '<S53>/Output' */
  vmr_rwd_fix_leftarm_B.Output_n = vmr_rwd_fix_leftarm_DW.Output_DSTATE_h5;

  /* Sum: '<S55>/FixPt Sum1' incorporates:
   *  Constant: '<S55>/FixPt Constant'
   */
  vmr_rwd_fix_leftarm_B.FixPtSum1_eh = vmr_rwd_fix_leftarm_B.Output_n +
    vmr_rwd_fix_leftarm_P.FixPtConstant_Value;

  /* Switch: '<S56>/FixPt Switch' incorporates:
   *  Constant: '<S56>/Constant'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtSum1_eh >
      vmr_rwd_fix_leftarm_P.WrapToZero_Threshold) {
    vmr_rwd_fix_leftarm_B.FixPtSwitch_dp =
      vmr_rwd_fix_leftarm_P.Constant_Value_f;
  } else {
    vmr_rwd_fix_leftarm_B.FixPtSwitch_dp = vmr_rwd_fix_leftarm_B.FixPtSum1_eh;
  }

  /* End of Switch: '<S56>/FixPt Switch' */

  /* Pack: <S50>/Pack */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Pack_i[0],
                &vmr_rwd_fix_leftarm_B.data_out[0],
                1640);

  /* Level2 S-Function Block: '<S50>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[1];
    sfcnOutputs(rts, 1);
  }

  /* Update for UnitDelay: '<S53>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE_h5 = vmr_rwd_fix_leftarm_B.FixPtSwitch_dp;
  vmr_rwd_fix_leftarm_DW.UDPSendSubsystem_SubsysRanBC = 4;
}

/* Termination for function-call system: '<S31>/UDP Send Subsystem' */
void vmr_rwd_fix_leftarm_UDPSendSubsystem_Term(void)
{
  /* Level2 S-Function Block: '<S50>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/* Function for Chart: '<S31>/Send Control Machine' */
static void vmr_rwd_fix_leftarm_TrackQueueSize(void)
{
  /* Graphical Function 'TrackQueueSize': '<S48>:8' */
  /* Transition: '<S48>:21' */
  if (vmr_rwd_fix_leftarm_DW.queue_head < vmr_rwd_fix_leftarm_DW.queue_tail) {
    /* Transition: '<S48>:22' */
    vmr_rwd_fix_leftarm_B.queue_size_e = ((real_T)
      vmr_rwd_fix_leftarm_DW.queue_head + vmr_rwd_fix_leftarm_DW.packet_queue_sz)
      - (real_T)vmr_rwd_fix_leftarm_DW.queue_tail;
  } else {
    if (vmr_rwd_fix_leftarm_DW.queue_head >= vmr_rwd_fix_leftarm_DW.queue_tail)
    {
      /* Transition: '<S48>:23' */
      vmr_rwd_fix_leftarm_B.queue_size_e = vmr_rwd_fix_leftarm_DW.queue_head -
        vmr_rwd_fix_leftarm_DW.queue_tail;
    }
  }
}

/* Function for Chart: '<S31>/Send Control Machine' */
static void vmr_rwd_fix_leftarm_SendControlMachine(void)
{
  /* During 'SendControlMachine': '<S48>:4' */
  switch (vmr_rwd_fix_leftarm_DW.is_SendControlMachine) {
   case vmr_rwd_fix_leftarm_IN_Fixed:
    /* During 'Fixed': '<S48>:375' */
    if (vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
        vmr_rwd_fix_leftarm_event_e_reset_UDP) {
      /* Transition: '<S48>:393' */
      /* Exit Internal 'Fixed': '<S48>:375' */
      vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
      vmr_rwd_fix_leftarm_DW.is_SendControlMachine =
        vmr_rwd_fix_leftarm_IN_ResetUDPPort;
      vmr_rwd_fix_leftarm_DW.temporalCounter_i3 = 0U;

      /* Entry 'ResetUDPPort': '<S48>:289' */
      vmr_rwd_fix_leftarm_B.resetUDP = 1.0;
    } else {
      switch (vmr_rwd_fix_leftarm_DW.is_Fixed) {
       case vmr_rwd_fix_leftarm_IN_Idle:
        /* During 'Idle': '<S48>:391' */
        if ((vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
             vmr_rwd_fix_leftarm_event_e_fast_clk) &&
            (vmr_rwd_fix_leftarm_DW.queue_head !=
             vmr_rwd_fix_leftarm_DW.queue_tail)) {
          /* Transition: '<S48>:386' */
          vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_SendPacket;
          vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy = 0U;

          /* Entry 'SendPacket': '<S48>:392' */
          buildOutputPacket(vmr_rwd_fix_leftarm_B.data_out,
                            &vmr_rwd_fix_leftarm_DW.packet_queue[410 * (int32_T)
                            vmr_rwd_fix_leftarm_DW.queue_tail],
                            vmr_rwd_fix_leftarm_FULL_PACKET_SIZE,
                            vmr_rwd_fix_leftarm_B.queue_size_e,
                            vmr_rwd_fix_leftarm_B.total_timeouts,
                            vmr_rwd_fix_leftarm_B.DataTypeConversion2_k);
          vmr_rwd_fix_leftarm_DW.outstanding_packet_index =
            vmr_rwd_fix_leftarm_B.data_out[2];

          /* Outputs for Function Call SubSystem: '<S31>/UDP Send Subsystem' */

          /* Event: '<S48>:66' */
          vmr_rwd_fix_leftarm_UDPSendSubsystem();

          /* End of Outputs for SubSystem: '<S31>/UDP Send Subsystem' */
        }
        break;

       case vmr_rwd_fix_leftarm_IN_SendPacket:
        /* During 'SendPacket': '<S48>:392' */
        if ((vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
             vmr_rwd_fix_leftarm_event_e_fast_clk) &&
            (vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy >= 10)) {
          /* Transition: '<S48>:388' */
          /* Transition: '<S48>:390' */
          if (vmr_rwd_fix_leftarm_B.Convert16 == 0.0) {
            /* Transition: '<S48>:406' */
            vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_SendPacket;
            vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy = 0U;

            /* Entry 'SendPacket': '<S48>:392' */
            buildOutputPacket(vmr_rwd_fix_leftarm_B.data_out,
                              &vmr_rwd_fix_leftarm_DW.packet_queue[410 *
                              (int32_T)vmr_rwd_fix_leftarm_DW.queue_tail],
                              vmr_rwd_fix_leftarm_FULL_PACKET_SIZE,
                              vmr_rwd_fix_leftarm_B.queue_size_e,
                              vmr_rwd_fix_leftarm_B.total_timeouts,
                              vmr_rwd_fix_leftarm_B.DataTypeConversion2_k);
            vmr_rwd_fix_leftarm_DW.outstanding_packet_index =
              vmr_rwd_fix_leftarm_B.data_out[2];

            /* Outputs for Function Call SubSystem: '<S31>/UDP Send Subsystem' */

            /* Event: '<S48>:66' */
            vmr_rwd_fix_leftarm_UDPSendSubsystem();

            /* End of Outputs for SubSystem: '<S31>/UDP Send Subsystem' */
          } else {
            /* Transition: '<S48>:407' */
            /* Transition: '<S48>:389' */
            vmr_rwd_fix_leftarm_B.total_timeouts++;
            vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_SendPacket;
            vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy = 0U;

            /* Entry 'SendPacket': '<S48>:392' */
            buildOutputPacket(vmr_rwd_fix_leftarm_B.data_out,
                              &vmr_rwd_fix_leftarm_DW.packet_queue[410 *
                              (int32_T)vmr_rwd_fix_leftarm_DW.queue_tail],
                              vmr_rwd_fix_leftarm_FULL_PACKET_SIZE,
                              vmr_rwd_fix_leftarm_B.queue_size_e,
                              vmr_rwd_fix_leftarm_B.total_timeouts,
                              vmr_rwd_fix_leftarm_B.DataTypeConversion2_k);
            vmr_rwd_fix_leftarm_DW.outstanding_packet_index =
              vmr_rwd_fix_leftarm_B.data_out[2];

            /* Outputs for Function Call SubSystem: '<S31>/UDP Send Subsystem' */

            /* Event: '<S48>:66' */
            vmr_rwd_fix_leftarm_UDPSendSubsystem();

            /* End of Outputs for SubSystem: '<S31>/UDP Send Subsystem' */
          }
        } else {
          /* Transition: '<S48>:387' */
          if ((vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
               vmr_rwd_fix_leftarm_event_e_fast_clk) &&
              (vmr_rwd_fix_leftarm_B.DataTypeConversion_cb ==
               vmr_rwd_fix_leftarm_DW.outstanding_packet_index)) {
            /* Transition: '<S48>:385' */
            vmr_rwd_fix_leftarm_DW.queue_tail = (uint32_T)fmod
              (vmr_rwd_fix_leftarm_DW.queue_tail + 1U,
               vmr_rwd_fix_leftarm_DW.packet_queue_sz);

            /* Transition: '<S48>:383' */
            if (vmr_rwd_fix_leftarm_DW.queue_head ==
                vmr_rwd_fix_leftarm_DW.queue_tail) {
              /* Transition: '<S48>:382' */
              vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_Idle;

              /* Entry 'Idle': '<S48>:391' */
              /*  Wait to acquire a new packet to send. */
            } else {
              if (vmr_rwd_fix_leftarm_DW.queue_head !=
                  vmr_rwd_fix_leftarm_DW.queue_tail) {
                /* Transition: '<S48>:384' */
                vmr_rwd_fix_leftarm_DW.is_Fixed =
                  vmr_rwd_fix_leftarm_IN_SendPacket;
                vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy = 0U;

                /* Entry 'SendPacket': '<S48>:392' */
                buildOutputPacket(vmr_rwd_fix_leftarm_B.data_out,
                                  &vmr_rwd_fix_leftarm_DW.packet_queue[410 *
                                  (int32_T)vmr_rwd_fix_leftarm_DW.queue_tail],
                                  vmr_rwd_fix_leftarm_FULL_PACKET_SIZE,
                                  vmr_rwd_fix_leftarm_B.queue_size_e,
                                  vmr_rwd_fix_leftarm_B.total_timeouts,
                                  vmr_rwd_fix_leftarm_B.DataTypeConversion2_k);
                vmr_rwd_fix_leftarm_DW.outstanding_packet_index =
                  vmr_rwd_fix_leftarm_B.data_out[2];

                /* Outputs for Function Call SubSystem: '<S31>/UDP Send Subsystem' */

                /* Event: '<S48>:66' */
                vmr_rwd_fix_leftarm_UDPSendSubsystem();

                /* End of Outputs for SubSystem: '<S31>/UDP Send Subsystem' */
              }
            }
          }
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        vmr_rwd_fix_leftarm_DW.is_Fixed =
          vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
        break;
      }
    }
    break;

   case vmr_rwd_fix_leftarm_IN_ResetUDPPort:
    /* During 'ResetUDPPort': '<S48>:289' */
    if ((vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
         vmr_rwd_fix_leftarm_event_e_fast_clk) &&
        (vmr_rwd_fix_leftarm_DW.temporalCounter_i3 >= 2)) {
      /* Transition: '<S48>:395' */
      vmr_rwd_fix_leftarm_DW.is_SendControlMachine =
        vmr_rwd_fix_leftarm_IN_Fixed;

      /* Entry 'Fixed': '<S48>:375' */
      vmr_rwd_fix_leftarm_B.resetUDP = 0.0;

      /* Entry Internal 'Fixed': '<S48>:375' */
      /* Transition: '<S48>:381' */
      if (vmr_rwd_fix_leftarm_DW.is_Fixed != vmr_rwd_fix_leftarm_IN_Idle) {
        vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_Idle;

        /* Entry 'Idle': '<S48>:391' */
        /*  Wait to acquire a new packet to send. */
      }
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    vmr_rwd_fix_leftarm_DW.is_SendControlMachine =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
    break;
  }
}

/* Function for Chart: '<S31>/Send Control Machine' */
static void vmr_rwd_fix_leftarm_chartstep_c8_General(void)
{
  int32_T b_previousEvent;

  /* During: DataLogging/Network Transfer Subsystem/Send Control Machine */
  if (vmr_rwd_fix_leftarm_DW.is_active_c8_General == 0U) {
    /* Entry: DataLogging/Network Transfer Subsystem/Send Control Machine */
    vmr_rwd_fix_leftarm_DW.is_active_c8_General = 1U;

    /* Entry Internal: DataLogging/Network Transfer Subsystem/Send Control Machine */
    vmr_rwd_fix_leftarm_DW.is_active_UpdatePacketQueue = 1U;

    /* Entry Internal 'UpdatePacketQueue': '<S48>:7' */
    /* Transition: '<S48>:20' */
    vmr_rwd_fix_leftarm_DW.is_UpdatePacketQueue =
      vmr_rwd_fix_leftarm_IN_AddPacketToQueue;
    vmr_rwd_fix_leftarm_DW.is_active_SendControlMachine = 1U;

    /* Entry Internal 'SendControlMachine': '<S48>:4' */
    /* Transition: '<S48>:236' */
    if (vmr_rwd_fix_leftarm_DW.is_SendControlMachine !=
        vmr_rwd_fix_leftarm_IN_Fixed) {
      vmr_rwd_fix_leftarm_DW.is_SendControlMachine =
        vmr_rwd_fix_leftarm_IN_Fixed;

      /* Entry 'Fixed': '<S48>:375' */
      vmr_rwd_fix_leftarm_B.resetUDP = 0.0;
    }

    /* Entry Internal 'Fixed': '<S48>:375' */
    /* Transition: '<S48>:381' */
    if (vmr_rwd_fix_leftarm_DW.is_Fixed != vmr_rwd_fix_leftarm_IN_Idle) {
      vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_Idle;

      /* Entry 'Idle': '<S48>:391' */
      /*  Wait to acquire a new packet to send. */
    }

    vmr_rwd_fix_leftarm_DW.is_active_FixMonitor = 1U;

    /* Entry Internal 'FixMonitor': '<S48>:183' */
    /* Transition: '<S48>:189' */
    vmr_rwd_fix_leftarm_DW.is_FixMonitor = vmr_rwd_fix_leftarm_IN_NoFix;
  } else {
    if (!((vmr_rwd_fix_leftarm_DW.is_active_UpdatePacketQueue == 0U) ||
          (vmr_rwd_fix_leftarm_DW.is_UpdatePacketQueue !=
           vmr_rwd_fix_leftarm_IN_AddPacketToQueue))) {
      /* During 'UpdatePacketQueue': '<S48>:7' */
      /* During 'AddPacketToQueue': '<S48>:6' */
      /* Transition: '<S48>:181' */
      if (vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
          vmr_rwd_fix_leftarm_event_e_data_ready_strobe) {
        /* Transition: '<S48>:180' */
        /*  Prepend the data of the new packet in the queue with the packet's index,
           a.k.a. "tracking number". */
        vmr_rwd_fix_leftarm_DW.packet_index++;
        vmr_rwd_fix_leftarm_DW.packet_queue[2 + 410 * (int32_T)
          vmr_rwd_fix_leftarm_DW.queue_head] = (real32_T)
          vmr_rwd_fix_leftarm_DW.packet_index;

        /* identify the packet version */
        vmr_rwd_fix_leftarm_DW.packet_queue[1 + 410 * (int32_T)
          vmr_rwd_fix_leftarm_DW.queue_head] = -12.0F;

        /*  Copy the new packet into the packet_queue. //CopyInput(); */
        recordPacket
          (&vmr_rwd_fix_leftarm_DW.packet_queue[vmr_rwd_fix_leftarm_DW.j + 410 *
           (int32_T)vmr_rwd_fix_leftarm_DW.queue_head],
           vmr_rwd_fix_leftarm_FULL_PACKET_SIZE,
           vmr_rwd_fix_leftarm_B.TmpRTBAtSendControlMachineInport1,
           vmr_rwd_fix_leftarm_KINEMATIC_LEN);

        /*  Increment the head pointer of the packet_queue for the next packet. */
        vmr_rwd_fix_leftarm_DW.queue_head = (uint32_T)fmod
          (vmr_rwd_fix_leftarm_DW.queue_head + 1U,
           vmr_rwd_fix_leftarm_DW.packet_queue_sz);
        if (vmr_rwd_fix_leftarm_DW.packet_index ==
            vmr_rwd_fix_leftarm_B.max_packet_id) {
          /* Transition: '<S48>:37' */
          vmr_rwd_fix_leftarm_DW.packet_index = 0U;
        } else {
          /* Transition: '<S48>:36' */
        }

        if (vmr_rwd_fix_leftarm_DW.queue_head ==
            vmr_rwd_fix_leftarm_DW.queue_tail) {
          /* Transition: '<S48>:32' */
          vmr_rwd_fix_leftarm_DW.queue_tail = (uint32_T)fmod
            (vmr_rwd_fix_leftarm_DW.queue_tail + 1U,
             vmr_rwd_fix_leftarm_DW.packet_queue_sz);
        } else {
          /* Transition: '<S48>:33' */
        }

        /* Transition: '<S48>:31' */
        vmr_rwd_fix_leftarm_TrackQueueSize();
        vmr_rwd_fix_leftarm_DW.is_UpdatePacketQueue =
          vmr_rwd_fix_leftarm_IN_AddPacketToQueue;
      } else {
        /* Transition: '<S48>:182' */
        vmr_rwd_fix_leftarm_DW.is_UpdatePacketQueue =
          vmr_rwd_fix_leftarm_IN_AddPacketToQueue;
      }
    }

    if (vmr_rwd_fix_leftarm_DW.is_active_SendControlMachine != 0U) {
      vmr_rwd_fix_leftarm_SendControlMachine();
    }

    if (vmr_rwd_fix_leftarm_DW.is_active_FixMonitor != 0U) {
      /* During 'FixMonitor': '<S48>:183' */
      switch (vmr_rwd_fix_leftarm_DW.is_FixMonitor) {
       case vmr_rwd_fix_leftarm_IN_Fix:
        /* During 'Fix': '<S48>:186' */
        if ((vmr_rwd_fix_leftarm_DW.sfEvent_mm ==
             vmr_rwd_fix_leftarm_event_e_fast_clk) &&
            (vmr_rwd_fix_leftarm_DW.temporalCounter_i2 >= 1000)) {
          /* Transition: '<S48>:298' */
          vmr_rwd_fix_leftarm_DW.is_FixMonitor = vmr_rwd_fix_leftarm_IN_NoFix;
        }
        break;

       case vmr_rwd_fix_leftarm_IN_NoFix:
        /* During 'NoFix': '<S48>:184' */
        if (vmr_rwd_fix_leftarm_B.queue_size_e > 2500.0) {
          /* Transition: '<S48>:187' */
          vmr_rwd_fix_leftarm_DW.is_FixMonitor = vmr_rwd_fix_leftarm_IN_Fix;
          vmr_rwd_fix_leftarm_DW.temporalCounter_i2 = 0U;

          /* Entry 'Fix': '<S48>:186' */
          b_previousEvent = vmr_rwd_fix_leftarm_DW.sfEvent_mm;
          vmr_rwd_fix_leftarm_DW.sfEvent_mm =
            vmr_rwd_fix_leftarm_event_e_reset_UDP;
          if (vmr_rwd_fix_leftarm_DW.is_active_SendControlMachine != 0U) {
            vmr_rwd_fix_leftarm_SendControlMachine();
          }

          vmr_rwd_fix_leftarm_DW.sfEvent_mm = b_previousEvent;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        vmr_rwd_fix_leftarm_DW.is_FixMonitor =
          vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
        break;
      }
    }
  }
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  boolean_T y_0;
  boolean_T y_1;
  if (u1 == 0.0) {
    y = u0;
  } else {
    y_0 = ((!rtIsNaN(u0)) && (!rtIsInf(u0)));
    y_1 = ((!rtIsNaN(u1)) && (!rtIsInf(u1)));
    if (!(y_0 && y_1)) {
      y = (rtNaN);
    } else {
      tmp = u0 / u1;
      if (u1 <= floor(u1)) {
        y = u0 - floor(tmp) * u1;
      } else if (fabs(tmp - rt_roundd_snf(tmp)) <= DBL_EPSILON * fabs(tmp)) {
        y = 0.0;
      } else {
        y = (tmp - floor(tmp)) * u1;
      }
    }
  }

  return y;
}

/* Initial conditions for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Init(void)
{
  int32_T i;

  /* InitializeConditions for Atomic SubSystem: '<S31>/Data Packing Subsystem' */
  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
  vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE_a =
    vmr_rwd_fix_leftarm_P.UnitDelay_InitialCondition;
  for (i = 0; i < 108; i++) {
    /* InitializeConditions for Memory: '<S47>/t-2' */
    vmr_rwd_fix_leftarm_DW.t2_PreviousInput[i] = vmr_rwd_fix_leftarm_P.t2_X0;

    /* InitializeConditions for Memory: '<S47>/t-1' */
    vmr_rwd_fix_leftarm_DW.t1_PreviousInput[i] = vmr_rwd_fix_leftarm_P.t1_X0;
  }

  /* End of InitializeConditions for SubSystem: '<S31>/Data Packing Subsystem' */

  /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */
  for (i = 0; i < 400; i++) {
    vmr_rwd_fix_leftarm_DW.TmpRTBAtSendControlMachineInport1_Buffer0[i] =
      vmr_rwd_fix_leftarm_P.TmpRTBAtSendControlMachineInport1_X0;
  }

  /* End of InitializeConditions for RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */

  /* InitializeConditions for Memory: '<S49>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_a =
    vmr_rwd_fix_leftarm_P.Memory2_X0;

  /* InitializeConditions for RateTransition: '<S49>/Rate Transition2' */
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[0] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[1] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[2] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;

  /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtforce strobeOutport1' */
  vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeOutport1_Buffer0 =
    vmr_rwd_fix_leftarm_P.TmpRTBAtforcestrobeOutport1_X0;
  vmr_rwd_fix_leftarm_DW.is_active_FixMonitor = 0U;
  vmr_rwd_fix_leftarm_DW.is_FixMonitor =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
  vmr_rwd_fix_leftarm_DW.temporalCounter_i2 = 0U;
  vmr_rwd_fix_leftarm_DW.is_active_SendControlMachine = 0U;
  vmr_rwd_fix_leftarm_DW.is_SendControlMachine =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
  vmr_rwd_fix_leftarm_DW.is_Fixed = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
  vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy = 0U;
  vmr_rwd_fix_leftarm_DW.temporalCounter_i3 = 0U;
  vmr_rwd_fix_leftarm_DW.is_active_UpdatePacketQueue = 0U;
  vmr_rwd_fix_leftarm_DW.is_UpdatePacketQueue =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_j;
  vmr_rwd_fix_leftarm_DW.is_active_c8_General = 0U;
  vmr_rwd_fix_leftarm_DW.queue_tail = 0U;
  vmr_rwd_fix_leftarm_DW.packet_index = 0U;
  for (i = 0; i < 20500000; i++) {
    vmr_rwd_fix_leftarm_DW.packet_queue[i] = 0.0F;
  }

  vmr_rwd_fix_leftarm_DW.packet_queue_sz = 50000.0;
  vmr_rwd_fix_leftarm_DW.i = 0;
  vmr_rwd_fix_leftarm_DW.j = 0;
  vmr_rwd_fix_leftarm_DW.outstanding_packet_index = 0.0;
  vmr_rwd_fix_leftarm_DW.queue_head = 0U;
  vmr_rwd_fix_leftarm_B.resetUDP = 0.0;
  for (i = 0; i < 410; i++) {
    vmr_rwd_fix_leftarm_B.data_out[i] = 0.0F;
  }

  vmr_rwd_fix_leftarm_B.queue_size_e = 0.0;
  vmr_rwd_fix_leftarm_B.total_timeouts = 0.0;

  /* InitializeConditions for Chart: '<S31>/Send Control Machine' incorporates:
   *  InitializeConditions for SubSystem: '<S31>/UDP Send Subsystem'
   */
  vmr_rwd_fix_leftarm_UDPSendSubsystem_Init();

  /* InitializeConditions for RateTransition: '<S31>/TmpRTBAtforce strobeInport1' */
  vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeInport1_Buffer0 =
    vmr_rwd_fix_leftarm_P.TmpRTBAtforcestrobeInport1_X0;

  /* InitializeConditions for MATLAB Function: '<S31>/force strobe' */
  vmr_rwd_fix_leftarm_DW.counter = 0.0;
}

/* Start for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Start(void)
{
  int32_T i;

  /* Start for Atomic SubSystem: '<S31>/Data Packing Subsystem' */
  /* Start for Width: '<S47>/Width' */
  vmr_rwd_fix_leftarm_B.Width = 108.0;

  /* End of Start for SubSystem: '<S31>/Data Packing Subsystem' */

  /* Start for RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */
  for (i = 0; i < 400; i++) {
    vmr_rwd_fix_leftarm_B.TmpRTBAtSendControlMachineInport1[i] =
      vmr_rwd_fix_leftarm_P.TmpRTBAtSendControlMachineInport1_X0;
  }

  /* End of Start for RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */

  /* Start for RateTransition: '<S49>/Rate Transition2' */
  vmr_rwd_fix_leftarm_B.RateTransition2_js[0] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;
  vmr_rwd_fix_leftarm_B.RateTransition2_js[1] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;
  vmr_rwd_fix_leftarm_B.RateTransition2_js[2] =
    vmr_rwd_fix_leftarm_P.RateTransition2_X0;

  /* Level2 S-Function Block: '<S49>/UDP Receive' (BKINUDPReceiveRead) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S31>/max_packet_id' */
  vmr_rwd_fix_leftarm_B.max_packet_id =
    vmr_rwd_fix_leftarm_P.max_packet_id_Value;

  /* Start for RateTransition: '<S31>/TmpRTBAtforce strobeOutport1' */
  vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeOutport1 =
    vmr_rwd_fix_leftarm_P.TmpRTBAtforcestrobeOutport1_X0;

  /* Start for DiscretePulseGenerator: '<S31>/Task Clock' */
  vmr_rwd_fix_leftarm_DW.clockTickCounter_e = 0;

  /* Start for Chart: '<S31>/Send Control Machine' incorporates:
   *  Start for SubSystem: '<S31>/UDP Send Subsystem'
   */
  vmr_rwd_fix_leftarm_UDPSendSubsystem_Start();

  /* Start for RateTransition: '<S31>/TmpRTBAtforce strobeInport1' */
  vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeInport1 =
    vmr_rwd_fix_leftarm_P.TmpRTBAtforcestrobeInport1_X0;

  /* Level2 S-Function Block: '<S49>/UDP Receive Port Reset' (BKINUDPReceiveInit) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Outputs for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID0(void)
{
  boolean_T tmp;
  ZCEventType zcEvent_idx_0;
  ZCEventType zcEvent_idx_1;
  ZCEventType zcEvent_idx_2;
  real32_T tmp_0;

  /* DataTypeConversion: '<S31>/Data Type Conversion2' incorporates:
   *  Constant: '<S31>/runID'
   */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_k = (real32_T)
    vmr_rwd_fix_leftarm_P.runID_Value;

  /* RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    memcpy(&vmr_rwd_fix_leftarm_B.TmpRTBAtSendControlMachineInport1[0],
           &vmr_rwd_fix_leftarm_DW.TmpRTBAtSendControlMachineInport1_Buffer0[0],
           400U * sizeof(real32_T));
  }

  /* End of RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */

  /* Memory: '<S49>/Memory2' */
  vmr_rwd_fix_leftarm_B.trigger = vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_a;

  /* RateTransition: '<S49>/Rate Transition2' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition2_js[0] =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_js[1] =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[1];
    vmr_rwd_fix_leftarm_B.RateTransition2_js[2] =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[2];
  }

  /* End of RateTransition: '<S49>/Rate Transition2' */

  /* Level2 S-Function Block: '<S49>/UDP Receive' (BKINUDPReceiveRead) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[2];
    sfcnOutputs(rts, 1);
  }

  /* Unpack: <S49>/Unpack */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack, &vmr_rwd_fix_leftarm_B.Data[1],
                4);

  /* DataTypeConversion: '<S49>/Data Type Conversion' */
  tmp_0 = (real32_T)floor(vmr_rwd_fix_leftarm_B.Unpack);
  if (rtIsNaNF(tmp_0) || rtIsInfF(tmp_0)) {
    tmp_0 = 0.0F;
  } else {
    tmp_0 = (real32_T)fmod(tmp_0, 4.2949673E+9F);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion_cb = tmp_0 < 0.0F ? (uint32_T)
    -(int32_T)(uint32_T)-tmp_0 : (uint32_T)tmp_0;

  /* End of DataTypeConversion: '<S49>/Data Type Conversion' */

  /* Constant: '<S31>/max_packet_id' */
  vmr_rwd_fix_leftarm_B.max_packet_id =
    vmr_rwd_fix_leftarm_P.max_packet_id_Value;

  /* RateTransition: '<S31>/TmpRTBAtforce strobeOutport1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_2) {
    vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeOutport1 =
      vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeOutport1_Buffer0;
  }

  /* End of RateTransition: '<S31>/TmpRTBAtforce strobeOutport1' */

  /* DiscretePulseGenerator: '<S31>/Task Clock' */
  vmr_rwd_fix_leftarm_B.TaskClock_a = (vmr_rwd_fix_leftarm_DW.clockTickCounter_e
    < vmr_rwd_fix_leftarm_P.TaskClock_Duty) &&
    (vmr_rwd_fix_leftarm_DW.clockTickCounter_e >= 0) ?
    vmr_rwd_fix_leftarm_P.TaskClock_Amp : 0.0;
  if (vmr_rwd_fix_leftarm_DW.clockTickCounter_e >=
      vmr_rwd_fix_leftarm_P.TaskClock_Period - 1.0) {
    vmr_rwd_fix_leftarm_DW.clockTickCounter_e = 0;
  } else {
    vmr_rwd_fix_leftarm_DW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S31>/Task Clock' */

  /* Chart: '<S31>/Send Control Machine' incorporates:
   *  TriggerPort: '<S48>/ input events '
   */
  zcEvent_idx_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
    &vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[0],
    (vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeOutport1));
  zcEvent_idx_1 = rt_ZCFcn(ANY_ZERO_CROSSING,
    &vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[1],
    (vmr_rwd_fix_leftarm_B.Convert17));
  zcEvent_idx_2 = rt_ZCFcn(ANY_ZERO_CROSSING,
    &vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[2],
    (vmr_rwd_fix_leftarm_B.TaskClock_a));
  tmp = (zcEvent_idx_0 != NO_ZCEVENT);
  tmp = (tmp || (zcEvent_idx_1 != NO_ZCEVENT));
  tmp = (tmp || (zcEvent_idx_2 != NO_ZCEVENT));
  if (tmp) {
    vmr_rwd_fix_leftarm_B.inputevents_o[0] = (int8_T)zcEvent_idx_0;
    vmr_rwd_fix_leftarm_B.inputevents_o[1] = (int8_T)zcEvent_idx_1;
    vmr_rwd_fix_leftarm_B.inputevents_o[2] = (int8_T)zcEvent_idx_2;

    /* Gateway: DataLogging/Network Transfer Subsystem/Send Control Machine */
    if (vmr_rwd_fix_leftarm_B.inputevents_o[0U] == 1) {
      /* Event: '<S48>:67' */
      vmr_rwd_fix_leftarm_DW.sfEvent_mm =
        vmr_rwd_fix_leftarm_event_e_data_ready_strobe;
      vmr_rwd_fix_leftarm_chartstep_c8_General();
    }

    if (vmr_rwd_fix_leftarm_B.inputevents_o[1U] == 1) {
      if (vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy < 15U) {
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1_oy++;
      }

      if (vmr_rwd_fix_leftarm_DW.temporalCounter_i2 < 1023U) {
        vmr_rwd_fix_leftarm_DW.temporalCounter_i2++;
      }

      /* Event: '<S48>:208' */
      vmr_rwd_fix_leftarm_DW.sfEvent_mm = vmr_rwd_fix_leftarm_event_e_clk_n;
      vmr_rwd_fix_leftarm_chartstep_c8_General();
    }

    if (vmr_rwd_fix_leftarm_B.inputevents_o[2U] != 0) {
      if (vmr_rwd_fix_leftarm_DW.temporalCounter_i3 < 3U) {
        vmr_rwd_fix_leftarm_DW.temporalCounter_i3++;
      }

      /* Event: '<S48>:258' */
      vmr_rwd_fix_leftarm_DW.sfEvent_mm = vmr_rwd_fix_leftarm_event_e_fast_clk;
      vmr_rwd_fix_leftarm_chartstep_c8_General();
    }

    vmr_rwd_fix_leftarm_DW.SendControlMachine_SubsysRanBC = 4;
  }

  /* DataTypeConversion: '<S31>/Queue Size' */
  vmr_rwd_fix_leftarm_B.queue_size = vmr_rwd_fix_leftarm_B.queue_size_e;

  /* DataTypeConversion: '<S31>/Total Timeouts' */
  vmr_rwd_fix_leftarm_B.timeouts = vmr_rwd_fix_leftarm_B.total_timeouts;

  /* RateTransition: '<S49>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RqstUDPReset = vmr_rwd_fix_leftarm_B.UDPReceive_o6;
  }

  /* End of RateTransition: '<S49>/Rate Transition1' */
}

/* Outputs for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID2(void)
{
  /* RateTransition: '<S31>/TmpRTBAtforce strobeInport1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID2_3) {
    vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeInport1 =
      vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeInport1_Buffer0;
  }

  /* End of RateTransition: '<S31>/TmpRTBAtforce strobeInport1' */

  /* MATLAB Function: '<S31>/force strobe' */
  /* MATLAB Function 'DataLogging/Network Transfer Subsystem/force strobe': '<S51>:1' */
  /*  DEX-3234 - it turns out that if we try to send 1 kinematic packet of data */
  /*  per UDP packet then the "strobe" from the packet creating sub-system just */
  /*  stays high - i.e. always send data. The trouble is that signal is used by */
  /*  the Sending state flow diagram and in order to be used as a proper */
  /*  stateflow input event the strobe has to change. This code runs at double */
  /*  the speed of the packet creating sub system. That allows us to force the */
  /*  strobe to zero on alternate steps so that we can properly signal on a true */
  /*  strobe going to 1. */
  /* '<S51>:1:17' */
  vmr_rwd_fix_leftarm_DW.counter++;
  if (vmr_rwd_fix_leftarm_DW.counter - floor(vmr_rwd_fix_leftarm_DW.counter /
       2.0) * 2.0 == 0.0) {
    /* '<S51>:1:19' */
    /* '<S51>:1:20' */
    vmr_rwd_fix_leftarm_B.strobe_out = 0.0;

    /* '<S51>:1:21' */
    vmr_rwd_fix_leftarm_DW.counter = 0.0;
  } else {
    /* '<S51>:1:23' */
    vmr_rwd_fix_leftarm_B.strobe_out =
      vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeInport1;
  }

  /* End of MATLAB Function: '<S31>/force strobe' */
}

/* Outputs for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID3(void)
{
  int32_T i;
  real_T u0;
  real_T u1;

  /* Outputs for Atomic SubSystem: '<S31>/Data Packing Subsystem' */
  /* UnitDelay: '<S52>/Unit Delay' */
  vmr_rwd_fix_leftarm_B.UnitDelay_h = vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE_a;

  /* Sum: '<S52>/Sum' incorporates:
   *  Constant: '<S52>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Sum_j = vmr_rwd_fix_leftarm_B.UnitDelay_h +
    vmr_rwd_fix_leftarm_P.Constant_Value;

  /* DataTypeConversion: '<S47>/Data Type Conversion' */
  for (i = 0; i < 16; i++) {
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[i] = (real32_T)
      vmr_rwd_fix_leftarm_B.RateTransition1_i[i];
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[16] = (real32_T)
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[17] = (real32_T)
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[1];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[18] = (real32_T)
    vmr_rwd_fix_leftarm_B.KinarmDataWidth;
  for (i = 0; i < 68; i++) {
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[i + 19] = (real32_T)
      vmr_rwd_fix_leftarm_B.ArmKinematics[i];
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[87] = (real32_T)
    vmr_rwd_fix_leftarm_B.RateTransition_c;
  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[88] = (real32_T)
    vmr_rwd_fix_leftarm_B.RateTransition1_c[0];
  vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[89] = (real32_T)
    vmr_rwd_fix_leftarm_B.RateTransition1_c[1];
  for (i = 0; i < 18; i++) {
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[i + 90] = (real32_T)
      vmr_rwd_fix_leftarm_B.RateTransition_d[i];
  }

  /* End of DataTypeConversion: '<S47>/Data Type Conversion' */

  /* Fcn: '<S47>/Ideal Frames Per Packet' */
  vmr_rwd_fix_leftarm_B.IdealFramesPerPacket = floor(400.0 /
    vmr_rwd_fix_leftarm_B.Width);

  /* MinMax: '<S47>/MinMax' incorporates:
   *  Constant: '<S47>/Max Frames Per Packet'
   */
  u0 = vmr_rwd_fix_leftarm_P.MaxFramesPerPacket_Value;
  u1 = vmr_rwd_fix_leftarm_B.IdealFramesPerPacket;
  if ((u0 <= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  vmr_rwd_fix_leftarm_B.MinMax_k = u1;

  /* End of MinMax: '<S47>/MinMax' */

  /* Math: '<S47>/Math Function' */
  vmr_rwd_fix_leftarm_B.MathFunction = rt_modd_snf(vmr_rwd_fix_leftarm_B.Sum_j,
    vmr_rwd_fix_leftarm_B.MinMax_k);

  /* Sum: '<S47>/Subtract' incorporates:
   *  Constant: '<S47>/Max Frames Per Packet'
   */
  vmr_rwd_fix_leftarm_B.Subtract_o =
    vmr_rwd_fix_leftarm_P.MaxFramesPerPacket_Value -
    vmr_rwd_fix_leftarm_B.MinMax_k;

  /* Product: '<S47>/Product' */
  vmr_rwd_fix_leftarm_B.Product_l = vmr_rwd_fix_leftarm_B.Width *
    vmr_rwd_fix_leftarm_B.Subtract_o;

  /* RelationalOperator: '<S47>/Relational Operator' incorporates:
   *  Constant: '<S47>/Constant1'
   */
  vmr_rwd_fix_leftarm_B.RelationalOperator =
    (vmr_rwd_fix_leftarm_P.Constant1_Value == vmr_rwd_fix_leftarm_B.MathFunction);
  for (i = 0; i < 108; i++) {
    /* Memory: '<S47>/t-2' */
    vmr_rwd_fix_leftarm_B.t2[i] = vmr_rwd_fix_leftarm_DW.t2_PreviousInput[i];

    /* Memory: '<S47>/t-1' */
    vmr_rwd_fix_leftarm_B.t1[i] = vmr_rwd_fix_leftarm_DW.t1_PreviousInput[i];

    /* SignalConversion: '<S47>/TmpSignal ConversionAtSelectorInport1' */
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[i] =
      vmr_rwd_fix_leftarm_B.t2[i];
  }

  /* SignalConversion: '<S47>/TmpSignal ConversionAtSelectorInport1' incorporates:
   *  Constant: '<S47>/Constant'
   */
  memcpy(&vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[108],
         &vmr_rwd_fix_leftarm_B.t1[0], 108U * sizeof(real32_T));
  memcpy(&vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[216],
         &vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[0], 108U * sizeof(real32_T));
  memcpy(&vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[324],
         &vmr_rwd_fix_leftarm_P.Constant_Value_g[0], 400U * sizeof(real32_T));

  /* Selector: '<S47>/Selector' */
  memcpy(&vmr_rwd_fix_leftarm_B.Selector_eu[0],
         &vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[(int32_T)
         vmr_rwd_fix_leftarm_B.Product_l], 400U * sizeof(real32_T));

  /* End of Outputs for SubSystem: '<S31>/Data Packing Subsystem' */

  /* Level2 S-Function Block: '<S49>/UDP Receive Port Reset' (BKINUDPReceiveInit) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[3];
    sfcnOutputs(rts, 3);
  }
}

/* Update for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID0(void)
{
  /* Update for Memory: '<S49>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_a =
    vmr_rwd_fix_leftarm_B.resetUDP;
}

/* Update for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID2(void)
{
  /* Update for RateTransition: '<S31>/TmpRTBAtforce strobeOutport1' */
  vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeOutport1_Buffer0 =
    vmr_rwd_fix_leftarm_B.strobe_out;
}

/* Update for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID3(void)
{
  int32_T i;

  /* Update for Atomic SubSystem: '<S31>/Data Packing Subsystem' */
  /* Update for UnitDelay: '<S52>/Unit Delay' */
  vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE_a = vmr_rwd_fix_leftarm_B.Sum_j;
  for (i = 0; i < 108; i++) {
    /* Update for Memory: '<S47>/t-2' */
    vmr_rwd_fix_leftarm_DW.t2_PreviousInput[i] = vmr_rwd_fix_leftarm_B.t1[i];

    /* Update for Memory: '<S47>/t-1' */
    vmr_rwd_fix_leftarm_DW.t1_PreviousInput[i] =
      vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[i];
  }

  /* End of Update for SubSystem: '<S31>/Data Packing Subsystem' */

  /* Update for RateTransition: '<S31>/TmpRTBAtSend Control MachineInport1' */
  memcpy(&vmr_rwd_fix_leftarm_DW.TmpRTBAtSendControlMachineInport1_Buffer0[0],
         &vmr_rwd_fix_leftarm_B.Selector_eu[0], 400U * sizeof(real32_T));

  /* Update for RateTransition: '<S49>/Rate Transition2' */
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[0] =
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[0];
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[1] =
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[1];
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[2] =
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[2];

  /* Update for RateTransition: '<S31>/TmpRTBAtforce strobeInport1' */
  vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeInport1_Buffer0 =
    vmr_rwd_fix_leftarm_B.RelationalOperator;
}

/* Termination for atomic system: '<S2>/Network Transfer Subsystem' */
void vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Term(void)
{
  /* Level2 S-Function Block: '<S49>/UDP Receive' (BKINUDPReceiveRead) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for Chart: '<S31>/Send Control Machine' incorporates:
   *  Terminate for SubSystem: '<S31>/UDP Send Subsystem'
   */
  vmr_rwd_fix_leftarm_UDPSendSubsystem_Term();/* Level2 S-Function Block: '<S49>/UDP Receive Port Reset' (BKINUDPReceiveInit) */

  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}
