/*
 * Code generation for system system '<S6>/FeedFwdArm'
 *
 * Model                      : vmr_rwd_fix_leftarm
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "vmr_rwd_fix_leftarm_FeedFwdArm.h"

/* Include model header file for global data */
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Output and update for atomic system: '<S6>/FeedFwdArm' */
void vmr_rwd_fix_leftarm_FeedFwdArm(void)
{
  real_T feedfwd;
  real_T feedback_status;
  int32_T i;

  /* MATLAB Function 'Hand_Feedback/FeedFwdArm': '<S277>:1' */
  /*  */
  /*  This function creates the VCODEs for the hand position feedback for both */
  /*  hands.  Various options in the Mask of the Simulink block in which this */
  /*  embedded Matlab file sits, allow the user to specify how often */
  /*  the hand feedback is updated as well as the source of the style and status */
  /*  of the hand feedback.   */
  /*  */
  /*  block_settings is the value chosen by the user in the Mask for parent Simulink */
  /*  block.  Note: that even if the block is wired up to accept Task Program  */
  /*  control of hand feedback style and status, this embedded Matlab file allows */
  /*  the GUI to over-ride those settings.  However, if the GUI requests that */
  /*  the parent block use Task Program control for the style and/or status when */
  /*  it has not been programmed in, then this embedded Matlab file handles this */
  /*  appropriately and ignore the request for Task Program control.   */
  /*  */
  /*  block_settings=1 -- parent block does not have any Task Program control over style or status */
  /*  block_settings=2 -- parent block has Task Program control over status only */
  /*  block_settings=3 -- parent block has Task Program control over both style and status */
  /*  */
  /*  fdbk_stts_mdl (only potentially used if block_settings=2)  */
  /*  fdbk_stts_mdl=0 -- neither hand on */
  /*  fdbk_stts_mdl=1 -- dominant hand on */
  /*  fdbk_stts_mdl=2 -- non-dominant hand on */
  /*  fdbk_stts_mdl=3 -- both hands on */
  /*  */
  /*  VCODES (only potentially used if block_settings=3)  */
  /*  VCODES for dominant and non-dominant, input to parent block  */
  /* '<S277>:1:32' */
  feedfwd = vmr_rwd_fix_leftarm_B.kinarm_data[5];

  /* Constant: '<S6>/block_settings' */
  /* amount of feedforward extrapolation for hand position(s) */
  /* '<S277>:1:33' */
  /* status of hand feedback requested from GUI */
  /* '<S277>:1:34' */
  /* source of hand feedback style requested from GUI */
  /* '<S277>:1:35' */
  /* colour of hand feedback required by GUI */
  /* '<S277>:1:36' */
  /* radius of hand feedback required by GUI */
  /* ----------------Feedback Style ---------------- */
  /*  IF GUI asks for feedback style from Task Program (fdbk_src_GUI==0) */
  /*  AND if Task Program has been chosen to supply feedback style (block_settings==3) */
  /*  AND if Task Program actually supplies appropriate feedback styles (size(VCODES_in,2)==70) */
  if ((vmr_rwd_fix_leftarm_B.kinarm_data[11] == 0.0) &&
      (vmr_rwd_fix_leftarm_P.Hand_Feedback_feedback_cntl_src == 3.0)) {
    /* '<S277>:1:43' */
    /* '<S277>:1:44' */
    memcpy(&vmr_rwd_fix_leftarm_B.VCODES_out[0],
           &vmr_rwd_fix_leftarm_B.MatrixConcatenation[0], 140U * sizeof(real_T));
  } else {
    /* '<S277>:1:46' */
    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODES_out[i] = 0.0;
    }

    /* set default */
    /* '<S277>:1:47' */
    vmr_rwd_fix_leftarm_B.VCODES_out[0] = 1.0;
    vmr_rwd_fix_leftarm_B.VCODES_out[1] = 1.0;

    /* target_type of circle */
    /* '<S277>:1:48' */
    vmr_rwd_fix_leftarm_B.VCODES_out[8] = vmr_rwd_fix_leftarm_B.kinarm_data[14];
    vmr_rwd_fix_leftarm_B.VCODES_out[9] = vmr_rwd_fix_leftarm_B.kinarm_data[14];

    /* fill colour as specified by GUI */
    /* '<S277>:1:49' */
    vmr_rwd_fix_leftarm_B.VCODES_out[10] = vmr_rwd_fix_leftarm_B.kinarm_data[14];
    vmr_rwd_fix_leftarm_B.VCODES_out[11] = vmr_rwd_fix_leftarm_B.kinarm_data[14];

    /* stroke colour same as fill colour */
    /* '<S277>:1:50' */
    vmr_rwd_fix_leftarm_B.VCODES_out[12] = 0.0;
    vmr_rwd_fix_leftarm_B.VCODES_out[13] = 0.0;

    /* no stroke width */
    /* '<S277>:1:51' */
    vmr_rwd_fix_leftarm_B.VCODES_out[16] = 100.0;
    vmr_rwd_fix_leftarm_B.VCODES_out[17] = 100.0;

    /* 100% opacity */
    /* '<S277>:1:52' */
    vmr_rwd_fix_leftarm_B.VCODES_out[18] = vmr_rwd_fix_leftarm_B.kinarm_data[17];
    vmr_rwd_fix_leftarm_B.VCODES_out[19] = vmr_rwd_fix_leftarm_B.kinarm_data[17];

    /* radius (m) as specified by GUI */
  }

  /* ----------------Feedback Status ---------------- */
  /* feedback status from GUI sets the default to be used */
  if (vmr_rwd_fix_leftarm_B.kinarm_data[8] == 4.0) {
    /* Constant: '<S6>/block_settings' */
    /* '<S277>:1:60' */
    /* if GUI has requested Task Program control of feedback status */
    if (vmr_rwd_fix_leftarm_P.Hand_Feedback_feedback_cntl_src == 2.0) {
      /* Constant: '<S6>/feedback_status' */
      /* '<S277>:1:61' */
      /* if there is Task Program control ONLY of status (but not style) */
      /* '<S277>:1:62' */
      feedback_status = vmr_rwd_fix_leftarm_P.feedback_status_Value;

      /* then use feedback status input from parent block */
    } else if (vmr_rwd_fix_leftarm_P.Hand_Feedback_feedback_cntl_src == 3.0) {
      /* '<S277>:1:63' */
      /* if there is Task Program control of both status and style */
      /* '<S277>:1:64' */
      feedback_status = 4.0;

      /* then let the input VCODEs handle the status */
    } else {
      /* otherwise assume that the Task Program did not provide style OR status */
      /* '<S277>:1:66' */
      feedback_status = 3.0;

      /* then set both hands are always on as a default */
    }
  } else {
    /* if GUI is controlling feedback status */
    /* '<S277>:1:69' */
    feedback_status = vmr_rwd_fix_leftarm_B.kinarm_data[8];
  }

  /* set the status of the hand-feedback in the VCODES */
  switch ((int32_T)feedback_status) {
   case 0:
    /* show neither hand feedback */
    /* '<S277>:1:75' */
    vmr_rwd_fix_leftarm_B.VCODES_out[2] = 0.0;

    /* '<S277>:1:76' */
    vmr_rwd_fix_leftarm_B.VCODES_out[3] = 0.0;
    break;

   case 1:
    /* show ONLY dominant hand feedback */
    /* '<S277>:1:78' */
    vmr_rwd_fix_leftarm_B.VCODES_out[2] = 1.0;

    /* '<S277>:1:79' */
    vmr_rwd_fix_leftarm_B.VCODES_out[3] = 0.0;
    break;

   case 2:
    /* show ONLY non-dominant hand feedback */
    /* '<S277>:1:81' */
    vmr_rwd_fix_leftarm_B.VCODES_out[2] = 0.0;

    /* '<S277>:1:82' */
    vmr_rwd_fix_leftarm_B.VCODES_out[3] = 1.0;
    break;

   case 4:
    /* VCODES already control hand feedback */
    /* do nothing */
    break;

   default:
    /* show both hand feedbacks */
    /* '<S277>:1:86' */
    vmr_rwd_fix_leftarm_B.VCODES_out[2] = 1.0;

    /* '<S277>:1:87' */
    vmr_rwd_fix_leftarm_B.VCODES_out[3] = 1.0;
    break;
  }

  /* ----------------Feedback Position ---------------- */
  /* set the position of the hand feedback. */
  /* '<S277>:1:92' */
  /* '<S277>:1:93' */
  /* '<S277>:1:94' */
  feedback_status = vmr_rwd_fix_leftarm_B.kinarm_data[2];

  /* choose dominant arm first */
  /* '<S277>:1:98' */
  /* (m) */
  /* '<S277>:1:99' */
  /* (m) */
  /* '<S277>:1:100' */
  /* (m/s) */
  /* '<S277>:1:101' */
  /* (m/s) */
  /*  feed-forward hand position (m) */
  /* '<S277>:1:104' */
  /* '<S277>:1:105' */
  /* '<S277>:1:106' */
  vmr_rwd_fix_leftarm_B.VCODES_out[4] = vmr_rwd_fix_leftarm_B.kinarm_data
    [(int32_T)feedback_status + 71] * feedfwd +
    vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)feedback_status + 65];

  /* target position in m  */
  /* '<S277>:1:107' */
  vmr_rwd_fix_leftarm_B.VCODES_out[6] = vmr_rwd_fix_leftarm_B.kinarm_data
    [(int32_T)feedback_status + 74] * feedfwd +
    vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)feedback_status + 68];

  /* target position in m  */
  /* '<S277>:1:92' */
  /* '<S277>:1:96' */
  feedback_status = 3.0 - vmr_rwd_fix_leftarm_B.kinarm_data[2];

  /* choose non-dominant arm 2nd */
  /* '<S277>:1:98' */
  /* (m) */
  /* '<S277>:1:99' */
  /* (m) */
  /* '<S277>:1:100' */
  /* (m/s) */
  /* '<S277>:1:101' */
  /* (m/s) */
  /*  feed-forward hand position (m) */
  /* '<S277>:1:104' */
  /* '<S277>:1:105' */
  /* '<S277>:1:106' */
  vmr_rwd_fix_leftarm_B.VCODES_out[5] = vmr_rwd_fix_leftarm_B.kinarm_data
    [(int32_T)feedback_status + 71] * feedfwd +
    vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)feedback_status + 65];

  /* target position in m  */
  /* '<S277>:1:107' */
  vmr_rwd_fix_leftarm_B.VCODES_out[7] = vmr_rwd_fix_leftarm_B.kinarm_data
    [(int32_T)feedback_status + 74] * feedfwd +
    vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)feedback_status + 68];

  /* target position in m  */
  /* '<S277>:1:92' */
  /* '<S277>:1:110' */
}
