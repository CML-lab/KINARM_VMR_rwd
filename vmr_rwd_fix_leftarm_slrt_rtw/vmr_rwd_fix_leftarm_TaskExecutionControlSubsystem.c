/*
 * Code generation for system system '<S5>/Task Execution Control Subsystem'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Named constants for Chart: '<S268>/Task Execution Control Machine' */
#define vmr_rwd_fix_leftarm_IN_Finished ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_InTrial ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_Paused  ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_PausedBetweenBlocks ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_PausedBetweenTrials ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_Ready   ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_RepeatTrialLater ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_RepeatTrialNow ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_Running ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_SkipTrial ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_event_e_clk_b (0)
#define vmr_rwd_fix_leftarm_event_e_trial_over (1)

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_Ready(void);
static void vmr_rwd_fix_leftarm_chartstep_c42_General(void);

/* Function for Chart: '<S268>/Task Execution Control Machine' */
static void vmr_rwd_fix_leftarm_Ready(void)
{
  int32_T exitg1;
  boolean_T guard1;

  /* During 'Ready': '<S275>:10' */
  if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
    /* Transition: '<S275>:40' */
    srand(vmr_rwd_fix_leftarm_B.Convert18);

    /* Transition: '<S275>:28' */
    do {
      exitg1 = 0;

      /* Transition: '<S275>:55' */
      /*  If specified, use task protocol block sequence. */
      guard1 = false;
      if (vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag == 1.0) {
        /* Transition: '<S275>:50' */
        vmr_rwd_fix_leftarm_DW.i_l = 1U;
        vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
          vmr_rwd_fix_leftarm_B.BlockSequence[1000];

        /* Transition: '<S275>:27' */
        while ((vmr_rwd_fix_leftarm_DW.temp <=
                vmr_rwd_fix_leftarm_B.block_in_set) &&
               (vmr_rwd_fix_leftarm_DW.i_l < vmr_rwd_fix_leftarm_B.Width2)) {
          /* Transition: '<S275>:25' */
          vmr_rwd_fix_leftarm_DW.i_l++;
          vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
            (vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
             vmr_rwd_fix_leftarm_DW.i_l + 999] + (real_T)
             vmr_rwd_fix_leftarm_DW.temp);
        }

        /* Transition: '<S275>:12' */
        /*  Finish if using a task protocol block sequence
           and that sequence has finished. */
        if ((vmr_rwd_fix_leftarm_DW.i_l == vmr_rwd_fix_leftarm_B.Width2) &&
            (vmr_rwd_fix_leftarm_DW.temp <= vmr_rwd_fix_leftarm_B.block_in_set))
        {
          /* Transition: '<S275>:42' */
          vmr_rwd_fix_leftarm_DW.is_c42_General =
            vmr_rwd_fix_leftarm_IN_Finished;

          /* Entry 'Finished': '<S275>:4' */
          vmr_rwd_fix_leftarm_B.task_status = 4U;
          exitg1 = 1;
        } else {
          /* Transition: '<S275>:32' */
          /*  Make next task protocol block index the next block. */
          vmr_rwd_fix_leftarm_B.block = (uint32_T)
            vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
            (vmr_rwd_fix_leftarm_DW.i_l - 1U)];

          /* Transition: '<S275>:13' */
          guard1 = true;
        }
      } else {
        /*  Finish if using a task program-specified block sequence
           and the block index input from the program is invalid. */
        if ((vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag == 0.0) &&
            ((vmr_rwd_fix_leftarm_B.NextBlock == 0.0) ||
             (vmr_rwd_fix_leftarm_B.NextBlock > vmr_rwd_fix_leftarm_B.Width_j)))
        {
          /* Transition: '<S275>:24' */
          vmr_rwd_fix_leftarm_DW.is_c42_General =
            vmr_rwd_fix_leftarm_IN_Finished;

          /* Entry 'Finished': '<S275>:4' */
          vmr_rwd_fix_leftarm_B.task_status = 4U;
          exitg1 = 1;
        } else {
          /* Transition: '<S275>:39' */
          /*  Make user-input block index the next block. */
          vmr_rwd_fix_leftarm_B.block = (uint32_T)
            vmr_rwd_fix_leftarm_B.NextBlock;

          /* Transition: '<S275>:45' */
          guard1 = true;
        }
      }

      if (guard1) {
        /* Transition: '<S275>:49' */
        vmr_rwd_fix_leftarm_B.block_in_set++;
        vmr_rwd_fix_leftarm_DW.i_l = 1U;
        vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
          (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)] = 0.0;

        /* Transition: '<S275>:36' */
        /*  Copy the trial list from the block definitions to the trial queue. */
        while ((vmr_rwd_fix_leftarm_DW.i_l <= vmr_rwd_fix_leftarm_B.Subtract_p) &&
               (vmr_rwd_fix_leftarm_B.block > 0U) &&
               (vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
                 vmr_rwd_fix_leftarm_DW.i_l + (int32_T)
                 vmr_rwd_fix_leftarm_B.block) - 1] != 0.0)) {
          /* Transition: '<S275>:16' */
          vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
            (vmr_rwd_fix_leftarm_DW.i_l - 1U)] =
            vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
            vmr_rwd_fix_leftarm_DW.i_l + (int32_T)vmr_rwd_fix_leftarm_B.block) -
            1];
          vmr_rwd_fix_leftarm_DW.i_l++;
        }

        /* Transition: '<S275>:41' */
        vmr_rwd_fix_leftarm_DW.trial_queue_length = vmr_rwd_fix_leftarm_DW.i_l -
          1U;
        if (vmr_rwd_fix_leftarm_DW.trial_queue_length > 0U) {
          /* Transition: '<S275>:66' */
          vmr_rwd_fix_leftarm_B.trial_in_block = 0U;

          /* Transition: '<S275>:17' */
          vmr_rwd_fix_leftarm_DW.trial_in_mini_block = 0U;

          /*  Randomize the block if the definition specifies to do so. */
          if (vmr_rwd_fix_leftarm_B.BlockDefinitions[(int32_T)
              (vmr_rwd_fix_leftarm_B.block - 1U)] == 1.0) {
            /* Transition: '<S275>:18' */
            vmr_rwd_fix_leftarm_DW.i_l = 1U;

            /* Transition: '<S275>:22' */
            /*  Perform list randomization "a la Knuth". */
            while (vmr_rwd_fix_leftarm_DW.i_l <=
                   vmr_rwd_fix_leftarm_DW.trial_queue_length) {
              /* Transition: '<S275>:23' */
              vmr_rwd_fix_leftarm_DW.swap_index = (uint32_T)(fmod(rand(),
                vmr_rwd_fix_leftarm_DW.trial_queue_length) + 1.0);
              vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
                vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                (vmr_rwd_fix_leftarm_DW.swap_index - 1U)];
              vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                (vmr_rwd_fix_leftarm_DW.swap_index - 1U)] =
                vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                (vmr_rwd_fix_leftarm_DW.i_l - 1U)];
              vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                (vmr_rwd_fix_leftarm_DW.i_l - 1U)] = vmr_rwd_fix_leftarm_DW.temp;
              vmr_rwd_fix_leftarm_DW.i_l++;
            }

            /* Transition: '<S275>:67' */
          } else {
            /* Transition: '<S275>:19' */
            /* Transition: '<S275>:20' */
          }

          /* Transition: '<S275>:21' */
          if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) {
            /* Transition: '<S275>:68' */
            /* Transition: '<S275>:69' */
            vmr_rwd_fix_leftarm_DW.is_c42_General =
              vmr_rwd_fix_leftarm_IN_PausedBetweenTrials;

            /* Entry 'PausedBetweenTrials': '<S275>:3' */
            vmr_rwd_fix_leftarm_B.task_status = 3U;
          } else {
            /* Transition: '<S275>:70' */
            vmr_rwd_fix_leftarm_DW.is_c42_General =
              vmr_rwd_fix_leftarm_IN_InTrial;

            /* Entry 'InTrial': '<S275>:8' */
            vmr_rwd_fix_leftarm_B.trial_in_set++;
            vmr_rwd_fix_leftarm_B.trial_in_block++;
            vmr_rwd_fix_leftarm_DW.trial_in_mini_block++;
            vmr_rwd_fix_leftarm_B.tp = (uint32_T)
              vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
              (vmr_rwd_fix_leftarm_DW.trial_in_mini_block - 1U)];

            /* Entry Internal 'InTrial': '<S275>:8' */
            /* Transition: '<S275>:47' */
            vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_Running;

            /* Entry 'Running': '<S275>:1' */
            vmr_rwd_fix_leftarm_B.task_status = 2U;
          }

          exitg1 = 1;
        } else {
          /* Transition: '<S275>:65' */
          /* Transition: '<S275>:26' */
          if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) {
            /* Transition: '<S275>:33' */
            vmr_rwd_fix_leftarm_DW.is_c42_General =
              vmr_rwd_fix_leftarm_IN_PausedBetweenBlocks;

            /* Entry 'PausedBetweenBlocks': '<S275>:5' */
            vmr_rwd_fix_leftarm_B.task_status = 3U;
            exitg1 = 1;
          } else {
            /* Transition: '<S275>:35' */
          }
        }
      }
    } while (exitg1 == 0);
  }
}

/* Function for Chart: '<S268>/Task Execution Control Machine' */
static void vmr_rwd_fix_leftarm_chartstep_c42_General(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  int32_T i;

  /* During: GUI Control/Task Execution Control Subsystem/Task Execution Control Machine */
  if (vmr_rwd_fix_leftarm_DW.is_active_c42_General == 0U) {
    /* Entry: GUI Control/Task Execution Control Subsystem/Task Execution Control Machine */
    vmr_rwd_fix_leftarm_DW.is_active_c42_General = 1U;

    /* Entry Internal: GUI Control/Task Execution Control Subsystem/Task Execution Control Machine */
    /* Transition: '<S275>:57' */
    vmr_rwd_fix_leftarm_DW.is_c42_General = vmr_rwd_fix_leftarm_IN_Ready;

    /* Entry 'Ready': '<S275>:10' */
    vmr_rwd_fix_leftarm_B.task_status = 1U;
    vmr_rwd_fix_leftarm_B.tp = 0U;
    vmr_rwd_fix_leftarm_B.block = 0U;
    vmr_rwd_fix_leftarm_B.trial_in_block = 0U;
    vmr_rwd_fix_leftarm_B.block_in_set = 0U;
    vmr_rwd_fix_leftarm_B.trial_in_set = 0U;
    vmr_rwd_fix_leftarm_DW.trial_in_mini_block = 0U;
    vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)(vmr_rwd_fix_leftarm_DW.EXAM -
      1.0)] = 0.0;
    vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)(vmr_rwd_fix_leftarm_DW.BLOCK -
      1.0)] = 0.0;
  } else {
    switch (vmr_rwd_fix_leftarm_DW.is_c42_General) {
     case vmr_rwd_fix_leftarm_IN_Finished:
      /* During 'Finished': '<S275>:4' */
      break;

     case vmr_rwd_fix_leftarm_IN_InTrial:
      /* During 'InTrial': '<S275>:8' */
      if (vmr_rwd_fix_leftarm_DW.sfEvent_m ==
          vmr_rwd_fix_leftarm_event_e_trial_over) {
        /* Transition: '<S275>:37' */
        /*  Add the current trial to the repeat list if the
           task is paused and the selected pause type
           is to repeat the trial later, i.e. at the end of
           the block. This occurs independent of the
           repeat trial flag. */
        if ((vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) &&
            (vmr_rwd_fix_leftarm_B.PauseType == 3.0)) {
          /* Transition: '<S275>:38' */
          /* Transition: '<S275>:59' */
          guard2 = true;
        } else {
          /* Transition: '<S275>:44' */
          /*  Also add the current trial to the repeat list
             if the repeat trial flag is set and the task is
             running (either normally or until pausing at
             the next trial). */
          if ((vmr_rwd_fix_leftarm_B.Product3 > 0.0) &&
              ((vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) ||
               (vmr_rwd_fix_leftarm_B.PauseType == 0.0))) {
            /* Transition: '<S275>:43' */
            vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
              (vmr_rwd_fix_leftarm_DW.EXAM - 1.0)]++;
            vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
              (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)]++;
            guard2 = true;
          } else {
            /* Transition: '<S275>:60' */
            vmr_rwd_fix_leftarm_B.repeat_last_trial = 0.0;
          }
        }

        if (guard2) {
          /* Transition: '<S275>:58' */
          /* Transition: '<S275>:46' */
          /*  Add the current trial to the repeat list. */
          vmr_rwd_fix_leftarm_DW.repeat_list_length++;
          vmr_rwd_fix_leftarm_DW.repeat_list[(int32_T)
            (vmr_rwd_fix_leftarm_DW.repeat_list_length - 1U)] =
            vmr_rwd_fix_leftarm_B.tp;
          vmr_rwd_fix_leftarm_B.repeat_last_trial = 1.0;
        }

        if (vmr_rwd_fix_leftarm_DW.trial_in_mini_block >=
            vmr_rwd_fix_leftarm_DW.trial_queue_length) {
          /* Transition: '<S275>:15' */
          /*  If there are any trials to repeat, assign them to the
             trial queue instead of advancing to the next block. */
          if (vmr_rwd_fix_leftarm_DW.repeat_list_length > 0U) {
            /* Transition: '<S275>:11' */
            vmr_rwd_fix_leftarm_DW.trial_queue_length =
              vmr_rwd_fix_leftarm_DW.repeat_list_length;
            for (i = 0; i < 499; i++) {
              vmr_rwd_fix_leftarm_DW.trial_queue[i] =
                vmr_rwd_fix_leftarm_DW.repeat_list[i];
              vmr_rwd_fix_leftarm_DW.repeat_list[i] = 0.0;
            }

            vmr_rwd_fix_leftarm_DW.repeat_list_length = 0U;
            guard1 = true;
          } else {
            /* Transition: '<S275>:64' */
            do {
              i = 0;

              /* Transition: '<S275>:26' */
              if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
                /* Transition: '<S275>:35' */
                /* Transition: '<S275>:55' */
                /*  If specified, use task protocol block sequence. */
                guard2 = false;
                if (vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag ==
                    1.0) {
                  /* Transition: '<S275>:50' */
                  vmr_rwd_fix_leftarm_DW.i_l = 1U;
                  vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
                    vmr_rwd_fix_leftarm_B.BlockSequence[1000];

                  /* Transition: '<S275>:27' */
                  while ((vmr_rwd_fix_leftarm_DW.temp <=
                          vmr_rwd_fix_leftarm_B.block_in_set) &&
                         (vmr_rwd_fix_leftarm_DW.i_l <
                          vmr_rwd_fix_leftarm_B.Width2)) {
                    /* Transition: '<S275>:25' */
                    vmr_rwd_fix_leftarm_DW.i_l++;
                    vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
                      (vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
                       vmr_rwd_fix_leftarm_DW.i_l + 999] + (real_T)
                       vmr_rwd_fix_leftarm_DW.temp);
                  }

                  /* Transition: '<S275>:12' */
                  /*  Finish if using a task protocol block sequence
                     and that sequence has finished. */
                  if ((vmr_rwd_fix_leftarm_DW.i_l ==
                       vmr_rwd_fix_leftarm_B.Width2) &&
                      (vmr_rwd_fix_leftarm_DW.temp <=
                       vmr_rwd_fix_leftarm_B.block_in_set)) {
                    /* Transition: '<S275>:42' */
                    /* Exit Internal 'InTrial': '<S275>:8' */
                    vmr_rwd_fix_leftarm_DW.is_InTrial =
                      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
                    vmr_rwd_fix_leftarm_DW.is_c42_General =
                      vmr_rwd_fix_leftarm_IN_Finished;

                    /* Entry 'Finished': '<S275>:4' */
                    vmr_rwd_fix_leftarm_B.task_status = 4U;
                    i = 1;
                  } else {
                    /* Transition: '<S275>:32' */
                    /*  Make next task protocol block index the next block. */
                    vmr_rwd_fix_leftarm_B.block = (uint32_T)
                      vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
                      (vmr_rwd_fix_leftarm_DW.i_l - 1U)];

                    /* Transition: '<S275>:13' */
                    guard2 = true;
                  }
                } else {
                  /*  Finish if using a task program-specified block sequence
                     and the block index input from the program is invalid. */
                  if ((vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag ==
                       0.0) && ((vmr_rwd_fix_leftarm_B.NextBlock == 0.0) ||
                                (vmr_rwd_fix_leftarm_B.NextBlock >
                                 vmr_rwd_fix_leftarm_B.Width_j))) {
                    /* Transition: '<S275>:24' */
                    /* Exit Internal 'InTrial': '<S275>:8' */
                    vmr_rwd_fix_leftarm_DW.is_InTrial =
                      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
                    vmr_rwd_fix_leftarm_DW.is_c42_General =
                      vmr_rwd_fix_leftarm_IN_Finished;

                    /* Entry 'Finished': '<S275>:4' */
                    vmr_rwd_fix_leftarm_B.task_status = 4U;
                    i = 1;
                  } else {
                    /* Transition: '<S275>:39' */
                    /*  Make user-input block index the next block. */
                    vmr_rwd_fix_leftarm_B.block = (uint32_T)
                      vmr_rwd_fix_leftarm_B.NextBlock;

                    /* Transition: '<S275>:45' */
                    guard2 = true;
                  }
                }

                if (guard2) {
                  /* Transition: '<S275>:49' */
                  vmr_rwd_fix_leftarm_B.block_in_set++;
                  vmr_rwd_fix_leftarm_DW.i_l = 1U;
                  vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)] = 0.0;

                  /* Transition: '<S275>:36' */
                  /*  Copy the trial list from the block definitions to the trial queue. */
                  while ((vmr_rwd_fix_leftarm_DW.i_l <=
                          vmr_rwd_fix_leftarm_B.Subtract_p) &&
                         (vmr_rwd_fix_leftarm_B.block > 0U) &&
                         (vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
                           vmr_rwd_fix_leftarm_DW.i_l + (int32_T)
                           vmr_rwd_fix_leftarm_B.block) - 1] != 0.0)) {
                    /* Transition: '<S275>:16' */
                    vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                      (vmr_rwd_fix_leftarm_DW.i_l - 1U)] =
                      vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
                      vmr_rwd_fix_leftarm_DW.i_l + (int32_T)
                      vmr_rwd_fix_leftarm_B.block) - 1];
                    vmr_rwd_fix_leftarm_DW.i_l++;
                  }

                  /* Transition: '<S275>:41' */
                  vmr_rwd_fix_leftarm_DW.trial_queue_length =
                    vmr_rwd_fix_leftarm_DW.i_l - 1U;
                  if (vmr_rwd_fix_leftarm_DW.trial_queue_length > 0U) {
                    /* Transition: '<S275>:66' */
                    vmr_rwd_fix_leftarm_B.trial_in_block = 0U;
                    guard1 = true;
                    i = 1;
                  } else {
                    /* Transition: '<S275>:65' */
                  }
                }
              } else {
                /* Transition: '<S275>:33' */
                /* Exit Internal 'InTrial': '<S275>:8' */
                vmr_rwd_fix_leftarm_DW.is_InTrial =
                  vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
                vmr_rwd_fix_leftarm_DW.is_c42_General =
                  vmr_rwd_fix_leftarm_IN_PausedBetweenBlocks;

                /* Entry 'PausedBetweenBlocks': '<S275>:5' */
                vmr_rwd_fix_leftarm_B.task_status = 3U;
                i = 1;
              }
            } while (i == 0);
          }
        } else {
          /* Transition: '<S275>:14' */
          if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
            /* Transition: '<S275>:29' */
            /* Exit Internal 'InTrial': '<S275>:8' */
            vmr_rwd_fix_leftarm_DW.is_c42_General =
              vmr_rwd_fix_leftarm_IN_InTrial;

            /* Entry 'InTrial': '<S275>:8' */
            vmr_rwd_fix_leftarm_B.trial_in_set++;
            vmr_rwd_fix_leftarm_B.trial_in_block++;
            vmr_rwd_fix_leftarm_DW.trial_in_mini_block++;
            vmr_rwd_fix_leftarm_B.tp = (uint32_T)
              vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
              (vmr_rwd_fix_leftarm_DW.trial_in_mini_block - 1U)];

            /* Entry Internal 'InTrial': '<S275>:8' */
            /* Transition: '<S275>:47' */
            vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_Running;

            /* Entry 'Running': '<S275>:1' */
            vmr_rwd_fix_leftarm_B.task_status = 2U;
          } else {
            /* Transition: '<S275>:30' */
            /* Exit Internal 'InTrial': '<S275>:8' */
            vmr_rwd_fix_leftarm_DW.is_InTrial =
              vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
            vmr_rwd_fix_leftarm_DW.is_c42_General =
              vmr_rwd_fix_leftarm_IN_PausedBetweenTrials;

            /* Entry 'PausedBetweenTrials': '<S275>:3' */
            vmr_rwd_fix_leftarm_B.task_status = 3U;
          }
        }
      } else {
        switch (vmr_rwd_fix_leftarm_DW.is_InTrial) {
         case vmr_rwd_fix_leftarm_IN_Paused:
          /* During 'Paused': '<S275>:6' */
          if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
            /* Transition: '<S275>:54' */
            vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_Running;

            /* Entry 'Running': '<S275>:1' */
            vmr_rwd_fix_leftarm_B.task_status = 2U;
          }
          break;

         case vmr_rwd_fix_leftarm_IN_RepeatTrialLater:
          /* During 'RepeatTrialLater': '<S275>:7' */
          break;

         case vmr_rwd_fix_leftarm_IN_RepeatTrialNow:
          /* During 'RepeatTrialNow': '<S275>:9' */
          break;

         case vmr_rwd_fix_leftarm_IN_Running:
          /* During 'Running': '<S275>:1' */
          if ((vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) &&
              (vmr_rwd_fix_leftarm_B.PauseType > 0.0)) {
            /* Transition: '<S275>:53' */
            if (vmr_rwd_fix_leftarm_B.PauseType == 1.0) {
              /* Transition: '<S275>:52' */
              vmr_rwd_fix_leftarm_DW.is_InTrial =
                vmr_rwd_fix_leftarm_IN_SkipTrial;

              /* Entry 'SkipTrial': '<S275>:2' */
              /* Event: '<S275>:132' */
              vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter++;
            } else {
              /* Transition: '<S275>:61' */
              if (vmr_rwd_fix_leftarm_B.PauseType == 2.0) {
                /* Transition: '<S275>:51' */
                vmr_rwd_fix_leftarm_DW.is_InTrial =
                  vmr_rwd_fix_leftarm_IN_RepeatTrialNow;

                /* Entry 'RepeatTrialNow': '<S275>:9' */
                vmr_rwd_fix_leftarm_DW.trial_in_mini_block--;
                vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
                  (vmr_rwd_fix_leftarm_DW.EXAM - 1.0)]++;
                vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
                  (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)]++;

                /* Event: '<S275>:132' */
                vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter++;
              } else {
                /* Transition: '<S275>:62' */
                if (vmr_rwd_fix_leftarm_B.PauseType == 3.0) {
                  /* Transition: '<S275>:48' */
                  vmr_rwd_fix_leftarm_DW.is_InTrial =
                    vmr_rwd_fix_leftarm_IN_RepeatTrialLater;

                  /* Entry 'RepeatTrialLater': '<S275>:7' */
                  vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.EXAM - 1.0)]++;
                  vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)]++;

                  /* Event: '<S275>:132' */
                  vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter++;
                } else {
                  /* Transition: '<S275>:63' */
                  /* Transition: '<S275>:56' */
                  vmr_rwd_fix_leftarm_DW.is_InTrial =
                    vmr_rwd_fix_leftarm_IN_Paused;

                  /* Entry 'Paused': '<S275>:6' */
                  vmr_rwd_fix_leftarm_B.task_status = 3U;
                }
              }
            }
          }
          break;

         default:
          /* During 'SkipTrial': '<S275>:2' */
          break;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_PausedBetweenBlocks:
      /* During 'PausedBetweenBlocks': '<S275>:5' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
        /* Transition: '<S275>:34' */
        /* Transition: '<S275>:28' */
        do {
          i = 0;

          /* Transition: '<S275>:55' */
          /*  If specified, use task protocol block sequence. */
          guard2 = false;
          if (vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag == 1.0) {
            /* Transition: '<S275>:50' */
            vmr_rwd_fix_leftarm_DW.i_l = 1U;
            vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
              vmr_rwd_fix_leftarm_B.BlockSequence[1000];

            /* Transition: '<S275>:27' */
            while ((vmr_rwd_fix_leftarm_DW.temp <=
                    vmr_rwd_fix_leftarm_B.block_in_set) &&
                   (vmr_rwd_fix_leftarm_DW.i_l < vmr_rwd_fix_leftarm_B.Width2))
            {
              /* Transition: '<S275>:25' */
              vmr_rwd_fix_leftarm_DW.i_l++;
              vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
                (vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
                 vmr_rwd_fix_leftarm_DW.i_l + 999] + (real_T)
                 vmr_rwd_fix_leftarm_DW.temp);
            }

            /* Transition: '<S275>:12' */
            /*  Finish if using a task protocol block sequence
               and that sequence has finished. */
            if ((vmr_rwd_fix_leftarm_DW.i_l == vmr_rwd_fix_leftarm_B.Width2) &&
                (vmr_rwd_fix_leftarm_DW.temp <=
                 vmr_rwd_fix_leftarm_B.block_in_set)) {
              /* Transition: '<S275>:42' */
              vmr_rwd_fix_leftarm_DW.is_c42_General =
                vmr_rwd_fix_leftarm_IN_Finished;

              /* Entry 'Finished': '<S275>:4' */
              vmr_rwd_fix_leftarm_B.task_status = 4U;
              i = 1;
            } else {
              /* Transition: '<S275>:32' */
              /*  Make next task protocol block index the next block. */
              vmr_rwd_fix_leftarm_B.block = (uint32_T)
                vmr_rwd_fix_leftarm_B.BlockSequence[(int32_T)
                (vmr_rwd_fix_leftarm_DW.i_l - 1U)];

              /* Transition: '<S275>:13' */
              guard2 = true;
            }
          } else {
            /*  Finish if using a task program-specified block sequence
               and the block index input from the program is invalid. */
            if ((vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag == 0.0) &&
                ((vmr_rwd_fix_leftarm_B.NextBlock == 0.0) ||
                 (vmr_rwd_fix_leftarm_B.NextBlock >
                  vmr_rwd_fix_leftarm_B.Width_j))) {
              /* Transition: '<S275>:24' */
              vmr_rwd_fix_leftarm_DW.is_c42_General =
                vmr_rwd_fix_leftarm_IN_Finished;

              /* Entry 'Finished': '<S275>:4' */
              vmr_rwd_fix_leftarm_B.task_status = 4U;
              i = 1;
            } else {
              /* Transition: '<S275>:39' */
              /*  Make user-input block index the next block. */
              vmr_rwd_fix_leftarm_B.block = (uint32_T)
                vmr_rwd_fix_leftarm_B.NextBlock;

              /* Transition: '<S275>:45' */
              guard2 = true;
            }
          }

          if (guard2) {
            /* Transition: '<S275>:49' */
            vmr_rwd_fix_leftarm_B.block_in_set++;
            vmr_rwd_fix_leftarm_DW.i_l = 1U;
            vmr_rwd_fix_leftarm_B.extra_trials[(int32_T)
              (vmr_rwd_fix_leftarm_DW.BLOCK - 1.0)] = 0.0;

            /* Transition: '<S275>:36' */
            /*  Copy the trial list from the block definitions to the trial queue. */
            while ((vmr_rwd_fix_leftarm_DW.i_l <=
                    vmr_rwd_fix_leftarm_B.Subtract_p) &&
                   (vmr_rwd_fix_leftarm_B.block > 0U) &&
                   (vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
                     vmr_rwd_fix_leftarm_DW.i_l + (int32_T)
                     vmr_rwd_fix_leftarm_B.block) - 1] != 0.0)) {
              /* Transition: '<S275>:16' */
              vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                (vmr_rwd_fix_leftarm_DW.i_l - 1U)] =
                vmr_rwd_fix_leftarm_B.BlockDefinitions[(50 * (int32_T)
                vmr_rwd_fix_leftarm_DW.i_l + (int32_T)
                vmr_rwd_fix_leftarm_B.block) - 1];
              vmr_rwd_fix_leftarm_DW.i_l++;
            }

            /* Transition: '<S275>:41' */
            vmr_rwd_fix_leftarm_DW.trial_queue_length =
              vmr_rwd_fix_leftarm_DW.i_l - 1U;
            if (vmr_rwd_fix_leftarm_DW.trial_queue_length > 0U) {
              /* Transition: '<S275>:66' */
              vmr_rwd_fix_leftarm_B.trial_in_block = 0U;

              /* Transition: '<S275>:17' */
              vmr_rwd_fix_leftarm_DW.trial_in_mini_block = 0U;

              /*  Randomize the block if the definition specifies to do so. */
              if (vmr_rwd_fix_leftarm_B.BlockDefinitions[(int32_T)
                  (vmr_rwd_fix_leftarm_B.block - 1U)] == 1.0) {
                /* Transition: '<S275>:18' */
                vmr_rwd_fix_leftarm_DW.i_l = 1U;

                /* Transition: '<S275>:22' */
                /*  Perform list randomization "a la Knuth". */
                while (vmr_rwd_fix_leftarm_DW.i_l <=
                       vmr_rwd_fix_leftarm_DW.trial_queue_length) {
                  /* Transition: '<S275>:23' */
                  vmr_rwd_fix_leftarm_DW.swap_index = (uint32_T)(fmod(rand(),
                    vmr_rwd_fix_leftarm_DW.trial_queue_length) + 1.0);
                  vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
                    vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.swap_index - 1U)];
                  vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.swap_index - 1U)] =
                    vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.i_l - 1U)];
                  vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                    (vmr_rwd_fix_leftarm_DW.i_l - 1U)] =
                    vmr_rwd_fix_leftarm_DW.temp;
                  vmr_rwd_fix_leftarm_DW.i_l++;
                }

                /* Transition: '<S275>:67' */
              } else {
                /* Transition: '<S275>:19' */
                /* Transition: '<S275>:20' */
              }

              /* Transition: '<S275>:21' */
              if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) {
                /* Transition: '<S275>:68' */
                /* Transition: '<S275>:69' */
                vmr_rwd_fix_leftarm_DW.is_c42_General =
                  vmr_rwd_fix_leftarm_IN_PausedBetweenTrials;

                /* Entry 'PausedBetweenTrials': '<S275>:3' */
                vmr_rwd_fix_leftarm_B.task_status = 3U;
              } else {
                /* Transition: '<S275>:70' */
                vmr_rwd_fix_leftarm_DW.is_c42_General =
                  vmr_rwd_fix_leftarm_IN_InTrial;

                /* Entry 'InTrial': '<S275>:8' */
                vmr_rwd_fix_leftarm_B.trial_in_set++;
                vmr_rwd_fix_leftarm_B.trial_in_block++;
                vmr_rwd_fix_leftarm_DW.trial_in_mini_block++;
                vmr_rwd_fix_leftarm_B.tp = (uint32_T)
                  vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
                  (vmr_rwd_fix_leftarm_DW.trial_in_mini_block - 1U)];

                /* Entry Internal 'InTrial': '<S275>:8' */
                /* Transition: '<S275>:47' */
                vmr_rwd_fix_leftarm_DW.is_InTrial =
                  vmr_rwd_fix_leftarm_IN_Running;

                /* Entry 'Running': '<S275>:1' */
                vmr_rwd_fix_leftarm_B.task_status = 2U;
              }

              i = 1;
            } else {
              /* Transition: '<S275>:65' */
              /* Transition: '<S275>:26' */
              if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) {
                /* Transition: '<S275>:33' */
                vmr_rwd_fix_leftarm_DW.is_c42_General =
                  vmr_rwd_fix_leftarm_IN_PausedBetweenBlocks;

                /* Entry 'PausedBetweenBlocks': '<S275>:5' */
                vmr_rwd_fix_leftarm_B.task_status = 3U;
                i = 1;
              } else {
                /* Transition: '<S275>:35' */
              }
            }
          }
        } while (i == 0);
      }
      break;

     case vmr_rwd_fix_leftarm_IN_PausedBetweenTrials:
      /* During 'PausedBetweenTrials': '<S275>:3' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw == 1) {
        /* Transition: '<S275>:31' */
        vmr_rwd_fix_leftarm_DW.is_c42_General = vmr_rwd_fix_leftarm_IN_InTrial;

        /* Entry 'InTrial': '<S275>:8' */
        vmr_rwd_fix_leftarm_B.trial_in_set++;
        vmr_rwd_fix_leftarm_B.trial_in_block++;
        vmr_rwd_fix_leftarm_DW.trial_in_mini_block++;
        vmr_rwd_fix_leftarm_B.tp = (uint32_T)vmr_rwd_fix_leftarm_DW.trial_queue
          [(int32_T)(vmr_rwd_fix_leftarm_DW.trial_in_mini_block - 1U)];

        /* Entry Internal 'InTrial': '<S275>:8' */
        /* Transition: '<S275>:47' */
        vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_Running;

        /* Entry 'Running': '<S275>:1' */
        vmr_rwd_fix_leftarm_B.task_status = 2U;
      }
      break;

     default:
      vmr_rwd_fix_leftarm_Ready();
      break;
    }

    if (guard1) {
      /* Transition: '<S275>:17' */
      vmr_rwd_fix_leftarm_DW.trial_in_mini_block = 0U;

      /*  Randomize the block if the definition specifies to do so. */
      if (vmr_rwd_fix_leftarm_B.BlockDefinitions[(int32_T)
          (vmr_rwd_fix_leftarm_B.block - 1U)] == 1.0) {
        /* Transition: '<S275>:18' */
        vmr_rwd_fix_leftarm_DW.i_l = 1U;

        /* Transition: '<S275>:22' */
        /*  Perform list randomization "a la Knuth". */
        while (vmr_rwd_fix_leftarm_DW.i_l <=
               vmr_rwd_fix_leftarm_DW.trial_queue_length) {
          /* Transition: '<S275>:23' */
          vmr_rwd_fix_leftarm_DW.swap_index = (uint32_T)(fmod(rand(),
            vmr_rwd_fix_leftarm_DW.trial_queue_length) + 1.0);
          vmr_rwd_fix_leftarm_DW.temp = (uint32_T)
            vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
            (vmr_rwd_fix_leftarm_DW.swap_index - 1U)];
          vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
            (vmr_rwd_fix_leftarm_DW.swap_index - 1U)] =
            vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
            (vmr_rwd_fix_leftarm_DW.i_l - 1U)];
          vmr_rwd_fix_leftarm_DW.trial_queue[(int32_T)
            (vmr_rwd_fix_leftarm_DW.i_l - 1U)] = vmr_rwd_fix_leftarm_DW.temp;
          vmr_rwd_fix_leftarm_DW.i_l++;
        }

        /* Transition: '<S275>:67' */
      } else {
        /* Transition: '<S275>:19' */
        /* Transition: '<S275>:20' */
      }

      /* Transition: '<S275>:21' */
      if (vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw != 1) {
        /* Transition: '<S275>:68' */
        /* Transition: '<S275>:69' */
        /* Exit Internal 'InTrial': '<S275>:8' */
        vmr_rwd_fix_leftarm_DW.is_InTrial =
          vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
        vmr_rwd_fix_leftarm_DW.is_c42_General =
          vmr_rwd_fix_leftarm_IN_PausedBetweenTrials;

        /* Entry 'PausedBetweenTrials': '<S275>:3' */
        vmr_rwd_fix_leftarm_B.task_status = 3U;
      } else {
        /* Transition: '<S275>:70' */
        /* Exit Internal 'InTrial': '<S275>:8' */
        vmr_rwd_fix_leftarm_DW.is_c42_General = vmr_rwd_fix_leftarm_IN_InTrial;

        /* Entry 'InTrial': '<S275>:8' */
        vmr_rwd_fix_leftarm_B.trial_in_set++;
        vmr_rwd_fix_leftarm_B.trial_in_block++;
        vmr_rwd_fix_leftarm_DW.trial_in_mini_block++;
        vmr_rwd_fix_leftarm_B.tp = (uint32_T)vmr_rwd_fix_leftarm_DW.trial_queue
          [(int32_T)(vmr_rwd_fix_leftarm_DW.trial_in_mini_block - 1U)];

        /* Entry Internal 'InTrial': '<S275>:8' */
        /* Transition: '<S275>:47' */
        vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_Running;

        /* Entry 'Running': '<S275>:1' */
        vmr_rwd_fix_leftarm_B.task_status = 2U;
      }
    }
  }
}

/* Initial conditions for atomic system: '<S5>/Task Execution Control Subsystem' */
void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Init(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S268>/Delay1' */
  vmr_rwd_fix_leftarm_DW.Delay1_PreviousInput = vmr_rwd_fix_leftarm_P.Delay1_X0;

  /* InitializeConditions for Memory: '<S268>/Delay' */
  vmr_rwd_fix_leftarm_DW.Delay_PreviousInput = vmr_rwd_fix_leftarm_P.Delay_X0;

  /* InitializeConditions for Chart: '<S268>/Task Execution Control Machine' */
  vmr_rwd_fix_leftarm_DW.is_InTrial = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
  vmr_rwd_fix_leftarm_DW.is_active_c42_General = 0U;
  vmr_rwd_fix_leftarm_DW.is_c42_General =
    vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_l;
  for (i = 0; i < 499; i++) {
    vmr_rwd_fix_leftarm_DW.trial_queue[i] = 0.0;
    vmr_rwd_fix_leftarm_DW.repeat_list[i] = 0.0;
  }

  vmr_rwd_fix_leftarm_DW.repeat_list_length = 0U;
  vmr_rwd_fix_leftarm_DW.i_l = 1U;
  vmr_rwd_fix_leftarm_DW.swap_index = 0U;
  vmr_rwd_fix_leftarm_DW.temp = 0U;
  vmr_rwd_fix_leftarm_DW.trial_queue_length = 499U;
  vmr_rwd_fix_leftarm_DW.trial_in_mini_block = 0U;
  vmr_rwd_fix_leftarm_DW.EXAM = 1.0;
  vmr_rwd_fix_leftarm_DW.BLOCK = 2.0;
  vmr_rwd_fix_leftarm_B.task_status = 0U;
  vmr_rwd_fix_leftarm_B.tp = 0U;
  vmr_rwd_fix_leftarm_B.block = 0U;
  vmr_rwd_fix_leftarm_B.trial_in_block = 0U;
  vmr_rwd_fix_leftarm_B.block_in_set = 0U;
  vmr_rwd_fix_leftarm_B.trial_in_set = 0U;
  vmr_rwd_fix_leftarm_B.repeat_last_trial = 0.0;
  vmr_rwd_fix_leftarm_B.extra_trials[0] = 0.0;
  vmr_rwd_fix_leftarm_B.extra_trials[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter = 0U;
  vmr_rwd_fix_leftarm_B.e_exit_trial = false;

  /* End of InitializeConditions for Chart: '<S268>/Task Execution Control Machine' */
}

/* Start for atomic system: '<S5>/Task Execution Control Subsystem' */
void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Start(void)
{
  /* Start for DiscretePulseGenerator: '<S268>/Task Clock' */
  vmr_rwd_fix_leftarm_DW.clockTickCounter = 0;
}

/* Outputs for atomic system: '<S5>/Task Execution Control Subsystem' */
void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem(void)
{
  int32_T inputEventFiredFlag;
  boolean_T tmp;
  ZCEventType zcEvent_idx_0;
  ZCEventType zcEvent_idx_1;
  real_T tmp_0;

  /* Memory: '<S268>/Delay1' */
  vmr_rwd_fix_leftarm_B.Delay1 = vmr_rwd_fix_leftarm_DW.Delay1_PreviousInput;

  /* Product: '<S268>/Product3' incorporates:
   *  Constant: '<S5>/Use Repeat Trial Flag'
   */
  vmr_rwd_fix_leftarm_B.Product3 = vmr_rwd_fix_leftarm_B.Delay1 *
    vmr_rwd_fix_leftarm_P.UseRepeatTrialFlag_Value;

  /* Sum: '<S268>/Subtract' incorporates:
   *  Constant: '<S268>/Constant'
   */
  tmp_0 = floor((real_T)vmr_rwd_fix_leftarm_ConstB.Width1 -
                vmr_rwd_fix_leftarm_P.Constant_Value_o1);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.Subtract_p = tmp_0 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)
    -tmp_0 : (uint32_T)tmp_0;

  /* End of Sum: '<S268>/Subtract' */

  /* DiscretePulseGenerator: '<S268>/Task Clock' */
  vmr_rwd_fix_leftarm_B.TaskClock = (vmr_rwd_fix_leftarm_DW.clockTickCounter <
    vmr_rwd_fix_leftarm_P.TaskClock_Duty_e) &&
    (vmr_rwd_fix_leftarm_DW.clockTickCounter >= 0) ?
    vmr_rwd_fix_leftarm_P.TaskClock_Amp_m : 0.0;
  if (vmr_rwd_fix_leftarm_DW.clockTickCounter >=
      vmr_rwd_fix_leftarm_P.TaskClock_Period_n - 1.0) {
    vmr_rwd_fix_leftarm_DW.clockTickCounter = 0;
  } else {
    vmr_rwd_fix_leftarm_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S268>/Task Clock' */

  /* Product: '<S268>/Product' incorporates:
   *  Constant: '<S5>/Run Task Clock Flag'
   */
  vmr_rwd_fix_leftarm_B.Product_i = vmr_rwd_fix_leftarm_P.RunTaskClockFlag_Value
    * vmr_rwd_fix_leftarm_B.TaskClock;

  /* Memory: '<S268>/Delay' */
  vmr_rwd_fix_leftarm_B.Delay = vmr_rwd_fix_leftarm_DW.Delay_PreviousInput;

  /* DataTypeConversion: '<S268>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_g = vmr_rwd_fix_leftarm_B.Delay;

  /* Chart: '<S268>/Task Execution Control Machine' incorporates:
   *  TriggerPort: '<S275>/ input events '
   */
  zcEvent_idx_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
    &vmr_rwd_fix_leftarm_PrevZCX.TaskExecutionControlMachine_Trig_ZCE[0],
    (vmr_rwd_fix_leftarm_B.Product_i));
  zcEvent_idx_1 = rt_ZCFcn(ANY_ZERO_CROSSING,
    &vmr_rwd_fix_leftarm_PrevZCX.TaskExecutionControlMachine_Trig_ZCE[1],
    (vmr_rwd_fix_leftarm_B.DataTypeConversion_g));
  tmp = (zcEvent_idx_0 != NO_ZCEVENT);
  tmp = (tmp || (zcEvent_idx_1 != NO_ZCEVENT));
  if (tmp) {
    vmr_rwd_fix_leftarm_B.inputevents_h[0] = (int8_T)zcEvent_idx_0;
    vmr_rwd_fix_leftarm_B.inputevents_h[1] = (int8_T)zcEvent_idx_1;

    /* Gateway: GUI Control/Task Execution Control Subsystem/Task Execution Control Machine */
    inputEventFiredFlag = 0;
    if (vmr_rwd_fix_leftarm_B.inputevents_h[0U] != 0) {
      inputEventFiredFlag = 1;

      /* Event: '<S275>:130' */
      vmr_rwd_fix_leftarm_DW.sfEvent_m = vmr_rwd_fix_leftarm_event_e_clk_b;
      vmr_rwd_fix_leftarm_chartstep_c42_General();
    }

    if (vmr_rwd_fix_leftarm_B.inputevents_h[1U] != 0) {
      inputEventFiredFlag = 1;

      /* Event: '<S275>:131' */
      vmr_rwd_fix_leftarm_DW.sfEvent_m = vmr_rwd_fix_leftarm_event_e_trial_over;
      vmr_rwd_fix_leftarm_chartstep_c42_General();
    }

    if ((inputEventFiredFlag != 0) &&
        (vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter > 0U)) {
      vmr_rwd_fix_leftarm_B.e_exit_trial = !vmr_rwd_fix_leftarm_B.e_exit_trial;
      vmr_rwd_fix_leftarm_DW.e_exit_trialEventCounter--;
    }

    vmr_rwd_fix_leftarm_DW.TaskExecutionControlMachine_SubsysRanBC = 4;
  }

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Constant: '<S274>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Compare_o = (uint8_T)(vmr_rwd_fix_leftarm_B.task_status ==
    vmr_rwd_fix_leftarm_P.CompareToConstant_const_b);

  /* Product: '<S268>/Product2' */
  vmr_rwd_fix_leftarm_B.Product2_n = vmr_rwd_fix_leftarm_B.Product_i * (real_T)
    vmr_rwd_fix_leftarm_B.Compare_o;

  /* DataTypeConversion: '<S268>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1_m =
    (vmr_rwd_fix_leftarm_B.Product2_n != 0.0);

  /* DataTypeConversion: '<S268>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_n = vmr_rwd_fix_leftarm_B.Compare_o;

  /* Selector: '<S268>/Selector' */
  memcpy(&vmr_rwd_fix_leftarm_B.Selector_n[0],
         &vmr_rwd_fix_leftarm_B.BlockDefinitions[0], 50U * sizeof(real_T));

  /* Selector: '<S268>/Selector1' */
  for (inputEventFiredFlag = 0; inputEventFiredFlag < 500; inputEventFiredFlag++)
  {
    vmr_rwd_fix_leftarm_B.Selector1[inputEventFiredFlag] =
      vmr_rwd_fix_leftarm_B.BlockDefinitions[50 * inputEventFiredFlag];
  }

  /* End of Selector: '<S268>/Selector1' */

  /* Selector: '<S268>/Selector2' */
  memcpy(&vmr_rwd_fix_leftarm_B.Selector2_l[0],
         &vmr_rwd_fix_leftarm_B.BlockSequence[0], 1000U * sizeof(real_T));
}

/* Update for atomic system: '<S5>/Task Execution Control Subsystem' */
void vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Update(void)
{
  /* Update for Memory: '<S268>/Delay1' incorporates:
   *  Constant: '<S5>/Repeat_Trial_Flag'
   */
  vmr_rwd_fix_leftarm_DW.Delay1_PreviousInput =
    vmr_rwd_fix_leftarm_P.Repeat_Trial_Flag_Value;

  /* Update for Memory: '<S268>/Delay' */
  vmr_rwd_fix_leftarm_DW.Delay_PreviousInput = vmr_rwd_fix_leftarm_B.e_Trial_End;
}
