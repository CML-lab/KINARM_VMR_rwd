/*
 * vmr_rwd_fix_leftarm.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "vmr_rwd_fix_leftarm".
 *
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "vmr_rwd_fix_leftarm_capi.h"
#include "vmr_rwd_fix_leftarm.h"
#include "vmr_rwd_fix_leftarm_private.h"

/* Named constants for Chart: '<S9>/Ramp_Up_Down' */
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2 ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Down ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Down2 ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Up ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Up2 ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Up_Done ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_Ramp_Up_Main ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_Wait_for_Go ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_event_e_clk (0)

/* Named constants for Chart: '<S22>/Chart' */
#define vmr_rwd_fix_leftarm_IN_AutoMoveToPos ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_EnableState ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_GetDesiredXY ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_HoldAtDesiredXY ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_Init    ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_MovingToDesiredXY ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a ((uint8_T)0U)
#define vmr_rwd_fix_leftarm_IN_RampDown ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_RampUp  ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_ResetController ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_event_e_clk_p (0)

/* Named constants for Chart: '<Root>/Trial_Control' */
#define vmr_rwd_fix_leftarm_IN_DoReward ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_EndInstructPause ((uint8_T)1U)
#define vmr_rwd_fix_leftarm_IN_EndOfTrial ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_Ending  ((uint8_T)2U)
#define vmr_rwd_fix_leftarm_IN_Hit2ndTarget ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_InitStartTarget ((uint8_T)3U)
#define vmr_rwd_fix_leftarm_IN_Initialize ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_InstructWaitState ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_Inter_Trial_Hold ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_Inter_Trial_State ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_Main_Trial ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_Miss2ndTarget ((uint8_T)4U)
#define vmr_rwd_fix_leftarm_IN_MoveHandAway ((uint8_T)9U)
#define vmr_rwd_fix_leftarm_IN_NeutralReward ((uint8_T)5U)
#define vmr_rwd_fix_leftarm_IN_NoReward ((uint8_T)6U)
#define vmr_rwd_fix_leftarm_IN_ReturnToStart ((uint8_T)10U)
#define vmr_rwd_fix_leftarm_IN_ReturnToStart1 ((uint8_T)11U)
#define vmr_rwd_fix_leftarm_IN_Show2ndTarget ((uint8_T)7U)
#define vmr_rwd_fix_leftarm_IN_ShowInstructState ((uint8_T)12U)
#define vmr_rwd_fix_leftarm_IN_ShowScoreState ((uint8_T)13U)
#define vmr_rwd_fix_leftarm_IN_StartTargetOn ((uint8_T)8U)
#define vmr_rwd_fix_leftarm_IN_StayAtFirstTarget ((uint8_T)9U)
#define vmr_rwd_fix_leftarm_IN_TooSlowState ((uint8_T)10U)
#define vmr_rwd_fix_leftarm_IN_WaitForSound ((uint8_T)11U)
#define vmr_rwd_fix_leftarm_event_e_ExitTrialNow (1)
#define vmr_rwd_fix_leftarm_event_e_cntl_btn (2)

/* user code (top of source file) */
#include "stdio.h"

/* Block signals (auto storage) */
B_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_B;

/* Block states (auto storage) */
DW_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_PrevZCX;

/* Real-time model */
RT_MODEL_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_M_;
RT_MODEL_vmr_rwd_fix_leftarm_T *const vmr_rwd_fix_leftarm_M =
  &vmr_rwd_fix_leftarm_M_;

/* Forward declaration for local functions */
static uint32_T vmr_rwd_fix_leftarm_colourshift(real_T RRRGGGBBB);

/* Forward declaration for local functions */
static void vmr_rwd_fix_leftarm_sin(real_T x[32]);
static void vmr_rwd_fix_leftarm_cos(real_T x[32]);
static void vmr_rwd_fix_leftarm_rdivide_px(const real_T x[32], real_T y, real_T
  z[32]);
static void vmr_rwd_fix_leftarm_atan2(const real_T y[32], const real_T x[32],
  real_T r[32]);
static void vmr_rwd_fix_leftarm_sqrt_n(real_T x[32]);
static void vmr_rwd_fix_leftarm_rdivide(const real_T x[32], const real_T y[32],
  real_T z[32]);
static void vmr_rwd_fix_leftarm_power_h(const real_T a[32], real_T y[32]);
static void vmr_rwd_fix_leftarm_abs(const real_T x[32], real_T y[32]);
static void vmr_rwd_fix_leftarm_rdivide_p(real_T x, const real_T y[32], real_T
  z[32]);
static void vmr_rwd_fix_leftarm_repmat(const real_T a[32], real_T b[1024]);
static void vmr_rwd_fix_leftarm_repmat_h(const real_T a[32], real_T b[1024]);
static void vmr_rwd_fix_leftarm_power(const real_T a[1024], real_T y[1024]);
static void vmr_rwd_fix_leftarm_sqrt(real_T x[1024]);
static void vmr_rwd_fix_leftarm_Main_Trial(void);
static void vmr_rwd_fix_leftarm_chartstep_c1_vmr_rwd_fix_leftarm(void);
static uint32_T vmr_rwd_fix_leftarm_colourshift_b(real_T RRRGGGBBB);
static uint32_T vmr_rwd_fix_leftarm_colourshift_n(real_T RRRGGGBBB);
static uint32_T vmr_rwd_fix_leftarm_colourshift_l(real_T RRRGGGBBB);
static uint32_T vmr_rwd_fix_leftarm_colourshift_h(real_T RRRGGGBBB);
static void vmr_rwd_fix_leftarm_diag(const real_T v[2], real_T d[4]);
static void vmr_rwd_fix_leftarm_update_torques(const real_T torques[2], real_T
  motor_limits, real_T robot_orientation, real_T new_torques[2]);
static void rate_monotonic_scheduler(void);
int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    absNumerator = (uint32_T)(numerator >= 0 ? numerator : -numerator);
    absDenominator = (uint32_T)(denominator >= 0 ? denominator : -denominator);
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -(int32_T)tempAbsQuotient : (int32_T)
      tempAbsQuotient;
  }

  return quotient;
}

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(vmr_rwd_fix_leftarm_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(vmr_rwd_fix_leftarm_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(vmr_rwd_fix_leftarm_M, 3);
  rtmSampleHitPtr[4] = rtmStepTask(vmr_rwd_fix_leftarm_M, 4);
  rtmSampleHitPtr[5] = rtmStepTask(vmr_rwd_fix_leftarm_M, 5);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 1 shares data with slower tid rates: 2, 3, 4 */
  if (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[1] == 0) {
    vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_2 =
      (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[2] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits[8] =
      vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_2;
    vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3 =
      (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[3] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits[9] =
      vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3;
    vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_4 =
      (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[4] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits[10] =
      vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_4;
  }

  /* tid 2 shares data with slower tid rate: 3 */
  if (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[2] == 0) {
    vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID2_3 =
      (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[3] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits[15] =
      vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID2_3;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[2])++;
  if ((vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.0005s, 0.0s] */
    vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[2] = 0;
  }

  (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[3])++;
  if ((vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[3]) > 3) {/* Sample time: [0.001s, 0.0s] */
    vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[3] = 0;
  }

  (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[4])++;
  if ((vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[4]) > 7) {/* Sample time: [0.002s, 0.0s] */
    vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[4] = 0;
  }

  (vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[5])++;
  if ((vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[5]) > 399) {/* Sample time: [0.1s, 0.0s] */
    vmr_rwd_fix_leftarm_M->Timing.TaskCounters.TID[5] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S258>/MATLAB Function'
 *    '<S258>/MATLAB Function1'
 */
void vmr_rwd_fix_leftarm_MATLABFunction(real_T rtu_orientation, real_T
  rtu_has_secondary, real_T rtu_isEP, B_MATLABFunction_vmr_rwd_fix_leftarm_T
  *localB)
{
  int32_T isExo;

  /* MATLAB Function 'DataLogging/create_lab_info/Subsystem/MATLAB Function': '<S259>:1' */
  /* '<S259>:1:4' */
  isExo = 1;
  if (rtu_isEP != 0.0) {
    /* '<S259>:1:6' */
    isExo = 0;
  }

  /* '<S259>:1:9' */
  localB->has_high_res_encoders = rtu_has_secondary;

  /* '<S259>:1:11' */
  localB->is_right_arm = 0.0;
  if (((isExo != 0) && (rtu_orientation == 1.0)) || ((rtu_isEP != 0.0) &&
       (rtu_orientation == -1.0))) {
    /* '<S259>:1:12' */
    /* '<S259>:1:13' */
    localB->is_right_arm = 1.0;
  }

  localB->isExo = isExo;
}

/* Function for MATLAB Function: '<S261>/Embedded MATLAB Function' */
static uint32_T vmr_rwd_fix_leftarm_colourshift(real_T RRRGGGBBB)
{
  uint32_T RRGGBBAA;
  uint32_T blue;
  uint32_T green;
  uint32_T q0;
  uint32_T qY;
  uint64_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /*  The colourshift function converts an "RRRGGGBBB" colour value to RRGBB (as an uint32). */
  /* this is "no fill" */
  if (RRRGGGBBB == 1.0E+9) {
    /* '<S262>:1:203' */
    /* '<S262>:1:204' */
    RRGGBBAA = 16777216U;

    /* hex 0x1000000 */
  } else {
    /* '<S262>:1:208' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - floor(RRRGGGBBB / 1000.0) * 1000.0);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        blue = (uint32_T)tmp_1;
      } else {
        blue = 0U;
      }
    } else {
      blue = MAX_uint32_T;
    }

    /* '<S262>:1:209' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)blue);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        green = (uint32_T)tmp_1;
      } else {
        green = 0U;
      }
    } else {
      green = MAX_uint32_T;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)(green - green / 1000000U * 1000000U)
      / 1000.0);
    green = (uint32_T)tmp_0;

    /* '<S262>:1:210' */
    /* '<S262>:1:212' */
    tmp = green * 1000ULL;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)(uint32_T)tmp);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        q0 = (uint32_T)tmp_1;
      } else {
        q0 = 0U;
      }
    } else {
      q0 = MAX_uint32_T;
    }

    qY = q0 - blue;
    if (qY > q0) {
      qY = 0U;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)qY / 1.0E+6);
    tmp = (uint64_T)(((uint32_T)tmp_0 << 16U) + (green << 8U)) + blue;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    RRGGBBAA = (uint32_T)tmp;
  }

  return RRGGBBAA;
}

/*
 * Output and update for atomic system:
 *    '<S261>/Embedded MATLAB Function'
 *    '<S20>/Embedded MATLAB Function'
 *    '<S21>/Embedded MATLAB Function'
 *    '<S329>/Embedded MATLAB Function'
 */
void vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(const real_T rtu_target[25],
  real_T rtu_state_in, real_T rtu_target_type, real_T rtu_opacity_in, real_T
  rtu_target_display, real_T rtu_x_index, real_T rtu_y_index, real_T
  rtu_num_states, const real_T rtu_stateindices[55],
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T *localB)
{
  real_T opacity;
  real_T stroke_colour_col;
  real_T stroke_width_col;
  int32_T i;

  /* MATLAB Function 'Show_Target/Embedded MATLAB Function': '<S262>:1' */
  /*  VCODEs are length 70. All units in a VCODE should be SI, e.g. (m) and (rad). Elements in a VCODE are defined as follows: */
  /*  */
  /*  For all target types: */
  /*   1: target type */
  /*        1 - circle */
  /*        2 - ellipse */
  /*        3 - rectangle */
  /*        4 - line */
  /*        5 - triangle */
  /*        11 - circle with label */
  /*        12 - ellipse with label */
  /*        13 - rectangle with label */
  /*        14 - line with label */
  /*        15 - triangle with label */
  /*   2: target on/off status and target display (which display target will appear on) */
  /* 		0 - off */
  /* 		1 - on, appearing on both subject and operator displays */
  /*        2 - on, appearing on subject display only */
  /*        3 - on, appearing on operator display only */
  /*   3: x position (m) */
  /*   4: y position (m) */
  /*   5: fill colour (RRGGBB) or texture index */
  /*   6: stroke colour (RRGGBB) or texture index */
  /*   7: stroke width */
  /*   8: reserved for target background ID */
  /*   9: opacity */
  /*  */
  /*  For circles: */
  /*   10: radius (m) */
  /*  */
  /*  For ellipses: */
  /*   10: major radius (m) */
  /*   11: minor radius (m) */
  /*   12: orientation of major axis (rad) */
  /*  */
  /*  For rectangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: orientation (rad) (relative to x, y already shown) */
  /*  */
  /*  For lines: */
  /*   10: endpoint x-axis coordinate relative to start point (m) */
  /*   11: endpoint y-axis coordinate relative to start point (m) */
  /*  */
  /*  For triangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: offset of peak from midpoint of length (m) */
  /*   13: orientation (rad) */
  /*  */
  /*  For all labelled target types: */
  /*   14: reserved */
  /*   15-64: label characters (indexes in ISO 8859-1 character set) */
  /*   65: label colour (0xRRGGBB), opacity is set by the vcode's opacity (9). */
  /*   66: label height (m) */
  /*   67: reserved */
  /*   68: reserved */
  /*   69: reserved */
  /*   70: reserved */
  /*  NOTE: we assume that the STATE and/or OPACITY inputs are vectors.  */
  /*  If the length of the input STATE is not the same as the number of targets then make STATE a column vector of the same length as  */
  /*  the TARGET input, using the first STATE (i.e. all targets get the same state)  */
  /* '<S262>:1:70' */
  /*  If the length of the input OPACITY is not the same as the number of targets then make OPACITY a column vector of the same length as */
  /*  the TARGET input, using the first OPACITY (i.e. all targets get the same opacity)  */
  /* '<S262>:1:79' */
  /*  Clamping the opacity to [0, 100]. */
  /* '<S262>:1:86' */
  /* '<S262>:1:87' */
  if (rtu_opacity_in <= 100.0) {
    opacity = rtu_opacity_in;
  } else {
    opacity = 100.0;
  }

  if (!(opacity >= 0.0)) {
    opacity = 0.0;
  }

  /* '<S262>:1:89' */
  for (i = 0; i < 70; i++) {
    localB->VCODE[i] = 0.0;
  }

  /*  Set the target type. */
  /* '<S262>:1:92' */
  localB->VCODE[0] = rtu_target_type;

  /*  Set the target position. */
  /* '<S262>:1:95' */
  localB->VCODE[2] = rtu_target[(int32_T)rtu_x_index - 1] * 0.01;

  /*  x position (convert from (cm) in target table to (m)) */
  /* '<S262>:1:96' */
  localB->VCODE[3] = rtu_target[(int32_T)rtu_y_index - 1] * 0.01;

  /*  y position (convert from (cm) in target table to (m)) */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((rtu_state_in <= 0.0) || (rtu_state_in > rtu_num_states)) {
    /* '<S262>:1:101' */
    /* '<S262>:1:102' */
    localB->VCODE[1] = 0.0;

    /*  target is off */
  } else {
    /* '<S262>:1:104' */
    localB->VCODE[1] = rtu_target_display;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S262>:1:107' */
  /* '<S262>:1:108' */
  stroke_colour_col = rtu_stateindices[(int32_T)rtu_state_in + 4];

  /* '<S262>:1:109' */
  stroke_width_col = rtu_stateindices[(int32_T)rtu_state_in + 9];

  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (rtu_stateindices[(int32_T)rtu_state_in - 1] == 0.0) {
    /* '<S262>:1:112' */
    /* '<S262>:1:113' */
    localB->VCODE[4] = -2.147483648E+9;
  } else if (rtu_target[(int32_T)rtu_stateindices[(int32_T)rtu_state_in - 1] - 1]
             < 0.0) {
    /* '<S262>:1:114' */
    /* '<S262>:1:115' */
    localB->VCODE[4] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in - 1] - 1];
  } else {
    /* '<S262>:1:117' */
    localB->VCODE[4] = (real_T)vmr_rwd_fix_leftarm_colourshift(rtu_target
      [(int32_T)rtu_stateindices[(int32_T)rtu_state_in - 1] - 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (stroke_colour_col == 0.0) {
    /* '<S262>:1:121' */
    /* '<S262>:1:122' */
    localB->VCODE[5] = -2.147483648E+9;
  } else if (rtu_target[(int32_T)stroke_colour_col - 1] < 0.0) {
    /* '<S262>:1:123' */
    /* '<S262>:1:124' */
    localB->VCODE[5] = rtu_target[(int32_T)stroke_colour_col - 1];
  } else {
    /* '<S262>:1:126' */
    localB->VCODE[5] = (real_T)vmr_rwd_fix_leftarm_colourshift(rtu_target
      [(int32_T)stroke_colour_col - 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (stroke_width_col == 0.0) {
    /* '<S262>:1:130' */
    /* '<S262>:1:131' */
    localB->VCODE[6] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (stroke_width_col < 0.0) {
    /* '<S262>:1:132' */
    /* '<S262>:1:133' */
    localB->VCODE[6] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S262>:1:135' */
    localB->VCODE[6] = rtu_target[(int32_T)stroke_width_col - 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S262>:1:139' */
  localB->VCODE[8] = opacity;

  /*  Set attributes specific to each target type. */
  if (rtu_target_type == 1.0) {
    /* '<S262>:1:142' */
    /*  Handle circle target: */
    /* '<S262>:1:145' */
    /* '<S262>:1:146' */
    localB->VCODE[9] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in + 14] - 1] * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
  } else if ((rtu_target_type == 2.0) || (rtu_target_type == 3.0)) {
    /* '<S262>:1:148' */
    /*  Handle ellipse or rectangle target: */
    /* '<S262>:1:151' */
    /* '<S262>:1:152' */
    /* '<S262>:1:153' */
    /* '<S262>:1:155' */
    localB->VCODE[9] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in + 14] - 1] * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S262>:1:156' */
    localB->VCODE[10] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in + 19] - 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (rtu_stateindices[(int32_T)rtu_state_in + 24] == 0.0) {
      /* '<S262>:1:157' */
      /* '<S262>:1:158' */
      localB->VCODE[11] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S262>:1:160' */
      localB->VCODE[11] = (rtu_target[(int32_T)rtu_stateindices[(int32_T)
                           rtu_state_in + 24] - 1] - floor(rtu_target[(int32_T)
        rtu_stateindices[(int32_T)rtu_state_in + 24] - 1] / 360.0) * 360.0) *
        3.1415926535897931 / 180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }
  } else if (rtu_target_type == 4.0) {
    /* '<S262>:1:163' */
    /*  Handle line target: */
    /* '<S262>:1:166' */
    /* '<S262>:1:167' */
    /* '<S262>:1:168' */
    localB->VCODE[9] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in + 14] - 1] * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S262>:1:169' */
    localB->VCODE[10] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
      rtu_state_in + 19] - 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
  } else {
    if (rtu_target_type == 5.0) {
      /* '<S262>:1:171' */
      /*  Handle triangle target: */
      /* '<S262>:1:174' */
      /* '<S262>:1:175' */
      /* '<S262>:1:176' */
      /* '<S262>:1:177' */
      /* '<S262>:1:179' */
      localB->VCODE[9] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
        rtu_state_in + 14] - 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (rtu_stateindices[(int32_T)rtu_state_in + 19] == 0.0) {
        /* '<S262>:1:183' */
        /* '<S262>:1:184' */
        localB->VCODE[10] = 0.8660254037844386 * localB->VCODE[9];

        /*  height for equilateral triangle */
        /* '<S262>:1:185' */
        localB->VCODE[11] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S262>:1:187' */
        localB->VCODE[10] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
          rtu_state_in + 19] - 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S262>:1:188' */
        localB->VCODE[11] = rtu_target[(int32_T)rtu_stateindices[(int32_T)
          rtu_state_in + 24] - 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (rtu_stateindices[(int32_T)rtu_state_in + 29] == 0.0) {
        /* '<S262>:1:191' */
        /* '<S262>:1:192' */
        localB->VCODE[12] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S262>:1:194' */
        localB->VCODE[12] = (rtu_target[(int32_T)rtu_stateindices[(int32_T)
                             rtu_state_in + 29] - 1] - floor(rtu_target[(int32_T)
          rtu_stateindices[(int32_T)rtu_state_in + 29] - 1] / 360.0) * 360.0) *
          3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }
    }
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Initial conditions for trigger system:
 *    '<S9>/Ramp_Up_Down'
 *    '<S9>/Ramp_Up_Down1'
 */
void vmr_rwd_fix_leftarm_Ramp_Up_Down_Init(B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *
  localB, DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localDW)
{
  localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c39_KINARM_loads = 0U;
  localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2;
  localDW->tick = 0.0;
  localDW->tickCount = 0.0;
  localB->scaling = 0.0;
}

/*
 * Output and update for trigger system:
 *    '<S9>/Ramp_Up_Down'
 *    '<S9>/Ramp_Up_Down1'
 */
void vmr_rwd_fix_leftarm_Ramp_Up_Down(real_T rtu_e_clk, real_T
  rtu_Motors_Disabled, real_T rtu_Run_Status, real_T rtu_up_duration, real_T
  rtu_down_duration, real_T rtu_robot_type, B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T
  *localB, DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localDW,
  ZCE_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localZCE)
{
  ZCEventType zcEvent;

  /* Chart: '<S9>/Ramp_Up_Down' incorporates:
   *  TriggerPort: '<S281>/e_clk'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Ramp_Up_Down_Trig_ZCE,
                     (rtu_e_clk));
  if (zcEvent != NO_ZCEVENT) {
    localB->e_clk = (int8_T)zcEvent;

    /* Gateway: KINARM_Exo_Apply_Loads/Ramp_Up_Down */
    if (localDW->temporalCounter_i1 < MAX_uint32_T) {
      localDW->temporalCounter_i1++;
    }

    /* Event: '<S281>:30' */
    localDW->sfEvent = vmr_rwd_fix_leftarm_event_e_clk;

    /* During: KINARM_Exo_Apply_Loads/Ramp_Up_Down */
    if (localDW->is_active_c39_KINARM_loads == 0U) {
      /* Entry: KINARM_Exo_Apply_Loads/Ramp_Up_Down */
      localDW->is_active_c39_KINARM_loads = 1U;

      /* Entry Internal: KINARM_Exo_Apply_Loads/Ramp_Up_Down */
      /* Transition: '<S281>:8' */
      localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Wait_for_Go;

      /* Entry 'Wait_for_Go': '<S281>:1' */
      localB->scaling = 0.0;
    } else {
      switch (localDW->is_c39_KINARM_loads) {
       case vmr_rwd_fix_leftarm_IN_Ramp_Down:
        /* During 'Ramp_Down': '<S281>:4' */
        if ((localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) &&
            (localDW->temporalCounter_i1 >= (uint32_T)localDW->tickCount)) {
          /* Transition: '<S281>:18' */
          localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Ramp_Down2;
          localDW->temporalCounter_i1 = 0U;
        } else {
          if (localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) {
            localDW->tick++;
            localB->scaling = 1.0 - rt_powd_snf(localDW->tick /
              rtu_down_duration, 2.0) * 2.0;
          }
        }
        break;

       case vmr_rwd_fix_leftarm_IN_Ramp_Down2:
        /* During 'Ramp_Down2': '<S281>:6' */
        if ((localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) &&
            (localDW->temporalCounter_i1 >= (uint32_T)(rtu_down_duration -
              localDW->tickCount))) {
          /* Transition: '<S281>:12' */
          localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Wait_for_Go;

          /* Entry 'Wait_for_Go': '<S281>:1' */
          localB->scaling = 0.0;
        } else {
          if (localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) {
            localDW->tick++;
            localB->scaling = rt_powd_snf(fabs(localDW->tick / rtu_down_duration
              - 0.5) - 0.5, 2.0) * 2.0;
          }
        }
        break;

       case vmr_rwd_fix_leftarm_IN_Ramp_Up_Main:
        /* During 'Ramp_Up_Main': '<S281>:7' */
        if (rtu_Motors_Disabled > 0.0) {
          /* Transition: '<S281>:19' */
          /* Exit Internal 'Ramp_Up_Main': '<S281>:7' */
          localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2;
          localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Wait_for_Go;

          /* Entry 'Wait_for_Go': '<S281>:1' */
          localB->scaling = 0.0;
        } else {
          switch (localDW->is_Ramp_Up_Main) {
           case vmr_rwd_fix_leftarm_IN_Ramp_Up:
            /* During 'Ramp_Up': '<S281>:3' */
            if ((localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) &&
                (localDW->temporalCounter_i1 >= (uint32_T)localDW->tickCount)) {
              /* Transition: '<S281>:17' */
              localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_Ramp_Up2;
              localDW->temporalCounter_i1 = 0U;
            } else {
              if (localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) {
                localDW->tick++;
                localB->scaling = rt_powd_snf(localDW->tick / rtu_up_duration,
                  2.0) * 2.0;
              }
            }
            break;

           case vmr_rwd_fix_leftarm_IN_Ramp_Up2:
            /* During 'Ramp_Up2': '<S281>:5' */
            if ((localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) &&
                (localDW->temporalCounter_i1 >= (uint32_T)(rtu_up_duration -
                  localDW->tickCount))) {
              /* Transition: '<S281>:11' */
              localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_Ramp_Up_Done;

              /* Entry 'Ramp_Up_Done': '<S281>:2' */
              localB->scaling = 1.0;
            } else {
              if (localDW->sfEvent == vmr_rwd_fix_leftarm_event_e_clk) {
                localDW->tick++;
                localB->scaling = 1.0 - rt_powd_snf(fabs(localDW->tick /
                  rtu_up_duration - 0.5) - 0.5, 2.0) * 2.0;
              }
            }
            break;

           default:
            /* During 'Ramp_Up_Done': '<S281>:2' */
            if (rtu_Run_Status == 0.0) {
              /* Transition: '<S281>:10' */
              if (rtu_down_duration > 0.0) {
                /* Transition: '<S281>:15' */
                localDW->is_Ramp_Up_Main =
                  vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2;
                localDW->tickCount = rtu_down_duration / 2.0;
                localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Ramp_Down;
                localDW->temporalCounter_i1 = 0U;

                /* Entry 'Ramp_Down': '<S281>:4' */
                localDW->tick = 0.0;
              } else {
                /* Transition: '<S281>:16' */
                localDW->is_Ramp_Up_Main =
                  vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_c2;
                localDW->is_c39_KINARM_loads =
                  vmr_rwd_fix_leftarm_IN_Wait_for_Go;

                /* Entry 'Wait_for_Go': '<S281>:1' */
                localB->scaling = 0.0;
              }
            }
            break;
          }
        }
        break;

       default:
        /* During 'Wait_for_Go': '<S281>:1' */
        if ((rtu_Run_Status > 0.0) && (rtu_Motors_Disabled == 0.0) &&
            ((rtu_robot_type == 0.0) || (rtu_robot_type == 2.0))) {
          /* Transition: '<S281>:9' */
          if (rtu_up_duration > 0.0) {
            /* Transition: '<S281>:13' */
            localDW->tickCount = rtu_up_duration / 2.0;
            localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Ramp_Up_Main;
            localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_Ramp_Up;
            localDW->temporalCounter_i1 = 0U;

            /* Entry 'Ramp_Up': '<S281>:3' */
            localDW->tick = 0.0;
          } else {
            /* Transition: '<S281>:14' */
            localDW->is_c39_KINARM_loads = vmr_rwd_fix_leftarm_IN_Ramp_Up_Main;
            localDW->is_Ramp_Up_Main = vmr_rwd_fix_leftarm_IN_Ramp_Up_Done;

            /* Entry 'Ramp_Up_Done': '<S281>:2' */
            localB->scaling = 1.0;
          }
        }
        break;
      }
    }

    localDW->Ramp_Up_Down_SubsysRanBC = 4;
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_sin(real_T x[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    x[k] = sin(x[k]);
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_cos(real_T x[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    x[k] = cos(x[k]);
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_rdivide_px(const real_T x[32], real_T y, real_T
  z[32])
{
  int32_T i;
  for (i = 0; i < 32; i++) {
    z[i] = x[i] / y;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp_0, tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_atan2(const real_T y[32], const real_T x[32],
  real_T r[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    r[k] = rt_atan2d_snf(y[k], x[k]);
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_sqrt_n(real_T x[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    x[k] = sqrt(x[k]);
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_rdivide(const real_T x[32], const real_T y[32],
  real_T z[32])
{
  int32_T i;
  for (i = 0; i < 32; i++) {
    z[i] = x[i] / y[i];
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_power_h(const real_T a[32], real_T y[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    y[k] = a[k] * a[k];
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_abs(const real_T x[32], real_T y[32])
{
  int32_T k;
  for (k = 0; k < 32; k++) {
    y[k] = fabs(x[k]);
  }
}

/* Function for MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_rdivide_p(real_T x, const real_T y[32], real_T
  z[32])
{
  int32_T i;
  for (i = 0; i < 32; i++) {
    z[i] = x / y[i];
  }
}

/* Function for MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_repmat(const real_T a[32], real_T b[1024])
{
  int32_T ibtile;
  int32_T jtilecol;
  for (jtilecol = 0; jtilecol < 32; jtilecol++) {
    ibtile = jtilecol << 5;
    memcpy(&b[ibtile], &a[0], sizeof(real_T) << 5U);
  }
}

/* Function for MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_repmat_h(const real_T a[32], real_T b[1024])
{
  int32_T ibmat;
  int32_T jcol;
  int32_T itilerow;
  for (jcol = 0; jcol < 32; jcol++) {
    ibmat = jcol << 5;
    for (itilerow = 0; itilerow < 32; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

/* Function for MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_power(const real_T a[1024], real_T y[1024])
{
  int32_T k;
  for (k = 0; k < 1024; k++) {
    y[k] = a[k] * a[k];
  }
}

/* Function for MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' */
static void vmr_rwd_fix_leftarm_sqrt(real_T x[1024])
{
  int32_T k;
  for (k = 0; k < 1024; k++) {
    x[k] = sqrt(x[k]);
  }
}

/* Function for Chart: '<Root>/Trial_Control' */
static void vmr_rwd_fix_leftarm_Main_Trial(void)
{
  /* During 'Main_Trial': '<S23>:8' */
  if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_ExitTrialNow)
  {
    /* Transition: '<S23>:17' */
    /* Exit Internal 'Main_Trial': '<S23>:8' */
    vmr_rwd_fix_leftarm_DW.is_Main_Trial =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;

    /*  if e_ExitTrialNow event occurs... */
    vmr_rwd_fix_leftarm_DW.tickCount = 1.0;
    vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
      vmr_rwd_fix_leftarm_IN_Inter_Trial_State;
    vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

    /* Entry 'Inter_Trial_State': '<S23>:5' */
    /*  send e_Trial_End event */
    /* Event: '<S23>:46' */
    vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter++;

    /*  turn off both targets
       stop data logging */
    vmr_rwd_fix_leftarm_B.event_code = 0.0;
    vmr_rwd_fix_leftarm_B.targetA_state = 1.0;

    /* don't shut off */
    vmr_rwd_fix_leftarm_B.targetB_state = 0.0;

    /* logging_enable = 0; */
    vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
    vmr_rwd_fix_leftarm_B.fdbk_text = 0;
  } else {
    switch (vmr_rwd_fix_leftarm_DW.is_Main_Trial) {
     case vmr_rwd_fix_leftarm_IN_DoReward:
      /* During 'DoReward': '<S23>:65' */
      /* after(tickCount, e_clk) */
      if (vmr_rwd_fix_leftarm_DW.tick >= vmr_rwd_fix_leftarm_DW.tickCount) {
        /* Transition: '<S23>:15' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_EndOfTrial;

        /* Entry 'EndOfTrial': '<S23>:3' */
        /*  Wait for a specified period of time, */
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 2.0;
        vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p)
        {
          vmr_rwd_fix_leftarm_DW.tick++;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_EndOfTrial:
      /* During 'EndOfTrial': '<S23>:3' */
      /* Transition: '<S23>:12' */
      vmr_rwd_fix_leftarm_DW.is_Main_Trial =
        vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
      vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
        vmr_rwd_fix_leftarm_IN_Inter_Trial_Hold;
      vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

      /* Entry 'Inter_Trial_Hold': '<S23>:73' */
      /* temporarily hold here until the hand gets close to the target */
      vmr_rwd_fix_leftarm_DW.tickCount = vmr_rwd_fix_leftarm_B.TPSelector[5];
      break;

     case vmr_rwd_fix_leftarm_IN_Hit2ndTarget:
      /* During 'Hit2ndTarget': '<S23>:2' */
      if (vmr_rwd_fix_leftarm_DW.reward_type == 2.0) {
        /* Transition: '<S23>:89' */
        /* neutral feedback tone */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_NeutralReward;

        /* Entry 'NeutralReward': '<S23>:86' */
        vmr_rwd_fix_leftarm_B.event_code = E_NEUTRAL_FDBK;

        /* do this state if we are in a clamped or aftereffect trial to indicate end of trial */
        vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
        vmr_rwd_fix_leftarm_B.reward_state = 0.0;
        vmr_rwd_fix_leftarm_B.fdbk_text = 0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        vmr_rwd_fix_leftarm_B.tone = 2.0;
      } else if (vmr_rwd_fix_leftarm_DW.reward_type == 0.0) {
        /* Transition: '<S23>:69' */
        /* no reward */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_NoReward;

        /* Entry 'NoReward': '<S23>:66' */
        vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
        vmr_rwd_fix_leftarm_B.fdbk_text = 0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else {
        if (vmr_rwd_fix_leftarm_DW.reward_type == 1.0) {
          /* Transition: '<S23>:68' */
          /* do the reward */
          vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_DoReward;

          /* Entry 'DoReward': '<S23>:65' */
          vmr_rwd_fix_leftarm_B.event_code = E_REWARD;
          vmr_rwd_fix_leftarm_B.targetB_state = 2.0;
          vmr_rwd_fix_leftarm_B.reward_state = 1.0;
          vmr_rwd_fix_leftarm_B.reward = (int32_T)
            vmr_rwd_fix_leftarm_B.Taskwideparam[1];
          vmr_rwd_fix_leftarm_B.score += vmr_rwd_fix_leftarm_B.reward;
          vmr_rwd_fix_leftarm_B.fdbk_text = 0;
          vmr_rwd_fix_leftarm_B.tone = 1.0;
          vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
          vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Miss2ndTarget:
      /* During 'Miss2ndTarget': '<S23>:51' */
      /* after(tickCount, e_clk) */
      if ((vmr_rwd_fix_leftarm_DW.reward_type != 2.0) &&
          (vmr_rwd_fix_leftarm_DW.tick >= vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:52' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_EndOfTrial;

        /* Entry 'EndOfTrial': '<S23>:3' */
        /*  Wait for a specified period of time, */
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 2.0;
        vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else if (vmr_rwd_fix_leftarm_DW.reward_type == 2.0) {
        /* Transition: '<S23>:87' */
        /* neutral feedback tone */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_NeutralReward;

        /* Entry 'NeutralReward': '<S23>:86' */
        vmr_rwd_fix_leftarm_B.event_code = E_NEUTRAL_FDBK;

        /* do this state if we are in a clamped or aftereffect trial to indicate end of trial */
        vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
        vmr_rwd_fix_leftarm_B.reward_state = 0.0;
        vmr_rwd_fix_leftarm_B.fdbk_text = 0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        vmr_rwd_fix_leftarm_B.tone = 2.0;
      } else {
        if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p)
        {
          vmr_rwd_fix_leftarm_DW.tick++;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_NeutralReward:
      /* During 'NeutralReward': '<S23>:86' */
      /* after(tickCount, e_clk) */
      if (vmr_rwd_fix_leftarm_DW.tick >= vmr_rwd_fix_leftarm_DW.tickCount) {
        /* Transition: '<S23>:88' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_EndOfTrial;

        /* Entry 'EndOfTrial': '<S23>:3' */
        /*  Wait for a specified period of time, */
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 2.0;
        vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else {
        /* do nothing */
        if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p)
        {
          vmr_rwd_fix_leftarm_DW.tick++;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_NoReward:
      /* During 'NoReward': '<S23>:66' */
      /* after(tickCount, e_clk) */
      if (vmr_rwd_fix_leftarm_DW.tick >= vmr_rwd_fix_leftarm_DW.tickCount) {
        /* Transition: '<S23>:67' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_EndOfTrial;

        /* Entry 'EndOfTrial': '<S23>:3' */
        /*  Wait for a specified period of time, */
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 2.0;
        vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else {
        /* do nothing */
        if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p)
        {
          vmr_rwd_fix_leftarm_DW.tick++;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Show2ndTarget:
      /* During 'Show2ndTarget': '<S23>:1' */
      if (vmr_rwd_fix_leftarm_DW.tick >= vmr_rwd_fix_leftarm_DW.tickCount) {
        /* Transition: '<S23>:14' */
        /* max trial duration specified by tickCount */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_TooSlowState;

        /* Entry 'TooSlowState': '<S23>:95' */
        vmr_rwd_fix_leftarm_B.fdbk_text = -1;

        /* "too slow" */
        vmr_rwd_fix_leftarm_B.targetA_state = 2.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 0.0;

        /* fdbk_text = 1; //"too fast" */
      } else if (vmr_rwd_fix_leftarm_B.distance[(int32_T)
                 (vmr_rwd_fix_leftarm_B.targetA_row - 1.0)] >=
                 vmr_rwd_fix_leftarm_DW.dist) {
        /* Transition: '<S23>:53' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_Miss2ndTarget;

        /* Entry 'Miss2ndTarget': '<S23>:51' */
        /* if hand exceeds target ring, trial is over */
        vmr_rwd_fix_leftarm_B.event_code = E_MISS_TARGET;
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
        vmr_rwd_fix_leftarm_B.reward_state = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      } else if (vmr_rwd_fix_leftarm_B.ArraySelector[(int32_T)
                 (vmr_rwd_fix_leftarm_B.targetB_row - 1.0)] == 1.0) {
        /* Transition: '<S23>:10' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_Hit2ndTarget;

        /* Entry 'Hit2ndTarget': '<S23>:2' */
        /*  change the 2nd target's state, log an event, wait for the rest of the trial to end */
        vmr_rwd_fix_leftarm_B.event_code = E_HIT_TARGET;
      } else {
        if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p)
        {
          vmr_rwd_fix_leftarm_DW.tick++;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StartTargetOn:
      /* During 'StartTargetOn': '<S23>:6' */
      if (vmr_rwd_fix_leftarm_B.ArraySelector[(int32_T)
          (vmr_rwd_fix_leftarm_B.targetA_row - 1.0)] == 1.0) {
        /* Transition: '<S23>:11' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_StayAtFirstTarget;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'StayAtFirstTarget': '<S23>:4' */
        /*  change the first target state (e.g. colour), log an event, wait for specified period of time.  Hand must STAY in target for specified time. */
        vmr_rwd_fix_leftarm_B.event_code = E_STAY_CENTER;
        vmr_rwd_fix_leftarm_DW.tickCount = vmr_rwd_fix_leftarm_B.TPSelector[3];
      }
      break;

     case vmr_rwd_fix_leftarm_IN_StayAtFirstTarget:
      /* During 'StayAtFirstTarget': '<S23>:4' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:9' */
        /*  apply the new rotation amount now (i.e. wait until hand is in the start target so that
           the hand feedback doesn't jump when a new rotation is applied) */
        vmr_rwd_fix_leftarm_B.rotation_on = vmr_rwd_fix_leftarm_B.TPSelector[6];
        vmr_rwd_fix_leftarm_B.handvis_state = vmr_rwd_fix_leftarm_B.TPSelector[8];
        vmr_rwd_fix_leftarm_B.do_clamp = vmr_rwd_fix_leftarm_B.TPSelector[9];

        /* Event: '<S23>:43' */
        vmr_rwd_fix_leftarm_DW.e_ApplyNewRotationEventCounter++;
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_WaitForSound;
      } else {
        if (vmr_rwd_fix_leftarm_B.ArraySelector[(int32_T)
            (vmr_rwd_fix_leftarm_B.targetA_row - 1.0)] == 0.0) {
          /* Transition: '<S23>:18' */
          vmr_rwd_fix_leftarm_DW.is_Main_Trial =
            vmr_rwd_fix_leftarm_IN_StartTargetOn;

          /* Entry 'StartTargetOn': '<S23>:6' */
          /*  Turn on first target, wait until hand-is-in-target */
          vmr_rwd_fix_leftarm_B.targetA_row = vmr_rwd_fix_leftarm_B.TPSelector[0];
          vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
          vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
          vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
          vmr_rwd_fix_leftarm_B.logging_enable = true;
          vmr_rwd_fix_leftarm_DW.reward_type = vmr_rwd_fix_leftarm_B.TPSelector
            [10];
          vmr_rwd_fix_leftarm_B.tone = 0.0;
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_TooSlowState:
      /* During 'TooSlowState': '<S23>:95' */
      /* Transition: '<S23>:96' */
      vmr_rwd_fix_leftarm_DW.is_Main_Trial = vmr_rwd_fix_leftarm_IN_EndOfTrial;

      /* Entry 'EndOfTrial': '<S23>:3' */
      /*  Wait for a specified period of time, */
      vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
      vmr_rwd_fix_leftarm_B.handvis_state = 2.0;
      vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
      vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      break;

     default:
      /* During 'WaitForSound': '<S23>:123' */
      if (vmr_rwd_fix_leftarm_B.Memory1 == 0.0) {
        /* Transition: '<S23>:124' */
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_Show2ndTarget;

        /* Entry 'Show2ndTarget': '<S23>:1' */
        /*  Turn on second target, log an event, wait until hand-is-in-target or wait for specified delay */
        vmr_rwd_fix_leftarm_B.event_code = E_TARGET_ON;
        vmr_rwd_fix_leftarm_B.targetB_row = vmr_rwd_fix_leftarm_B.TPSelector[1];
        vmr_rwd_fix_leftarm_B.targetB_state = (real_T)
          ((vmr_rwd_fix_leftarm_B.rotation_on > 0.0) ||
           (vmr_rwd_fix_leftarm_B.do_clamp > 0.0)) * 2.0 + 1.0;
        vmr_rwd_fix_leftarm_DW.tickCount = vmr_rwd_fix_leftarm_B.TPSelector[4];
        vmr_rwd_fix_leftarm_DW.tick = 0.0;
        vmr_rwd_fix_leftarm_DW.dist = vmr_rwd_fix_leftarm_B.distance_e[32];
      }
      break;
    }
  }
}

/* Function for Chart: '<Root>/Trial_Control' */
static void vmr_rwd_fix_leftarm_chartstep_c1_vmr_rwd_fix_leftarm(void)
{
  /* During: Trial_Control */
  if (vmr_rwd_fix_leftarm_DW.is_active_c1_vmr_rwd_fix_leftarm == 0U) {
    /* Entry: Trial_Control */
    vmr_rwd_fix_leftarm_DW.is_active_c1_vmr_rwd_fix_leftarm = 1U;

    /* Entry Internal: Trial_Control */
    /* Transition: '<S23>:13' */
    vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
      vmr_rwd_fix_leftarm_IN_Initialize;
    vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

    /* Entry 'Initialize': '<S23>:7' */
    /*  Turn off both targets, set hand_feedback on */
    vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
    vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
    vmr_rwd_fix_leftarm_B.reward_state = 0.0;
    vmr_rwd_fix_leftarm_B.score = 0;
    vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
    vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
    vmr_rwd_fix_leftarm_DW.reward_type = 0.0;
    vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
    vmr_rwd_fix_leftarm_B.fdbk_text = 0;
    vmr_rwd_fix_leftarm_B.robot_enable_controller = false;
  } else {
    switch (vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm) {
     case vmr_rwd_fix_leftarm_IN_EndInstructPause:
      /* During 'EndInstructPause': '<S23>:110' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:111' */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_ReturnToStart1;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'ReturnToStart1': '<S23>:102' */
        vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
        vmr_rwd_fix_leftarm_B.reward_state = 0.0;
        vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Ending:
      /* During 'Ending': '<S23>:77' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= 1U)) {
        /* Transition: '<S23>:79' */
        /* continue if a regular trial comes after! */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_EndInstructPause;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'EndInstructPause': '<S23>:110' */
        vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
        vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
        vmr_rwd_fix_leftarm_DW.tickCount = 800.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_InitStartTarget:
      /* During 'InitStartTarget': '<S23>:118' */
      if ((vmr_rwd_fix_leftarm_B.ArraySelector[(int32_T)
           (vmr_rwd_fix_leftarm_B.targetA_row - 1.0)] == 1.0) &&
          (vmr_rwd_fix_leftarm_B.Taskwideparam[12] == 1.0)) {
        /* Transition: '<S23>:119' */
        /* if we want to hold the left hand, enable the robot */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_MoveHandAway;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'MoveHandAway': '<S23>:116' */
        vmr_rwd_fix_leftarm_B.robot_enable_controller = true;
        vmr_rwd_fix_leftarm_DW.tickCount = vmr_rwd_fix_leftarm_B.Taskwideparam
          [13];
        vmr_rwd_fix_leftarm_DW.tickCount += vmr_rwd_fix_leftarm_B.Taskwideparam
          [14];
      } else {
        if (vmr_rwd_fix_leftarm_B.Taskwideparam[12] != 1.0) {
          /* Transition: '<S23>:121' */
          /* if we aren't going to enable the robot */
          if (vmr_rwd_fix_leftarm_B.TPSelector[11] <= 0.0) {
            /* Transition: '<S23>:19' */
            /* the first trial is a target trial */
            vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
              vmr_rwd_fix_leftarm_IN_Main_Trial;
            vmr_rwd_fix_leftarm_DW.is_Main_Trial =
              vmr_rwd_fix_leftarm_IN_StartTargetOn;

            /* Entry 'StartTargetOn': '<S23>:6' */
            /*  Turn on first target, wait until hand-is-in-target */
            vmr_rwd_fix_leftarm_B.targetA_row =
              vmr_rwd_fix_leftarm_B.TPSelector[0];
            vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
            vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
            vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
            vmr_rwd_fix_leftarm_B.logging_enable = true;
            vmr_rwd_fix_leftarm_DW.reward_type =
              vmr_rwd_fix_leftarm_B.TPSelector[10];
            vmr_rwd_fix_leftarm_B.tone = 0.0;
          } else {
            /* the first trial is an instruction trial */
            if (vmr_rwd_fix_leftarm_B.TPSelector[11] > 0.0) {
              /* Transition: '<S23>:97' */
              vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
                vmr_rwd_fix_leftarm_IN_ShowInstructState;

              /* Entry 'ShowInstructState': '<S23>:90' */
              vmr_rwd_fix_leftarm_B.event_code =
                vmr_rwd_fix_leftarm_P.Trial_Control_E_SHOW_INSTRUCT;
              vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
              vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
              vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
              vmr_rwd_fix_leftarm_B.reward_state = 0.0;
              vmr_rwd_fix_leftarm_B.instruct_num =
                vmr_rwd_fix_leftarm_B.TPSelector[11];
              vmr_rwd_fix_leftarm_DW.tickCount =
                vmr_rwd_fix_leftarm_B.Taskwideparam[8];
            }
          }
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Initialize:
      /* During 'Initialize': '<S23>:7' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= 1U)) {
        /* Transition: '<S23>:113' */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_InitStartTarget;

        /* Entry 'InitStartTarget': '<S23>:118' */
        /*  Turn on first target, wait until hand-is-in-target */
        vmr_rwd_fix_leftarm_B.targetA_row = vmr_rwd_fix_leftarm_B.TPSelector[0];
        vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_InstructWaitState:
      /* During 'InstructWaitState': '<S23>:104' */
      if (vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_cntl_btn)
      {
        /* Transition: '<S23>:105' */
        vmr_rwd_fix_leftarm_B.event_code = 22.0;
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_Ending;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'Ending': '<S23>:77' */
        /* end the special "show score" state */
        /* Event: '<S23>:46' */
        vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter++;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Inter_Trial_Hold:
      /* During 'Inter_Trial_Hold': '<S23>:73' */
      if ((vmr_rwd_fix_leftarm_B.distance[(int32_T)
           (vmr_rwd_fix_leftarm_B.targetA_row - 1.0)] <=
           vmr_rwd_fix_leftarm_B.Taskwideparam[5]) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:64' */
        /* if the hand is close to the start, turn vision of the hand back on */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_ReturnToStart;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'ReturnToStart': '<S23>:63' */
        /* targetA_state=1; */
        vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
        vmr_rwd_fix_leftarm_B.reward_state = 0.0;
        vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
        vmr_rwd_fix_leftarm_DW.tickCount = 50.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Inter_Trial_State:
      /* During 'Inter_Trial_State': '<S23>:5' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= 1U)) {
        /* Transition: '<S23>:75' */
        if (vmr_rwd_fix_leftarm_B.TPSelector[11] == 0.0) {
          /* Transition: '<S23>:71' */
          vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_ReturnToStart1;
          vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

          /* Entry 'ReturnToStart1': '<S23>:102' */
          vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
          vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
          vmr_rwd_fix_leftarm_B.reward_state = 0.0;
          vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
        } else if (vmr_rwd_fix_leftarm_B.TPSelector[11] == -1.0) {
          /* Transition: '<S23>:76' */
          vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_ShowScoreState;
          vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

          /* Entry 'ShowScoreState': '<S23>:72' */
          vmr_rwd_fix_leftarm_B.event_code = E_SHOW_SCORE;
          vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
          vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
          vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
          vmr_rwd_fix_leftarm_B.reward_state = 2.0;
          vmr_rwd_fix_leftarm_DW.tickCount =
            vmr_rwd_fix_leftarm_B.Taskwideparam[7];
        } else {
          if (vmr_rwd_fix_leftarm_B.TPSelector[11] > 0.0) {
            /* Transition: '<S23>:91' */
            vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
              vmr_rwd_fix_leftarm_IN_ShowInstructState;

            /* Entry 'ShowInstructState': '<S23>:90' */
            vmr_rwd_fix_leftarm_B.event_code =
              vmr_rwd_fix_leftarm_P.Trial_Control_E_SHOW_INSTRUCT;
            vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
            vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
            vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
            vmr_rwd_fix_leftarm_B.reward_state = 0.0;
            vmr_rwd_fix_leftarm_B.instruct_num =
              vmr_rwd_fix_leftarm_B.TPSelector[11];
            vmr_rwd_fix_leftarm_DW.tickCount =
              vmr_rwd_fix_leftarm_B.Taskwideparam[8];
          }
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_Main_Trial:
      vmr_rwd_fix_leftarm_Main_Trial();
      break;

     case vmr_rwd_fix_leftarm_IN_MoveHandAway:
      /* During 'MoveHandAway': '<S23>:116' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:117' */
        if (vmr_rwd_fix_leftarm_B.TPSelector[11] <= 0.0) {
          /* Transition: '<S23>:19' */
          /* the first trial is a target trial */
          vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_Main_Trial;
          vmr_rwd_fix_leftarm_DW.is_Main_Trial =
            vmr_rwd_fix_leftarm_IN_StartTargetOn;

          /* Entry 'StartTargetOn': '<S23>:6' */
          /*  Turn on first target, wait until hand-is-in-target */
          vmr_rwd_fix_leftarm_B.targetA_row = vmr_rwd_fix_leftarm_B.TPSelector[0];
          vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
          vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
          vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
          vmr_rwd_fix_leftarm_B.logging_enable = true;
          vmr_rwd_fix_leftarm_DW.reward_type = vmr_rwd_fix_leftarm_B.TPSelector
            [10];
          vmr_rwd_fix_leftarm_B.tone = 0.0;
        } else {
          /* the first trial is an instruction trial */
          if (vmr_rwd_fix_leftarm_B.TPSelector[11] > 0.0) {
            /* Transition: '<S23>:97' */
            vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
              vmr_rwd_fix_leftarm_IN_ShowInstructState;

            /* Entry 'ShowInstructState': '<S23>:90' */
            vmr_rwd_fix_leftarm_B.event_code =
              vmr_rwd_fix_leftarm_P.Trial_Control_E_SHOW_INSTRUCT;
            vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
            vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
            vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
            vmr_rwd_fix_leftarm_B.reward_state = 0.0;
            vmr_rwd_fix_leftarm_B.instruct_num =
              vmr_rwd_fix_leftarm_B.TPSelector[11];
            vmr_rwd_fix_leftarm_DW.tickCount =
              vmr_rwd_fix_leftarm_B.Taskwideparam[8];
          }
        }
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReturnToStart:
      /* During 'ReturnToStart': '<S23>:63' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:100' */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_Inter_Trial_State;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'Inter_Trial_State': '<S23>:5' */
        /*  send e_Trial_End event */
        /* Event: '<S23>:46' */
        vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter++;

        /*  turn off both targets
           stop data logging */
        vmr_rwd_fix_leftarm_B.event_code = 0.0;
        vmr_rwd_fix_leftarm_B.targetA_state = 1.0;

        /* don't shut off */
        vmr_rwd_fix_leftarm_B.targetB_state = 0.0;

        /* logging_enable = 0; */
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        vmr_rwd_fix_leftarm_B.fdbk_text = 0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ReturnToStart1:
      /* During 'ReturnToStart1': '<S23>:102' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= 1U)) {
        /* Transition: '<S23>:16' */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_Main_Trial;
        vmr_rwd_fix_leftarm_DW.is_Main_Trial =
          vmr_rwd_fix_leftarm_IN_StartTargetOn;

        /* Entry 'StartTargetOn': '<S23>:6' */
        /*  Turn on first target, wait until hand-is-in-target */
        vmr_rwd_fix_leftarm_B.targetA_row = vmr_rwd_fix_leftarm_B.TPSelector[0];
        vmr_rwd_fix_leftarm_B.targetA_state = 1.0;
        vmr_rwd_fix_leftarm_B.handvis_state = 1.0;
        vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
        vmr_rwd_fix_leftarm_B.logging_enable = true;
        vmr_rwd_fix_leftarm_DW.reward_type = vmr_rwd_fix_leftarm_B.TPSelector[10];
        vmr_rwd_fix_leftarm_B.tone = 0.0;
      }
      break;

     case vmr_rwd_fix_leftarm_IN_ShowInstructState:
      /* During 'ShowInstructState': '<S23>:90' */
      /* Transition: '<S23>:92' */
      vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
        vmr_rwd_fix_leftarm_IN_InstructWaitState;

      /* Entry 'InstructWaitState': '<S23>:104' */
      /* "pause" here until the button has been clicked */
      break;

     default:
      /* During 'ShowScoreState': '<S23>:72' */
      if ((vmr_rwd_fix_leftarm_DW.sfEvent == vmr_rwd_fix_leftarm_event_e_clk_p) &&
          (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 >= (uint32_T)
           vmr_rwd_fix_leftarm_DW.tickCount)) {
        /* Transition: '<S23>:78' */
        vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_Ending;
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;

        /* Entry 'Ending': '<S23>:77' */
        /* end the special "show score" state */
        /* Event: '<S23>:46' */
        vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter++;
      }
      break;
    }
  }
}

/* Function for MATLAB Function: '<S264>/Embedded MATLAB Function' */
static uint32_T vmr_rwd_fix_leftarm_colourshift_b(real_T RRRGGGBBB)
{
  uint32_T RRGGBBAA;
  uint32_T blue;
  uint32_T green;
  uint32_T q0;
  uint32_T qY;
  uint64_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /*  The colourshift function converts an "RRRGGGBBB" colour value to RRGBB (as an uint32). */
  /* this is "no fill" */
  if (RRRGGGBBB == 1.0E+9) {
    /* '<S265>:1:232' */
    /* '<S265>:1:233' */
    RRGGBBAA = 16777216U;

    /* hex 0x1000000 */
  } else {
    /* '<S265>:1:237' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - floor(RRRGGGBBB / 1000.0) * 1000.0);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        blue = (uint32_T)tmp_1;
      } else {
        blue = 0U;
      }
    } else {
      blue = MAX_uint32_T;
    }

    /* '<S265>:1:238' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)blue);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        green = (uint32_T)tmp_1;
      } else {
        green = 0U;
      }
    } else {
      green = MAX_uint32_T;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)(green - green / 1000000U * 1000000U)
      / 1000.0);
    green = (uint32_T)tmp_0;

    /* '<S265>:1:239' */
    /* '<S265>:1:241' */
    tmp = green * 1000ULL;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)(uint32_T)tmp);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        q0 = (uint32_T)tmp_1;
      } else {
        q0 = 0U;
      }
    } else {
      q0 = MAX_uint32_T;
    }

    qY = q0 - blue;
    if (qY > q0) {
      qY = 0U;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)qY / 1.0E+6);
    tmp = (uint64_T)(((uint32_T)tmp_0 << 16U) + (green << 8U)) + blue;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    RRGGBBAA = (uint32_T)tmp;
  }

  return RRGGBBAA;
}

/* Function for MATLAB Function: '<S330>/Embedded MATLAB Function' */
static uint32_T vmr_rwd_fix_leftarm_colourshift_n(real_T RRRGGGBBB)
{
  uint32_T RRGGBBAA;
  uint32_T blue;
  uint32_T green;
  uint32_T q0;
  uint32_T qY;
  uint64_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /*  The colourshift function converts an "RRRGGGBBB" colour value to RRGBB (as an uint32). */
  /* this is "no fill" */
  if (RRRGGGBBB == 1.0E+9) {
    /* '<S334>:1:203' */
    /* '<S334>:1:204' */
    RRGGBBAA = 16777216U;

    /* hex 0x1000000 */
  } else {
    /* '<S334>:1:208' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - floor(RRRGGGBBB / 1000.0) * 1000.0);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        blue = (uint32_T)tmp_1;
      } else {
        blue = 0U;
      }
    } else {
      blue = MAX_uint32_T;
    }

    /* '<S334>:1:209' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)blue);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        green = (uint32_T)tmp_1;
      } else {
        green = 0U;
      }
    } else {
      green = MAX_uint32_T;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)(green - green / 1000000U * 1000000U)
      / 1000.0);
    green = (uint32_T)tmp_0;

    /* '<S334>:1:210' */
    /* '<S334>:1:212' */
    tmp = green * 1000ULL;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)(uint32_T)tmp);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        q0 = (uint32_T)tmp_1;
      } else {
        q0 = 0U;
      }
    } else {
      q0 = MAX_uint32_T;
    }

    qY = q0 - blue;
    if (qY > q0) {
      qY = 0U;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)qY / 1.0E+6);
    tmp = (uint64_T)(((uint32_T)tmp_0 << 16U) + (green << 8U)) + blue;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    RRGGBBAA = (uint32_T)tmp;
  }

  return RRGGBBAA;
}

/* Function for MATLAB Function: '<S331>/Embedded MATLAB Function' */
static uint32_T vmr_rwd_fix_leftarm_colourshift_l(real_T RRRGGGBBB)
{
  uint32_T RRGGBBAA;
  uint32_T blue;
  uint32_T green;
  uint32_T q0;
  uint32_T qY;
  uint64_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /*  The colourshift function converts an "RRRGGGBBB" colour value to RRGBB (as an uint32). */
  /* this is "no fill" */
  if (RRRGGGBBB == 1.0E+9) {
    /* '<S335>:1:203' */
    /* '<S335>:1:204' */
    RRGGBBAA = 16777216U;

    /* hex 0x1000000 */
  } else {
    /* '<S335>:1:208' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - floor(RRRGGGBBB / 1000.0) * 1000.0);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        blue = (uint32_T)tmp_1;
      } else {
        blue = 0U;
      }
    } else {
      blue = MAX_uint32_T;
    }

    /* '<S335>:1:209' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)blue);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        green = (uint32_T)tmp_1;
      } else {
        green = 0U;
      }
    } else {
      green = MAX_uint32_T;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)(green - green / 1000000U * 1000000U)
      / 1000.0);
    green = (uint32_T)tmp_0;

    /* '<S335>:1:210' */
    /* '<S335>:1:212' */
    tmp = green * 1000ULL;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)(uint32_T)tmp);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        q0 = (uint32_T)tmp_1;
      } else {
        q0 = 0U;
      }
    } else {
      q0 = MAX_uint32_T;
    }

    qY = q0 - blue;
    if (qY > q0) {
      qY = 0U;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)qY / 1.0E+6);
    tmp = (uint64_T)(((uint32_T)tmp_0 << 16U) + (green << 8U)) + blue;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    RRGGBBAA = (uint32_T)tmp;
  }

  return RRGGBBAA;
}

/* Function for MATLAB Function: '<S310>/Embedded MATLAB Function' */
static uint32_T vmr_rwd_fix_leftarm_colourshift_h(real_T RRRGGGBBB)
{
  uint32_T RRGGBBAA;
  uint32_T blue;
  uint32_T green;
  uint32_T q0;
  uint32_T qY;
  uint64_T tmp;
  int32_T tmp_0;
  real_T tmp_1;

  /*  The colourshift function converts an "RRRGGGBBB" colour value to RRGBB (as an uint32). */
  /* this is "no fill" */
  if (RRRGGGBBB == 1.0E+9) {
    /* '<S324>:1:203' */
    /* '<S324>:1:204' */
    RRGGBBAA = 16777216U;

    /* hex 0x1000000 */
  } else {
    /* '<S324>:1:208' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - floor(RRRGGGBBB / 1000.0) * 1000.0);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        blue = (uint32_T)tmp_1;
      } else {
        blue = 0U;
      }
    } else {
      blue = MAX_uint32_T;
    }

    /* '<S324>:1:209' */
    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)blue);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        green = (uint32_T)tmp_1;
      } else {
        green = 0U;
      }
    } else {
      green = MAX_uint32_T;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)(green - green / 1000000U * 1000000U)
      / 1000.0);
    green = (uint32_T)tmp_0;

    /* '<S324>:1:210' */
    /* '<S324>:1:212' */
    tmp = green * 1000ULL;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    tmp_1 = rt_roundd_snf(RRRGGGBBB - (real_T)(uint32_T)tmp);
    if (tmp_1 < 4.294967296E+9) {
      if (tmp_1 >= 0.0) {
        q0 = (uint32_T)tmp_1;
      } else {
        q0 = 0U;
      }
    } else {
      q0 = MAX_uint32_T;
    }

    qY = q0 - blue;
    if (qY > q0) {
      qY = 0U;
    }

    tmp_0 = (int32_T)rt_roundd_snf((real_T)qY / 1.0E+6);
    tmp = (uint64_T)(((uint32_T)tmp_0 << 16U) + (green << 8U)) + blue;
    if (tmp > 4294967295ULL) {
      tmp = 4294967295ULL;
    }

    RRGGBBAA = (uint32_T)tmp;
  }

  return RRGGBBAA;
}

/* Function for MATLAB Function: '<S308>/FF_FB_Position_Controller' */
static void vmr_rwd_fix_leftarm_diag(const real_T v[2], real_T d[4])
{
  d[1] = 0.0;
  d[2] = 0.0;
  d[0] = v[0];
  d[3] = v[1];
}

/* Function for MATLAB Function: '<S286>/clip_motor_torque' */
static void vmr_rwd_fix_leftarm_update_torques(const real_T torques[2], real_T
  motor_limits, real_T robot_orientation, real_T new_torques[2])
{
  real_T motor1Torque;
  real_T motor2Torque;

  /*  Given a set og shoulder and elbow torques, convert to motor torques, */
  /*  clip, then convert back. */
  /* '<S287>:1:13' */
  motor1Torque = (torques[0] - torques[1]) * robot_orientation;

  /* '<S287>:1:14' */
  motor2Torque = torques[1] * robot_orientation;
  if (fabs(motor1Torque) > motor_limits) {
    /* '<S287>:1:16' */
    /* '<S287>:1:17' */
    if (motor1Torque < 0.0) {
      motor1Torque = -1.0;
    } else if (motor1Torque > 0.0) {
      motor1Torque = 1.0;
    } else {
      if (motor1Torque == 0.0) {
        motor1Torque = 0.0;
      }
    }

    motor1Torque *= motor_limits;
  }

  if (fabs(motor2Torque) > motor_limits) {
    /* '<S287>:1:20' */
    /* '<S287>:1:21' */
    if (motor2Torque < 0.0) {
      motor2Torque = -1.0;
    } else if (motor2Torque > 0.0) {
      motor2Torque = 1.0;
    } else {
      if (motor2Torque == 0.0) {
        motor2Torque = 0.0;
      }
    }

    motor2Torque *= motor_limits;
  }

  /* '<S287>:1:24' */
  /* '<S287>:1:25' */
  new_torques[1] = motor2Torque / robot_orientation;

  /* '<S287>:1:26' */
  new_torques[0] = motor1Torque / robot_orientation + new_torques[1];
}

/* Model output function for TID0 */
static void vmr_rwd_fix_leftarm_output0(void) /* Sample time: [0.0s, 0.0s] */
{
  real_T hold_steps;
  int32_T iy;
  int32_T ixstart;
  real_T b_x[50];
  real_T deltax[32];
  real_T deltay[32];
  real_T t[32];
  real_T sint[32];
  real_T xrotate[32];
  real_T yrotate[32];
  real_T m[32];
  real_T w[32];
  real_T h[32];
  real_T p[32];
  real_T n[32];
  real_T alpha[32];
  real_T length2[32];
  boolean_T is_under_left[32];
  boolean_T is_under_right[32];
  real_T g[32];
  real_T opacity;
  real_T stroke_colour_col;
  real_T stroke_width_col;
  int32_T n2d;
  static const char_T text1[12] = { 'Y', 'o', 'u', ' ', 'e', 'a', 'r', 'n', 'e',
    'd', ' ', '$' };

  static const char_T c[9] = { 'T', 'o', 'o', ' ', 'F', 'a', 's', 't', '!' };

  static const char_T d[9] = { 'T', 'o', 'o', ' ', 'S', 'l', 'o', 'w', '!' };

  static const char_T b_text1[11] = { 'Y', 'o', 'u', ' ', 'e', 'a', 'r', 'n',
    'e', 'd', ' ' };

  static const char_T text2[7] = { ' ', 'c', 'e', 'n', 't', 's', '!' };

  real_T T[4];
  real32_T ss[2];
  real_T inertia_option_for_FF;
  real_T arm;
  real_T orientation;
  real_T Elbow_Max_Scale_Factor;
  real_T Forearm_Min_Scale_Factor;
  real_T Forearm_Max_Scale_Factor;
  real_T prct_L1_L_h;
  real_T prct_L1_L_fa;
  real_T prct_M_h;
  real_T prct_M_fa;
  real_T prct_M_ua;
  real_T prct_L_h_C_h;
  real_T prct_L_fa_C_fa;
  real_T prct_L1_C_ua;
  real_T prct_L_h_rho_h;
  real_T prct_L_fa_rho_fa;
  real_T prct_L1_rho_ua;
  real_T M_sbj;
  real_T I1_prox;
  real_T I2_5_prox;
  real_T I3_prox;
  real_T Im2;
  real_T M2;
  real_T M4;
  real_T L3;
  real_T delta;
  real_T x2;
  real_T y2_anterior;
  real_T x4;
  real_T Itr_ua;
  real_T Mtr_ua;
  real_T xtr_ua;
  real_T Mtr_fa_h;
  real_T xtr_fa_h;
  real_T b[4];
  static const real_T FILTER_50Hz[6] = { 180.4169259, 684.7831502, -0.8008026467,
    -0.8948743446, 1.7786317778, 1.8890330794 };

  static const real_T FILTER_40Hz[6] = { 276.1148367, 1058.546241, -0.8371816513,
    -0.9149758348, 1.8226949252, 1.9111970674 };

  static const real_T FILTER_10Hz[6] = { 4143.204922, 16391.78228, -0.9565436765,
    -0.9780305085, 1.9555782403, 1.9777864838 };

  ZCEventType zcEvent;
  int32_T i;
  real_T m_0[32];
  real_T t_0[32];
  int32_T i_0;
  real_T tmp[7];
  boolean_T tmp_0;
  real_T tmp_1[20];
  real_T tmp_2[20];
  real_T tmp_3[45];
  char_T b_text1_0[20];
  char_T b_text1_1[19];
  real_T tmp_4[30];
  real_T tmp_5[20];
  real_T tmp_6[4];
  real_T tmp_7[20];
  real_T tmp_8[20];
  real_T tmp_9[20];
  real_T tmp_a[4];
  int32_T c_data[8];
  char_T textout_data[20];
  char_T textdollars_data[2];
  uint8_T textnum_data[20];
  int32_T textdollars_sizes_idx_1;
  boolean_T zcEvent_idx_0;
  boolean_T zcEvent_idx_1;
  boolean_T zcEvent_idx_2;
  char_T textcents_idx_0;
  char_T textcents_idx_1;
  int8_T varargin_1_idx_0;
  real_T tgt_vec_idx_0;
  real_T tgt_vec_idx_1;
  real_T Kp_1_idx_3;
  real_T Kp_2_idx_3;
  real_T Kv_idx_3;
  real_T Kv_1_idx_3;
  real_T Kv_2_idx_3;
  real_T Kp_1_idx_0;
  real_T Kp_2_idx_0;
  real_T Kv_idx_0;
  real_T Kv_1_idx_0;
  real_T Kv_2_idx_0;
  real_T state_idx_0;
  real_T state_idx_1;
  real_T error_vel_idx_0;
  real_T error_vel_idx_1;
  real_T opacity_idx_0;
  real_T opacity_idx_1;
  real_T error_vel_primary_idx_0;
  real_T error_vel_primary_idx_1;
  uint32_T tmp_b;
  int64_T tmp_c;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.UDPSendSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.SendControlMachine_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.plate1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.plate2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_SubsysRanBC_h);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_SubsysRanBC_h);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Arm1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.M1AbsEncCalibration_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.M2AbsEncCalibration_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Arm2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.DataTransferStartSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.ReadDPRAM_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.WriteDPRAM_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.read_pmac_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Datareceive_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.updateconstantssubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Datawrite_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.update_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.updatesettings_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.createKINData_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.EtherCATApplyLoads_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.applypmacloads_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.TaskExecutionControlMachine_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down.Ramp_Up_Down_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Chart_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.Trial_Control_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.TriggeredSubsystem_SubsysRanBC);

  /* Level2 S-Function Block: '<S5>/ICH7' (ich10) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[40];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S5>/Block Definitions' */
  memcpy(&vmr_rwd_fix_leftarm_B.BlockDefinitions[0],
         &vmr_rwd_fix_leftarm_P.BlockDefinitions_Value[0], 25000U * sizeof
         (real_T));

  /* Constant: '<S5>/Block Sequence' */
  memcpy(&vmr_rwd_fix_leftarm_B.BlockSequence[0],
         &vmr_rwd_fix_leftarm_P.BlockSequence_Value[0], 2000U * sizeof(real_T));

  /* Level2 S-Function Block: '<S267>/Run Command Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[41];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<S267>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion =
    vmr_rwd_fix_leftarm_B.RunCommandReceive_o1;

  /* MATLAB Function: '<S267>/Embedded MATLAB Function' */
  /* MATLAB Function 'GUI Control/Run Command Subsystem/Embedded MATLAB Function': '<S272>:1' */
  /*  This block determines the run_command input of the task execution control */
  /*  subsystem (y), as well as the value of the task control button Goto (z). */
  /*  To the run_command input, only output a 1 or a 0 ('run' or 'pause') */
  /*  according to the last received status for the Go/Pause button. */
  if ((vmr_rwd_fix_leftarm_B.DataTypeConversion < 2.0) &&
      (vmr_rwd_fix_leftarm_DW.u != vmr_rwd_fix_leftarm_B.DataTypeConversion)) {
    /* '<S272>:1:18' */
    /* '<S272>:1:19' */
    vmr_rwd_fix_leftarm_DW.u = vmr_rwd_fix_leftarm_B.DataTypeConversion;
  }

  /* '<S272>:1:22' */
  vmr_rwd_fix_leftarm_B.y_b = vmr_rwd_fix_leftarm_DW.u;

  /*  To the Goto block, only output a non-zero value on the first receipt of  */
  /*  a block index > 1 (i.e. not the Go/Pause button). */
  if ((vmr_rwd_fix_leftarm_B.DataTypeConversion > 1.0) &&
      (vmr_rwd_fix_leftarm_B.DataTypeConversion != vmr_rwd_fix_leftarm_DW.v)) {
    /* '<S272>:1:26' */
    /* '<S272>:1:27' */
    vmr_rwd_fix_leftarm_DW.v = vmr_rwd_fix_leftarm_B.DataTypeConversion;
    if (vmr_rwd_fix_leftarm_DW.v == 255.0) {
      /* '<S272>:1:28' */
      /* '<S272>:1:29' */
      vmr_rwd_fix_leftarm_B.z = 0.0;
    } else {
      /* '<S272>:1:31' */
      vmr_rwd_fix_leftarm_B.z = vmr_rwd_fix_leftarm_DW.v;
    }
  } else {
    /* '<S272>:1:34' */
    vmr_rwd_fix_leftarm_B.z = 0.0;
  }

  /* End of MATLAB Function: '<S267>/Embedded MATLAB Function' */

  /* DataTypeConversion: '<S267>/Data Type Conversion1' */
  tgt_vec_idx_1 = floor(vmr_rwd_fix_leftarm_B.y_b);
  if (rtIsNaN(tgt_vec_idx_1) || rtIsInf(tgt_vec_idx_1)) {
    tgt_vec_idx_1 = 0.0;
  } else {
    tgt_vec_idx_1 = fmod(tgt_vec_idx_1, 256.0);
  }

  vmr_rwd_fix_leftarm_B.DataTypeConversion1_gw = (uint8_T)(tgt_vec_idx_1 < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tgt_vec_idx_1 : (int32_T)(uint8_T)
    tgt_vec_idx_1);

  /* End of DataTypeConversion: '<S267>/Data Type Conversion1' */

  /* Constant: '<S5>/Pause Type' */
  vmr_rwd_fix_leftarm_B.PauseType = vmr_rwd_fix_leftarm_P.PauseType_Value;

  /* DataTypeConversion: '<S5>/Convert18' incorporates:
   *  Constant: '<S5>/Seed'
   */
  vmr_rwd_fix_leftarm_B.Convert18 = vmr_rwd_fix_leftarm_P.Seed_Value;

  /* Constant: '<S5>/Use Task Protocol Block Sequence Flag' */
  vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag =
    vmr_rwd_fix_leftarm_P.UseTaskProtocolBlockSequenceFlag_Value;

  /* Constant: '<S5>/Next Block' */
  vmr_rwd_fix_leftarm_B.NextBlock = vmr_rwd_fix_leftarm_P.NextBlock_Value;

  /* Outputs for Atomic SubSystem: '<S5>/Task Execution Control Subsystem' */
  vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem();

  /* End of Outputs for SubSystem: '<S5>/Task Execution Control Subsystem' */

  /* DataTypeConversion: '<S5>/Convert16' */
  vmr_rwd_fix_leftarm_B.Convert16 = vmr_rwd_fix_leftarm_B.DataTypeConversion2_n;

  /* DataTypeConversion: '<S5>/Convert17' */
  vmr_rwd_fix_leftarm_B.Convert17 = vmr_rwd_fix_leftarm_B.Product_i;

  /* DataTypeConversion: '<S5>/Convert19' */
  vmr_rwd_fix_leftarm_B.Convert19_b = vmr_rwd_fix_leftarm_B.trial_in_set;

  /* DataTypeConversion: '<S5>/Convert20' */
  vmr_rwd_fix_leftarm_B.Convert20 = vmr_rwd_fix_leftarm_B.task_status;

  /* DataTypeConversion: '<S5>/Convert21' */
  vmr_rwd_fix_leftarm_B.Convert21 = vmr_rwd_fix_leftarm_B.block_in_set;

  /* DataTypeConversion: '<S5>/Convert22' */
  vmr_rwd_fix_leftarm_B.Convert22 = vmr_rwd_fix_leftarm_B.trial_in_block;

  /* DataTypeConversion: '<S5>/Convert23' */
  vmr_rwd_fix_leftarm_B.Convert23 = vmr_rwd_fix_leftarm_B.block;

  /* DataTypeConversion: '<S5>/Convert24' */
  vmr_rwd_fix_leftarm_B.Convert24 = vmr_rwd_fix_leftarm_B.tp;

  /* DataTypeConversion: '<S5>/Convert25' */
  vmr_rwd_fix_leftarm_B.Convert25 = (vmr_rwd_fix_leftarm_B.repeat_last_trial !=
    0.0);

  /* MinMax: '<S5>/MinMax' incorporates:
   *  Constant: '<S5>/Constant'
   */
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.Convert24;
  hold_steps = vmr_rwd_fix_leftarm_P.Constant_Value_h;
  if ((tgt_vec_idx_1 >= hold_steps) || rtIsNaN(hold_steps)) {
    hold_steps = tgt_vec_idx_1;
  }

  vmr_rwd_fix_leftarm_B.MinMax = hold_steps;

  /* End of MinMax: '<S5>/MinMax' */

  /* DataTypeConversion: '<S267>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2 = vmr_rwd_fix_leftarm_B.z;

  /* MATLAB Function: '<S267>/Hold_to_1Khz' */
  /* MATLAB Function 'GUI Control/Run Command Subsystem/Hold_to_1Khz': '<S273>:1' */
  /*  This block determines the run_command input of the task execution control */
  /*  subsystem (y), as well as the value of the task control button Goto (z). */
  /* How many time steps does the value need to be held in order to make a 1 */
  /* kHz signal? This will normally be 2 or 4. */
  /* '<S273>:1:9' */
  hold_steps = 0.001 / vmr_rwd_fix_leftarm_P.Hold_to_1Khz_BKIN_STEP_TIME;
  if (vmr_rwd_fix_leftarm_B.DataTypeConversion2 != 0.0) {
    /* '<S273>:1:18' */
    if (1.0 > hold_steps) {
      iy = 0;
    } else {
      iy = (int32_T)hold_steps;
    }

    for (i_0 = 0; i_0 < iy; i_0++) {
      c_data[i_0] = i_0;
    }

    /* '<S273>:1:19' */
    for (i_0 = 0; i_0 < iy; i_0++) {
      vmr_rwd_fix_leftarm_DW.held_value[c_data[i_0]] =
        vmr_rwd_fix_leftarm_B.DataTypeConversion2;
    }
  }

  /* '<S273>:1:22' */
  vmr_rwd_fix_leftarm_B.value = vmr_rwd_fix_leftarm_DW.held_value[0];

  /* '<S273>:1:23' */
  for (i_0 = 0; i_0 < 7; i_0++) {
    tmp[i_0] = vmr_rwd_fix_leftarm_DW.held_value[1 + i_0];
  }

  for (i_0 = 0; i_0 < 7; i_0++) {
    vmr_rwd_fix_leftarm_DW.held_value[i_0] = tmp[i_0];
  }

  /* '<S273>:1:24' */
  vmr_rwd_fix_leftarm_DW.held_value[7] = 0.0;

  /* End of MATLAB Function: '<S267>/Hold_to_1Khz' */

  /* Selector: '<S5>/TP Selector' incorporates:
   *  Constant: '<S5>/TP Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.MinMax;
  for (i = 0; i < 50; i++) {
    vmr_rwd_fix_leftarm_B.TPSelector[i] = vmr_rwd_fix_leftarm_P.TPTable_Value
      [(100 * i + i_0) - 1];
  }

  /* End of Selector: '<S5>/TP Selector' */

  /* DataTypeConversion: '<S5>/Convert1' incorporates:
   *  Constant: '<S5>/Target Labels'
   */
  memcpy(&vmr_rwd_fix_leftarm_B.Convert1[0],
         &vmr_rwd_fix_leftarm_P.TargetLabels_Value[0], 5000U * sizeof(real_T));

  /* DataTypeConversion: '<S5>/Convert10' incorporates:
   *  Constant: '<S5>/Display Size (pels)'
   */
  vmr_rwd_fix_leftarm_B.Convert10[0] =
    vmr_rwd_fix_leftarm_P.DisplaySizepels_Value[0];
  vmr_rwd_fix_leftarm_B.Convert10[1] =
    vmr_rwd_fix_leftarm_P.DisplaySizepels_Value[1];

  /* DataTypeConversion: '<S5>/Convert11' incorporates:
   *  Constant: '<S5>/Docking Points'
   */
  memcpy(&vmr_rwd_fix_leftarm_B.Convert11[0],
         &vmr_rwd_fix_leftarm_P.DockingPoints_Value[0], 10U * sizeof(real_T));

  /* DataTypeConversion: '<S5>/Convert12' incorporates:
   *  Constant: '<S5>/EL Camera Focal Length'
   */
  vmr_rwd_fix_leftarm_B.Convert12 =
    vmr_rwd_fix_leftarm_P.ELCameraFocalLength_Value_b;

  /* DataTypeConversion: '<S5>/Convert13' incorporates:
   *  Constant: '<S5>/EL Camera Position'
   */
  vmr_rwd_fix_leftarm_B.Convert13[0] =
    vmr_rwd_fix_leftarm_P.ELCameraPosition_Value_k[0];
  vmr_rwd_fix_leftarm_B.Convert13[1] =
    vmr_rwd_fix_leftarm_P.ELCameraPosition_Value_k[1];
  vmr_rwd_fix_leftarm_B.Convert13[2] =
    vmr_rwd_fix_leftarm_P.ELCameraPosition_Value_k[2];

  /* DataTypeConversion: '<S5>/Convert14' incorporates:
   *  Constant: '<S5>/EL Camera Angle'
   */
  vmr_rwd_fix_leftarm_B.Convert14[0] =
    vmr_rwd_fix_leftarm_P.ELCameraAngle_Value_h[0];
  vmr_rwd_fix_leftarm_B.Convert14[1] =
    vmr_rwd_fix_leftarm_P.ELCameraAngle_Value_h[1];

  /* DataTypeConversion: '<S5>/Convert15' incorporates:
   *  Constant: '<S5>/EL Tracking Available'
   */
  vmr_rwd_fix_leftarm_B.Convert15 =
    vmr_rwd_fix_leftarm_P.ELTrackingAvailable_Value_a;

  /* DataTypeConversion: '<S5>/Convert7' incorporates:
   *  Constant: '<S5>/Subject Height'
   */
  vmr_rwd_fix_leftarm_B.Convert7 = vmr_rwd_fix_leftarm_P.SubjectHeight_Value;

  /* DataTypeConversion: '<S5>/Convert8' incorporates:
   *  Constant: '<S5>/Subject Weight'
   */
  vmr_rwd_fix_leftarm_B.Convert8 = vmr_rwd_fix_leftarm_P.SubjectWeight_Value;

  /* DataTypeConversion: '<S5>/Convert9' incorporates:
   *  Constant: '<S5>/Display Size (m)'
   */
  vmr_rwd_fix_leftarm_B.Convert9[0] = vmr_rwd_fix_leftarm_P.DisplaySizem_Value[0];
  vmr_rwd_fix_leftarm_B.Convert9[1] = vmr_rwd_fix_leftarm_P.DisplaySizem_Value[1];

  /* Outputs for Atomic SubSystem: '<S5>/Preview Targets Subsystem' */
  vmr_rwd_fix_leftarm_PreviewTargetsSubsystem();

  /* End of Outputs for SubSystem: '<S5>/Preview Targets Subsystem' */

  /* Constant: '<S5>/Load Table' */
  memcpy(&vmr_rwd_fix_leftarm_B.LoadTable[0],
         &vmr_rwd_fix_leftarm_P.LoadTable_Value[0], 400U * sizeof(real_T));

  /* Constant: '<S5>/Task wide param' */
  memcpy(&vmr_rwd_fix_leftarm_B.Taskwideparam[0],
         &vmr_rwd_fix_leftarm_P.Taskwideparam_Value[0], 50U * sizeof(real_T));

  /* Constant: '<S5>/frame_of_reference_center' */
  vmr_rwd_fix_leftarm_B.frame_of_reference_center[0] =
    vmr_rwd_fix_leftarm_P.frame_of_reference_center_Value[0];
  vmr_rwd_fix_leftarm_B.frame_of_reference_center[1] =
    vmr_rwd_fix_leftarm_P.frame_of_reference_center_Value[1];

  /* Constant: '<S5>/Library Patch Version' */
  vmr_rwd_fix_leftarm_B.LibraryPatchVersion =
    vmr_rwd_fix_leftarm_P.LibraryPatchVersion_Value;

  /* Constant: '<S5>/Library Version' */
  vmr_rwd_fix_leftarm_B.LibraryVersion =
    vmr_rwd_fix_leftarm_P.LibraryVersion_Value;

  /* Constant: '<S5>/Task Version' */
  vmr_rwd_fix_leftarm_B.TaskVersion = vmr_rwd_fix_leftarm_P.TaskVersion_Value;

  /* Constant: '<S5>/xPC Version' */
  vmr_rwd_fix_leftarm_B.xPCVersion = vmr_rwd_fix_leftarm_P.xPCVersion_Value;

  /* Constant: '<S5>/dlm build time' */
  vmr_rwd_fix_leftarm_B.dlmbuildtime = vmr_rwd_fix_leftarm_P.dlmbuildtime_Value;

  /* MATLAB Function: '<S269>/Count trials' */
  /* MATLAB Function 'GUI Control/Task_progress/Count trials': '<S276>:1' */
  if (!vmr_rwd_fix_leftarm_DW.trials_per_block_not_empty) {
    /* '<S276>:1:6' */
    /* '<S276>:1:7' */
    for (i_0 = 0; i_0 < 499; i_0++) {
      for (i = 0; i < 50; i++) {
        vmr_rwd_fix_leftarm_B.x[i + 50 * i_0] =
          (vmr_rwd_fix_leftarm_B.BlockDefinitions[(1 + i_0) * 50 + i] != 0.0);
      }
    }

    iy = -1;
    ixstart = -1;
    for (n2d = 0; n2d < 50; n2d++) {
      ixstart++;
      i = ixstart;
      hold_steps = vmr_rwd_fix_leftarm_B.x[ixstart];
      for (textdollars_sizes_idx_1 = 0; textdollars_sizes_idx_1 < 498;
           textdollars_sizes_idx_1++) {
        i += 50;
        hold_steps += (real_T)vmr_rwd_fix_leftarm_B.x[i];
      }

      iy++;
      vmr_rwd_fix_leftarm_DW.trials_per_block[iy] = hold_steps;
    }

    vmr_rwd_fix_leftarm_DW.trials_per_block_not_empty = true;

    /* '<S276>:1:8' */
    for (i_0 = 0; i_0 < 50; i_0++) {
      b_x[i_0] = vmr_rwd_fix_leftarm_B.BlockSequence[1000 + i_0] *
        vmr_rwd_fix_leftarm_DW.trials_per_block[i_0];
    }

    vmr_rwd_fix_leftarm_DW.total_trials_saved = b_x[0];

    /* '<S276>:1:9' */
    vmr_rwd_fix_leftarm_DW.total_blocks_saved =
      vmr_rwd_fix_leftarm_B.BlockSequence[1000];
    for (iy = 0; iy < 49; iy++) {
      vmr_rwd_fix_leftarm_DW.total_trials_saved += b_x[iy + 1];
      vmr_rwd_fix_leftarm_DW.total_blocks_saved +=
        vmr_rwd_fix_leftarm_B.BlockSequence[iy + 1001];
    }
  }

  /* '<S276>:1:12' */
  vmr_rwd_fix_leftarm_B.total_trials = vmr_rwd_fix_leftarm_B.extra_trials[0] +
    vmr_rwd_fix_leftarm_DW.total_trials_saved;

  /* '<S276>:1:13' */
  vmr_rwd_fix_leftarm_B.total_blocks = vmr_rwd_fix_leftarm_DW.total_blocks_saved;
  if (vmr_rwd_fix_leftarm_B.Convert23 > 0U) {
    /* '<S276>:1:15' */
    /* '<S276>:1:16' */
    vmr_rwd_fix_leftarm_B.trials_in_block =
      vmr_rwd_fix_leftarm_DW.trials_per_block[(int32_T)
      vmr_rwd_fix_leftarm_B.Convert23 - 1] + vmr_rwd_fix_leftarm_B.extra_trials
      [1];
  } else {
    /* '<S276>:1:18' */
    vmr_rwd_fix_leftarm_B.trials_in_block = 0.0;
  }

  /* End of MATLAB Function: '<S269>/Count trials' */

  /* DataTypeConversion: '<S269>/Data Type Conversion' */
  tgt_vec_idx_1 = floor(vmr_rwd_fix_leftarm_B.total_trials);
  if (rtIsNaN(tgt_vec_idx_1) || rtIsInf(tgt_vec_idx_1)) {
    tgt_vec_idx_1 = 0.0;
  } else {
    tgt_vec_idx_1 = fmod(tgt_vec_idx_1, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.total_trials_in_exam = tgt_vec_idx_1 < 0.0 ? (uint32_T)
    -(int32_T)(uint32_T)-tgt_vec_idx_1 : (uint32_T)tgt_vec_idx_1;

  /* End of DataTypeConversion: '<S269>/Data Type Conversion' */

  /* DataTypeConversion: '<S269>/Data Type Conversion1' */
  tgt_vec_idx_1 = floor(vmr_rwd_fix_leftarm_B.trials_in_block);
  if (rtIsNaN(tgt_vec_idx_1) || rtIsInf(tgt_vec_idx_1)) {
    tgt_vec_idx_1 = 0.0;
  } else {
    tgt_vec_idx_1 = fmod(tgt_vec_idx_1, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.total_trials_in_block = tgt_vec_idx_1 < 0.0 ? (uint32_T)
    -(int32_T)(uint32_T)-tgt_vec_idx_1 : (uint32_T)tgt_vec_idx_1;

  /* End of DataTypeConversion: '<S269>/Data Type Conversion1' */

  /* DataTypeConversion: '<S269>/Data Type Conversion2' */
  tgt_vec_idx_1 = floor(vmr_rwd_fix_leftarm_B.total_blocks);
  if (rtIsNaN(tgt_vec_idx_1) || rtIsInf(tgt_vec_idx_1)) {
    tgt_vec_idx_1 = 0.0;
  } else {
    tgt_vec_idx_1 = fmod(tgt_vec_idx_1, 4.294967296E+9);
  }

  vmr_rwd_fix_leftarm_B.total_blocks_in_exam = tgt_vec_idx_1 < 0.0 ? (uint32_T)
    -(int32_T)(uint32_T)-tgt_vec_idx_1 : (uint32_T)tgt_vec_idx_1;

  /* End of DataTypeConversion: '<S269>/Data Type Conversion2' */

  /* DataTypeConversion: '<S29>/Run Status' */
  vmr_rwd_fix_leftarm_B.RunStatus = vmr_rwd_fix_leftarm_B.Convert20;

  /* RateTransition: '<S29>/Rate Transition10' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition10 = vmr_rwd_fix_leftarm_B.RunStatus;
  }

  /* End of RateTransition: '<S29>/Rate Transition10' */

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Compare = (uint8_T)(vmr_rwd_fix_leftarm_B.Convert20 ==
    vmr_rwd_fix_leftarm_P.IfRunning_const);

  /* Memory: '<Root>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory[0] = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput
    [0];
  vmr_rwd_fix_leftarm_B.Memory[1] = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput
    [1];
  vmr_rwd_fix_leftarm_B.Memory[2] = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput
    [2];
  vmr_rwd_fix_leftarm_B.Memory[3] = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput
    [3];

  /* Outputs for Atomic SubSystem: '<S2>/Receive_Gaze' */
  vmr_rwd_fix_leftarm_Receive_GazeTID0();

  /* End of Outputs for SubSystem: '<S2>/Receive_Gaze' */

  /* Memory: '<S2>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_n[0] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[0];
  vmr_rwd_fix_leftarm_B.Memory_n[1] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[1];
  vmr_rwd_fix_leftarm_B.Memory_n[2] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[2];
  vmr_rwd_fix_leftarm_B.Memory_n[3] =
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[3];

  /* Memory: '<S13>/Memory' */
  vmr_rwd_fix_leftarm_B.Memory_e = vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_a;

  /* Gain: '<S13>/Gain' */
  vmr_rwd_fix_leftarm_B.Gain = vmr_rwd_fix_leftarm_P.Gain_Gain_m *
    vmr_rwd_fix_leftarm_B.Memory_e;

  /* Outputs for Atomic SubSystem: '<S2>/Poll KINARM' */
  vmr_rwd_fix_leftarm_PollKINARM();

  /* End of Outputs for SubSystem: '<S2>/Poll KINARM' */

  /* Selector: '<S10>/Dominant_Arm' */
  vmr_rwd_fix_leftarm_B.Dominant_Arm = vmr_rwd_fix_leftarm_B.kinarm_data[2];

  /* MATLAB Function: '<S10>/Embedded MATLAB WhichHand' incorporates:
   *  Constant: '<S10>/Use_Dominant_Hand?'
   */
  /* MATLAB Function 'KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand': '<S289>:1' */
  if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_use_dominant_hand == 1.0)
  {
    /* '<S289>:1:3' */
    /* use the dominant hand */
    /* '<S289>:1:4' */
    vmr_rwd_fix_leftarm_B.hand = vmr_rwd_fix_leftarm_B.Dominant_Arm;

    /* '<S289>:1:5' */
    vmr_rwd_fix_leftarm_B.cursor = 1.0;
  } else {
    /* '<S289>:1:7' */
    vmr_rwd_fix_leftarm_B.hand = 3.0 - vmr_rwd_fix_leftarm_B.Dominant_Arm;

    /* use the non-dominant hand. i.e. if dominant_hand=2, hand=1 and vice-versa */
    /* '<S289>:1:8' */
    vmr_rwd_fix_leftarm_B.cursor = 2.0;
  }

  /* End of MATLAB Function: '<S10>/Embedded MATLAB WhichHand' */

  /* Selector: '<S10>/Array_Selector1' */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.cursor;
  vmr_rwd_fix_leftarm_B.Array_Selector1[0] = vmr_rwd_fix_leftarm_B.Memory[i_0 -
    1];
  vmr_rwd_fix_leftarm_B.Array_Selector1[1] = vmr_rwd_fix_leftarm_B.Memory[i_0 +
    1];

  /* SignalConversion: '<S288>/TmpSignal ConversionAt SFunction Inport3' incorporates:
   *  Constant: '<S10>/attribcol1'
   *  Constant: '<S10>/attribcol2'
   *  Constant: '<S10>/attribcol3'
   *  Constant: '<S10>/attribcol4'
   *  MATLAB Function: '<S10>/Embedded MATLAB InsideTarget'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[0] =
    vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_attribcol1;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[1] =
    vmr_rwd_fix_leftarm_P.attribcol2_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[2] =
    vmr_rwd_fix_leftarm_P.attribcol3_Value;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[3] =
    vmr_rwd_fix_leftarm_P.attribcol4_Value;

  /* MATLAB Function: '<S10>/Embedded MATLAB InsideTarget' incorporates:
   *  Constant: '<S10>/Target_Type'
   *  Constant: '<S10>/num_states'
   *  Constant: '<S5>/Target Table'
   */
  /* MATLAB Function 'KINARM_HandFeedbackInTarget/Embedded MATLAB InsideTarget': '<S288>:1' */
  /*  all dimensions in m, rad */
  /*  arguments: */
  /*  handpos: x,y positions of center of target */
  /*  attribcol: columns in target table specifying target attributes.   */
  /*  Specific to Target_Type */
  /* 	circle: */
  /* 	[X0,Y0,r...,rn] where: */
  /* 	X0,Y0 : centre of circle */
  /* 	r : logical radius of circle (i.e. radius used to determine 'in' or 'out' of target) */
  /* 	rn: logical radius of other targets (e.g. 2nd, 3rd) also specified in target row. */
  /*    Up to 4 targets can be specified in a row */
  /*  ellipse: */
  /* 	[X0,Y0,a,b,t...,an, bn, tn] where: */
  /* 	X0,Y0 : centre of ellipse */
  /* 	a,b : major, minor radii of ellipse */
  /* 	t : rotation of ellipse in degrees */
  /* 	an,bn : major, minor radii of ellipse of other targets (e.g. 2nd, 3rd) also specified in target row */
  /* 	tn : rotation of ellipse in degrees of other targets (e.g. 2nd, 3rd) also specified in target row */
  /*    Up to 4 targets can be specified in a row */
  /* '<S288>:1:26' */
  /* '<S288>:1:27' */
  /* '<S288>:1:29' */
  for (i = 0; i < 128; i++) {
    vmr_rwd_fix_leftarm_B.intarget[i] = 0.0;
  }

  /* '<S288>:1:31' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S288>:1:32' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S288>:1:34' */
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.Array_Selector1[0];

  /* '<S288>:1:35' */
  M2 = vmr_rwd_fix_leftarm_B.Array_Selector1[1];
  for (i_0 = 0; i_0 < 32; i_0++) {
    deltax[i_0] = tgt_vec_idx_1 - vmr_rwd_fix_leftarm_P.TargetTable_Value[i_0] *
      0.01;
    deltay[i_0] = M2 - vmr_rwd_fix_leftarm_P.TargetTable_Value[32 + i_0] * 0.01;
  }

  /* '<S288>:1:37' */
  if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type == 1.0) {
    /* '<S288>:1:39' */
    /* circle */
    /* '<S288>:1:40' */
    iy = (int32_T)vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states;

    /* '<S288>:1:40' */
    for (ixstart = 0; ixstart < iy; ixstart++) {
      /* '<S288>:1:40' */
      /* '<S288>:1:41' */
      /* Target Table sizes in cm in v1.4 */
      /*  simple euclidean distance */
      /* '<S288>:1:43' */
      vmr_rwd_fix_leftarm_power_h(deltax, p);
      vmr_rwd_fix_leftarm_power_h(deltay, g);

      /* distance2 is the square of the distance */
      /* '<S288>:1:44' */
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[ixstart];
      for (i = 0; i < 32; i++) {
        delta = p[i];
        delta += g[i];
        t_0[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
          0.01;
        p[i] = delta;
      }

      vmr_rwd_fix_leftarm_power_h(t_0, g);
      for (i_0 = 0; i_0 < 32; i_0++) {
        vmr_rwd_fix_leftarm_B.intarget[i_0 + (ixstart << 5)] = (p[i_0] <= g[i_0]);
      }

      /* '<S288>:1:40' */
    }
  } else if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type ==
             2.0) {
    /* '<S288>:1:46' */
    /* ellipse */
    /* '<S288>:1:47' */
    iy = (int32_T)vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states;

    /* '<S288>:1:47' */
    for (ixstart = 0; ixstart < iy; ixstart++) {
      /* '<S288>:1:47' */
      /* '<S288>:1:48' */
      /* Target Table sizes in cm in v1.4 */
      /* '<S288>:1:49' */
      /* Target Table sizes in cm in v1.4	 */
      /* '<S288>:1:50' */
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0) - 1];

      /* Target Table angles in degrees in v1.4 */
      /* '<S288>:1:51' */
      for (i = 0; i < 32; i++) {
        M2 = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
          0.017453292519943295;
        sint[i] = M2;
        t[i] = M2;
      }

      vmr_rwd_fix_leftarm_sin(sint);

      /* '<S288>:1:52' */
      vmr_rwd_fix_leftarm_cos(t);

      /* '<S288>:1:53' */
      /* location of x point in ellipse's coordinate frame */
      /* '<S288>:1:54' */
      /* location of y point in ellipse's coordinate frame */
      /* '<S288>:1:55' */
      /* slope of line between the (x,y) to (x0,y0) in ellipse's coordinate frame */
      /* '<S288>:1:56' */
      for (i = 0; i < 32; i++) {
        yrotate[i] = -deltax[i] * sint[i] + deltay[i] * t[i];
        m_0[i] = deltax[i] * t[i] + deltay[i] * sint[i];
      }

      vmr_rwd_fix_leftarm_rdivide(yrotate, m_0, t_0);
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0 - 2.0) - 1];
      for (i = 0; i < 32; i++) {
        m_0[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
          0.01 * t_0[i];
      }

      vmr_rwd_fix_leftarm_power_h(m_0, g);
      vmr_rwd_fix_leftarm_rdivide_p(1.0, g, p);
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0 - 1.0) - 1];
      for (i = 0; i < 32; i++) {
        t_0[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
          0.01;
      }

      vmr_rwd_fix_leftarm_power_h(t_0, g);
      vmr_rwd_fix_leftarm_rdivide_p(1.0, g, t_0);
      for (i_0 = 0; i_0 < 32; i_0++) {
        m_0[i_0] = p[i_0] + t_0[i_0];
      }

      vmr_rwd_fix_leftarm_rdivide_p(1.0, m_0, p);

      /* y2sq is y2^2, where y2 is the intersection of the ellipse and the (x,y) to (x0,y0) line */
      /* '<S288>:1:57' */
      vmr_rwd_fix_leftarm_power_h(yrotate, g);
      for (i_0 = 0; i_0 < 32; i_0++) {
        vmr_rwd_fix_leftarm_B.intarget[i_0 + (ixstart << 5)] = (g[i_0] <= p[i_0]);
      }

      /* '<S288>:1:47' */
    }
  } else if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type ==
             3.0) {
    /* '<S288>:1:59' */
    /* rectangle */
    /* '<S288>:1:60' */
    iy = (int32_T)vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states;

    /* '<S288>:1:60' */
    for (ixstart = 0; ixstart < iy; ixstart++) {
      /* '<S288>:1:60' */
      /* '<S288>:1:61' */
      /* width (sizes in cm in v1.4) */
      /* '<S288>:1:62' */
      /* height (sizes in cm in v1.4) */
      if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
          ((1.0 + (real_T)ixstart) * 3.0) - 1] > 0.0) {
        /* '<S288>:1:64' */
        /* '<S288>:1:65' */
        i_0 = (int32_T)
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
          ((1.0 + (real_T)ixstart) * 3.0) - 1];
        for (i = 0; i < 32; i++) {
          t[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
            0.017453292519943295;
        }

        /* angle (angles in degrees in v1.4) */
      } else {
        /* '<S288>:1:67' */
        for (i = 0; i < 32; i++) {
          t[i] = 0.0;
        }
      }

      /* '<S288>:1:70' */
      memcpy(&sint[0], &t[0], sizeof(real_T) << 5U);
      vmr_rwd_fix_leftarm_sin(sint);

      /* '<S288>:1:71' */
      vmr_rwd_fix_leftarm_cos(t);

      /* '<S288>:1:73' */
      /* location of x point in rectangle's coordinate frame */
      /* '<S288>:1:74' */
      /* location of y point in rectangle's coordinate frame */
      for (i_0 = 0; i_0 < 32; i_0++) {
        m_0[i_0] = deltax[i_0] * t[i_0] + deltay[i_0] * sint[i_0];
      }

      vmr_rwd_fix_leftarm_abs(m_0, g);
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0 - 2.0) - 1];
      for (i = 0; i < 32; i++) {
        is_under_left[i] = (g[i] <= vmr_rwd_fix_leftarm_P.TargetTable_Value
                            [((i_0 - 1) << 5) + i] * 0.01 / 2.0);
        m_0[i] = -deltax[i] * sint[i] + deltay[i] * t[i];
      }

      vmr_rwd_fix_leftarm_abs(m_0, g);

      /* '<S288>:1:76' */
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0 - 1.0) - 1];
      for (i = 0; i < 32; i++) {
        vmr_rwd_fix_leftarm_B.intarget[i + (ixstart << 5)] = (is_under_left[i] &&
          (g[i] <= vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i]
           * 0.01 / 2.0));
      }

      /* '<S288>:1:60' */
    }
  } else if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type ==
             4.0) {
    /* '<S288>:1:78' */
    /* line */
    /* '<S288>:1:79' */
    iy = (int32_T)vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states;

    /* '<S288>:1:79' */
    for (ixstart = 0; ixstart < iy; ixstart++) {
      /* '<S288>:1:79' */
      /*  treat the line like a rectangle of height h and width w */
      /*  determine height (stroke width) in the same fashion as in Show_Target */
      if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
          ((1.0 + (real_T)ixstart) * 3.0 - 2.0) - 1] == 0.0) {
        /* '<S288>:1:82' */
        /* 0 column index means stroke width of 0 */
        /* '<S288>:1:83' */
        for (i = 0; i < 32; i++) {
          h[i] = 0.0;
        }
      } else if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3
                 [(int32_T)((1.0 + (real_T)ixstart) * 3.0 - 2.0) - 1] < 0.0) {
        /* '<S288>:1:84' */
        /* -ve column index means stroke width of 1mm */
        /* '<S288>:1:85' */
        for (i = 0; i < 32; i++) {
          h[i] = 0.001;
        }
      } else {
        /* '<S288>:1:87' */
        i_0 = (int32_T)
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
          ((1.0 + (real_T)ixstart) * 3.0 - 2.0) - 1];
        for (i = 0; i < 32; i++) {
          h[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
            0.01;
        }

        /* target table contains width in cm */
      }

      /* '<S288>:1:90' */
      i_0 = (int32_T)
        vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
        ((1.0 + (real_T)ixstart) * 3.0 - 1.0) - 1];

      /* endpoint in x relative to start point (cm) */
      /* '<S288>:1:91' */
      i = (int32_T)vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3
        [(int32_T)((1.0 + (real_T)ixstart) * 3.0) - 1];
      for (textdollars_sizes_idx_1 = 0; textdollars_sizes_idx_1 < 32;
           textdollars_sizes_idx_1++) {
        sint[textdollars_sizes_idx_1] = vmr_rwd_fix_leftarm_P.TargetTable_Value
          [((i_0 - 1) << 5) + textdollars_sizes_idx_1] * 0.01;
        p[textdollars_sizes_idx_1] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i
          - 1) << 5) + textdollars_sizes_idx_1] * 0.01;
      }

      /* endpoint in y relative to start point (cm) */
      /* '<S288>:1:93' */
      vmr_rwd_fix_leftarm_power_h(sint, w);
      vmr_rwd_fix_leftarm_power_h(p, g);
      for (i_0 = 0; i_0 < 32; i_0++) {
        M2 = w[i_0];
        M2 += g[i_0];
        w[i_0] = M2;
      }

      vmr_rwd_fix_leftarm_sqrt_n(w);

      /* width (cm) */
      /*  determine the vector from the line's midpoint to the hand position */
      /* '<S288>:1:96' */
      /* '<S288>:1:97' */
      /* '<S288>:1:99' */
      vmr_rwd_fix_leftarm_atan2(p, sint, t);

      /* calculate angle of the line (rads) */
      /* '<S288>:1:100' */
      for (i = 0; i < 32; i++) {
        M2 = sint[i];
        length2[i] = deltax[i] - M2 / 2.0;
        alpha[i] = deltay[i] - p[i] / 2.0;
        M2 = t[i];
        sint[i] = M2;
      }

      vmr_rwd_fix_leftarm_sin(sint);

      /* '<S288>:1:101' */
      vmr_rwd_fix_leftarm_cos(t);

      /* '<S288>:1:103' */
      /* location of x point in rectangle's coordinate frame */
      /* '<S288>:1:104' */
      /* location of y point in rectangle's coordinate frame */
      for (i_0 = 0; i_0 < 32; i_0++) {
        m_0[i_0] = length2[i_0] * t[i_0] + alpha[i_0] * sint[i_0];
      }

      vmr_rwd_fix_leftarm_abs(m_0, g);
      for (i = 0; i < 32; i++) {
        is_under_left[i] = (g[i] <= w[i] / 2.0);
        m_0[i] = -length2[i] * sint[i] + alpha[i] * t[i];
      }

      vmr_rwd_fix_leftarm_abs(m_0, g);

      /* '<S288>:1:106' */
      for (i_0 = 0; i_0 < 32; i_0++) {
        vmr_rwd_fix_leftarm_B.intarget[i_0 + (ixstart << 5)] =
          (is_under_left[i_0] && (g[i_0] <= h[i_0] / 2.0));
      }

      /* '<S288>:1:79' */
    }
  } else {
    if (vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_target_type == 5.0) {
      /* '<S288>:1:108' */
      /*  triangle */
      /* '<S288>:1:109' */
      n2d = (int32_T)
        vmr_rwd_fix_leftarm_P.KINARM_HandFeedbackInTarget_num_states;

      /* '<S288>:1:109' */
      for (ixstart = 0; ixstart < n2d; ixstart++) {
        /* '<S288>:1:109' */
        /* '<S288>:1:110' */
        i_0 = (int32_T)
          vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
          ((1.0 + (real_T)ixstart) * 4.0 - 3.0) - 1];
        for (i = 0; i < 32; i++) {
          w[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i] *
            0.01;
        }

        /* length (sizes in cm in v1.4) */
        /*  If a height column of 0 is specified, make the triangle equilateral. Otherwise, use the */
        /*  values for height and peak offset from the target table. */
        if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
            ((1.0 + (real_T)ixstart) * 4.0 - 2.0) - 1] > 0.0) {
          /* '<S288>:1:114' */
          /* '<S288>:1:115' */
          i_0 = (int32_T)
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
            ((1.0 + (real_T)ixstart) * 4.0 - 2.0) - 1];

          /* height (sizes in cm in v1.4) */
          /* '<S288>:1:116' */
          i = (int32_T)
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
            ((1.0 + (real_T)ixstart) * 4.0 - 1.0) - 1];
          for (textdollars_sizes_idx_1 = 0; textdollars_sizes_idx_1 < 32;
               textdollars_sizes_idx_1++) {
            h[textdollars_sizes_idx_1] =
              vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) +
              textdollars_sizes_idx_1] * 0.01;
            p[textdollars_sizes_idx_1] =
              vmr_rwd_fix_leftarm_P.TargetTable_Value[((i - 1) << 5) +
              textdollars_sizes_idx_1] * 0.01;
          }

          /* peak offset (sizes in cm in v1.4) */
        } else {
          /* '<S288>:1:118' */
          /* '<S288>:1:119' */
          for (i = 0; i < 32; i++) {
            h[i] = w[i] * 0.8660254037844386;
            p[i] = 0.0;
          }
        }

        if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
            ((1.0 + (real_T)ixstart) * 4.0) - 1] > 0.0) {
          /* '<S288>:1:122' */
          /* '<S288>:1:123' */
          i_0 = (int32_T)
            vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[(int32_T)
            ((1.0 + (real_T)ixstart) * 4.0) - 1];
          for (i = 0; i < 32; i++) {
            t[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 - 1) << 5) + i]
              * 0.017453292519943295;
          }

          /* angle (angles in degrees in v1.4) */
        } else {
          /* '<S288>:1:125' */
          for (i = 0; i < 32; i++) {
            t[i] = 0.0;
          }
        }

        /* '<S288>:1:128' */
        memcpy(&sint[0], &t[0], sizeof(real_T) << 5U);
        vmr_rwd_fix_leftarm_sin(sint);

        /* '<S288>:1:129' */
        vmr_rwd_fix_leftarm_cos(t);

        /* '<S288>:1:131' */
        /* location of x point in triangle's coordinate frame */
        /* '<S288>:1:132' */
        /* location of y point in triangle's coordinate frame */
        /*  Begin to find centroid of triangle relative to the point on the base beneath the peak. "Left vertex"  */
        /*  refers to the vertex at the left end of the base, and "right vertex" to the vertex at the right end. */
        /* '<S288>:1:136' */
        vmr_rwd_fix_leftarm_rdivide_px(w, 2.0, t_0);

        /*  distance along base from left vertex to peak */
        /* '<S288>:1:137' */
        vmr_rwd_fix_leftarm_rdivide_px(w, 2.0, m_0);

        /*  distance along base from peak to right vertex */
        /* '<S288>:1:139' */
        for (i = 0; i < 32; i++) {
          xrotate[i] = deltax[i] * t[i] + deltay[i] * sint[i];
          yrotate[i] = -deltax[i] * sint[i] + deltay[i] * t[i];
          M2 = t_0[i] + p[i];
          m[i] = m_0[i] - p[i];
          g[i] = h[i] * h[i] + M2 * M2;
          n[i] = M2;
        }

        vmr_rwd_fix_leftarm_atan2(h, n, alpha);

        /*  angle between base and line from left vertex to peak */
        /* '<S288>:1:140' */
        vmr_rwd_fix_leftarm_atan2(h, m, p);

        /*  angle between base and line from right vertex to peak */
        /* '<S288>:1:142' */
        vmr_rwd_fix_leftarm_sqrt_n(g);
        vmr_rwd_fix_leftarm_rdivide_px(g, 2.0, sint);

        /*  half length of line from left vertex to peak */
        /* '<S288>:1:143' */
        for (i = 0; i < 32; i++) {
          g[i] = h[i] * h[i] + m[i] * m[i];
        }

        vmr_rwd_fix_leftarm_sqrt_n(g);
        vmr_rwd_fix_leftarm_rdivide_px(g, 2.0, length2);

        /*  half length of line from right vertex to peak */
        /*  Determine slope of line from left vertex to midpoint of line from right vertex to peak. */
        /* '<S288>:1:146' */
        /* '<S288>:1:148' */
        /*  Determine slope of line from right vertex to midpoint of line from left vertex to peak. */
        /* '<S288>:1:155' */
        /* '<S288>:1:157' */
        /*  Calculate centroid position. */
        /* '<S288>:1:164' */
        for (i = 0; i < 32; i++) {
          delta = p[i];
          M2 = 4.294967295E+9;

          /* '<S288>:1:148' */
          if (fabs(w[i] - length2[i] * cos(delta)) > 0.0) {
            /* '<S288>:1:149' */
            /* '<S288>:1:150' */
            M2 = length2[i] * sin(delta) / (w[i] - length2[i] * cos(delta));
          }

          /* '<S288>:1:148' */
          delta = 4.294967295E+9;

          /* '<S288>:1:157' */
          if (fabs(w[i] - sint[i] * cos(alpha[i])) > 0.0) {
            /* '<S288>:1:158' */
            /* '<S288>:1:159' */
            delta = -sint[i] * sin(alpha[i]) / (w[i] - sint[i] * cos(alpha[i]));
          }

          /* '<S288>:1:157' */
          m_0[i] = -(m[i] * delta + n[i] * M2);
          t_0[i] = M2 - delta;
          t[i] = M2;
        }

        vmr_rwd_fix_leftarm_rdivide(m_0, t_0, p);

        /* '<S288>:1:165' */
        /*  Test if the point is under the left side of the peak. */
        /* '<S288>:1:168' */
        /* '<S288>:1:170' */
        /*  Test if the point is under the right side of the peak. */
        /* '<S288>:1:179' */
        /* '<S288>:1:181' */
        for (i_0 = 0; i_0 < 32; i_0++) {
          M2 = t[i_0];
          M2 *= p[i_0] + n[i_0];

          /* '<S288>:1:170' */
          if (n[i_0] >= 0.0) {
            /* '<S288>:1:171' */
            /* '<S288>:1:172' */
            is_under_left[i_0] = (h[i_0] / n[i_0] * (xrotate[i_0] + p[i_0]) +
                                  h[i_0] >= yrotate[i_0] + M2);
          } else {
            /* '<S288>:1:174' */
            is_under_left[i_0] = (h[i_0] / n[i_0] * (xrotate[i_0] + p[i_0]) +
                                  h[i_0] <= yrotate[i_0] + M2);
          }

          /* '<S288>:1:170' */
          /* '<S288>:1:181' */
          if (m[i_0] >= 0.0) {
            /* '<S288>:1:182' */
            /* '<S288>:1:183' */
            is_under_right[i_0] = (h[i_0] - h[i_0] / m[i_0] * (xrotate[i_0] +
              p[i_0]) >= yrotate[i_0] + M2);
          } else {
            /* '<S288>:1:185' */
            is_under_right[i_0] = (h[i_0] - h[i_0] / m[i_0] * (xrotate[i_0] +
              p[i_0]) <= yrotate[i_0] + M2);
          }

          /* '<S288>:1:181' */
          t[i_0] = M2;
        }

        /*             %under right side of peak */
        /*              %under left side of peak */
        /* '<S288>:1:189' */
        for (i_0 = 0; i_0 < 32; i_0++) {
          vmr_rwd_fix_leftarm_B.intarget[i_0 + (ixstart << 5)] =
            (is_under_right[i_0] && is_under_left[i_0] && (yrotate[i_0] + t[i_0]
              >= 0.0));
        }

        /* above base */
        /* '<S288>:1:109' */
      }
    }
  }

  /* Selector: '<S10>/Array Selector' incorporates:
   *  Constant: '<S10>/Selected States'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_P.SelectedStates_Value;
  memcpy(&vmr_rwd_fix_leftarm_B.ArraySelector[0],
         &vmr_rwd_fix_leftarm_B.intarget[(i_0 - 1) << 5], sizeof(real_T) << 5U);

  /* Selector: '<S8>/Dominant_Arm' */
  vmr_rwd_fix_leftarm_B.Dominant_Arm_j = vmr_rwd_fix_leftarm_B.kinarm_data[2];

  /* MATLAB Function: '<S8>/Embedded MATLAB WhichHand' incorporates:
   *  Constant: '<S8>/Use_Dominant_Hand?'
   */
  /* MATLAB Function 'KINARM_DistanceFromTarget/Embedded MATLAB WhichHand': '<S280>:1' */
  if (vmr_rwd_fix_leftarm_P.KINARM_DistanceFromTarget_use_dominant_hand == 1.0)
  {
    /* '<S280>:1:3' */
    /* use the dominant hand */
    /* '<S280>:1:4' */
    vmr_rwd_fix_leftarm_B.hand_k = vmr_rwd_fix_leftarm_B.Dominant_Arm_j;
  } else {
    /* '<S280>:1:6' */
    vmr_rwd_fix_leftarm_B.hand_k = 3.0 - vmr_rwd_fix_leftarm_B.Dominant_Arm_j;

    /* use the non-dominant hand. i.e. if dominant_hand=2, hand=1 and vice-versa */
  }

  /* End of MATLAB Function: '<S8>/Embedded MATLAB WhichHand' */

  /* Selector: '<S8>/Hand_Pos' */
  for (i_0 = 0; i_0 < 2; i_0++) {
    vmr_rwd_fix_leftarm_B.Hand_Pos[3 * i_0] = vmr_rwd_fix_leftarm_B.kinarm_data
      [(22 + i_0) * 3];
    vmr_rwd_fix_leftarm_B.Hand_Pos[1 + 3 * i_0] =
      vmr_rwd_fix_leftarm_B.kinarm_data[(22 + i_0) * 3 + 1];
    vmr_rwd_fix_leftarm_B.Hand_Pos[2 + 3 * i_0] =
      vmr_rwd_fix_leftarm_B.kinarm_data[(22 + i_0) * 3 + 2];
  }

  /* End of Selector: '<S8>/Hand_Pos' */

  /* MultiPortSwitch: '<S8>/Multiport Switch' */
  if ((int32_T)vmr_rwd_fix_leftarm_B.hand_k == 1) {
    /* Selector: '<S8>/Arm1' */
    vmr_rwd_fix_leftarm_B.Arm1_j[0] = vmr_rwd_fix_leftarm_B.Hand_Pos[0];
    vmr_rwd_fix_leftarm_B.Arm1_j[1] = vmr_rwd_fix_leftarm_B.Hand_Pos[3];
    vmr_rwd_fix_leftarm_B.MultiportSwitch[0] = vmr_rwd_fix_leftarm_B.Arm1_j[0];
    vmr_rwd_fix_leftarm_B.MultiportSwitch[1] = vmr_rwd_fix_leftarm_B.Arm1_j[1];
  } else {
    /* Selector: '<S8>/Arm2' */
    vmr_rwd_fix_leftarm_B.Arm2_c[0] = vmr_rwd_fix_leftarm_B.Hand_Pos[1];
    vmr_rwd_fix_leftarm_B.Arm2_c[1] = vmr_rwd_fix_leftarm_B.Hand_Pos[4];
    vmr_rwd_fix_leftarm_B.MultiportSwitch[0] = vmr_rwd_fix_leftarm_B.Arm2_c[0];
    vmr_rwd_fix_leftarm_B.MultiportSwitch[1] = vmr_rwd_fix_leftarm_B.Arm2_c[1];
  }

  /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

  /* MATLAB Function: '<S8>/Embedded MATLAB InsideTarget' */
  /* MATLAB Function 'KINARM_DistanceFromTarget/Embedded MATLAB InsideTarget': '<S279>:1' */
  /*  all dimensions in m, rad */
  /*  arguments: */
  /*  handpos: x,y positions of center of target */
  /* '<S279>:1:8' */
  /* '<S279>:1:9' */
  /* '<S279>:1:11' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S279>:1:12' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S279>:1:14' */
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.MultiportSwitch[0];
  M2 = vmr_rwd_fix_leftarm_B.MultiportSwitch[1];

  /* MATLAB Function 'KINARM_DistanceBetweenTargets/Embedded MATLAB InsideTarget': '<S278>:1' */
  /*  all dimensions in m, rad */
  /*  arguments: */
  /*  handpos: x,y positions of center of target */
  /* '<S278>:1:9' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S278>:1:10' */
  for (i_0 = 0; i_0 < 32; i_0++) {
    /* MATLAB Function: '<S8>/Embedded MATLAB InsideTarget' incorporates:
     *  Constant: '<S5>/Target Table'
     */
    delta = vmr_rwd_fix_leftarm_P.TargetTable_Value[i_0] * 0.01 - tgt_vec_idx_1;
    vmr_rwd_fix_leftarm_B.distance[i_0] = delta * delta;
    delta = vmr_rwd_fix_leftarm_P.TargetTable_Value[32 + i_0] * 0.01 - M2;
    tgt_vec_idx_0 = delta * delta;
    vmr_rwd_fix_leftarm_B.distance[i_0] += tgt_vec_idx_0;
    vmr_rwd_fix_leftarm_B.distance[i_0] = sqrt
      (vmr_rwd_fix_leftarm_B.distance[i_0]);

    /* MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' incorporates:
     *  Constant: '<S5>/Target Table'
     */
    delta = vmr_rwd_fix_leftarm_P.TargetTable_Value[i_0] * 0.01;
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_P.TargetTable_Value[32 + i_0] * 0.01;

    /* MATLAB Function: '<S8>/Embedded MATLAB InsideTarget' */
    deltax[i_0] = delta;
    deltay[i_0] = tgt_vec_idx_0;
  }

  /* MATLAB Function: '<S7>/Embedded MATLAB InsideTarget' */
  /* Target Table sizes in cm in v1.4 */
  /* '<S278>:1:12' */
  vmr_rwd_fix_leftarm_repmat(deltax, vmr_rwd_fix_leftarm_B.Xdif);
  vmr_rwd_fix_leftarm_repmat_h(deltax, vmr_rwd_fix_leftarm_B.b);
  for (i_0 = 0; i_0 < 1024; i_0++) {
    M2 = vmr_rwd_fix_leftarm_B.Xdif[i_0];
    M2 -= vmr_rwd_fix_leftarm_B.b[i_0];
    vmr_rwd_fix_leftarm_B.Xdif[i_0] = M2;
  }

  /* '<S278>:1:13' */
  vmr_rwd_fix_leftarm_repmat(deltay, vmr_rwd_fix_leftarm_B.Ydif);
  vmr_rwd_fix_leftarm_repmat_h(deltay, vmr_rwd_fix_leftarm_B.b);
  for (i_0 = 0; i_0 < 1024; i_0++) {
    M2 = vmr_rwd_fix_leftarm_B.Ydif[i_0];
    M2 -= vmr_rwd_fix_leftarm_B.b[i_0];
    vmr_rwd_fix_leftarm_B.Ydif[i_0] = M2;
  }

  /* '<S278>:1:15' */
  vmr_rwd_fix_leftarm_power(vmr_rwd_fix_leftarm_B.Xdif,
    vmr_rwd_fix_leftarm_B.distance_e);
  vmr_rwd_fix_leftarm_power(vmr_rwd_fix_leftarm_B.Ydif, vmr_rwd_fix_leftarm_B.b);
  for (i_0 = 0; i_0 < 1024; i_0++) {
    vmr_rwd_fix_leftarm_B.distance_e[i_0] += vmr_rwd_fix_leftarm_B.b[i_0];
  }

  vmr_rwd_fix_leftarm_sqrt(vmr_rwd_fix_leftarm_B.distance_e);

  /* Memory: '<Root>/Memory1' */
  vmr_rwd_fix_leftarm_B.Memory1 = vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput;

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Compare_j = (vmr_rwd_fix_leftarm_B.value ==
    vmr_rwd_fix_leftarm_P.CompareToConstant_const);

  /* Chart: '<Root>/Trial_Control' incorporates:
   *  TriggerPort: '<S23>/ input events '
   */
  zcEvent_idx_0 = (((vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[0] ==
                     POS_ZCSIG) != vmr_rwd_fix_leftarm_B.DataTypeConversion1_m) &&
                   (vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[0] !=
                    UNINITIALIZED_ZCSIG));
  zcEvent_idx_1 = (((vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[1] ==
                     POS_ZCSIG) != vmr_rwd_fix_leftarm_B.e_exit_trial) &&
                   (vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[1] !=
                    UNINITIALIZED_ZCSIG));
  zcEvent_idx_2 = (((vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[2] ==
                     POS_ZCSIG) != vmr_rwd_fix_leftarm_B.Compare_j) &&
                   (vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[2] !=
                    UNINITIALIZED_ZCSIG));
  tmp_0 = zcEvent_idx_0;
  tmp_0 = (tmp_0 || zcEvent_idx_1);
  tmp_0 = (tmp_0 || zcEvent_idx_2);
  if (tmp_0) {
    vmr_rwd_fix_leftarm_B.inputevents[0] = (int8_T)(zcEvent_idx_0 ?
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_m ? RISING_ZCEVENT :
      FALLING_ZCEVENT : NO_ZCEVENT);
    vmr_rwd_fix_leftarm_B.inputevents[1] = (int8_T)(zcEvent_idx_1 ?
      vmr_rwd_fix_leftarm_B.e_exit_trial ? RISING_ZCEVENT : FALLING_ZCEVENT :
      NO_ZCEVENT);
    vmr_rwd_fix_leftarm_B.inputevents[2] = (int8_T)(zcEvent_idx_2 ?
      vmr_rwd_fix_leftarm_B.Compare_j ? RISING_ZCEVENT : FALLING_ZCEVENT :
      NO_ZCEVENT);

    /* Gateway: Trial_Control */
    iy = 0;
    if (vmr_rwd_fix_leftarm_B.inputevents[0U] == 1) {
      iy = 1;
      if (vmr_rwd_fix_leftarm_DW.temporalCounter_i1 < MAX_uint32_T) {
        vmr_rwd_fix_leftarm_DW.temporalCounter_i1++;
      }

      /* Event: '<S23>:44' */
      vmr_rwd_fix_leftarm_DW.sfEvent = vmr_rwd_fix_leftarm_event_e_clk_p;
      vmr_rwd_fix_leftarm_chartstep_c1_vmr_rwd_fix_leftarm();
    }

    if (vmr_rwd_fix_leftarm_B.inputevents[1U] != 0) {
      iy = 1;

      /* Event: '<S23>:45' */
      vmr_rwd_fix_leftarm_DW.sfEvent = vmr_rwd_fix_leftarm_event_e_ExitTrialNow;
      vmr_rwd_fix_leftarm_chartstep_c1_vmr_rwd_fix_leftarm();
    }

    if (vmr_rwd_fix_leftarm_B.inputevents[2U] != 0) {
      iy = 1;

      /* Event: '<S23>:109' */
      vmr_rwd_fix_leftarm_DW.sfEvent = vmr_rwd_fix_leftarm_event_e_cntl_btn;
      vmr_rwd_fix_leftarm_chartstep_c1_vmr_rwd_fix_leftarm();
    }

    if ((iy != 0) && (vmr_rwd_fix_leftarm_DW.e_ApplyNewRotationEventCounter > 0U))
    {
      vmr_rwd_fix_leftarm_B.e_ApplyNewRotation =
        !vmr_rwd_fix_leftarm_B.e_ApplyNewRotation;
      vmr_rwd_fix_leftarm_DW.e_ApplyNewRotationEventCounter--;
    }

    if ((iy != 0) && (vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter > 0U)) {
      vmr_rwd_fix_leftarm_B.e_Trial_End = !vmr_rwd_fix_leftarm_B.e_Trial_End;
      vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter--;
    }

    vmr_rwd_fix_leftarm_DW.Trial_Control_SubsysRanBC = 4;
  }

  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[0] =
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_m;
  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[1] =
    vmr_rwd_fix_leftarm_B.e_exit_trial;
  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[2] =
    vmr_rwd_fix_leftarm_B.Compare_j;

  /* Product: '<S29>/Product' */
  vmr_rwd_fix_leftarm_B.Product_g = (uint8_T)
    (vmr_rwd_fix_leftarm_B.logging_enable ? (int32_T)
     vmr_rwd_fix_leftarm_B.Compare : 0);

  /* DataTypeConversion: '<S29>/Logging Enable' */
  vmr_rwd_fix_leftarm_B.LoggingEnable = vmr_rwd_fix_leftarm_B.Product_g;

  /* RateTransition: '<S29>/Rate Transition9' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition9 = vmr_rwd_fix_leftarm_B.LoggingEnable;
  }

  /* End of RateTransition: '<S29>/Rate Transition9' */

  /* DataTypeConversion: '<S29>/Current TP Index' */
  vmr_rwd_fix_leftarm_B.CurrentTPIndex = vmr_rwd_fix_leftarm_B.Convert24;

  /* RateTransition: '<S29>/Rate Transition8' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition8 = vmr_rwd_fix_leftarm_B.CurrentTPIndex;
  }

  /* End of RateTransition: '<S29>/Rate Transition8' */

  /* DataTypeConversion: '<S29>/Current Block Index' */
  vmr_rwd_fix_leftarm_B.CurrentBlockIndex = vmr_rwd_fix_leftarm_B.Convert23;

  /* RateTransition: '<S29>/Rate Transition7' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition7 =
      vmr_rwd_fix_leftarm_B.CurrentBlockIndex;
  }

  /* End of RateTransition: '<S29>/Rate Transition7' */

  /* DataTypeConversion: '<S29>/Current Trial Number in Block' */
  vmr_rwd_fix_leftarm_B.CurrentTrialNumberinBlock =
    vmr_rwd_fix_leftarm_B.Convert22;

  /* RateTransition: '<S29>/Rate Transition6' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition6 =
      vmr_rwd_fix_leftarm_B.CurrentTrialNumberinBlock;
  }

  /* End of RateTransition: '<S29>/Rate Transition6' */

  /* DataTypeConversion: '<S29>/Current Block Number in Set' */
  vmr_rwd_fix_leftarm_B.CurrentBlockNumberinSet =
    vmr_rwd_fix_leftarm_B.Convert21;

  /* RateTransition: '<S29>/Rate Transition5' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition5 =
      vmr_rwd_fix_leftarm_B.CurrentBlockNumberinSet;
  }

  /* End of RateTransition: '<S29>/Rate Transition5' */

  /* DataTypeConversion: '<S29>/Current Trial Number in Set' */
  vmr_rwd_fix_leftarm_B.CurrentTrialNumberinSet =
    vmr_rwd_fix_leftarm_B.Convert19_b;

  /* RateTransition: '<S29>/Rate Transition4' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition4 =
      vmr_rwd_fix_leftarm_B.CurrentTrialNumberinSet;
  }

  /* End of RateTransition: '<S29>/Rate Transition4' */

  /* DataTypeConversion: '<S29>/Last Frame Sent1' */
  vmr_rwd_fix_leftarm_B.LastFrameSent1 = vmr_rwd_fix_leftarm_B.Convert25;

  /* RateTransition: '<S29>/Rate Transition12' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition12 =
      vmr_rwd_fix_leftarm_B.LastFrameSent1;
  }

  /* End of RateTransition: '<S29>/Rate Transition12' */

  /* Selector: '<S20>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.targetA_row;
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector[i] = vmr_rwd_fix_leftarm_P.TargetTable_Value
      [((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S20>/Selector' */

  /* Concatenate: '<S20>/Matrix Concatenation' incorporates:
   *  Constant: '<S20>/state1_indices'
   *  Constant: '<S20>/state2_indices'
   *  Constant: '<S20>/state3_indices'
   *  Constant: '<S20>/state4_indices'
   *  Constant: '<S20>/state5_indices'
   */
  tmp_1[0] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1[0];
  tmp_1[5] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1[1];
  tmp_1[10] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1[2];
  tmp_1[15] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1[3];
  tmp_1[1] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol2[0];
  tmp_1[6] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol2[1];
  tmp_1[11] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol2[2];
  tmp_1[16] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol2[3];
  tmp_1[2] = vmr_rwd_fix_leftarm_P.state3_indices_Value[0];
  tmp_1[7] = vmr_rwd_fix_leftarm_P.state3_indices_Value[1];
  tmp_1[12] = vmr_rwd_fix_leftarm_P.state3_indices_Value[2];
  tmp_1[17] = vmr_rwd_fix_leftarm_P.state3_indices_Value[3];
  tmp_1[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value[0];
  tmp_1[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value[1];
  tmp_1[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value[2];
  tmp_1[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value[3];
  tmp_1[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value[0];
  tmp_1[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value[1];
  tmp_1[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value[2];
  tmp_1[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1[0], &tmp_1[0], 20U * sizeof
         (real_T));

  /* Constant: '<S20>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1[20],
         &vmr_rwd_fix_leftarm_P.padder_Value[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S20>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S20>/Opacity'
   *  Constant: '<S20>/Target_Display'
   *  Constant: '<S20>/Target_Type'
   *  Constant: '<S20>/num_states'
   *  Constant: '<S20>/xpos_index'
   *  Constant: '<S20>/ypos_index'
   */
  vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(vmr_rwd_fix_leftarm_B.Selector,
    vmr_rwd_fix_leftarm_B.targetA_state,
    vmr_rwd_fix_leftarm_P.Show_Target_target_type,
    vmr_rwd_fix_leftarm_P.Show_Target_opacity,
    vmr_rwd_fix_leftarm_P.Show_Target_target_display,
    vmr_rwd_fix_leftarm_P.xpos_index_Value,
    vmr_rwd_fix_leftarm_P.ypos_index_Value,
    vmr_rwd_fix_leftarm_P.Show_Target_num_states,
    vmr_rwd_fix_leftarm_B.MatrixConcatenation1,
    &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l);

  /* Selector: '<S21>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.targetB_row;
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_b[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S21>/Selector' */

  /* Concatenate: '<S21>/Matrix Concatenation' incorporates:
   *  Constant: '<S21>/state1_indices'
   *  Constant: '<S21>/state2_indices'
   *  Constant: '<S21>/state3_indices'
   *  Constant: '<S21>/state4_indices'
   *  Constant: '<S21>/state5_indices'
   */
  tmp_2[0] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1[0];
  tmp_2[5] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1[1];
  tmp_2[10] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1[2];
  tmp_2[15] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1[3];
  tmp_2[1] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol2[0];
  tmp_2[6] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol2[1];
  tmp_2[11] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol2[2];
  tmp_2[16] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol2[3];
  tmp_2[2] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol3[0];
  tmp_2[7] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol3[1];
  tmp_2[12] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol3[2];
  tmp_2[17] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol3[3];
  tmp_2[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value_d[0];
  tmp_2[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value_d[1];
  tmp_2[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value_d[2];
  tmp_2[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value_d[3];
  tmp_2[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value_c[0];
  tmp_2[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value_c[1];
  tmp_2[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value_c[2];
  tmp_2[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value_c[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[0], &tmp_2[0], 20U *
         sizeof(real_T));

  /* Constant: '<S21>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[20],
         &vmr_rwd_fix_leftarm_P.padder_Value_o[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S21>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S21>/Opacity'
   *  Constant: '<S21>/Target_Display'
   *  Constant: '<S21>/Target_Type'
   *  Constant: '<S21>/num_states'
   *  Constant: '<S21>/xpos_index'
   *  Constant: '<S21>/ypos_index'
   */
  vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(vmr_rwd_fix_leftarm_B.Selector_b,
    vmr_rwd_fix_leftarm_B.targetB_state,
    vmr_rwd_fix_leftarm_P.Show_Target1_target_type,
    vmr_rwd_fix_leftarm_P.Show_Target1_opacity,
    vmr_rwd_fix_leftarm_P.Show_Target1_target_display,
    vmr_rwd_fix_leftarm_P.xpos_index_Value_b,
    vmr_rwd_fix_leftarm_P.ypos_index_Value_j,
    vmr_rwd_fix_leftarm_P.Show_Target1_num_states,
    vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i,
    &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_p);

  /* Selector: '<S264>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.Taskwideparam[0];
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_a[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S264>/Selector' */

  /* Abs: '<S4>/Abs' */
  i = vmr_rwd_fix_leftarm_B.fdbk_text;
  if (i < 0) {
    vmr_rwd_fix_leftarm_B.Abs_c = -i;
  } else {
    vmr_rwd_fix_leftarm_B.Abs_c = i;
  }

  /* End of Abs: '<S4>/Abs' */

  /* Logic: '<S4>/Logical Operator' */
  vmr_rwd_fix_leftarm_B.LogicalOperator = ((vmr_rwd_fix_leftarm_B.reward_state
    != 0.0) || (vmr_rwd_fix_leftarm_B.Abs_c != 0));

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_j =
    vmr_rwd_fix_leftarm_B.LogicalOperator;

  /* Concatenate: '<S264>/Matrix Concatenation' incorporates:
   *  Constant: '<S264>/state1_indices'
   *  Constant: '<S264>/state2_indices'
   *  Constant: '<S264>/state3_indices'
   *  Constant: '<S264>/state4_indices'
   *  Constant: '<S264>/state5_indices'
   */
  for (i_0 = 0; i_0 < 9; i_0++) {
    tmp_3[5 * i_0] = vmr_rwd_fix_leftarm_P.Show_Target_With_Label_attribcol1[i_0];
  }

  for (i_0 = 0; i_0 < 9; i_0++) {
    tmp_3[1 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state2_indices_Value[i_0];
  }

  for (i_0 = 0; i_0 < 9; i_0++) {
    tmp_3[2 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state3_indices_Value_f[i_0];
  }

  for (i_0 = 0; i_0 < 9; i_0++) {
    tmp_3[3 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state4_indices_Value_c[i_0];
  }

  for (i_0 = 0; i_0 < 9; i_0++) {
    tmp_3[4 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state5_indices_Value_j[i_0];
  }

  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[0], &tmp_3[0], 45U *
         sizeof(real_T));

  /* End of Concatenate: '<S264>/Matrix Concatenation' */

  /* Constant: '<S264>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[45],
         &vmr_rwd_fix_leftarm_P.padder_Value_e[0], 10U * sizeof(real_T));

  /* MATLAB Function: '<S264>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S264>/Opacity'
   *  Constant: '<S264>/Target_Display'
   *  Constant: '<S264>/Target_Type'
   *  Constant: '<S264>/num_states'
   *  Constant: '<S264>/xpos_index'
   *  Constant: '<S264>/ypos_index'
   */
  Elbow_Max_Scale_Factor =
    vmr_rwd_fix_leftarm_P.Show_Target_With_Label_target_type;

  /* MATLAB Function 'Show_Target_With_Label/Embedded MATLAB Function': '<S265>:1' */
  /*  VCODEs are length 70. All units in a VCODE should be SI, e.g. (m) and (rad). Elements in a VCODE are defined as follows: */
  /*  */
  /*  For all target types: */
  /*   1: target type */
  /*        1 - circle */
  /*        2 - ellipse */
  /*        3 - rectangle */
  /*        4 - line */
  /*        5 - triangle */
  /*        11 - circle with label */
  /*        12 - ellipse with label */
  /*        13 - rectangle with label */
  /*        14 - line with label */
  /*        15 - triangle with label */
  /*   2: target on/off status and target display (which display target will appear on) */
  /* 		0 - off */
  /* 		1 - on, appearing on both subject and operator displays */
  /*        2 - on, appearing on subject display only */
  /*        3 - on, appearing on operator display only */
  /*   3: x position (m) */
  /*   4: y position (m) */
  /*   5: fill colour (RRGGBB) or texture index */
  /*   6: stroke colour (RRGGBB) or texture index */
  /*   7: stroke width */
  /*   8: reserved for target background ID */
  /*   9: opacity */
  /*  */
  /*  For circles: */
  /*   10: radius (m) */
  /*  */
  /*  For ellipses: */
  /*   10: major radius (m) */
  /*   11: minor radius (m) */
  /*   12: orientation of major axis (rad) */
  /*  */
  /*  For rectangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: orientation (rad) (relative to x, y already shown) */
  /*  */
  /*  For lines: */
  /*   10: endpoint x-axis coordinate relative to start point (m) */
  /*   11: endpoint y-axis coordinate relative to start point (m) */
  /*  */
  /*  For triangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: offset of peak from midpoint of length (m) */
  /*   13: orientation (rad) */
  /*  */
  /*  For all labelled target types: */
  /*   14: reserved */
  /*   15-64: label characters (indexes in ISO 8859-1 character set) */
  /*   65: label colour (0xRRGGBB), opacity is set by the vcode's opacity (9). */
  /*   66: label height (m) */
  /*   67: reserved */
  /*   68: reserved */
  /*   69: reserved */
  /*   70: reserved */
  /*  NOTE: we assume that the STATE and/or OPACITY inputs are vectors.  */
  /*  If the length of the input STATE is not the same as the number of targets then make STATE a column vector of the same length as  */
  /*  the TARGET input, using the first STATE (i.e. all targets get the same state)  */
  /* '<S265>:1:70' */
  hold_steps = vmr_rwd_fix_leftarm_B.DataTypeConversion_j;

  /*  If the length of the input OPACITY is not the same as the number of targets then make OPACITY a column vector of the same length as */
  /*  the TARGET input, using the first OPACITY (i.e. all targets get the same opacity)  */
  /* '<S265>:1:79' */
  /*  Clamping the opacity to [0, 100]. */
  /* '<S265>:1:86' */
  /* '<S265>:1:87' */
  opacity = vmr_rwd_fix_leftarm_P.Show_Target_With_Label_opacity;
  if (!(opacity <= 100.0)) {
    opacity = 100.0;
  }

  if (!(opacity >= 0.0)) {
    opacity = 0.0;
  }

  /* '<S265>:1:89' */
  for (i = 0; i < 70; i++) {
    vmr_rwd_fix_leftarm_B.VCODE_l[i] = 0.0;
  }

  /*  Set the target type. Targets with labels have type codes 10 greater than their unlabelled counterparts. */
  /* '<S265>:1:92' */
  vmr_rwd_fix_leftarm_B.VCODE_l[0] =
    vmr_rwd_fix_leftarm_P.Show_Target_With_Label_target_type + 10.0;

  /*  Set the target position. */
  /* '<S265>:1:95' */
  vmr_rwd_fix_leftarm_B.VCODE_l[2] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
    vmr_rwd_fix_leftarm_P.xpos_index_Value_k - 1] * 0.01;

  /*  x position (convert from (cm) in target table to (m)) */
  /* '<S265>:1:96' */
  vmr_rwd_fix_leftarm_B.VCODE_l[3] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
    vmr_rwd_fix_leftarm_P.ypos_index_Value_ju - 1] * 0.01;

  /*  y position (convert from (cm) in target table to (m)) */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((vmr_rwd_fix_leftarm_B.DataTypeConversion_j <= 0.0) ||
      (vmr_rwd_fix_leftarm_B.DataTypeConversion_j >
       vmr_rwd_fix_leftarm_P.Show_Target_With_Label_num_states)) {
    /* '<S265>:1:101' */
    /* '<S265>:1:102' */
    vmr_rwd_fix_leftarm_B.VCODE_l[1] = 0.0;

    /*  target is off */
  } else {
    /* '<S265>:1:104' */
    vmr_rwd_fix_leftarm_B.VCODE_l[1] =
      vmr_rwd_fix_leftarm_P.Show_Target_With_Label_target_display;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S265>:1:107' */
  /* '<S265>:1:108' */
  stroke_colour_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
    vmr_rwd_fix_leftarm_B.DataTypeConversion_j + 4];

  /* '<S265>:1:109' */
  stroke_width_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
    vmr_rwd_fix_leftarm_B.DataTypeConversion_j + 9];

  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
      vmr_rwd_fix_leftarm_B.DataTypeConversion_j - 1] == 0.0) {
    /* '<S265>:1:112' */
    /* '<S265>:1:113' */
    vmr_rwd_fix_leftarm_B.VCODE_l[4] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
             vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
             vmr_rwd_fix_leftarm_B.DataTypeConversion_j - 1] - 1] < 0.0) {
    /* '<S265>:1:114' */
    /* '<S265>:1:115' */
    vmr_rwd_fix_leftarm_B.VCODE_l[4] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
      vmr_rwd_fix_leftarm_B.DataTypeConversion_j - 1] - 1];
  } else {
    /* '<S265>:1:117' */
    vmr_rwd_fix_leftarm_B.VCODE_l[4] = vmr_rwd_fix_leftarm_colourshift_b
      (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
       vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
       vmr_rwd_fix_leftarm_B.DataTypeConversion_j - 1] - 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (stroke_colour_col == 0.0) {
    /* '<S265>:1:121' */
    /* '<S265>:1:122' */
    vmr_rwd_fix_leftarm_B.VCODE_l[5] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)stroke_colour_col - 1] <
             0.0) {
    /* '<S265>:1:123' */
    /* '<S265>:1:124' */
    vmr_rwd_fix_leftarm_B.VCODE_l[5] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      stroke_colour_col - 1];
  } else {
    /* '<S265>:1:126' */
    vmr_rwd_fix_leftarm_B.VCODE_l[5] = vmr_rwd_fix_leftarm_colourshift_b
      (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)stroke_colour_col - 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (stroke_width_col == 0.0) {
    /* '<S265>:1:130' */
    /* '<S265>:1:131' */
    vmr_rwd_fix_leftarm_B.VCODE_l[6] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (stroke_width_col < 0.0) {
    /* '<S265>:1:132' */
    /* '<S265>:1:133' */
    vmr_rwd_fix_leftarm_B.VCODE_l[6] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S265>:1:135' */
    vmr_rwd_fix_leftarm_B.VCODE_l[6] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      stroke_width_col - 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S265>:1:139' */
  vmr_rwd_fix_leftarm_B.VCODE_l[8] = opacity;

  /*  Set attributes specific to each target type. In the process, note the first state vector column used for label information. */
  /* '<S265>:1:142' */
  iy = 1;

  /*  Set attributes specific to each target type. */
  if (Elbow_Max_Scale_Factor == 1.0) {
    /* '<S265>:1:145' */
    /*  Handle circle target: */
    /* '<S265>:1:148' */
    /* '<S265>:1:149' */
    vmr_rwd_fix_leftarm_B.VCODE_l[9] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
    /* '<S265>:1:150' */
    iy = 5;
  } else if ((Elbow_Max_Scale_Factor == 2.0) || (Elbow_Max_Scale_Factor == 3.0))
  {
    /* '<S265>:1:152' */
    /*  Handle ellipse or rectangle target: */
    /* '<S265>:1:155' */
    /* '<S265>:1:156' */
    /* '<S265>:1:157' */
    /* '<S265>:1:159' */
    vmr_rwd_fix_leftarm_B.VCODE_l[9] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S265>:1:160' */
    vmr_rwd_fix_leftarm_B.VCODE_l[10] = vmr_rwd_fix_leftarm_B.Selector_a
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 24] ==
        0.0) {
      /* '<S265>:1:161' */
      /* '<S265>:1:162' */
      vmr_rwd_fix_leftarm_B.VCODE_l[11] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S265>:1:164' */
      vmr_rwd_fix_leftarm_B.VCODE_l[11] = (vmr_rwd_fix_leftarm_B.Selector_a
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
        hold_steps + 24] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 24] -
        1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }

    /* '<S265>:1:166' */
    iy = 7;
  } else if (Elbow_Max_Scale_Factor == 4.0) {
    /* '<S265>:1:168' */
    /*  Handle line target: */
    /* '<S265>:1:171' */
    /* '<S265>:1:172' */
    /* '<S265>:1:173' */
    vmr_rwd_fix_leftarm_B.VCODE_l[9] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S265>:1:174' */
    vmr_rwd_fix_leftarm_B.VCODE_l[10] = vmr_rwd_fix_leftarm_B.Selector_a
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S265>:1:175' */
    iy = 6;
  } else {
    if (Elbow_Max_Scale_Factor == 5.0) {
      /* '<S265>:1:177' */
      /*  Handle triangle target: */
      /* '<S265>:1:180' */
      /* '<S265>:1:181' */
      /* '<S265>:1:182' */
      /* '<S265>:1:183' */
      /* '<S265>:1:185' */
      vmr_rwd_fix_leftarm_B.VCODE_l[9] = vmr_rwd_fix_leftarm_B.Selector_a
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
        hold_steps + 14] - 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 19]
          == 0.0) {
        /* '<S265>:1:189' */
        /* '<S265>:1:190' */
        vmr_rwd_fix_leftarm_B.VCODE_l[10] = 0.8660254037844386 *
          vmr_rwd_fix_leftarm_B.VCODE_l[9];

        /*  height for equilateral triangle */
        /* '<S265>:1:191' */
        vmr_rwd_fix_leftarm_B.VCODE_l[11] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S265>:1:193' */
        vmr_rwd_fix_leftarm_B.VCODE_l[10] = vmr_rwd_fix_leftarm_B.Selector_a
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
          hold_steps + 19] - 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S265>:1:194' */
        vmr_rwd_fix_leftarm_B.VCODE_l[11] = vmr_rwd_fix_leftarm_B.Selector_a
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
          hold_steps + 24] - 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)hold_steps + 29]
          == 0.0) {
        /* '<S265>:1:197' */
        /* '<S265>:1:198' */
        vmr_rwd_fix_leftarm_B.VCODE_l[12] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S265>:1:200' */
        vmr_rwd_fix_leftarm_B.VCODE_l[12] = (vmr_rwd_fix_leftarm_B.Selector_a
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
          hold_steps + 29] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_a
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(int32_T)
          hold_steps + 29] - 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }

      /* '<S265>:1:202' */
      iy = 8;
    }
  }

  /*  Copy the label characters to the VCODE. */
  /* '<S265>:1:207' */
  for (ixstart = 0; ixstart < 50; ixstart++) {
    /* '<S265>:1:207' */
    /* '<S265>:1:208' */
    vmr_rwd_fix_leftarm_B.VCODE_l[14 + ixstart] =
      vmr_rwd_fix_leftarm_B.Convert1[((int32_T)vmr_rwd_fix_leftarm_B.Selector_a
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[((iy - 1) * 5 +
      (int32_T)hold_steps) - 1] - 1] + 100 * ixstart) - 1];

    /* '<S265>:1:207' */
  }

  /*  Set the label colour. Like other colours, label colour comes from the GUI in RRRGGGBBB format and is converted to a 32-bit */
  /*  0xRRGGBB value here. If the target column table index for the colour is 0, the label is transparent. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(5 * iy + (int32_T)hold_steps)
      - 1] == 0.0) {
    /* '<S265>:1:213' */
    /* '<S265>:1:214' */
    vmr_rwd_fix_leftarm_B.VCODE_l[64] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
             vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(5 * iy + (int32_T)
              hold_steps) - 1] - 1] < 0.0) {
    /* '<S265>:1:215' */
    /* '<S265>:1:216' */
    vmr_rwd_fix_leftarm_B.VCODE_l[64] = vmr_rwd_fix_leftarm_B.Selector_a
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(5 * iy + (int32_T)
      hold_steps) - 1] - 1];
  } else {
    /* '<S265>:1:218' */
    vmr_rwd_fix_leftarm_B.VCODE_l[64] = vmr_rwd_fix_leftarm_colourshift_b
      (vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
       vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[(5 * iy + (int32_T)
        hold_steps) - 1] - 1]);
  }

  /*  Set the label height. Label height is converted from (cm) in the target table to (m). */
  /* '<S265>:1:222' */
  vmr_rwd_fix_leftarm_B.VCODE_l[65] = vmr_rwd_fix_leftarm_B.Selector_a[(int32_T)
    vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[((iy + 1) * 5 + (int32_T)
    hold_steps) - 1] - 1] * 0.01;

  /* End of MATLAB Function: '<S264>/Embedded MATLAB Function' */

  /* Switch: '<S4>/Switch' */
  if (vmr_rwd_fix_leftarm_B.reward_state >
      vmr_rwd_fix_leftarm_P.Switch_Threshold_n) {
    vmr_rwd_fix_leftarm_B.Switch_h = vmr_rwd_fix_leftarm_B.score;
  } else {
    vmr_rwd_fix_leftarm_B.Switch_h = vmr_rwd_fix_leftarm_B.reward;
  }

  /* End of Switch: '<S4>/Switch' */

  /* MATLAB Function: '<S4>/MATLAB Function' */
  /* MATLAB Function 'DisplayText/MATLAB Function': '<S263>:1' */
  /* '<S263>:1:18' */
  /* '<S263>:1:19' */
  /* '<S263>:1:27' */
  /* '<S263>:1:55' */
  /* '<S263>:1:61' */
  /* '<S263>:1:63' */
  /* '<S263>:1:4' */
  memcpy(&vmr_rwd_fix_leftarm_B.VCODE_mod[0], &vmr_rwd_fix_leftarm_B.VCODE_l[0],
         70U * sizeof(real_T));
  if (vmr_rwd_fix_leftarm_B.fdbk_text == 0) {
    /* '<S263>:1:6' */
    /* if this is zero, show the score */
    /* score is in cents. potentially need to convert to dollars */
    if (vmr_rwd_fix_leftarm_B.Switch_h < 10) {
      /* '<S263>:1:11' */
      /* '<S263>:1:12' */
      /* '<S263>:1:13' */
      /* '<S263>:1:15' */
      /* '<S263>:1:83' */
      /* make sure we only have 1 digit or we will get a weird character! */
      /* '<S263>:1:85' */
      /* // add the character */
      /* '<S263>:1:15' */
      for (i_0 = 0; i_0 < 11; i_0++) {
        b_text1_1[i_0] = b_text1[i_0];
      }

      tmp_c = (vmr_rwd_fix_leftarm_B.Switch_h - div_s32_floor
               (vmr_rwd_fix_leftarm_B.Switch_h, 10) * 10) + 48LL;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      b_text1_1[11] = (int8_T)tmp_c;
      for (i_0 = 0; i_0 < 7; i_0++) {
        b_text1_1[i_0 + 12] = text2[i_0];
      }

      i = 19;
      for (i_0 = 0; i_0 < 19; i_0++) {
        textout_data[i_0] = b_text1_1[i_0];
      }
    } else if (vmr_rwd_fix_leftarm_B.Switch_h < 100) {
      /* '<S263>:1:17' */
      /* score < $1 */
      /* '<S263>:1:18' */
      /* '<S263>:1:19' */
      /* '<S263>:1:21' */
      ixstart = (int32_T)floor((real_T)vmr_rwd_fix_leftarm_B.Switch_h / 10.0);

      /* we need to cast score to a double otherwise the arithmetic is wrong! */
      /* '<S263>:1:22' */
      tmp_c = ixstart * 10LL;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      tmp_c = (int64_T)vmr_rwd_fix_leftarm_B.Switch_h - (int32_T)tmp_c;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      iy = (int32_T)tmp_c;

      /* '<S263>:1:24' */
      /* '<S263>:1:83' */
      /* make sure we only have 1 digit or we will get a weird character! */
      /* '<S263>:1:85' */
      /* // add the character */
      /* '<S263>:1:83' */
      /* make sure we only have 1 digit or we will get a weird character! */
      /* '<S263>:1:85' */
      /* // add the character */
      /* '<S263>:1:24' */
      for (i_0 = 0; i_0 < 11; i_0++) {
        b_text1_0[i_0] = b_text1[i_0];
      }

      b_text1_0[11] = (int8_T)((ixstart - div_s32_floor(ixstart, 10) * 10) + 48);
      tmp_c = (iy - div_s32_floor(iy, 10) * 10) + 48LL;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      b_text1_0[12] = (int8_T)tmp_c;
      for (i_0 = 0; i_0 < 7; i_0++) {
        b_text1_0[i_0 + 13] = text2[i_0];
      }

      i = 20;
      for (i_0 = 0; i_0 < 20; i_0++) {
        textout_data[i_0] = b_text1_0[i_0];
      }
    } else {
      /* score > $1, convert to dollars to keep the score readable */
      /* '<S263>:1:27' */
      /* '<S263>:1:31' */
      iy = (int32_T)floor((real_T)vmr_rwd_fix_leftarm_B.Switch_h / 100.0);
      if (iy >= 10) {
        /* '<S263>:1:32' */
        /* double digit dollar value */
        /* '<S263>:1:33' */
        ixstart = (int32_T)floor((real_T)iy / 10.0);

        /* '<S263>:1:34' */
        n2d = iy - ixstart * 10;

        /* '<S263>:1:35' */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        /* // add the character */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        /* // add the character */
        /* '<S263>:1:35' */
        textcents_idx_0 = (int8_T)((ixstart - div_s32_floor(ixstart, 10) * 10) +
          48);
        textcents_idx_1 = (int8_T)((n2d - div_s32_floor(n2d, 10) * 10) + 48);
        textdollars_sizes_idx_1 = 2;
        textdollars_data[0] = textcents_idx_0;
        textdollars_data[1] = textcents_idx_1;
      } else {
        /* single digit */
        /* '<S263>:1:37' */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        textcents_idx_0 = (int8_T)((iy - div_s32_floor(iy, 10) * 10) + 48);

        /* // add the character */
        textdollars_sizes_idx_1 = 1;
        textdollars_data[0] = textcents_idx_0;
      }

      /* '<S263>:1:40' */
      tmp_c = iy * 100LL;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      tmp_c = (int64_T)vmr_rwd_fix_leftarm_B.Switch_h - (int32_T)tmp_c;
      if (tmp_c > 2147483647LL) {
        tmp_c = 2147483647LL;
      } else {
        if (tmp_c < -2147483648LL) {
          tmp_c = -2147483648LL;
        }
      }

      iy = (int32_T)tmp_c;
      if (iy < 10) {
        /* '<S263>:1:41' */
        /* '<S263>:1:42' */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        /* // add the character */
        textcents_idx_0 = '0';
        tmp_c = (iy - div_s32_floor(iy, 10) * 10) + 48LL;
        if (tmp_c > 2147483647LL) {
          tmp_c = 2147483647LL;
        } else {
          if (tmp_c < -2147483648LL) {
            tmp_c = -2147483648LL;
          }
        }

        textcents_idx_1 = (int8_T)tmp_c;
      } else {
        /* '<S263>:1:44' */
        ixstart = (int32_T)floor((real_T)iy / 10.0);

        /* '<S263>:1:45' */
        iy -= ixstart * 10;

        /* '<S263>:1:46' */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        /* // add the character */
        /* '<S263>:1:83' */
        /* make sure we only have 1 digit or we will get a weird character! */
        /* '<S263>:1:85' */
        /* // add the character */
        textcents_idx_0 = (int8_T)((ixstart - div_s32_floor(ixstart, 10) * 10) +
          48);
        tmp_c = (iy - div_s32_floor(iy, 10) * 10) + 48LL;
        if (tmp_c > 2147483647LL) {
          tmp_c = 2147483647LL;
        } else {
          if (tmp_c < -2147483648LL) {
            tmp_c = -2147483648LL;
          }
        }

        textcents_idx_1 = (int8_T)tmp_c;
      }

      /* '<S263>:1:49' */
      i = 16 + textdollars_sizes_idx_1;
      for (i_0 = 0; i_0 < 12; i_0++) {
        textout_data[i_0] = text1[i_0];
      }

      for (i_0 = 0; i_0 < textdollars_sizes_idx_1; i_0++) {
        textout_data[i_0 + 12] = textdollars_data[i_0];
      }

      textout_data[12 + textdollars_sizes_idx_1] = '.';
      textout_data[textdollars_sizes_idx_1 + 13] = textcents_idx_0;
      textout_data[textdollars_sizes_idx_1 + 14] = textcents_idx_1;
      textout_data[15 + textdollars_sizes_idx_1] = '!';
    }
  } else if (vmr_rwd_fix_leftarm_B.fdbk_text == 1) {
    /* '<S263>:1:53' */
    /* print "too fast" */
    /* '<S263>:1:55' */
    i = 9;
    for (i_0 = 0; i_0 < 9; i_0++) {
      textout_data[i_0] = c[i_0];
    }
  } else if (vmr_rwd_fix_leftarm_B.fdbk_text == -1) {
    /* '<S263>:1:58' */
    /* print "too slow" */
    /* '<S263>:1:61' */
    i = 9;
    for (i_0 = 0; i_0 < 9; i_0++) {
      textout_data[i_0] = d[i_0];
    }
  } else {
    /* '<S263>:1:63' */
    i = 0;
  }

  /* the first character is VCODE(15) */
  /* need to translate text into ascii: */
  /* '<S263>:1:70' */
  for (i_0 = 0; i_0 < i; i_0++) {
    textnum_data[i_0] = (uint8_T)textout_data[i_0];
  }

  /* this quickly casts each char into a number */
  /* make sure we won't overflow the VCODE: no more than 50 chars! we will */
  /* clip off anything that overflows. */
  varargin_1_idx_0 = (int8_T)i;
  if (1 > varargin_1_idx_0) {
    i_0 = 0;
  } else {
    i_0 = varargin_1_idx_0;
  }

  iy = i_0 - 1;

  /* '<S263>:1:74' */
  for (i_0 = 0; i_0 <= iy; i_0++) {
    vmr_rwd_fix_leftarm_B.VCODE_mod[14 + i_0] = textnum_data[i_0];
  }

  /* write out as many the characters as possible into the VCODE */
  /* '<S263>:1:75' */
  vmr_rwd_fix_leftarm_B.VCODE_mod[i + 15] = 0.0;

  /* terminate the string! */
  /* '<S263>:1:77' */
  vmr_rwd_fix_leftarm_B.VCODE_mod[2] =
    vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l.VCODE[2];

  /* End of MATLAB Function: '<S4>/MATLAB Function' */

  /* Sum: '<S3>/Add' incorporates:
   *  Constant: '<S3>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Add = vmr_rwd_fix_leftarm_P.Constant_Value_k +
    vmr_rwd_fix_leftarm_B.instruct_num;

  /* Selector: '<S261>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.Add;
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_e[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S261>/Selector' */

  /* Abs: '<S3>/Abs' */
  vmr_rwd_fix_leftarm_B.Abs = fabs(vmr_rwd_fix_leftarm_B.instruct_num);

  /* Signum: '<S3>/Sign' */
  M2 = vmr_rwd_fix_leftarm_B.Abs;
  if (M2 < 0.0) {
    vmr_rwd_fix_leftarm_B.Sign = -1.0;
  } else if (M2 > 0.0) {
    vmr_rwd_fix_leftarm_B.Sign = 1.0;
  } else if (M2 == 0.0) {
    vmr_rwd_fix_leftarm_B.Sign = 0.0;
  } else {
    vmr_rwd_fix_leftarm_B.Sign = M2;
  }

  /* End of Signum: '<S3>/Sign' */

  /* Concatenate: '<S261>/Matrix Concatenation' incorporates:
   *  Constant: '<S261>/state1_indices'
   *  Constant: '<S261>/state2_indices'
   *  Constant: '<S261>/state3_indices'
   *  Constant: '<S261>/state4_indices'
   *  Constant: '<S261>/state5_indices'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp_4[5 * i_0] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_n[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp_4[1 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state2_indices_Value_a[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp_4[2 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state3_indices_Value_m[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp_4[3 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state4_indices_Value_c2[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp_4[4 + 5 * i_0] = vmr_rwd_fix_leftarm_P.state5_indices_Value_p[i_0];
  }

  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[0], &tmp_4[0], 30U *
         sizeof(real_T));

  /* End of Concatenate: '<S261>/Matrix Concatenation' */

  /* Constant: '<S261>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[30],
         &vmr_rwd_fix_leftarm_P.padder_Value_i[0], 25U * sizeof(real_T));

  /* MATLAB Function: '<S261>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S261>/Opacity'
   *  Constant: '<S261>/Target_Display'
   *  Constant: '<S261>/Target_Type'
   *  Constant: '<S261>/num_states'
   *  Constant: '<S261>/xpos_index'
   *  Constant: '<S261>/ypos_index'
   */
  vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(vmr_rwd_fix_leftarm_B.Selector_e,
    vmr_rwd_fix_leftarm_B.Sign, vmr_rwd_fix_leftarm_P.Show_Target1_target_type_l,
    vmr_rwd_fix_leftarm_P.Show_Target1_opacity_e,
    vmr_rwd_fix_leftarm_P.Show_Target1_target_display_k,
    vmr_rwd_fix_leftarm_P.xpos_index_Value_m,
    vmr_rwd_fix_leftarm_P.ypos_index_Value_l,
    vmr_rwd_fix_leftarm_P.Show_Target1_num_states_m,
    vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e,
    &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_h);

  /* Memory: '<S24>/Memory1' */
  vmr_rwd_fix_leftarm_B.Memory1_m =
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g;

  /* Memory: '<S24>/Memory' */
  memcpy(&vmr_rwd_fix_leftarm_B.Memory_d[0],
         &vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_j[0], 50U * sizeof(real_T));

  /* Memory: '<S24>/Memory2' */
  vmr_rwd_fix_leftarm_B.Memory2_a =
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_o;

  /* Outputs for Triggered SubSystem: '<S24>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S332>/Trigger'
   */
  zcEvent_idx_0 = (((vmr_rwd_fix_leftarm_PrevZCX.TriggeredSubsystem_Trig_ZCE ==
                     POS_ZCSIG) != vmr_rwd_fix_leftarm_B.Memory2_a) &&
                   (vmr_rwd_fix_leftarm_PrevZCX.TriggeredSubsystem_Trig_ZCE !=
                    UNINITIALIZED_ZCSIG));
  if (zcEvent_idx_0) {
    /* MATLAB Function: '<S332>/Embedded MATLAB Function' */
    /* MATLAB Function 'Visual_Rotation/Triggered Subsystem/Embedded MATLAB Function': '<S336>:1' */
    /*  This block supports an embeddable subset of the MATLAB language. */
    /*  See the help menu for details.  */
    /* This block was modified by IEB, Sept 24, 2008 */
    /* It updates the desired amount of rotation */
    /*  NOTE ALL ROTATIONS ARE CURRENTLY IN DEGREES IN THE FUNCTION */
    /*  create a persistent variable to remember the rotation amount from one time-step to the next */
    /*  where to look in the TP table for these parameters */
    /* '<S336>:1:19' */
    /* '<S336>:1:20' */
    if ((vmr_rwd_fix_leftarm_B.Memory_d[6] == 0.0) ||
        (vmr_rwd_fix_leftarm_B.Memory1_m == 0.0)) {
      /* '<S336>:1:22' */
      /* set the rotation = 0 */
      /* '<S336>:1:24' */
      vmr_rwd_fix_leftarm_B.rotation = 0.0;
    } else if ((vmr_rwd_fix_leftarm_B.Memory_d[6] == 1.0) &&
               (vmr_rwd_fix_leftarm_B.Memory1_m > 0.0)) {
      /* '<S336>:1:25' */
      /* set the rotation = specified amount */
      /* '<S336>:1:27' */
      vmr_rwd_fix_leftarm_B.rotation = vmr_rwd_fix_leftarm_B.Memory_d[7];
    } else if ((vmr_rwd_fix_leftarm_B.Memory_d[6] == 2.0) &&
               (vmr_rwd_fix_leftarm_B.Memory1_m > 0.0)) {
      /* '<S336>:1:28' */
      /* set the rotation to change by specified amount */
      /* '<S336>:1:30' */
      vmr_rwd_fix_leftarm_B.rotation = vmr_rwd_fix_leftarm_DW.rotation_memory +
        vmr_rwd_fix_leftarm_B.Memory_d[7];
    } else {
      /* do nothing */
      /* '<S336>:1:33' */
      vmr_rwd_fix_leftarm_B.rotation = vmr_rwd_fix_leftarm_DW.rotation_memory;
    }

    /*  save the rotation amount for the next time-step */
    /* '<S336>:1:37' */
    vmr_rwd_fix_leftarm_DW.rotation_memory = vmr_rwd_fix_leftarm_B.rotation;

    /* End of MATLAB Function: '<S332>/Embedded MATLAB Function' */
    vmr_rwd_fix_leftarm_DW.TriggeredSubsystem_SubsysRanBC = 4;
  }

  vmr_rwd_fix_leftarm_PrevZCX.TriggeredSubsystem_Trig_ZCE =
    vmr_rwd_fix_leftarm_B.Memory2_a;

  /* End of Outputs for SubSystem: '<S24>/Triggered Subsystem' */

  /* Selector: '<S330>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.Memory_d[2];
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_ec[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S330>/Selector' */

  /* Concatenate: '<S330>/Matrix Concatenation' incorporates:
   *  Constant: '<S330>/state1_indices'
   *  Constant: '<S330>/state2_indices'
   *  Constant: '<S330>/state3_indices'
   *  Constant: '<S330>/state4_indices'
   *  Constant: '<S330>/state5_indices'
   */
  tmp_5[0] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_j[0];
  tmp_5[5] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_j[1];
  tmp_5[10] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_j[2];
  tmp_5[15] = vmr_rwd_fix_leftarm_P.Show_Target1_attribcol1_j[3];
  tmp_5[1] = vmr_rwd_fix_leftarm_P.state2_indices_Value_h[0];
  tmp_5[6] = vmr_rwd_fix_leftarm_P.state2_indices_Value_h[1];
  tmp_5[11] = vmr_rwd_fix_leftarm_P.state2_indices_Value_h[2];
  tmp_5[16] = vmr_rwd_fix_leftarm_P.state2_indices_Value_h[3];
  tmp_5[2] = vmr_rwd_fix_leftarm_P.state3_indices_Value_e[0];
  tmp_5[7] = vmr_rwd_fix_leftarm_P.state3_indices_Value_e[1];
  tmp_5[12] = vmr_rwd_fix_leftarm_P.state3_indices_Value_e[2];
  tmp_5[17] = vmr_rwd_fix_leftarm_P.state3_indices_Value_e[3];
  tmp_5[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value_h[0];
  tmp_5[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value_h[1];
  tmp_5[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value_h[2];
  tmp_5[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value_h[3];
  tmp_5[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value_n[0];
  tmp_5[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value_n[1];
  tmp_5[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value_n[2];
  tmp_5[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value_n[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[0], &tmp_5[0], 20U *
         sizeof(real_T));

  /* Constant: '<S330>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[20],
         &vmr_rwd_fix_leftarm_P.padder_Value_p[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S330>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S24>/Constant1'
   *  Constant: '<S330>/Opacity'
   *  Constant: '<S330>/Target_Display'
   *  Constant: '<S330>/Target_Type'
   *  Constant: '<S330>/num_states'
   *  Constant: '<S330>/xpos_index'
   *  Constant: '<S330>/ypos_index'
   */
  Elbow_Max_Scale_Factor = vmr_rwd_fix_leftarm_P.Show_Target1_target_type_b;

  /* MATLAB Function 'Show_Target/Embedded MATLAB Function': '<S334>:1' */
  /*  VCODEs are length 70. All units in a VCODE should be SI, e.g. (m) and (rad). Elements in a VCODE are defined as follows: */
  /*  */
  /*  For all target types: */
  /*   1: target type */
  /*        1 - circle */
  /*        2 - ellipse */
  /*        3 - rectangle */
  /*        4 - line */
  /*        5 - triangle */
  /*        11 - circle with label */
  /*        12 - ellipse with label */
  /*        13 - rectangle with label */
  /*        14 - line with label */
  /*        15 - triangle with label */
  /*   2: target on/off status and target display (which display target will appear on) */
  /* 		0 - off */
  /* 		1 - on, appearing on both subject and operator displays */
  /*        2 - on, appearing on subject display only */
  /*        3 - on, appearing on operator display only */
  /*   3: x position (m) */
  /*   4: y position (m) */
  /*   5: fill colour (RRGGBB) or texture index */
  /*   6: stroke colour (RRGGBB) or texture index */
  /*   7: stroke width */
  /*   8: reserved for target background ID */
  /*   9: opacity */
  /*  */
  /*  For circles: */
  /*   10: radius (m) */
  /*  */
  /*  For ellipses: */
  /*   10: major radius (m) */
  /*   11: minor radius (m) */
  /*   12: orientation of major axis (rad) */
  /*  */
  /*  For rectangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: orientation (rad) (relative to x, y already shown) */
  /*  */
  /*  For lines: */
  /*   10: endpoint x-axis coordinate relative to start point (m) */
  /*   11: endpoint y-axis coordinate relative to start point (m) */
  /*  */
  /*  For triangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: offset of peak from midpoint of length (m) */
  /*   13: orientation (rad) */
  /*  */
  /*  For all labelled target types: */
  /*   14: reserved */
  /*   15-64: label characters (indexes in ISO 8859-1 character set) */
  /*   65: label colour (0xRRGGBB), opacity is set by the vcode's opacity (9). */
  /*   66: label height (m) */
  /*   67: reserved */
  /*   68: reserved */
  /*   69: reserved */
  /*   70: reserved */
  /*  NOTE: we assume that the STATE and/or OPACITY inputs are vectors.  */
  /*  If the length of the input STATE is not the same as the number of targets then make STATE a column vector of the same length as  */
  /*  the TARGET input, using the first STATE (i.e. all targets get the same state)  */
  /* '<S334>:1:70' */
  hold_steps = vmr_rwd_fix_leftarm_P.Constant1_Value_c;

  /*  If the length of the input OPACITY is not the same as the number of targets then make OPACITY a column vector of the same length as */
  /*  the TARGET input, using the first OPACITY (i.e. all targets get the same opacity)  */
  /* '<S334>:1:79' */
  /*  Clamping the opacity to [0, 100]. */
  /* '<S334>:1:86' */
  /* '<S334>:1:87' */
  opacity = vmr_rwd_fix_leftarm_P.Show_Target1_opacity_g;
  if (!(opacity <= 100.0)) {
    opacity = 100.0;
  }

  if (!(opacity >= 0.0)) {
    opacity = 0.0;
  }

  /* '<S334>:1:89' */
  for (i = 0; i < 70; i++) {
    vmr_rwd_fix_leftarm_B.VCODE_e[i] = 0.0;
  }

  /*  Set the target type. */
  /* '<S334>:1:92' */
  vmr_rwd_fix_leftarm_B.VCODE_e[0] =
    vmr_rwd_fix_leftarm_P.Show_Target1_target_type_b;

  /*  Set the target position. */
  /* '<S334>:1:95' */
  vmr_rwd_fix_leftarm_B.VCODE_e[2] = vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)
    vmr_rwd_fix_leftarm_P.xpos_index_Value_n - 1] * 0.01;

  /*  x position (convert from (cm) in target table to (m)) */
  /* '<S334>:1:96' */
  vmr_rwd_fix_leftarm_B.VCODE_e[3] = vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)
    vmr_rwd_fix_leftarm_P.ypos_index_Value_f - 1] * 0.01;

  /*  y position (convert from (cm) in target table to (m)) */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((vmr_rwd_fix_leftarm_P.Constant1_Value_c <= 0.0) ||
      (vmr_rwd_fix_leftarm_P.Constant1_Value_c >
       vmr_rwd_fix_leftarm_P.Show_Target1_num_states_e)) {
    /* '<S334>:1:101' */
    /* '<S334>:1:102' */
    vmr_rwd_fix_leftarm_B.VCODE_e[1] = 0.0;

    /*  target is off */
  } else {
    /* '<S334>:1:104' */
    vmr_rwd_fix_leftarm_B.VCODE_e[1] =
      vmr_rwd_fix_leftarm_P.Show_Target1_target_display_j;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S334>:1:107' */
  /* '<S334>:1:108' */
  stroke_colour_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
    vmr_rwd_fix_leftarm_P.Constant1_Value_c + 4];

  /* '<S334>:1:109' */
  stroke_width_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
    vmr_rwd_fix_leftarm_P.Constant1_Value_c + 9];

  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
      vmr_rwd_fix_leftarm_P.Constant1_Value_c - 1] == 0.0) {
    /* '<S334>:1:112' */
    /* '<S334>:1:113' */
    vmr_rwd_fix_leftarm_B.VCODE_e[4] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)
             vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
             vmr_rwd_fix_leftarm_P.Constant1_Value_c - 1] - 1] < 0.0) {
    /* '<S334>:1:114' */
    /* '<S334>:1:115' */
    vmr_rwd_fix_leftarm_B.VCODE_e[4] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
      vmr_rwd_fix_leftarm_P.Constant1_Value_c - 1] - 1];
  } else {
    /* '<S334>:1:117' */
    vmr_rwd_fix_leftarm_B.VCODE_e[4] = vmr_rwd_fix_leftarm_colourshift_n
      (vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)
       vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
       vmr_rwd_fix_leftarm_P.Constant1_Value_c - 1] - 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (stroke_colour_col == 0.0) {
    /* '<S334>:1:121' */
    /* '<S334>:1:122' */
    vmr_rwd_fix_leftarm_B.VCODE_e[5] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)stroke_colour_col - 1] <
             0.0) {
    /* '<S334>:1:123' */
    /* '<S334>:1:124' */
    vmr_rwd_fix_leftarm_B.VCODE_e[5] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)stroke_colour_col - 1];
  } else {
    /* '<S334>:1:126' */
    vmr_rwd_fix_leftarm_B.VCODE_e[5] = vmr_rwd_fix_leftarm_colourshift_n
      (vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)stroke_colour_col - 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (stroke_width_col == 0.0) {
    /* '<S334>:1:130' */
    /* '<S334>:1:131' */
    vmr_rwd_fix_leftarm_B.VCODE_e[6] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (stroke_width_col < 0.0) {
    /* '<S334>:1:132' */
    /* '<S334>:1:133' */
    vmr_rwd_fix_leftarm_B.VCODE_e[6] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S334>:1:135' */
    vmr_rwd_fix_leftarm_B.VCODE_e[6] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)stroke_width_col - 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S334>:1:139' */
  vmr_rwd_fix_leftarm_B.VCODE_e[8] = opacity;

  /*  Set attributes specific to each target type. */
  if (Elbow_Max_Scale_Factor == 1.0) {
    /* '<S334>:1:142' */
    /*  Handle circle target: */
    /* '<S334>:1:145' */
    /* '<S334>:1:146' */
    vmr_rwd_fix_leftarm_B.VCODE_e[9] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps
      + 14] - 1] * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
  } else if ((Elbow_Max_Scale_Factor == 2.0) || (Elbow_Max_Scale_Factor == 3.0))
  {
    /* '<S334>:1:148' */
    /*  Handle ellipse or rectangle target: */
    /* '<S334>:1:151' */
    /* '<S334>:1:152' */
    /* '<S334>:1:153' */
    /* '<S334>:1:155' */
    vmr_rwd_fix_leftarm_B.VCODE_e[9] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps
      + 14] - 1] * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S334>:1:156' */
    vmr_rwd_fix_leftarm_B.VCODE_e[10] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps + 24] ==
        0.0) {
      /* '<S334>:1:157' */
      /* '<S334>:1:158' */
      vmr_rwd_fix_leftarm_B.VCODE_e[11] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S334>:1:160' */
      vmr_rwd_fix_leftarm_B.VCODE_e[11] = (vmr_rwd_fix_leftarm_B.Selector_ec
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
        hold_steps + 24] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_ec[(int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps + 24] -
        1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }
  } else if (Elbow_Max_Scale_Factor == 4.0) {
    /* '<S334>:1:163' */
    /*  Handle line target: */
    /* '<S334>:1:166' */
    /* '<S334>:1:167' */
    /* '<S334>:1:168' */
    vmr_rwd_fix_leftarm_B.VCODE_e[9] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps
      + 14] - 1] * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S334>:1:169' */
    vmr_rwd_fix_leftarm_B.VCODE_e[10] = vmr_rwd_fix_leftarm_B.Selector_ec
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
  } else {
    if (Elbow_Max_Scale_Factor == 5.0) {
      /* '<S334>:1:171' */
      /*  Handle triangle target: */
      /* '<S334>:1:174' */
      /* '<S334>:1:175' */
      /* '<S334>:1:176' */
      /* '<S334>:1:177' */
      /* '<S334>:1:179' */
      vmr_rwd_fix_leftarm_B.VCODE_e[9] = vmr_rwd_fix_leftarm_B.Selector_ec
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
        hold_steps + 14] - 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps + 19]
          == 0.0) {
        /* '<S334>:1:183' */
        /* '<S334>:1:184' */
        vmr_rwd_fix_leftarm_B.VCODE_e[10] = 0.8660254037844386 *
          vmr_rwd_fix_leftarm_B.VCODE_e[9];

        /*  height for equilateral triangle */
        /* '<S334>:1:185' */
        vmr_rwd_fix_leftarm_B.VCODE_e[11] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S334>:1:187' */
        vmr_rwd_fix_leftarm_B.VCODE_e[10] = vmr_rwd_fix_leftarm_B.Selector_ec
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
          hold_steps + 19] - 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S334>:1:188' */
        vmr_rwd_fix_leftarm_B.VCODE_e[11] = vmr_rwd_fix_leftarm_B.Selector_ec
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
          hold_steps + 24] - 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)hold_steps + 29]
          == 0.0) {
        /* '<S334>:1:191' */
        /* '<S334>:1:192' */
        vmr_rwd_fix_leftarm_B.VCODE_e[12] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S334>:1:194' */
        vmr_rwd_fix_leftarm_B.VCODE_e[12] = (vmr_rwd_fix_leftarm_B.Selector_ec
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
          hold_steps + 29] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_ec
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[(int32_T)
          hold_steps + 29] - 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }
    }
  }

  for (i = 0; i < 70; i++) {
    /* Reshape: '<S6>/Reshape' incorporates:
     *  Constant: '<S6>/Assess_arm_VCODE'
     */
    vmr_rwd_fix_leftarm_B.Reshape[i] =
      vmr_rwd_fix_leftarm_P.Assess_arm_VCODE_Value[i];

    /* Reshape: '<S6>/Reshape1' incorporates:
     *  Constant: '<S6>/Contralateral_arm_VCODE'
     */
    vmr_rwd_fix_leftarm_B.Reshape1[i] =
      vmr_rwd_fix_leftarm_P.Contralateral_arm_VCODE_Value[i];
  }

  /* End of MATLAB Function: '<S330>/Embedded MATLAB Function' */

  /* Concatenate: '<S6>/Matrix Concatenation' */
  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation[i_0 << 1] =
      vmr_rwd_fix_leftarm_B.Reshape[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation[1 + (i_0 << 1)] =
      vmr_rwd_fix_leftarm_B.Reshape1[i_0];
  }

  /* End of Concatenate: '<S6>/Matrix Concatenation' */

  /* MATLAB Function: '<S6>/FeedFwdArm' */
  vmr_rwd_fix_leftarm_FeedFwdArm();

  /* MATLAB Function: '<S24>/MATLAB Function1' */
  /* MATLAB Function 'Visual_Rotation/MATLAB Function1': '<S328>:1' */
  /* if feedback_state is not 2 (the ring), pass it to modulate the cursor enable */
  if (vmr_rwd_fix_leftarm_B.handvis_state < 1.5) {
    /* '<S328>:1:6' */
    /* '<S328>:1:7' */
    vmr_rwd_fix_leftarm_B.cursstate = vmr_rwd_fix_leftarm_B.handvis_state;

    /* '<S328>:1:8' */
    vmr_rwd_fix_leftarm_B.ringstate = 0.0;
  } else {
    /* if feedback_state is 2 (the ring), enable the ring and disable the cursor */
    /* '<S328>:1:10' */
    vmr_rwd_fix_leftarm_B.cursstate = 0.0;

    /* '<S328>:1:11' */
    vmr_rwd_fix_leftarm_B.ringstate = 1.0;
  }

  /* set the switch flag appropriately */
  if (vmr_rwd_fix_leftarm_B.handvis_state < 1.5) {
    /* '<S328>:1:15' */
    /* if the feedback_state is 0 or 1, switch to input 1 (cursor) */
    /* '<S328>:1:16' */
    vmr_rwd_fix_leftarm_B.fbswitch = 1.0;
  } else {
    /* if the feedback_state is 2, switch to input 3 (the ring) */
    /* '<S328>:1:18' */
    vmr_rwd_fix_leftarm_B.fbswitch = 0.0;
  }

  /* End of MATLAB Function: '<S24>/MATLAB Function1' */

  /* MATLAB Function: '<S24>/Embedded MATLAB Function' */
  /* MATLAB Function 'Visual_Rotation/Embedded MATLAB Function': '<S325>:1' */
  /* Trial_Protocol, Target_Table, */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  /* This block was modified by IEB, Sept 24, 2008 */
  /* It rotates the cursor position around a location specified as a target in the Trial_Protocol. */
  /*  VCODEs are length VCODE_LENGTH. */
  /*  All dimensions are units of (m). */
  /*  VCODE index definition: 1-5 as the same for all target types */
  /*  1 - Target type */
  /* 		1=circle */
  /* 		2=ellipse */
  /*        3=rectangle */
  /* 		4=line */
  /*        5=triangle */
  /* 		6 and higher - not implemented yet */
  /*  2 - status */
  /* 		0=off */
  /* 		1=on */
  /*  3 - x position (m) */
  /*  4 - y position (m) */
  /*  column in target table to find the target to rotation about */
  /* rotation_center_target = Trial_Protocol(rotation_center_COL); */
  /* x_center = Target_Table(rotation_center_target, 1) * 0.01;		%convert to meters */
  /* y_center = Target_Table(rotation_center_target, 2) * 0.01;		%convert to meters */
  /* '<S325>:1:30' */
  /* '<S325>:1:31' */
  /* '<S325>:1:33' */
  hold_steps = vmr_rwd_fix_leftarm_B.rotation * 3.1415926535897931 / 180.0;

  /* convert desired rotation from degrees to radians */
  /* '<S325>:1:35' */
  memcpy(&vmr_rwd_fix_leftarm_B.VCODES_k[0], &vmr_rwd_fix_leftarm_B.VCODES_out[0],
         140U * sizeof(real_T));

  /* '<S325>:1:36' */
  /* '<S325>:1:37' */
  T[0] = vmr_rwd_fix_leftarm_B.VCODE_e[2];
  T[2] = vmr_rwd_fix_leftarm_B.VCODE_e[3];
  T[1] = vmr_rwd_fix_leftarm_B.VCODE_e[2];
  T[3] = vmr_rwd_fix_leftarm_B.VCODE_e[3];

  /* translation matrix */
  /* '<S325>:1:38' */
  /* rotation matrix */
  /* '<S325>:1:40' */
  /* translate */
  /* '<S325>:1:41' */
  /* rotate */
  /* '<S325>:1:42' */
  tgt_vec_idx_0 = cos(hold_steps);
  delta = -sin(hold_steps);
  x2 = sin(hold_steps);
  M2 = cos(hold_steps);
  tmp_6[0] = vmr_rwd_fix_leftarm_B.VCODES_out[4] - T[0];
  tmp_6[1] = vmr_rwd_fix_leftarm_B.VCODES_out[6] - T[2];
  tmp_6[2] = vmr_rwd_fix_leftarm_B.VCODES_out[5] - T[1];
  tmp_6[3] = vmr_rwd_fix_leftarm_B.VCODES_out[7] - T[3];
  for (i_0 = 0; i_0 < 2; i_0++) {
    tgt_vec_idx_1 = tmp_6[i_0 << 1] * tgt_vec_idx_0;
    tgt_vec_idx_1 += tmp_6[(i_0 << 1) + 1] * delta;
    vmr_rwd_fix_leftarm_B.CursorPos_p[i_0] = tgt_vec_idx_1 + T[i_0];
    tgt_vec_idx_1 = tmp_6[i_0 << 1] * x2;
    tgt_vec_idx_1 += tmp_6[(i_0 << 1) + 1] * M2;
    vmr_rwd_fix_leftarm_B.CursorPos_p[i_0 + 2] = T[i_0 + 2] + tgt_vec_idx_1;
  }

  /* re-translate */
  /* '<S325>:1:44' */
  vmr_rwd_fix_leftarm_B.VCODES_k[4] = vmr_rwd_fix_leftarm_B.CursorPos_p[0];
  vmr_rwd_fix_leftarm_B.VCODES_k[5] = vmr_rwd_fix_leftarm_B.CursorPos_p[1];
  vmr_rwd_fix_leftarm_B.VCODES_k[6] = vmr_rwd_fix_leftarm_B.CursorPos_p[2];
  vmr_rwd_fix_leftarm_B.VCODES_k[7] = vmr_rwd_fix_leftarm_B.CursorPos_p[3];

  /* apply updated positions back into the VCODEs		 */
  zcEvent_idx_0 = (vmr_rwd_fix_leftarm_B.cursstate != 0.0);

  /* '<S325>:1:46' */
  vmr_rwd_fix_leftarm_B.VCODES_k[0] = ((vmr_rwd_fix_leftarm_B.VCODES_k[0] != 0.0)
    && zcEvent_idx_0);
  vmr_rwd_fix_leftarm_B.VCODES_k[1] = ((vmr_rwd_fix_leftarm_B.VCODES_k[1] != 0.0)
    && zcEvent_idx_0);

  /* End of MATLAB Function: '<S24>/Embedded MATLAB Function' */

  /* Sum: '<S24>/Subtract' incorporates:
   *  Constant: '<S24>/Constant'
   */
  vmr_rwd_fix_leftarm_B.Subtract = vmr_rwd_fix_leftarm_P.Constant_Value_e -
    vmr_rwd_fix_leftarm_B.do_clamp;

  /* Selector: '<S331>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  for (i_0 = 0; i_0 < 25; i_0++) {
    vmr_rwd_fix_leftarm_B.Selector_l[i_0 << 1] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 << 5) + (int32_T)
      vmr_rwd_fix_leftarm_B.Memory_d[0]) - 1];
    vmr_rwd_fix_leftarm_B.Selector_l[1 + (i_0 << 1)] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i_0 << 5) + (int32_T)
      vmr_rwd_fix_leftarm_B.Memory_d[1]) - 1];
  }

  /* End of Selector: '<S331>/Selector' */

  /* Concatenate: '<S331>/Matrix Concatenation' incorporates:
   *  Constant: '<S331>/state1_indices'
   *  Constant: '<S331>/state2_indices'
   *  Constant: '<S331>/state3_indices'
   *  Constant: '<S331>/state4_indices'
   *  Constant: '<S331>/state5_indices'
   */
  tmp_7[0] = vmr_rwd_fix_leftarm_P.Show_Target2_attribcol1[0];
  tmp_7[5] = vmr_rwd_fix_leftarm_P.Show_Target2_attribcol1[1];
  tmp_7[10] = vmr_rwd_fix_leftarm_P.Show_Target2_attribcol1[2];
  tmp_7[15] = vmr_rwd_fix_leftarm_P.Show_Target2_attribcol1[3];
  tmp_7[1] = vmr_rwd_fix_leftarm_P.state2_indices_Value_af[0];
  tmp_7[6] = vmr_rwd_fix_leftarm_P.state2_indices_Value_af[1];
  tmp_7[11] = vmr_rwd_fix_leftarm_P.state2_indices_Value_af[2];
  tmp_7[16] = vmr_rwd_fix_leftarm_P.state2_indices_Value_af[3];
  tmp_7[2] = vmr_rwd_fix_leftarm_P.state3_indices_Value_k[0];
  tmp_7[7] = vmr_rwd_fix_leftarm_P.state3_indices_Value_k[1];
  tmp_7[12] = vmr_rwd_fix_leftarm_P.state3_indices_Value_k[2];
  tmp_7[17] = vmr_rwd_fix_leftarm_P.state3_indices_Value_k[3];
  tmp_7[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value_l[0];
  tmp_7[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value_l[1];
  tmp_7[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value_l[2];
  tmp_7[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value_l[3];
  tmp_7[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value_g[0];
  tmp_7[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value_g[1];
  tmp_7[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value_g[2];
  tmp_7[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value_g[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[0], &tmp_7[0], 20U *
         sizeof(real_T));

  /* Constant: '<S331>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[20],
         &vmr_rwd_fix_leftarm_P.padder_Value_a[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S331>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S24>/Constant2'
   *  Constant: '<S331>/Opacity'
   *  Constant: '<S331>/Target_Display'
   *  Constant: '<S331>/Target_Type'
   *  Constant: '<S331>/num_states'
   *  Constant: '<S331>/xpos_index'
   *  Constant: '<S331>/ypos_index'
   */
  Elbow_Max_Scale_Factor = vmr_rwd_fix_leftarm_P.Show_Target2_target_type;
  hold_steps = vmr_rwd_fix_leftarm_P.Show_Target2_target_display;
  opacity = vmr_rwd_fix_leftarm_P.Show_Target2_num_states;

  /* MATLAB Function 'Show_Target/Embedded MATLAB Function': '<S335>:1' */
  /*  VCODEs are length 70. All units in a VCODE should be SI, e.g. (m) and (rad). Elements in a VCODE are defined as follows: */
  /*  */
  /*  For all target types: */
  /*   1: target type */
  /*        1 - circle */
  /*        2 - ellipse */
  /*        3 - rectangle */
  /*        4 - line */
  /*        5 - triangle */
  /*        11 - circle with label */
  /*        12 - ellipse with label */
  /*        13 - rectangle with label */
  /*        14 - line with label */
  /*        15 - triangle with label */
  /*   2: target on/off status and target display (which display target will appear on) */
  /* 		0 - off */
  /* 		1 - on, appearing on both subject and operator displays */
  /*        2 - on, appearing on subject display only */
  /*        3 - on, appearing on operator display only */
  /*   3: x position (m) */
  /*   4: y position (m) */
  /*   5: fill colour (RRGGBB) or texture index */
  /*   6: stroke colour (RRGGBB) or texture index */
  /*   7: stroke width */
  /*   8: reserved for target background ID */
  /*   9: opacity */
  /*  */
  /*  For circles: */
  /*   10: radius (m) */
  /*  */
  /*  For ellipses: */
  /*   10: major radius (m) */
  /*   11: minor radius (m) */
  /*   12: orientation of major axis (rad) */
  /*  */
  /*  For rectangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: orientation (rad) (relative to x, y already shown) */
  /*  */
  /*  For lines: */
  /*   10: endpoint x-axis coordinate relative to start point (m) */
  /*   11: endpoint y-axis coordinate relative to start point (m) */
  /*  */
  /*  For triangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: offset of peak from midpoint of length (m) */
  /*   13: orientation (rad) */
  /*  */
  /*  For all labelled target types: */
  /*   14: reserved */
  /*   15-64: label characters (indexes in ISO 8859-1 character set) */
  /*   65: label colour (0xRRGGBB), opacity is set by the vcode's opacity (9). */
  /*   66: label height (m) */
  /*   67: reserved */
  /*   68: reserved */
  /*   69: reserved */
  /*   70: reserved */
  /*  NOTE: we assume that the STATE and/or OPACITY inputs are vectors.  */
  /*  If the length of the input STATE is not the same as the number of targets then make STATE a column vector of the same length as  */
  /*  the TARGET input, using the first STATE (i.e. all targets get the same state)  */
  /* '<S335>:1:72' */
  state_idx_0 = vmr_rwd_fix_leftarm_P.Constant2_Value;
  state_idx_1 = vmr_rwd_fix_leftarm_P.Constant2_Value;

  /*  If the length of the input OPACITY is not the same as the number of targets then make OPACITY a column vector of the same length as */
  /*  the TARGET input, using the first OPACITY (i.e. all targets get the same opacity)  */
  /* '<S335>:1:81' */
  /*  Clamping the opacity to [0, 100]. */
  /* '<S335>:1:86' */
  error_vel_idx_0 = vmr_rwd_fix_leftarm_P.Show_Target2_opacity;
  error_vel_idx_1 = vmr_rwd_fix_leftarm_P.Show_Target2_opacity;
  if (error_vel_idx_0 <= 100.0) {
    opacity_idx_0 = error_vel_idx_0;
  } else {
    opacity_idx_0 = 100.0;
  }

  if (error_vel_idx_1 <= 100.0) {
    opacity_idx_1 = error_vel_idx_1;
  } else {
    opacity_idx_1 = 100.0;
  }

  /* '<S335>:1:87' */
  error_vel_idx_0 = opacity_idx_0;
  error_vel_idx_1 = opacity_idx_1;
  if (!(error_vel_idx_0 >= 0.0)) {
    opacity_idx_0 = 0.0;
  }

  if (!(error_vel_idx_1 >= 0.0)) {
    opacity_idx_1 = 0.0;
  }

  /* '<S335>:1:89' */
  for (i = 0; i < 140; i++) {
    vmr_rwd_fix_leftarm_B.VCODE[i] = 0.0;
  }

  /*  Set the target type. */
  /* '<S335>:1:92' */
  vmr_rwd_fix_leftarm_B.VCODE[0] =
    vmr_rwd_fix_leftarm_P.Show_Target2_target_type;
  vmr_rwd_fix_leftarm_B.VCODE[1] =
    vmr_rwd_fix_leftarm_P.Show_Target2_target_type;

  /*  Set the target position. */
  /* '<S335>:1:95' */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_P.xpos_index_Value_nf;
  vmr_rwd_fix_leftarm_B.VCODE[4] = vmr_rwd_fix_leftarm_B.Selector_l[(i_0 - 1) <<
    1] * 0.01;
  vmr_rwd_fix_leftarm_B.VCODE[5] = vmr_rwd_fix_leftarm_B.Selector_l[((i_0 - 1) <<
    1) + 1] * 0.01;

  /*  x position (convert from (cm) in target table to (m)) */
  /* '<S335>:1:96' */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_P.ypos_index_Value_b;
  vmr_rwd_fix_leftarm_B.VCODE[6] = vmr_rwd_fix_leftarm_B.Selector_l[(i_0 - 1) <<
    1] * 0.01;
  vmr_rwd_fix_leftarm_B.VCODE[7] = vmr_rwd_fix_leftarm_B.Selector_l[((i_0 - 1) <<
    1) + 1] * 0.01;

  /*  y position (convert from (cm) in target table to (m)) */
  /* '<S335>:1:98' */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((state_idx_0 <= 0.0) || (state_idx_0 > opacity)) {
    /* '<S335>:1:101' */
    /* '<S335>:1:102' */
    vmr_rwd_fix_leftarm_B.VCODE[2] = 0.0;

    /*  target is off */
  } else {
    /* '<S335>:1:104' */
    vmr_rwd_fix_leftarm_B.VCODE[2] = hold_steps;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S335>:1:107' */
  /* '<S335>:1:108' */
  /* '<S335>:1:109' */
  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 - 1] ==
      0.0) {
    /* '<S335>:1:112' */
    /* '<S335>:1:113' */
    vmr_rwd_fix_leftarm_B.VCODE[8] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
              vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0
              - 1] - 1) << 1] < 0.0) {
    /* '<S335>:1:114' */
    /* '<S335>:1:115' */
    vmr_rwd_fix_leftarm_B.VCODE[8] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 - 1] -
      1) << 1];
  } else {
    /* '<S335>:1:117' */
    vmr_rwd_fix_leftarm_B.VCODE[8] = vmr_rwd_fix_leftarm_colourshift_l
      (vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 - 1]
        - 1) << 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 4] ==
      0.0) {
    /* '<S335>:1:121' */
    /* '<S335>:1:122' */
    vmr_rwd_fix_leftarm_B.VCODE[10] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
              vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0
              + 4] - 1) << 1] < 0.0) {
    /* '<S335>:1:123' */
    /* '<S335>:1:124' */
    vmr_rwd_fix_leftarm_B.VCODE[10] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 4] -
      1) << 1];
  } else {
    /* '<S335>:1:126' */
    vmr_rwd_fix_leftarm_B.VCODE[10] = vmr_rwd_fix_leftarm_colourshift_l
      (vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 4]
        - 1) << 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 9] ==
      0.0) {
    /* '<S335>:1:130' */
    /* '<S335>:1:131' */
    vmr_rwd_fix_leftarm_B.VCODE[12] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0
             + 9] < 0.0) {
    /* '<S335>:1:132' */
    /* '<S335>:1:133' */
    vmr_rwd_fix_leftarm_B.VCODE[12] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S335>:1:135' */
    vmr_rwd_fix_leftarm_B.VCODE[12] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 9] -
      1) << 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S335>:1:139' */
  vmr_rwd_fix_leftarm_B.VCODE[16] = opacity_idx_0;

  /*  Set attributes specific to each target type. */
  if (Elbow_Max_Scale_Factor == 1.0) {
    /* '<S335>:1:142' */
    /*  Handle circle target: */
    /* '<S335>:1:145' */
    /* '<S335>:1:146' */
    vmr_rwd_fix_leftarm_B.VCODE[18] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 14] -
      1) << 1] * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
  } else if ((Elbow_Max_Scale_Factor == 2.0) || (Elbow_Max_Scale_Factor == 3.0))
  {
    /* '<S335>:1:148' */
    /*  Handle ellipse or rectangle target: */
    /* '<S335>:1:151' */
    /* '<S335>:1:152' */
    /* '<S335>:1:153' */
    /* '<S335>:1:155' */
    vmr_rwd_fix_leftarm_B.VCODE[18] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 14] -
      1) << 1] * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S335>:1:156' */
    vmr_rwd_fix_leftarm_B.VCODE[20] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 19] -
      1) << 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 24]
        == 0.0) {
      /* '<S335>:1:157' */
      /* '<S335>:1:158' */
      vmr_rwd_fix_leftarm_B.VCODE[22] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S335>:1:160' */
      vmr_rwd_fix_leftarm_B.VCODE[22] = (vmr_rwd_fix_leftarm_B.Selector_l
        [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
          state_idx_0 + 24] - 1) << 1] - floor(vmr_rwd_fix_leftarm_B.Selector_l
        [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
          state_idx_0 + 24] - 1) << 1] / 360.0) * 360.0) * 3.1415926535897931 /
        180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }
  } else if (Elbow_Max_Scale_Factor == 4.0) {
    /* '<S335>:1:163' */
    /*  Handle line target: */
    /* '<S335>:1:166' */
    /* '<S335>:1:167' */
    /* '<S335>:1:168' */
    vmr_rwd_fix_leftarm_B.VCODE[18] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 14] -
      1) << 1] * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S335>:1:169' */
    vmr_rwd_fix_leftarm_B.VCODE[20] = vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 + 19] -
      1) << 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
  } else {
    if (Elbow_Max_Scale_Factor == 5.0) {
      /* '<S335>:1:171' */
      /*  Handle triangle target: */
      /* '<S335>:1:174' */
      /* '<S335>:1:175' */
      /* '<S335>:1:176' */
      /* '<S335>:1:177' */
      /* '<S335>:1:179' */
      vmr_rwd_fix_leftarm_B.VCODE[18] = vmr_rwd_fix_leftarm_B.Selector_l
        [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
          state_idx_0 + 14] - 1) << 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 +
          19] == 0.0) {
        /* '<S335>:1:183' */
        /* '<S335>:1:184' */
        vmr_rwd_fix_leftarm_B.VCODE[20] = 0.8660254037844386 *
          vmr_rwd_fix_leftarm_B.VCODE[18];

        /*  height for equilateral triangle */
        /* '<S335>:1:185' */
        vmr_rwd_fix_leftarm_B.VCODE[22] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S335>:1:187' */
        vmr_rwd_fix_leftarm_B.VCODE[20] = vmr_rwd_fix_leftarm_B.Selector_l
          [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
            state_idx_0 + 19] - 1) << 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S335>:1:188' */
        vmr_rwd_fix_leftarm_B.VCODE[22] = vmr_rwd_fix_leftarm_B.Selector_l
          [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
            state_idx_0 + 24] - 1) << 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 +
          29] == 0.0) {
        /* '<S335>:1:191' */
        /* '<S335>:1:192' */
        vmr_rwd_fix_leftarm_B.VCODE[24] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S335>:1:194' */
        vmr_rwd_fix_leftarm_B.VCODE[24] = (vmr_rwd_fix_leftarm_B.Selector_l
          [((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
            state_idx_0 + 29] - 1) << 1] - floor
          (vmr_rwd_fix_leftarm_B.Selector_l[((int32_T)
          vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_0 +
          29] - 1) << 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }
    }
  }

  /* '<S335>:1:98' */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((state_idx_1 <= 0.0) || (state_idx_1 > opacity)) {
    /* '<S335>:1:101' */
    /* '<S335>:1:102' */
    vmr_rwd_fix_leftarm_B.VCODE[3] = 0.0;

    /*  target is off */
  } else {
    /* '<S335>:1:104' */
    vmr_rwd_fix_leftarm_B.VCODE[3] = hold_steps;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S335>:1:107' */
  /* '<S335>:1:108' */
  /* '<S335>:1:109' */
  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 - 1] ==
      0.0) {
    /* '<S335>:1:112' */
    /* '<S335>:1:113' */
    vmr_rwd_fix_leftarm_B.VCODE[9] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
               vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
               state_idx_1 - 1] - 1) << 1) + 1] < 0.0) {
    /* '<S335>:1:114' */
    /* '<S335>:1:115' */
    vmr_rwd_fix_leftarm_B.VCODE[9] = vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 - 1] -
      1) << 1) + 1];
  } else {
    /* '<S335>:1:117' */
    vmr_rwd_fix_leftarm_B.VCODE[9] = vmr_rwd_fix_leftarm_colourshift_l
      (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
         vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 - 1]
         - 1) << 1) + 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 + 4] ==
      0.0) {
    /* '<S335>:1:121' */
    /* '<S335>:1:122' */
    vmr_rwd_fix_leftarm_B.VCODE[11] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
               vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
               state_idx_1 + 4] - 1) << 1) + 1] < 0.0) {
    /* '<S335>:1:123' */
    /* '<S335>:1:124' */
    vmr_rwd_fix_leftarm_B.VCODE[11] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 4] - 1) << 1) + 1];
  } else {
    /* '<S335>:1:126' */
    vmr_rwd_fix_leftarm_B.VCODE[11] = vmr_rwd_fix_leftarm_colourshift_l
      (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
         vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 + 4]
         - 1) << 1) + 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 + 9] ==
      0.0) {
    /* '<S335>:1:130' */
    /* '<S335>:1:131' */
    vmr_rwd_fix_leftarm_B.VCODE[13] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1
             + 9] < 0.0) {
    /* '<S335>:1:132' */
    /* '<S335>:1:133' */
    vmr_rwd_fix_leftarm_B.VCODE[13] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S335>:1:135' */
    vmr_rwd_fix_leftarm_B.VCODE[13] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 9] - 1) << 1) + 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S335>:1:139' */
  vmr_rwd_fix_leftarm_B.VCODE[17] = opacity_idx_1;

  /*  Set attributes specific to each target type. */
  if (Elbow_Max_Scale_Factor == 1.0) {
    /* '<S335>:1:142' */
    /*  Handle circle target: */
    /* '<S335>:1:145' */
    /* '<S335>:1:146' */
    vmr_rwd_fix_leftarm_B.VCODE[19] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 14] - 1) << 1) + 1] * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
  } else if ((Elbow_Max_Scale_Factor == 2.0) || (Elbow_Max_Scale_Factor == 3.0))
  {
    /* '<S335>:1:148' */
    /*  Handle ellipse or rectangle target: */
    /* '<S335>:1:151' */
    /* '<S335>:1:152' */
    /* '<S335>:1:153' */
    /* '<S335>:1:155' */
    vmr_rwd_fix_leftarm_B.VCODE[19] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 14] - 1) << 1) + 1] * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S335>:1:156' */
    vmr_rwd_fix_leftarm_B.VCODE[21] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 19] - 1) << 1) + 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 + 24]
        == 0.0) {
      /* '<S335>:1:157' */
      /* '<S335>:1:158' */
      vmr_rwd_fix_leftarm_B.VCODE[23] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S335>:1:160' */
      vmr_rwd_fix_leftarm_B.VCODE[23] = (vmr_rwd_fix_leftarm_B.Selector_l
        [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
           state_idx_1 + 24] - 1) << 1) + 1] - floor
        (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 + 24]
        - 1) << 1) + 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }
  } else if (Elbow_Max_Scale_Factor == 4.0) {
    /* '<S335>:1:163' */
    /*  Handle line target: */
    /* '<S335>:1:166' */
    /* '<S335>:1:167' */
    /* '<S335>:1:168' */
    vmr_rwd_fix_leftarm_B.VCODE[19] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 14] - 1) << 1) + 1] * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S335>:1:169' */
    vmr_rwd_fix_leftarm_B.VCODE[21] = vmr_rwd_fix_leftarm_B.Selector_l
      [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
         state_idx_1 + 19] - 1) << 1) + 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
  } else {
    if (Elbow_Max_Scale_Factor == 5.0) {
      /* '<S335>:1:171' */
      /*  Handle triangle target: */
      /* '<S335>:1:174' */
      /* '<S335>:1:175' */
      /* '<S335>:1:176' */
      /* '<S335>:1:177' */
      /* '<S335>:1:179' */
      vmr_rwd_fix_leftarm_B.VCODE[19] = vmr_rwd_fix_leftarm_B.Selector_l
        [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
           state_idx_1 + 14] - 1) << 1) + 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 +
          19] == 0.0) {
        /* '<S335>:1:183' */
        /* '<S335>:1:184' */
        vmr_rwd_fix_leftarm_B.VCODE[21] = 0.8660254037844386 *
          vmr_rwd_fix_leftarm_B.VCODE[19];

        /*  height for equilateral triangle */
        /* '<S335>:1:185' */
        vmr_rwd_fix_leftarm_B.VCODE[23] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S335>:1:187' */
        vmr_rwd_fix_leftarm_B.VCODE[21] = vmr_rwd_fix_leftarm_B.Selector_l
          [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
             state_idx_1 + 19] - 1) << 1) + 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S335>:1:188' */
        vmr_rwd_fix_leftarm_B.VCODE[23] = vmr_rwd_fix_leftarm_B.Selector_l
          [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
             state_idx_1 + 24] - 1) << 1) + 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 +
          29] == 0.0) {
        /* '<S335>:1:191' */
        /* '<S335>:1:192' */
        vmr_rwd_fix_leftarm_B.VCODE[25] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S335>:1:194' */
        vmr_rwd_fix_leftarm_B.VCODE[25] = (vmr_rwd_fix_leftarm_B.Selector_l
          [(((int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)
             state_idx_1 + 29] - 1) << 1) + 1] - floor
          (vmr_rwd_fix_leftarm_B.Selector_l[(((int32_T)
          vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[(int32_T)state_idx_1 +
          29] - 1) << 1) + 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }
    }
  }

  /* End of MATLAB Function: '<S331>/Embedded MATLAB Function' */

  /* MATLAB Function: '<S24>/Embedded MATLAB Function1' */
  /* '<S335>:1:98' */
  /* MATLAB Function 'Visual_Rotation/Embedded MATLAB Function1': '<S326>:1' */
  /* Trial_Protocol, Target_Table */
  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  /* This block clamps the cursor position along the vector between the start */
  /* and reach targets */
  /*  VCODEs are length VCODE_LENGTH. */
  /*  All dimensions are units of (m). */
  /*  VCODE index definition: 1-5 as the same for all target types */
  /*  1 - Target type */
  /* 		1=circle */
  /* 		2=ellipse */
  /*        3=rectangle */
  /* 		4=line */
  /*        5=triangle */
  /* 		6 and higher - not implemented yet */
  /*  2 - status */
  /* 		0=off */
  /* 		1=on */
  /*  3 - x position (m) */
  /*  4 - y position (m) */
  /* column of the start target in the Trial Protocol Table */
  /* start_target = Trial_Protocol(start_tgt_COL); */
  /* start_target_x = Target_Table(start_target, 1) * 0.01;		%convert to meters */
  /* start_target_y = Target_Table(start_target, 2) * 0.01;		%convert to meters */
  /* '<S326>:1:30' */
  /* '<S326>:1:31' */
  /* reach_target = Trial_Protocol(reach_tgt_COL); */
  /* reach_target_x = Target_Table(reach_target, 1) * 0.01;		%convert to meters */
  /* reach_target_y = Target_Table(reach_target, 2) * 0.01;		%convert to meters */
  /* '<S326>:1:36' */
  /* '<S326>:1:37' */
  /* '<S326>:1:38' */
  tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.VCODE[5] - vmr_rwd_fix_leftarm_B.VCODE[4];
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.VCODE[7] - vmr_rwd_fix_leftarm_B.VCODE[6];

  /* '<S326>:1:40' */
  memcpy(&vmr_rwd_fix_leftarm_B.VCODES[0], &vmr_rwd_fix_leftarm_B.VCODES_out[0],
         140U * sizeof(real_T));

  /* '<S326>:1:41' */
  vmr_rwd_fix_leftarm_B.CursorPos[0] = vmr_rwd_fix_leftarm_B.VCODES_out[4];
  vmr_rwd_fix_leftarm_B.CursorPos[1] = vmr_rwd_fix_leftarm_B.VCODES_out[5];
  vmr_rwd_fix_leftarm_B.CursorPos[2] = vmr_rwd_fix_leftarm_B.VCODES_out[6];
  vmr_rwd_fix_leftarm_B.CursorPos[3] = vmr_rwd_fix_leftarm_B.VCODES_out[7];

  /* get the absolute distance of the hand from the start target, in meters */
  /* '<S326>:1:45' */
  /* '<S326>:1:46' */
  /* get the distance of the reach target from the start target, in meters */
  /* '<S326>:1:49' */
  M2 = tgt_vec_idx_0 * tgt_vec_idx_0;
  delta = tgt_vec_idx_1 * tgt_vec_idx_1;

  /* project the hand distance along the start-reach vector */
  /* '<S326>:1:52' */
  hold_steps = fabs(vmr_rwd_fix_leftarm_B.distance[(int32_T)
                    vmr_rwd_fix_leftarm_B.Memory_d[0] - 1]) / sqrt(M2 + delta);
  M2 = tgt_vec_idx_0;
  M2 *= hold_steps;
  tgt_vec_idx_0 = M2;
  M2 = tgt_vec_idx_1;
  M2 *= hold_steps;
  tgt_vec_idx_1 = M2;

  /* '<S326>:1:53' */
  vmr_rwd_fix_leftarm_B.CursorPos[0] = vmr_rwd_fix_leftarm_B.VCODE[4] +
    tgt_vec_idx_0;
  vmr_rwd_fix_leftarm_B.CursorPos[1] = vmr_rwd_fix_leftarm_B.VCODE[4] +
    tgt_vec_idx_0;

  /* '<S326>:1:54' */
  vmr_rwd_fix_leftarm_B.CursorPos[2] = vmr_rwd_fix_leftarm_B.VCODE[6] +
    tgt_vec_idx_1;
  vmr_rwd_fix_leftarm_B.CursorPos[3] = vmr_rwd_fix_leftarm_B.VCODE[6] +
    tgt_vec_idx_1;

  /* '<S326>:1:56' */
  vmr_rwd_fix_leftarm_B.VCODES[4] = vmr_rwd_fix_leftarm_B.CursorPos[0];
  vmr_rwd_fix_leftarm_B.VCODES[6] = vmr_rwd_fix_leftarm_B.CursorPos[2];

  /* '<S326>:1:57' */
  vmr_rwd_fix_leftarm_B.VCODES[5] = vmr_rwd_fix_leftarm_B.CursorPos[1];
  vmr_rwd_fix_leftarm_B.VCODES[7] = vmr_rwd_fix_leftarm_B.CursorPos[3];

  /* VCODES(1:2,3:4) = CursorPos;			%apply updated positions back into the VCODEs		 */
  zcEvent_idx_0 = (vmr_rwd_fix_leftarm_B.cursstate != 0.0);

  /* '<S326>:1:62' */
  vmr_rwd_fix_leftarm_B.VCODES[0] = ((vmr_rwd_fix_leftarm_B.VCODES[0] != 0.0) &&
    zcEvent_idx_0);
  vmr_rwd_fix_leftarm_B.VCODES[1] = ((vmr_rwd_fix_leftarm_B.VCODES[1] != 0.0) &&
    zcEvent_idx_0);

  /* Selector: '<S329>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.Taskwideparam[6];
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_p[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S329>/Selector' */

  /* Concatenate: '<S329>/Matrix Concatenation' incorporates:
   *  Constant: '<S329>/state1_indices'
   *  Constant: '<S329>/state2_indices'
   *  Constant: '<S329>/state3_indices'
   *  Constant: '<S329>/state4_indices'
   *  Constant: '<S329>/state5_indices'
   */
  tmp_8[0] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_p[0];
  tmp_8[5] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_p[1];
  tmp_8[10] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_p[2];
  tmp_8[15] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_p[3];
  tmp_8[1] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c[0];
  tmp_8[6] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c[1];
  tmp_8[11] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c[2];
  tmp_8[16] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c[3];
  tmp_8[2] = vmr_rwd_fix_leftarm_P.state3_indices_Value_o[0];
  tmp_8[7] = vmr_rwd_fix_leftarm_P.state3_indices_Value_o[1];
  tmp_8[12] = vmr_rwd_fix_leftarm_P.state3_indices_Value_o[2];
  tmp_8[17] = vmr_rwd_fix_leftarm_P.state3_indices_Value_o[3];
  tmp_8[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value_a[0];
  tmp_8[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value_a[1];
  tmp_8[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value_a[2];
  tmp_8[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value_a[3];
  tmp_8[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value_nf[0];
  tmp_8[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value_nf[1];
  tmp_8[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value_nf[2];
  tmp_8[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value_nf[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[0], &tmp_8[0], 20U *
         sizeof(real_T));

  /* Constant: '<S329>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[20],
         &vmr_rwd_fix_leftarm_P.padder_Value_n[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S329>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S329>/Opacity'
   *  Constant: '<S329>/Target_Display'
   *  Constant: '<S329>/Target_Type'
   *  Constant: '<S329>/num_states'
   *  Constant: '<S329>/xpos_index'
   *  Constant: '<S329>/ypos_index'
   */
  vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(vmr_rwd_fix_leftarm_B.Selector_p,
    vmr_rwd_fix_leftarm_B.ringstate,
    vmr_rwd_fix_leftarm_P.Show_Target_target_type_e,
    vmr_rwd_fix_leftarm_P.Show_Target_opacity_j,
    vmr_rwd_fix_leftarm_P.Show_Target_target_display_d,
    vmr_rwd_fix_leftarm_P.xpos_index_Value_a,
    vmr_rwd_fix_leftarm_P.ypos_index_Value_d,
    vmr_rwd_fix_leftarm_P.Show_Target_num_states_c,
    vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l,
    &vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k);

  /* MATLAB Function: '<S24>/MATLAB Function' */
  /* MATLAB Function 'Visual_Rotation/MATLAB Function': '<S327>:1' */
  /* '<S327>:1:4' */
  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.VCODE_n[i_0 << 1] =
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k.VCODE[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.VCODE_n[1 + (i_0 << 1)] =
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k.VCODE[i_0];
  }

  /* duplicate this to make it a 2x70 matrix to match */
  /* '<S327>:1:5' */
  /* '<S327>:1:7' */
  vmr_rwd_fix_leftarm_B.VCODE_n[4] = vmr_rwd_fix_leftarm_B.VCODE[4];
  vmr_rwd_fix_leftarm_B.VCODE_n[6] = vmr_rwd_fix_leftarm_B.VCODE[6];

  /* '<S327>:1:8' */
  vmr_rwd_fix_leftarm_B.VCODE_n[5] = vmr_rwd_fix_leftarm_B.VCODE[4];
  vmr_rwd_fix_leftarm_B.VCODE_n[7] = vmr_rwd_fix_leftarm_B.VCODE[6];

  /* '<S327>:1:10' */
  vmr_rwd_fix_leftarm_B.VCODE_n[18] = vmr_rwd_fix_leftarm_B.distance[(int32_T)
    vmr_rwd_fix_leftarm_B.targetA_row - 1];
  vmr_rwd_fix_leftarm_B.VCODE_n[19] = vmr_rwd_fix_leftarm_B.distance[(int32_T)
    vmr_rwd_fix_leftarm_B.targetA_row - 1];

  /* set the radius to be the distance from the start position */
  /* '<S327>:1:12' */
  vmr_rwd_fix_leftarm_B.VCODE_n[3] = 0.0;

  /* End of MATLAB Function: '<S24>/MATLAB Function' */

  /* Switch: '<S24>/Switch' */
  /* disable the duplicate */
  for (i = 0; i < 140; i++) {
    if (vmr_rwd_fix_leftarm_B.fbswitch >
        vmr_rwd_fix_leftarm_P.Switch_Threshold_e) {
      /* Switch: '<S24>/Switch1' */
      if (vmr_rwd_fix_leftarm_B.Subtract >
          vmr_rwd_fix_leftarm_P.Switch1_Threshold_n) {
        vmr_rwd_fix_leftarm_B.Switch1_ot[i] = vmr_rwd_fix_leftarm_B.VCODES_k[i];
      } else {
        vmr_rwd_fix_leftarm_B.Switch1_ot[i] = vmr_rwd_fix_leftarm_B.VCODES[i];
      }

      /* End of Switch: '<S24>/Switch1' */
      vmr_rwd_fix_leftarm_B.Switch[i] = vmr_rwd_fix_leftarm_B.Switch1_ot[i];
    } else {
      vmr_rwd_fix_leftarm_B.Switch[i] = vmr_rwd_fix_leftarm_B.VCODE_n[i];
    }
  }

  /* End of Switch: '<S24>/Switch' */

  /* Selector: '<S310>/Selector' incorporates:
   *  Constant: '<S5>/Target Table'
   */
  i_0 = (int32_T)vmr_rwd_fix_leftarm_B.Taskwideparam[11];
  for (i = 0; i < 25; i++) {
    vmr_rwd_fix_leftarm_B.Selector_j[i] =
      vmr_rwd_fix_leftarm_P.TargetTable_Value[((i << 5) + i_0) - 1];
  }

  /* End of Selector: '<S310>/Selector' */

  /* Logic: '<S22>/Logical Operator' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  vmr_rwd_fix_leftarm_B.LogicalOperator_p =
    (vmr_rwd_fix_leftarm_B.robot_enable_controller &&
     vmr_rwd_fix_leftarm_P.Constant1_Value_p);

  /* DataTypeConversion: '<S22>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_c =
    vmr_rwd_fix_leftarm_B.LogicalOperator_p;

  /* Concatenate: '<S310>/Matrix Concatenation' incorporates:
   *  Constant: '<S310>/state1_indices'
   *  Constant: '<S310>/state2_indices'
   *  Constant: '<S310>/state3_indices'
   *  Constant: '<S310>/state4_indices'
   *  Constant: '<S310>/state5_indices'
   */
  tmp_9[0] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_f[0];
  tmp_9[5] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_f[1];
  tmp_9[10] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_f[2];
  tmp_9[15] = vmr_rwd_fix_leftarm_P.Show_Target_attribcol1_f[3];
  tmp_9[1] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c4[0];
  tmp_9[6] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c4[1];
  tmp_9[11] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c4[2];
  tmp_9[16] = vmr_rwd_fix_leftarm_P.state2_indices_Value_c4[3];
  tmp_9[2] = vmr_rwd_fix_leftarm_P.state3_indices_Value_n[0];
  tmp_9[7] = vmr_rwd_fix_leftarm_P.state3_indices_Value_n[1];
  tmp_9[12] = vmr_rwd_fix_leftarm_P.state3_indices_Value_n[2];
  tmp_9[17] = vmr_rwd_fix_leftarm_P.state3_indices_Value_n[3];
  tmp_9[3] = vmr_rwd_fix_leftarm_P.state4_indices_Value_g[0];
  tmp_9[8] = vmr_rwd_fix_leftarm_P.state4_indices_Value_g[1];
  tmp_9[13] = vmr_rwd_fix_leftarm_P.state4_indices_Value_g[2];
  tmp_9[18] = vmr_rwd_fix_leftarm_P.state4_indices_Value_g[3];
  tmp_9[4] = vmr_rwd_fix_leftarm_P.state5_indices_Value_m[0];
  tmp_9[9] = vmr_rwd_fix_leftarm_P.state5_indices_Value_m[1];
  tmp_9[14] = vmr_rwd_fix_leftarm_P.state5_indices_Value_m[2];
  tmp_9[19] = vmr_rwd_fix_leftarm_P.state5_indices_Value_m[3];
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[0], &tmp_9[0], 20U *
         sizeof(real_T));

  /* Constant: '<S310>/padder' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[20],
         &vmr_rwd_fix_leftarm_P.padder_Value_n3[0], 35U * sizeof(real_T));

  /* MATLAB Function: '<S310>/Embedded MATLAB Function' incorporates:
   *  Constant: '<S310>/Opacity'
   *  Constant: '<S310>/Target_Display'
   *  Constant: '<S310>/Target_Type'
   *  Constant: '<S310>/num_states'
   *  Constant: '<S310>/xpos_index'
   *  Constant: '<S310>/ypos_index'
   */
  Elbow_Max_Scale_Factor = vmr_rwd_fix_leftarm_P.Show_Target_target_type_f;

  /* MATLAB Function 'Show_Target/Embedded MATLAB Function': '<S324>:1' */
  /*  VCODEs are length 70. All units in a VCODE should be SI, e.g. (m) and (rad). Elements in a VCODE are defined as follows: */
  /*  */
  /*  For all target types: */
  /*   1: target type */
  /*        1 - circle */
  /*        2 - ellipse */
  /*        3 - rectangle */
  /*        4 - line */
  /*        5 - triangle */
  /*        11 - circle with label */
  /*        12 - ellipse with label */
  /*        13 - rectangle with label */
  /*        14 - line with label */
  /*        15 - triangle with label */
  /*   2: target on/off status and target display (which display target will appear on) */
  /* 		0 - off */
  /* 		1 - on, appearing on both subject and operator displays */
  /*        2 - on, appearing on subject display only */
  /*        3 - on, appearing on operator display only */
  /*   3: x position (m) */
  /*   4: y position (m) */
  /*   5: fill colour (RRGGBB) or texture index */
  /*   6: stroke colour (RRGGBB) or texture index */
  /*   7: stroke width */
  /*   8: reserved for target background ID */
  /*   9: opacity */
  /*  */
  /*  For circles: */
  /*   10: radius (m) */
  /*  */
  /*  For ellipses: */
  /*   10: major radius (m) */
  /*   11: minor radius (m) */
  /*   12: orientation of major axis (rad) */
  /*  */
  /*  For rectangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: orientation (rad) (relative to x, y already shown) */
  /*  */
  /*  For lines: */
  /*   10: endpoint x-axis coordinate relative to start point (m) */
  /*   11: endpoint y-axis coordinate relative to start point (m) */
  /*  */
  /*  For triangles: */
  /*   10: length (m) */
  /*   11: height (m) */
  /*   12: offset of peak from midpoint of length (m) */
  /*   13: orientation (rad) */
  /*  */
  /*  For all labelled target types: */
  /*   14: reserved */
  /*   15-64: label characters (indexes in ISO 8859-1 character set) */
  /*   65: label colour (0xRRGGBB), opacity is set by the vcode's opacity (9). */
  /*   66: label height (m) */
  /*   67: reserved */
  /*   68: reserved */
  /*   69: reserved */
  /*   70: reserved */
  /*  NOTE: we assume that the STATE and/or OPACITY inputs are vectors.  */
  /*  If the length of the input STATE is not the same as the number of targets then make STATE a column vector of the same length as  */
  /*  the TARGET input, using the first STATE (i.e. all targets get the same state)  */
  /* '<S324>:1:70' */
  hold_steps = vmr_rwd_fix_leftarm_B.DataTypeConversion_c;

  /*  If the length of the input OPACITY is not the same as the number of targets then make OPACITY a column vector of the same length as */
  /*  the TARGET input, using the first OPACITY (i.e. all targets get the same opacity)  */
  /* '<S324>:1:79' */
  /*  Clamping the opacity to [0, 100]. */
  /* '<S324>:1:86' */
  /* '<S324>:1:87' */
  opacity = vmr_rwd_fix_leftarm_P.Show_Target_opacity_b;
  if (!(opacity <= 100.0)) {
    opacity = 100.0;
  }

  if (!(opacity >= 0.0)) {
    opacity = 0.0;
  }

  /* '<S324>:1:89' */
  for (i = 0; i < 70; i++) {
    vmr_rwd_fix_leftarm_B.VCODE_o[i] = 0.0;
  }

  /*  Set the target type. */
  /* '<S324>:1:92' */
  vmr_rwd_fix_leftarm_B.VCODE_o[0] =
    vmr_rwd_fix_leftarm_P.Show_Target_target_type_f;

  /*  Set the target position. */
  /* '<S324>:1:95' */
  vmr_rwd_fix_leftarm_B.VCODE_o[2] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
    vmr_rwd_fix_leftarm_P.xpos_index_Value_no - 1] * 0.01;

  /*  x position (convert from (cm) in target table to (m)) */
  /* '<S324>:1:96' */
  vmr_rwd_fix_leftarm_B.VCODE_o[3] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
    vmr_rwd_fix_leftarm_P.ypos_index_Value_e - 1] * 0.01;

  /*  y position (convert from (cm) in target table to (m)) */
  /*  Set the target on/off state. If the state input is 0, the target is off. Users of the VCODE should respect this */
  /*  as an indication that the rest of the VCODE will be uninitialized. */
  if ((vmr_rwd_fix_leftarm_B.DataTypeConversion_c <= 0.0) ||
      (vmr_rwd_fix_leftarm_B.DataTypeConversion_c >
       vmr_rwd_fix_leftarm_P.Show_Target_num_states_f)) {
    /* '<S324>:1:101' */
    /* '<S324>:1:102' */
    vmr_rwd_fix_leftarm_B.VCODE_o[1] = 0.0;

    /*  target is off */
  } else {
    /* '<S324>:1:104' */
    vmr_rwd_fix_leftarm_B.VCODE_o[1] =
      vmr_rwd_fix_leftarm_P.Show_Target_target_display_a;

    /*  Default is that target is on; target displays as specified by block mask */
  }

  /* '<S324>:1:107' */
  /* '<S324>:1:108' */
  stroke_colour_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
    vmr_rwd_fix_leftarm_B.DataTypeConversion_c + 4];

  /* '<S324>:1:109' */
  stroke_width_col = vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
    vmr_rwd_fix_leftarm_B.DataTypeConversion_c + 9];

  /*  Set the fill colour. Fill colour currently comes from the GUI in RRRGGGBBB format. */
  if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
      vmr_rwd_fix_leftarm_B.DataTypeConversion_c - 1] == 0.0) {
    /* '<S324>:1:112' */
    /* '<S324>:1:113' */
    vmr_rwd_fix_leftarm_B.VCODE_o[4] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
             vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
             vmr_rwd_fix_leftarm_B.DataTypeConversion_c - 1] - 1] < 0.0) {
    /* '<S324>:1:114' */
    /* '<S324>:1:115' */
    vmr_rwd_fix_leftarm_B.VCODE_o[4] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
      vmr_rwd_fix_leftarm_B.DataTypeConversion_c - 1] - 1];
  } else {
    /* '<S324>:1:117' */
    vmr_rwd_fix_leftarm_B.VCODE_o[4] = vmr_rwd_fix_leftarm_colourshift_h
      (vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
       vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
       vmr_rwd_fix_leftarm_B.DataTypeConversion_c - 1] - 1]);
  }

  /*  Set the stroke colour. Stroke colour currently comes from the GUI in RRRGGGBBB format. */
  if (stroke_colour_col == 0.0) {
    /* '<S324>:1:121' */
    /* '<S324>:1:122' */
    vmr_rwd_fix_leftarm_B.VCODE_o[5] = -2.147483648E+9;
  } else if (vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)stroke_colour_col - 1] <
             0.0) {
    /* '<S324>:1:123' */
    /* '<S324>:1:124' */
    vmr_rwd_fix_leftarm_B.VCODE_o[5] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      stroke_colour_col - 1];
  } else {
    /* '<S324>:1:126' */
    vmr_rwd_fix_leftarm_B.VCODE_o[5] = vmr_rwd_fix_leftarm_colourshift_h
      (vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)stroke_colour_col - 1]);
  }

  /*  Set the stroke width. if target table index for stroke width is zero, then the stroke width is undefined */
  if (stroke_width_col == 0.0) {
    /* '<S324>:1:130' */
    /* '<S324>:1:131' */
    vmr_rwd_fix_leftarm_B.VCODE_o[6] = 0.0;

    /*  if stroke width column is 0, then stroke width is 0 */
  } else if (stroke_width_col < 0.0) {
    /* '<S324>:1:132' */
    /* '<S324>:1:133' */
    vmr_rwd_fix_leftarm_B.VCODE_o[6] = 0.001;

    /*  if stroke width column is -ve, then a 1mm default is chosen */
  } else {
    /* '<S324>:1:135' */
    vmr_rwd_fix_leftarm_B.VCODE_o[6] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      stroke_width_col - 1] * 0.01;

    /*  if stroke width column is +ve, convert width from (cm) in target table to (m) */
  }

  /*  Set the opacity value */
  /* '<S324>:1:139' */
  vmr_rwd_fix_leftarm_B.VCODE_o[8] = opacity;

  /*  Set attributes specific to each target type. */
  if (Elbow_Max_Scale_Factor == 1.0) {
    /* '<S324>:1:142' */
    /*  Handle circle target: */
    /* '<S324>:1:145' */
    /* '<S324>:1:146' */
    vmr_rwd_fix_leftarm_B.VCODE_o[9] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  radius (convert from (cm) in target table to (m)) */
  } else if ((Elbow_Max_Scale_Factor == 2.0) || (Elbow_Max_Scale_Factor == 3.0))
  {
    /* '<S324>:1:148' */
    /*  Handle ellipse or rectangle target: */
    /* '<S324>:1:151' */
    /* '<S324>:1:152' */
    /* '<S324>:1:153' */
    /* '<S324>:1:155' */
    vmr_rwd_fix_leftarm_B.VCODE_o[9] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  major radius (convert from (cm) in target table to (m)) */
    /* '<S324>:1:156' */
    vmr_rwd_fix_leftarm_B.VCODE_o[10] = vmr_rwd_fix_leftarm_B.Selector_j
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  minor radius (convert from (cm) in target table to (m)) */
    if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 24] ==
        0.0) {
      /* '<S324>:1:157' */
      /* '<S324>:1:158' */
      vmr_rwd_fix_leftarm_B.VCODE_o[11] = 0.0;

      /*  if orientation column is 0, set orientation to 0 rad */
    } else {
      /* '<S324>:1:160' */
      vmr_rwd_fix_leftarm_B.VCODE_o[11] = (vmr_rwd_fix_leftarm_B.Selector_j
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
        hold_steps + 24] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
        vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 24] -
        1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

      /*  orientation (convert from (degrees) in target table to (rad)) */
    }
  } else if (Elbow_Max_Scale_Factor == 4.0) {
    /* '<S324>:1:163' */
    /*  Handle line target: */
    /* '<S324>:1:166' */
    /* '<S324>:1:167' */
    /* '<S324>:1:168' */
    vmr_rwd_fix_leftarm_B.VCODE_o[9] = vmr_rwd_fix_leftarm_B.Selector_j[(int32_T)
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 14] - 1]
      * 0.01;

    /*  line endpoint in x axis, relative to start (convert from (cm) in target table to (m)) */
    /* '<S324>:1:169' */
    vmr_rwd_fix_leftarm_B.VCODE_o[10] = vmr_rwd_fix_leftarm_B.Selector_j
      [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps
      + 19] - 1] * 0.01;

    /*  line endpoint in y axis, relative to start (convert from (cm) in target table to (m)) */
  } else {
    if (Elbow_Max_Scale_Factor == 5.0) {
      /* '<S324>:1:171' */
      /*  Handle triangle target: */
      /* '<S324>:1:174' */
      /* '<S324>:1:175' */
      /* '<S324>:1:176' */
      /* '<S324>:1:177' */
      /* '<S324>:1:179' */
      vmr_rwd_fix_leftarm_B.VCODE_o[9] = vmr_rwd_fix_leftarm_B.Selector_j
        [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
        hold_steps + 14] - 1] * 0.01;

      /*  length (convert from (cm) in target table to (m)) */
      /*  If the height column is set to 0 then the triangle is automatically made equilateral, with the base length used as length */
      /*  for all sides. If the height column is non-zero, separate values for height and peak offset are taken from the target table. */
      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 19]
          == 0.0) {
        /* '<S324>:1:183' */
        /* '<S324>:1:184' */
        vmr_rwd_fix_leftarm_B.VCODE_o[10] = 0.8660254037844386 *
          vmr_rwd_fix_leftarm_B.VCODE_o[9];

        /*  height for equilateral triangle */
        /* '<S324>:1:185' */
        vmr_rwd_fix_leftarm_B.VCODE_o[11] = 0.0;

        /*  peak offset for equilateral triangle */
      } else {
        /* '<S324>:1:187' */
        vmr_rwd_fix_leftarm_B.VCODE_o[10] = vmr_rwd_fix_leftarm_B.Selector_j
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
          hold_steps + 19] - 1] * 0.01;

        /*  height (convert from (cm) in target table to (m)) */
        /* '<S324>:1:188' */
        vmr_rwd_fix_leftarm_B.VCODE_o[11] = vmr_rwd_fix_leftarm_B.Selector_j
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
          hold_steps + 24] - 1] * 0.01;

        /*  peak offset (convert from (cm) in target table to (m)) */
      }

      if (vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)hold_steps + 29]
          == 0.0) {
        /* '<S324>:1:191' */
        /* '<S324>:1:192' */
        vmr_rwd_fix_leftarm_B.VCODE_o[12] = 0.0;

        /*  if orientation column is 0, set orientation to 0 rad */
      } else {
        /* '<S324>:1:194' */
        vmr_rwd_fix_leftarm_B.VCODE_o[12] = (vmr_rwd_fix_leftarm_B.Selector_j
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
          hold_steps + 29] - 1] - floor(vmr_rwd_fix_leftarm_B.Selector_j
          [(int32_T)vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[(int32_T)
          hold_steps + 29] - 1] / 360.0) * 360.0) * 3.1415926535897931 / 180.0;

        /*  orientation (convert from (degrees) in target table to (rad)) */
      }
    }
  }

  /* End of MATLAB Function: '<S310>/Embedded MATLAB Function' */

  /* Switch: '<S22>/Switch' */
  if (vmr_rwd_fix_leftarm_B.active_arm >
      vmr_rwd_fix_leftarm_P.Switch_Threshold_k) {
    vmr_rwd_fix_leftarm_B.Switch_o[0] = vmr_rwd_fix_leftarm_B.hand_position_g[0];
    vmr_rwd_fix_leftarm_B.Switch_o[1] = vmr_rwd_fix_leftarm_B.hand_position_g[1];
  } else {
    vmr_rwd_fix_leftarm_B.Switch_o[0] = vmr_rwd_fix_leftarm_B.hand_position[0];
    vmr_rwd_fix_leftarm_B.Switch_o[1] = vmr_rwd_fix_leftarm_B.hand_position[1];
  }

  /* End of Switch: '<S22>/Switch' */

  /* DataTypeConversion: '<S22>/Data Type Conversion2' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion2_d = vmr_rwd_fix_leftarm_B.Convert17;

  /* Chart: '<S22>/Chart' incorporates:
   *  TriggerPort: '<S307>/e_clk'
   */
  zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                     &vmr_rwd_fix_leftarm_PrevZCX.Chart_Trig_ZCE,
                     (vmr_rwd_fix_leftarm_B.DataTypeConversion2_d));
  if (zcEvent != NO_ZCEVENT) {
    vmr_rwd_fix_leftarm_B.e_clk = (int8_T)zcEvent;

    /* Gateway: Subsystem/Chart */
    if (vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o < MAX_uint32_T) {
      vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o++;
    }

    /* Event: '<S307>:11' */
    vmr_rwd_fix_leftarm_DW.sfEvent_o = vmr_rwd_fix_leftarm_event_e_clk_p;

    /* During: Subsystem/Chart */
    if (vmr_rwd_fix_leftarm_DW.is_active_c11_vmr_rwd_fix_leftarm == 0U) {
      /* Entry: Subsystem/Chart */
      vmr_rwd_fix_leftarm_DW.is_active_c11_vmr_rwd_fix_leftarm = 1U;

      /* Entry Internal: Subsystem/Chart */
      /* Transition: '<S307>:4' */
      vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
        vmr_rwd_fix_leftarm_IN_Init;

      /* Entry 'Init': '<S307>:6' */
      vmr_rwd_fix_leftarm_DW.ramp_time = vmr_rwd_fix_leftarm_B.Taskwideparam[13];
      vmr_rwd_fix_leftarm_DW.scale_increment = 1.0 /
        vmr_rwd_fix_leftarm_DW.ramp_time;
      vmr_rwd_fix_leftarm_B.force_scale = 0.0;
      vmr_rwd_fix_leftarm_B.state = 1.0;
    } else {
      switch (vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm) {
       case vmr_rwd_fix_leftarm_IN_EnableState:
        /* During 'EnableState': '<S307>:8' */
        if (!vmr_rwd_fix_leftarm_B.robot_enable_controller) {
          /* Transition: '<S307>:18' */
          /* Exit Internal 'EnableState': '<S307>:8' */
          /* Exit Internal 'AutoMoveToPos': '<S307>:19' */
          vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
            vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
          vmr_rwd_fix_leftarm_DW.is_EnableState =
            vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_RampDown;

          /* Entry 'RampDown': '<S307>:12' */
          /* ramp down the force scale to 1 */
          vmr_rwd_fix_leftarm_DW.CurHandPos[0] = vmr_rwd_fix_leftarm_B.Switch_o
            [0];
          vmr_rwd_fix_leftarm_DW.CurHandPos[1] = vmr_rwd_fix_leftarm_B.Switch_o
            [1];
          vmr_rwd_fix_leftarm_B.virtual_pos[0] =
            vmr_rwd_fix_leftarm_DW.CurHandPos[0];
          vmr_rwd_fix_leftarm_B.virtual_pos[1] =
            vmr_rwd_fix_leftarm_DW.CurHandPos[1];
          vmr_rwd_fix_leftarm_B.state = 30.0;
        } else {
          /* During 'AutoMoveToPos': '<S307>:19' */
          switch (vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos) {
           case vmr_rwd_fix_leftarm_IN_GetDesiredXY:
            /* During 'GetDesiredXY': '<S307>:21' */
            if ((vmr_rwd_fix_leftarm_DW.sfEvent_o ==
                 vmr_rwd_fix_leftarm_event_e_clk_p) &&
                (vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o >= 1U)) {
              /* Transition: '<S307>:25' */
              vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
                vmr_rwd_fix_leftarm_IN_MovingToDesiredXY;
              vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o = 0U;

              /* Entry 'MovingToDesiredXY': '<S307>:22' */
              vmr_rwd_fix_leftarm_DW.tickCount_m =
                vmr_rwd_fix_leftarm_B.Taskwideparam[14];
              vmr_rwd_fix_leftarm_B.state = 11.0;
              vmr_rwd_fix_leftarm_DW.tick_d = 0.0;
            }
            break;

           case vmr_rwd_fix_leftarm_IN_HoldAtDesiredXY:
            /* During 'HoldAtDesiredXY': '<S307>:26' */
            if (vmr_rwd_fix_leftarm_DW.updatepos) {
              /* Transition: '<S307>:31' */
              vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
                vmr_rwd_fix_leftarm_IN_GetDesiredXY;
              vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o = 0U;

              /* Entry 'GetDesiredXY': '<S307>:21' */
              /* grab the current desired pos in case it changes */
              vmr_rwd_fix_leftarm_DW.TgtPos[0] = vmr_rwd_fix_leftarm_B.VCODE_o[2];
              vmr_rwd_fix_leftarm_DW.TgtPos[1] = vmr_rwd_fix_leftarm_B.VCODE_o[3];
              vmr_rwd_fix_leftarm_DW.StartPos[0] =
                vmr_rwd_fix_leftarm_B.Switch_o[0];
              vmr_rwd_fix_leftarm_DW.StartPos[1] =
                vmr_rwd_fix_leftarm_B.Switch_o[1];
              vmr_rwd_fix_leftarm_DW.updatepos = false;
              vmr_rwd_fix_leftarm_B.state = 10.0;
            } else {
              if (vmr_rwd_fix_leftarm_DW.sfEvent_o ==
                  vmr_rwd_fix_leftarm_event_e_clk_p) {
                vmr_rwd_fix_leftarm_DW.updatepos = ((fabs
                  (vmr_rwd_fix_leftarm_DW.TgtPos[0] -
                   vmr_rwd_fix_leftarm_B.VCODE_o[2]) > 0.01) || (fabs
                  (vmr_rwd_fix_leftarm_DW.TgtPos[1] -
                   vmr_rwd_fix_leftarm_B.VCODE_o[3]) > 0.01));
              }
            }
            break;

           default:
            /* During 'MovingToDesiredXY': '<S307>:22' */
            if ((vmr_rwd_fix_leftarm_DW.sfEvent_o ==
                 vmr_rwd_fix_leftarm_event_e_clk_p) &&
                (vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o >= (uint32_T)
                 vmr_rwd_fix_leftarm_DW.tickCount_m)) {
              /* Transition: '<S307>:27' */
              vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
                vmr_rwd_fix_leftarm_IN_HoldAtDesiredXY;

              /* Entry 'HoldAtDesiredXY': '<S307>:26' */
              /* pause until something changes */
              vmr_rwd_fix_leftarm_B.state = 12.0;
              vmr_rwd_fix_leftarm_DW.updatepos = false;
            } else {
              if (vmr_rwd_fix_leftarm_DW.sfEvent_o ==
                  vmr_rwd_fix_leftarm_event_e_clk_p) {
                vmr_rwd_fix_leftarm_DW.tick_d++;

                /*  the trajectory velocity will have a bell shaped profile */
                vmr_rwd_fix_leftarm_DW.trajectory_shape =
                  vmr_rwd_fix_leftarm_DW.tick_d /
                  vmr_rwd_fix_leftarm_DW.tickCount_m - sin(6.28318530717958 *
                  vmr_rwd_fix_leftarm_DW.tick_d /
                  vmr_rwd_fix_leftarm_DW.tickCount_m) / 6.28318530717958;
                vmr_rwd_fix_leftarm_B.virtual_pos[0] =
                  (vmr_rwd_fix_leftarm_DW.TgtPos[0] -
                   vmr_rwd_fix_leftarm_DW.StartPos[0]) *
                  vmr_rwd_fix_leftarm_DW.trajectory_shape +
                  vmr_rwd_fix_leftarm_DW.StartPos[0];
                vmr_rwd_fix_leftarm_B.virtual_pos[1] =
                  (vmr_rwd_fix_leftarm_DW.TgtPos[1] -
                   vmr_rwd_fix_leftarm_DW.StartPos[1]) *
                  vmr_rwd_fix_leftarm_DW.trajectory_shape +
                  vmr_rwd_fix_leftarm_DW.StartPos[1];
              }
            }
            break;
          }
        }
        break;

       case vmr_rwd_fix_leftarm_IN_Init:
        /* During 'Init': '<S307>:6' */
        /* if controller becomes enabled */
        if (vmr_rwd_fix_leftarm_B.robot_enable_controller) {
          /* Transition: '<S307>:10' */
          vmr_rwd_fix_leftarm_B.force_scale = 0.0;
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_ResetController;

          /* Entry 'ResetController': '<S307>:43' */
          /* Event: '<S307>:54' */
          vmr_rwd_fix_leftarm_DW.reset_controllerEventCounter++;
        } else {
          vmr_rwd_fix_leftarm_DW.CurHandPos[0] = vmr_rwd_fix_leftarm_B.Switch_o
            [0];
          vmr_rwd_fix_leftarm_DW.CurHandPos[1] = vmr_rwd_fix_leftarm_B.Switch_o
            [1];
        }
        break;

       case vmr_rwd_fix_leftarm_IN_RampDown:
        /* During 'RampDown': '<S307>:12' */
        if (vmr_rwd_fix_leftarm_B.robot_enable_controller) {
          /* Transition: '<S307>:14' */
          /* if the controller is enabled */
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_RampUp;

          /* Entry 'RampUp': '<S307>:9' */
          /* ramp up the force scale to 1 */
          vmr_rwd_fix_leftarm_DW.CurHandPos[0] = vmr_rwd_fix_leftarm_B.Switch_o
            [0];
          vmr_rwd_fix_leftarm_DW.CurHandPos[1] = vmr_rwd_fix_leftarm_B.Switch_o
            [1];
          vmr_rwd_fix_leftarm_B.virtual_pos[0] = vmr_rwd_fix_leftarm_B.Switch_o
            [0];
          vmr_rwd_fix_leftarm_B.virtual_pos[1] = vmr_rwd_fix_leftarm_B.Switch_o
            [1];
          vmr_rwd_fix_leftarm_B.state = 2.0;
          vmr_rwd_fix_leftarm_B.force_scale = 0.0;
        } else if (vmr_rwd_fix_leftarm_B.force_scale < 0.0) {
          /* Transition: '<S307>:57' */
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_Init;

          /* Entry 'Init': '<S307>:6' */
          vmr_rwd_fix_leftarm_DW.ramp_time =
            vmr_rwd_fix_leftarm_B.Taskwideparam[13];
          vmr_rwd_fix_leftarm_DW.scale_increment = 1.0 /
            vmr_rwd_fix_leftarm_DW.ramp_time;
          vmr_rwd_fix_leftarm_B.force_scale = 0.0;
          vmr_rwd_fix_leftarm_B.state = 1.0;
        } else {
          if (vmr_rwd_fix_leftarm_DW.sfEvent_o ==
              vmr_rwd_fix_leftarm_event_e_clk_p) {
            vmr_rwd_fix_leftarm_B.force_scale -=
              vmr_rwd_fix_leftarm_DW.scale_increment;
          }
        }
        break;

       case vmr_rwd_fix_leftarm_IN_RampUp:
        /* During 'RampUp': '<S307>:9' */
        if (!vmr_rwd_fix_leftarm_B.robot_enable_controller) {
          /* Transition: '<S307>:13' */
          /* if the controller gets shut off */
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_RampDown;

          /* Entry 'RampDown': '<S307>:12' */
          /* ramp down the force scale to 1 */
          vmr_rwd_fix_leftarm_DW.CurHandPos[0] = vmr_rwd_fix_leftarm_B.Switch_o
            [0];
          vmr_rwd_fix_leftarm_DW.CurHandPos[1] = vmr_rwd_fix_leftarm_B.Switch_o
            [1];
          vmr_rwd_fix_leftarm_B.virtual_pos[0] =
            vmr_rwd_fix_leftarm_DW.CurHandPos[0];
          vmr_rwd_fix_leftarm_B.virtual_pos[1] =
            vmr_rwd_fix_leftarm_DW.CurHandPos[1];
          vmr_rwd_fix_leftarm_B.state = 30.0;
        } else if (vmr_rwd_fix_leftarm_B.force_scale >= 1.0) {
          /* Transition: '<S307>:16' */
          vmr_rwd_fix_leftarm_B.force_scale = 1.0;
          vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
            vmr_rwd_fix_leftarm_IN_EnableState;
          vmr_rwd_fix_leftarm_DW.is_EnableState =
            vmr_rwd_fix_leftarm_IN_AutoMoveToPos;

          /* Entry 'AutoMoveToPos': '<S307>:19' */
          /* smoothly creates a trajectory to get the hand to a point eventually */
          vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
            vmr_rwd_fix_leftarm_IN_GetDesiredXY;
          vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o = 0U;

          /* Entry 'GetDesiredXY': '<S307>:21' */
          /* grab the current desired pos in case it changes */
          vmr_rwd_fix_leftarm_DW.TgtPos[0] = vmr_rwd_fix_leftarm_B.VCODE_o[2];
          vmr_rwd_fix_leftarm_DW.TgtPos[1] = vmr_rwd_fix_leftarm_B.VCODE_o[3];
          vmr_rwd_fix_leftarm_DW.StartPos[0] = vmr_rwd_fix_leftarm_B.Switch_o[0];
          vmr_rwd_fix_leftarm_DW.StartPos[1] = vmr_rwd_fix_leftarm_B.Switch_o[1];
          vmr_rwd_fix_leftarm_DW.updatepos = false;
          vmr_rwd_fix_leftarm_B.state = 10.0;
        } else {
          if (vmr_rwd_fix_leftarm_DW.sfEvent_o ==
              vmr_rwd_fix_leftarm_event_e_clk_p) {
            vmr_rwd_fix_leftarm_B.force_scale +=
              vmr_rwd_fix_leftarm_DW.scale_increment;
          }
        }
        break;

       default:
        /* During 'ResetController': '<S307>:43' */
        /* Transition: '<S307>:44' */
        vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
          vmr_rwd_fix_leftarm_IN_RampUp;

        /* Entry 'RampUp': '<S307>:9' */
        /* ramp up the force scale to 1 */
        vmr_rwd_fix_leftarm_DW.CurHandPos[0] = vmr_rwd_fix_leftarm_B.Switch_o[0];
        vmr_rwd_fix_leftarm_DW.CurHandPos[1] = vmr_rwd_fix_leftarm_B.Switch_o[1];
        vmr_rwd_fix_leftarm_B.virtual_pos[0] = vmr_rwd_fix_leftarm_B.Switch_o[0];
        vmr_rwd_fix_leftarm_B.virtual_pos[1] = vmr_rwd_fix_leftarm_B.Switch_o[1];
        vmr_rwd_fix_leftarm_B.state = 2.0;
        vmr_rwd_fix_leftarm_B.force_scale = 0.0;
        break;
      }
    }

    if (vmr_rwd_fix_leftarm_DW.reset_controllerEventCounter > 0U) {
      vmr_rwd_fix_leftarm_B.reset_controller =
        !vmr_rwd_fix_leftarm_B.reset_controller;
      vmr_rwd_fix_leftarm_DW.reset_controllerEventCounter--;
    }

    vmr_rwd_fix_leftarm_DW.Chart_SubsysRanBC = 4;
  }

  /* MATLAB Function: '<S22>/MATLAB Function1' */
  /* MATLAB Function 'Subsystem/MATLAB Function1': '<S309>:1' */
  /* '<S309>:1:4' */
  memcpy(&vmr_rwd_fix_leftarm_B.VCODE_MOD[0], &vmr_rwd_fix_leftarm_B.VCODE_o[0],
         70U * sizeof(real_T));

  /* '<S309>:1:5' */
  vmr_rwd_fix_leftarm_B.VCODE_MOD[2] = vmr_rwd_fix_leftarm_B.virtual_pos[0];

  /* '<S309>:1:6' */
  vmr_rwd_fix_leftarm_B.VCODE_MOD[3] = vmr_rwd_fix_leftarm_B.virtual_pos[1];

  /* Concatenate: '<Root>/Matrix Concatenation' */
  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[7 * i_0] =
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l.VCODE[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[1 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_p.VCODE[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[2 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.VCODE_mod[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[3 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_h.VCODE[i_0];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[4 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.Switch[i_0 << 1];
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[5 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.Switch[(i_0 << 1) + 1];
  }

  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[6 + 7 * i_0] =
      vmr_rwd_fix_leftarm_B.VCODE_MOD[i_0];
  }

  /* End of Concatenate: '<Root>/Matrix Concatenation' */

  /* RateTransition: '<S13>/Rate Transition2' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_4) {
    memcpy(&vmr_rwd_fix_leftarm_B.RateTransition2[0],
           &vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[0], 490U * sizeof(real_T));
  }

  /* End of RateTransition: '<S13>/Rate Transition2' */

  /* Outputs for Atomic SubSystem: '<S13>/PVC_core' */
  vmr_rwd_fix_leftarm_PVC_coreTID0();

  /* End of Outputs for SubSystem: '<S13>/PVC_core' */

  /* DataTypeConversion: '<S13>/Convert' */
  vmr_rwd_fix_leftarm_B.Convert = vmr_rwd_fix_leftarm_B.RateTransition1_p;

  /* DataTypeConversion: '<S29>/Last Frame Sent' */
  vmr_rwd_fix_leftarm_B.LastFrameSent = vmr_rwd_fix_leftarm_B.Convert;

  /* RateTransition: '<S29>/Rate Transition3' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition3 = vmr_rwd_fix_leftarm_B.LastFrameSent;
  }

  /* End of RateTransition: '<S29>/Rate Transition3' */

  /* Level2 S-Function Block: '<S13>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[42];
    sfcnOutputs(rts, 0);
  }

  /* Unpack: <S13>/Unpack */
  (void) memcpy(&vmr_rwd_fix_leftarm_B.Unpack_c,
                &vmr_rwd_fix_leftarm_B.Receive_o1[0],
                4);

  /* DataTypeConversion: '<S13>/Convert1' */
  vmr_rwd_fix_leftarm_B.Convert1_m = vmr_rwd_fix_leftarm_B.Unpack_c;

  /* MATLAB Function: '<S13>/MATLAB Function' */
  /* MATLAB Function 'Process_Video_CMD/MATLAB Function': '<S301>:1' */
  /* '<S301>:1:11' */
  vmr_rwd_fix_leftarm_B.last_frame_ack =
    vmr_rwd_fix_leftarm_DW.last_valid_frame_ack;

  /* '<S301>:1:12' */
  vmr_rwd_fix_leftarm_B.last_perm_ack =
    vmr_rwd_fix_leftarm_DW.last_perm_frame_ack;
  if (vmr_rwd_fix_leftarm_B.Receive_o2 == 8.0) {
    /* '<S301>:1:14' */
    /* '<S301>:1:15' */
    vmr_rwd_fix_leftarm_B.last_perm_ack = vmr_rwd_fix_leftarm_B.Convert1_m;

    /* '<S301>:1:16' */
    vmr_rwd_fix_leftarm_DW.last_perm_frame_ack =
      vmr_rwd_fix_leftarm_B.Convert1_m;
  } else {
    if (vmr_rwd_fix_leftarm_B.Receive_o2 == 4.0) {
      /* '<S301>:1:17' */
      /* DEX-2765 - when we get more than 4 bytes (1 int) then it's a special ACK */
      /* for permanent targets. This allows us to signal that the target */
      /* has been accepted sooner. */
      /* '<S301>:1:21' */
      vmr_rwd_fix_leftarm_B.last_frame_ack = vmr_rwd_fix_leftarm_B.Convert1_m;

      /* '<S301>:1:22' */
      vmr_rwd_fix_leftarm_DW.last_valid_frame_ack =
        vmr_rwd_fix_leftarm_B.Convert1_m;

      /* '<S301>:1:23' */
      vmr_rwd_fix_leftarm_DW.last_perm_frame_ack =
        vmr_rwd_fix_leftarm_B.Convert1_m;

      /* '<S301>:1:24' */
      vmr_rwd_fix_leftarm_B.last_perm_ack = vmr_rwd_fix_leftarm_B.Convert1_m;
    }
  }

  /* End of MATLAB Function: '<S13>/MATLAB Function' */

  /* DataTypeConversion: '<S29>/Last Frame Acknowledged' */
  vmr_rwd_fix_leftarm_B.LastFrameAcknowledged =
    vmr_rwd_fix_leftarm_B.last_frame_ack;

  /* RateTransition: '<S29>/Rate Transition2' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition2_e =
      vmr_rwd_fix_leftarm_B.LastFrameAcknowledged;
  }

  /* End of RateTransition: '<S29>/Rate Transition2' */

  /* DataTypeConversion: '<S29>/Button Status' */
  vmr_rwd_fix_leftarm_B.ButtonStatus =
    vmr_rwd_fix_leftarm_B.calibrationButtonBits;

  /* RateTransition: '<S29>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition1 = vmr_rwd_fix_leftarm_B.ButtonStatus;
  }

  /* End of RateTransition: '<S29>/Rate Transition1' */

  /* DataTypeConversion: '<S29>/Servo update count' */
  vmr_rwd_fix_leftarm_B.Servoupdatecount = vmr_rwd_fix_leftarm_B.servoCounter;

  /* RateTransition: '<S29>/Rate Transition' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition =
      vmr_rwd_fix_leftarm_B.Servoupdatecount;
  }

  /* End of RateTransition: '<S29>/Rate Transition' */

  /* DataTypeConversion: '<S29>/Task Control Button' */
  vmr_rwd_fix_leftarm_B.TaskControlButton = vmr_rwd_fix_leftarm_B.value;

  /* RateTransition: '<S29>/Rate Transition11' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition11 =
      vmr_rwd_fix_leftarm_B.TaskControlButton;

    /* RateTransition: '<S27>/TmpRTBAtNumber of Event CodesOutport1' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtNumberofEventCodesOutport1 =
      vmr_rwd_fix_leftarm_DW.TmpRTBAtNumberofEventCodesOutport1_Buffer0;
  }

  /* End of RateTransition: '<S29>/Rate Transition11' */

  /* DataTypeConversion: '<S27>/Event Codes' */
  vmr_rwd_fix_leftarm_B.EventCodes = vmr_rwd_fix_leftarm_B.event_code;

  /* RateTransition: '<S2>/Rate Transition2' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[0] =
      vmr_rwd_fix_leftarm_B.TmpRTBAtNumberofEventCodesOutport1;
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[1] =
      vmr_rwd_fix_leftarm_B.EventCodes;
  }

  /* End of RateTransition: '<S2>/Rate Transition2' */

  /* SignalConversion: '<S42>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S41>/MATLAB Function'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_m[0] =
    vmr_rwd_fix_leftarm_B.ByteReversal1[2];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_m[1] =
    vmr_rwd_fix_leftarm_B.ByteReversal1_f[2];

  /* MATLAB Function: '<S41>/MATLAB Function' */
  /* MATLAB Function 'DataLogging/Create KINARM Data Subsystem/select KINData/MATLAB Function': '<S42>:1' */
  /* when you have an int32 or uint32 and you need to send it to Dex this is */
  /* the right way to do it.  */
  /* '<S42>:1:7' */
  memcpy(&ss[0], &vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_m
         [0], (size_t)2 * sizeof(real32_T));

  /* '<S42>:1:8' */
  vmr_rwd_fix_leftarm_B.dd_out[0] = ss[0];
  vmr_rwd_fix_leftarm_B.dd_out[1] = ss[1];

  /* RateTransition: '<S28>/Rate Transition' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition_k[0] =
      vmr_rwd_fix_leftarm_B.link_angle_b[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[1] =
      vmr_rwd_fix_leftarm_B.link_angle_b[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[2] =
      vmr_rwd_fix_leftarm_B.link_velocity_k[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[3] =
      vmr_rwd_fix_leftarm_B.link_velocity_k[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[4] =
      vmr_rwd_fix_leftarm_B.link_acceleration_c[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[5] =
      vmr_rwd_fix_leftarm_B.link_acceleration_c[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[6] =
      vmr_rwd_fix_leftarm_B.hand_position_g[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[7] =
      vmr_rwd_fix_leftarm_B.hand_position_g[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[8] =
      vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[9] =
      vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[10] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[11] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[12] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[2];
    vmr_rwd_fix_leftarm_B.RateTransition_k[13] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[14] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[15] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[2];
    vmr_rwd_fix_leftarm_B.RateTransition_k[16] =
      vmr_rwd_fix_leftarm_B.force_sensor_timestamp_k;
    vmr_rwd_fix_leftarm_B.RateTransition_k[17] = vmr_rwd_fix_leftarm_B.dd_out[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[18] =
      vmr_rwd_fix_leftarm_B.torquefeedback1[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[19] =
      vmr_rwd_fix_leftarm_B.torquefeedback1[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[20] =
      vmr_rwd_fix_leftarm_B.link_angle[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[21] =
      vmr_rwd_fix_leftarm_B.link_angle[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[22] =
      vmr_rwd_fix_leftarm_B.link_velocity[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[23] =
      vmr_rwd_fix_leftarm_B.link_velocity[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[24] =
      vmr_rwd_fix_leftarm_B.link_acceleration[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[25] =
      vmr_rwd_fix_leftarm_B.link_acceleration[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[26] =
      vmr_rwd_fix_leftarm_B.hand_position[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[27] =
      vmr_rwd_fix_leftarm_B.hand_position[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[28] =
      vmr_rwd_fix_leftarm_B.motor_torque_cmd[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[29] =
      vmr_rwd_fix_leftarm_B.motor_torque_cmd[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[30] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[31] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[32] =
      vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[2];
    vmr_rwd_fix_leftarm_B.RateTransition_k[33] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[0];
    vmr_rwd_fix_leftarm_B.RateTransition_k[34] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[35] =
      vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[2];
    vmr_rwd_fix_leftarm_B.RateTransition_k[36] =
      vmr_rwd_fix_leftarm_B.force_sensor_timestamp;
    vmr_rwd_fix_leftarm_B.RateTransition_k[37] = vmr_rwd_fix_leftarm_B.dd_out[1];
    vmr_rwd_fix_leftarm_B.RateTransition_k[38] =
      vmr_rwd_fix_leftarm_B.torquefeedback1[2];
    vmr_rwd_fix_leftarm_B.RateTransition_k[39] =
      vmr_rwd_fix_leftarm_B.torquefeedback1[3];

    /* RateTransition: '<S28>/Rate Transition2' */
    vmr_rwd_fix_leftarm_B.RateTransition2_er[0] =
      vmr_rwd_fix_leftarm_B.Convert19[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[1] =
      vmr_rwd_fix_leftarm_B.Convert19[1];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[2] =
      vmr_rwd_fix_leftarm_B.Convert19[2];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[3] =
      vmr_rwd_fix_leftarm_B.Convert1_p;
    vmr_rwd_fix_leftarm_B.RateTransition2_er[4] =
      vmr_rwd_fix_leftarm_B.Convert4[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[5] =
      vmr_rwd_fix_leftarm_B.Convert4[1];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[6] =
      vmr_rwd_fix_leftarm_B.Convert4[2];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[7] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[8] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[9] =
      vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[10] =
      vmr_rwd_fix_leftarm_B.RateTransition_kg[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[11] =
      vmr_rwd_fix_leftarm_B.RateTransition_kg[1];
    vmr_rwd_fix_leftarm_B.RateTransition2_er[12] =
      vmr_rwd_fix_leftarm_B.RateTransition_kg[2];
  }

  /* End of RateTransition: '<S28>/Rate Transition' */

  /* Outputs for Atomic SubSystem: '<S2>/Poll Force Plates' */
  vmr_rwd_fix_leftarm_PollForcePlatesTID0();

  /* End of Outputs for SubSystem: '<S2>/Poll Force Plates' */

  /* RateTransition: '<S28>/Rate Transition3' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    memcpy(&vmr_rwd_fix_leftarm_B.RateTransition3_n[0],
           &vmr_rwd_fix_leftarm_B.Convert19_e[0], 14U * sizeof(real_T));
  }

  /* End of RateTransition: '<S28>/Rate Transition3' */

  /* DataTypeConversion: '<S28>/touint' */
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.motor_status_c;
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[0] = tmp_b;
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.motor_status;
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[1] = tmp_b;
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.torquefeedback1[4];
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[2] = tmp_b;
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.torquefeedback1[5];
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[3] = tmp_b;
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.torquefeedback1[6];
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[4] = tmp_b;
  tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.torquefeedback1[7];
  if (tgt_vec_idx_1 < 4.294967296E+9) {
    if (tgt_vec_idx_1 >= 0.0) {
      tmp_b = (uint32_T)tgt_vec_idx_1;
    } else {
      tmp_b = 0U;
    }
  } else {
    tmp_b = MAX_uint32_T;
  }

  vmr_rwd_fix_leftarm_B.touint[5] = tmp_b;

  /* End of DataTypeConversion: '<S28>/touint' */

  /* MATLAB Function: '<S28>/bitfield' */
  /* MATLAB Function 'DataLogging/Create KINARM Data Subsystem/bitfield': '<S39>:1' */
  /* the bits are 0=motor enabled, 1=disabled. This logic is  */
  /* attempting to reverse that.  */
  /* '<S39>:1:5' */
  /* '<S39>:1:6' */
  /* '<S39>:1:8' */
  /* '<S39>:1:11' */
  vmr_rwd_fix_leftarm_B.bitfield = (((((((vmr_rwd_fix_leftarm_B.touint[3] & 1U) <<
    1U) + (vmr_rwd_fix_leftarm_B.touint[2] & 1U)) +
    ((vmr_rwd_fix_leftarm_B.touint[4] & 1U) << 2U)) +
    ((vmr_rwd_fix_leftarm_B.touint[5] & 1U) << 3U)) << 4U) +
    (((vmr_rwd_fix_leftarm_B.touint[1] ^ 3U) & 3U) << 2U)) +
    ((vmr_rwd_fix_leftarm_B.touint[0] ^ 3U) & 3U);

  /* RateTransition: '<S28>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition1_n = vmr_rwd_fix_leftarm_B.bitfield;
  }

  /* End of RateTransition: '<S28>/Rate Transition1' */

  /* SignalConversion: '<Root>/ConcatBufferAtVector Concatenate1In1' */
  vmr_rwd_fix_leftarm_B.VectorConcatenate1[0] = vmr_rwd_fix_leftarm_B.event_code;

  /* SignalConversion: '<Root>/ConcatBufferAtVector Concatenate1In2' */
  vmr_rwd_fix_leftarm_B.VectorConcatenate1[1] =
    vmr_rwd_fix_leftarm_B.targetB_state;

  /* DataTypeConversion: '<S25>/Analog Data' */
  vmr_rwd_fix_leftarm_B.AnalogData[0] =
    vmr_rwd_fix_leftarm_B.VectorConcatenate1[0];
  vmr_rwd_fix_leftarm_B.AnalogData[1] =
    vmr_rwd_fix_leftarm_B.VectorConcatenate1[1];

  /* RateTransition: '<S25>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition1_c[0] =
      vmr_rwd_fix_leftarm_B.AnalogData[0];
    vmr_rwd_fix_leftarm_B.RateTransition1_c[1] =
      vmr_rwd_fix_leftarm_B.AnalogData[1];
  }

  /* End of RateTransition: '<S25>/Rate Transition1' */

  /* DataTypeConversion: '<S26>/Custom Data1' */
  vmr_rwd_fix_leftarm_B.CustomData1[0] = vmr_rwd_fix_leftarm_B.statusInts[0];
  vmr_rwd_fix_leftarm_B.CustomData1[1] = vmr_rwd_fix_leftarm_B.statusInts[1];
  vmr_rwd_fix_leftarm_B.CustomData1[2] = vmr_rwd_fix_leftarm_B.statusInts[2];
  vmr_rwd_fix_leftarm_B.CustomData1[3] = vmr_rwd_fix_leftarm_B.statusInts[3];
  for (i = 0; i < 6; i++) {
    vmr_rwd_fix_leftarm_B.CustomData1[i + 4] =
      vmr_rwd_fix_leftarm_B.DataTypeConversion_nq[i];
  }

  /* End of DataTypeConversion: '<S26>/Custom Data1' */

  /* SignalConversion: '<S257>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S37>/delta'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[0] =
    vmr_rwd_fix_leftarm_B.link_angle_b[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[1] =
    vmr_rwd_fix_leftarm_B.link_angle_b[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[2] =
    vmr_rwd_fix_leftarm_B.link_angle[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[3] =
    vmr_rwd_fix_leftarm_B.link_angle[1];

  /* SignalConversion: '<S257>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S37>/delta'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[0] =
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[1] =
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[2] =
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[3] =
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[1];

  /* MATLAB Function: '<S37>/delta' */
  /* MATLAB Function 'DataLogging/compare encoders/delta': '<S257>:1' */
  /* '<S257>:1:4' */
  vmr_rwd_fix_leftarm_B.deltas[0] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[0] -
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[0];
  vmr_rwd_fix_leftarm_B.deltas[1] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[1] -
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[1];
  vmr_rwd_fix_leftarm_B.deltas[2] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[2] -
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[2];
  vmr_rwd_fix_leftarm_B.deltas[3] =
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[3] -
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[3];

  /* RateTransition: '<S26>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_b[0] = vmr_rwd_fix_leftarm_B.deltas[0];
  vmr_rwd_fix_leftarm_B.RateTransition_b[1] = vmr_rwd_fix_leftarm_B.deltas[1];
  vmr_rwd_fix_leftarm_B.RateTransition_b[2] = vmr_rwd_fix_leftarm_B.deltas[2];
  vmr_rwd_fix_leftarm_B.RateTransition_b[3] = vmr_rwd_fix_leftarm_B.deltas[3];

  /* RateTransition: '<S26>/Rate Transition1' incorporates:
   *  Constant: '<S2>/seconds_remaining'
   */
  vmr_rwd_fix_leftarm_B.RateTransition1_b =
    vmr_rwd_fix_leftarm_P.seconds_remaining_Value;

  /* RateTransition: '<S26>/Rate Transition2' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_4) {
    vmr_rwd_fix_leftarm_B.RateTransition2_eo =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0;
  }

  /* End of RateTransition: '<S26>/Rate Transition2' */

  /* RateTransition: '<S2>/Rate Transition' incorporates:
   *  Constant: '<S26>/custom_version'
   */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition_d[0] =
      vmr_rwd_fix_leftarm_ConstB.Width_g;
    vmr_rwd_fix_leftarm_B.RateTransition_d[1] =
      vmr_rwd_fix_leftarm_P.custom_version_Value;
    memcpy(&vmr_rwd_fix_leftarm_B.RateTransition_d[2],
           &vmr_rwd_fix_leftarm_B.CustomData1[0], 10U * sizeof(real_T));
    vmr_rwd_fix_leftarm_B.RateTransition_d[12] =
      vmr_rwd_fix_leftarm_B.RateTransition_b[0];
    vmr_rwd_fix_leftarm_B.RateTransition_d[13] =
      vmr_rwd_fix_leftarm_B.RateTransition_b[1];
    vmr_rwd_fix_leftarm_B.RateTransition_d[14] =
      vmr_rwd_fix_leftarm_B.RateTransition_b[2];
    vmr_rwd_fix_leftarm_B.RateTransition_d[15] =
      vmr_rwd_fix_leftarm_B.RateTransition_b[3];
    vmr_rwd_fix_leftarm_B.RateTransition_d[16] =
      vmr_rwd_fix_leftarm_B.RateTransition1_b;
    vmr_rwd_fix_leftarm_B.RateTransition_d[17] =
      vmr_rwd_fix_leftarm_B.RateTransition2_eo;
  }

  /* End of RateTransition: '<S2>/Rate Transition' */

  /* Outputs for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID0();

  /* End of Outputs for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* RateTransition: '<S308>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[0] =
      vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[0];
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] =
      vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[1];

    /* RateTransition: '<S308>/Rate Transition2' */
    vmr_rwd_fix_leftarm_B.RateTransition2_m[0] =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[0];
    vmr_rwd_fix_leftarm_B.RateTransition2_m[1] =
      vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[1];

    /* RateTransition: '<S308>/Rate Transition4' */
    vmr_rwd_fix_leftarm_B.RateTransition4_n[0] =
      vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[0];
    vmr_rwd_fix_leftarm_B.RateTransition4_n[1] =
      vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[1];
  }

  /* End of RateTransition: '<S308>/Rate Transition1' */

  /* DataTypeConversion: '<S308>/Data Type Conversion' */
  memcpy(&vmr_rwd_fix_leftarm_B.DataTypeConversion_p[0],
         &vmr_rwd_fix_leftarm_B.primary_encoder_data_out[0], 12U * sizeof(real_T));

  /* SignalConversion: '<S311>/TmpSignal ConversionAt SFunction Inport7' incorporates:
   *  MATLAB Function: '<S308>/FF_FB_Position_Controller'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[0] =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[1] =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO;

  /* SignalConversion: '<S311>/TmpSignal ConversionAt SFunction Inport8' incorporates:
   *  MATLAB Function: '<S308>/FF_FB_Position_Controller'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8[0] =
    vmr_rwd_fix_leftarm_B.ArmOrientation_b;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8[1] =
    vmr_rwd_fix_leftarm_B.ArmOrientation_l;

  /* SignalConversion: '<S311>/TmpSignal ConversionAt SFunction Inport9' incorporates:
   *  MATLAB Function: '<S308>/FF_FB_Position_Controller'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport9[0] =
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport9[1] =
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;

  /* SignalConversion: '<S311>/TmpSignal ConversionAt SFunction Inport10' incorporates:
   *  MATLAB Function: '<S308>/FF_FB_Position_Controller'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[0] =
    vmr_rwd_fix_leftarm_B.Statusread1[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[1] =
    vmr_rwd_fix_leftarm_B.Statusread1_m[1];

  /* MATLAB Function: '<S308>/FF_FB_Position_Controller' incorporates:
   *  Constant: '<S308>/Constant2'
   *  Constant: '<S308>/inertia_option'
   *  Constant: '<S308>/use dominant hand'
   */
  inertia_option_for_FF =
    vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF - 2.0;

  /* MATLAB Function 'KINARM_Exo_Position_Controller/FF_FB_Position_Controller': '<S311>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  /*  set point is joint angles in global coordinates */
  /*  inertia_option_for_FF sets the options for which inertias to include for  */
  /*  the feed-forward model */
  /* 	0 - none */
  /* 	1 - KINARM robot only */
  /* 	2 - KINARM robot & arm troughs */
  /* 	3 - KINARM robot & subject */
  /* 	4 - KINARM robot & arm troughs and subject */
  /*  L1 (m) */
  /*  L2(m) */
  /*  1=right	2=left */
  /*  L1 angle */
  /*  L2 Angle */
  /*  L1 angle */
  /*  L2 Angle */
  /* determine which arm to apply the load to */
  /* '<S311>:1:25' */
  /* kinarm_data(3,1) tells which arm is the dominant arm */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_use_dom_hand == 1.0)
  {
    /* '<S311>:1:26' */
    /* '<S311>:1:27' */
    arm = vmr_rwd_fix_leftarm_B.kinarm_data[2];
  } else {
    /* '<S311>:1:29' */
    arm = 3.0 - vmr_rwd_fix_leftarm_B.kinarm_data[2];
  }

  /* '<S311>:1:32' */
  /* '<S311>:1:34' */
  orientation = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 14];

  /* '<S311>:1:35' */
  /* '<S311>:1:36' */
  /* '<S311>:1:37' */
  /* '<S311>:1:38' */
  /* '<S311>:1:39' */
  /* '<S311>:1:40' */
  /* '<S311>:1:41' */
  /* '<S311>:1:42' */
  /* % Determine the PD gains to use. */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type == 1.0) {
    /* '<S311>:1:46' */
    /* Human KINARM robot */
    if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[(int32_T)arm
        - 1] != 0.0) {
      /* the values used here are from HAR-240 */
      /* '<S311>:1:49' */
      T[0] = 100.0;
      T[3] = 50.0;

      /* proportional gain for KINARM robot, primary encoders ONLY */
      /* '<S311>:1:50' */
      Kv_idx_0 = 2.7;
      Kv_idx_3 = 1.0;

      /* derivative gain for KINARM robot, primary encoders ONLY */
      /* '<S311>:1:52' */
      Kp_1_idx_0 = 0.0;
      Kp_1_idx_3 = 0.0;

      /* proportional gain for KINARM robot, primary encoders if used in conjunction with secondary */
      /* '<S311>:1:53' */
      Kp_2_idx_0 = 200.0;
      Kp_2_idx_3 = 85.0;

      /* proportional gain for KINARM robot, secondary encoders if used in conjunction with primary */
      /* '<S311>:1:54' */
      Kv_1_idx_0 = 0.0;
      Kv_1_idx_3 = 0.0;

      /* derivative gain for KINARM robot, primary encoders if used in conjunction with secondary */
      /* '<S311>:1:55' */
      Kv_2_idx_0 = 3.7;
      Kv_2_idx_3 = 1.1;

      /* derivative gain for KINARM robot, secondary encoders if used in conjunction with primary */
    } else {
      /* '<S311>:1:58' */
      T[0] = 30.0;
      T[3] = 15.0;

      /* proportional gain for KINARM robot, primary encoders ONLY */
      /* '<S311>:1:59' */
      Kv_idx_0 = 2.4;
      Kv_idx_3 = 1.2;

      /* derivative gain for KINARM robot, primary encoders ONLY */
      /* '<S311>:1:61' */
      Kp_1_idx_0 = 0.0;
      Kp_1_idx_3 = 0.0;

      /* proportional gain for KINARM robot, primary encoders if used in conjunction with secondary */
      /* '<S311>:1:62' */
      Kp_2_idx_0 = 60.0;
      Kp_2_idx_3 = 30.0;

      /* proportional gain for KINARM robot, secondary encoders if used in conjunction with primary */
      /* '<S311>:1:63' */
      Kv_1_idx_0 = 0.0;
      Kv_1_idx_3 = 0.0;

      /* derivative gain for KINARM robot, primary encoders if used in conjunction with secondary */
      /* '<S311>:1:64' */
      Kv_2_idx_0 = 2.5;
      Kv_2_idx_3 = 2.5;

      /* derivative gain for KINARM robot, secondary encoders if used in conjunction with primary */
    }
  } else if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type ==
             2.0) {
    /* '<S311>:1:66' */
    /* NHP KINARM robot */
    /* '<S311>:1:67' */
    T[0] = 4.0;
    T[3] = 4.0;

    /* proportional gain for KINARM robot, primary encoders ONLY */
    /* '<S311>:1:68' */
    Kv_idx_0 = 0.32;
    Kv_idx_3 = 0.32;

    /* derivative gain for KINARM robot, primary encoders ONLY */
    /* the numbers used here are a percentage of tested maximums provided by SBall. */
    /* '<S311>:1:71' */
    Kp_1_idx_0 = 0.0;
    Kp_1_idx_3 = 0.0;

    /* proportional gain for KINARM robot, primary encoders if used in conjunction with secondary */
    /* '<S311>:1:72' */
    Kp_2_idx_0 = 10.0;
    Kp_2_idx_3 = 7.0;

    /* proportional gain for KINARM robot, secondary encoders if used in conjunction with primary */
    /* '<S311>:1:73' */
    Kv_1_idx_0 = 0.0;
    Kv_1_idx_3 = 0.0;

    /* derivative gain for KINARM robot, primary encoders if used in conjunction with secondary */
    /* '<S311>:1:74' */
    Kv_2_idx_0 = 0.1;
    Kv_2_idx_3 = 0.06;

    /* derivative gain for KINARM robot, secondary encoders if used in conjunction with primary */
  } else if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type ==
             3.0) {
    /* '<S311>:1:75' */
    /* NHP-UTS KINARM robot     */
    /* the numbers used here are a percentage of tested maximums provided by SBall. */
    /* '<S311>:1:77' */
    T[0] = 30.0;
    T[3] = 15.0;

    /* proportional gain for KINARM robot, primary encoders ONLY */
    /* '<S311>:1:78' */
    Kv_idx_0 = 1.0;
    Kv_idx_3 = 0.25;

    /* derivative gain for KINARM robot, primary encoders ONLY */
    /* the numbers used here are a percentage of tested maximums provided by SBall. */
    /* '<S311>:1:81' */
    Kp_1_idx_0 = 0.0;
    Kp_1_idx_3 = 0.0;

    /* proportional gain for KINARM robot, primary encoders if used in conjunction with secondary */
    /* '<S311>:1:82' */
    Kp_2_idx_0 = 110.0;
    Kp_2_idx_3 = 20.0;

    /* proportional gain for KINARM robot, secondary encoders if used in conjunction with primary */
    /* '<S311>:1:83' */
    Kv_1_idx_0 = 0.0;
    Kv_1_idx_3 = 0.0;

    /* derivative gain for KINARM robot, primary encoders if used in conjunction with secondary */
    /* '<S311>:1:84' */
    Kv_2_idx_0 = 1.5;
    Kv_2_idx_3 = 0.35;

    /* derivative gain for KINARM robot, secondary encoders if used in conjunction with primary */
  } else {
    /* '<S311>:1:86' */
    T[0] = 0.0;
    T[3] = 0.0;

    /* '<S311>:1:87' */
    Kv_idx_0 = 0.0;
    Kv_idx_3 = 0.0;

    /* '<S311>:1:89' */
    Kp_1_idx_0 = 0.0;
    Kp_1_idx_3 = 0.0;

    /* '<S311>:1:90' */
    Kp_2_idx_0 = 0.0;
    Kp_2_idx_3 = 0.0;

    /* '<S311>:1:91' */
    Kv_1_idx_0 = 0.0;
    Kv_1_idx_3 = 0.0;

    /* '<S311>:1:92' */
    Kv_2_idx_0 = 0.0;
    Kv_2_idx_3 = 0.0;
  }

  if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[(int32_T)arm -
      1] != 0.0) {
    /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
    /* all of this code is from HAR-640 */
    /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
    /*  Taking the abs value handles left and right-handed KINARMs */
    /* '<S311>:1:101' */
    hold_steps = fabs(vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] -
                      vmr_rwd_fix_leftarm_B.RateTransition1_c2[0]) * 180.0 /
      3.1415926535897931;

    /* '<S311>:1:102' */
    opacity = fabs(vmr_rwd_fix_leftarm_B.RateTransition1_c2[1]) * 180.0 /
      3.1415926535897931;

    /* '<S311>:1:103' */
    stroke_colour_col = fabs(vmr_rwd_fix_leftarm_B.RateTransition1_c2[0]) *
      180.0 / 3.1415926535897931;

    /* for a left kinarm we need to switch into local coordinates for */
    /* shoulder and elbow */
    if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8[(int32_T)arm
        - 1] == -1.0) {
      /* '<S311>:1:106' */
      /* '<S311>:1:107' */
      opacity = 180.0 - opacity;

      /* '<S311>:1:108' */
      stroke_colour_col = 180.0 - stroke_colour_col;
    }

    if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[(int32_T)
        arm - 1] == 1.0) {
      /* '<S311>:1:111' */
      /*  UTS Rev 1 - perez system */
      /*  Based on experiments, instability due to gain for L2 is related to elbow angle. */
      /*  Scale the elbow proportional and derivative gains from a maximal value at elbow */
      /*  angle == 30 degrees, to 20% of max at elbow angle == 10 degrees.  */
      /* '<S311>:1:117' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      T[3] *= tgt_vec_idx_0;

      /* '<S311>:1:118' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      Kp_1_idx_3 = 0.0 * tgt_vec_idx_0;

      /* '<S311>:1:119' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      Kp_2_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:121' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      Kv_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:122' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      Kv_1_idx_3 = 0.0 * tgt_vec_idx_0;

      /* '<S311>:1:123' */
      tgt_vec_idx_0 = 0.04 * hold_steps - 0.2;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.2;
      }

      Kv_2_idx_3 *= tgt_vec_idx_0;

      /*  Scale the elbow proportional and derivative gains from a maximal value at elbow */
      /*  angle == 110 degrees, to 35% of max at elbow angle == 115 degrees.  */
      /* '<S311>:1:128' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      T[3] *= tgt_vec_idx_0;

      /* '<S311>:1:129' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      Kp_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:130' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      Kp_2_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:132' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      Kv_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:133' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      Kv_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:134' */
      tgt_vec_idx_0 = -0.13 * hold_steps + 15.3;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.35 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.35;
      }

      Kv_2_idx_3 *= tgt_vec_idx_0;

      /*  Scale the elbow proportional and derivative gains from a maximal value at forearm */
      /*  angle == 155 degrees, to 30% of max at forearm angle == 170 degrees.  */
      /* '<S311>:1:139' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      T[3] *= tgt_vec_idx_0;

      /* '<S311>:1:140' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kp_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:141' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kp_2_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:143' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:144' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:145' */
      tgt_vec_idx_0 = -0.04667 * opacity + 8.2339;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_2_idx_3 *= tgt_vec_idx_0;

      /*  Scale the elbow proportional and derivative gains from a maximal value at forearm */
      /*  angle == 85 degrees, to 30% of max at forearm angle == 70 degrees.  */
      /* '<S311>:1:150' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      T[3] *= tgt_vec_idx_0;

      /* '<S311>:1:151' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kp_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:152' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kp_2_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:154' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:155' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_1_idx_3 *= tgt_vec_idx_0;

      /* '<S311>:1:156' */
      tgt_vec_idx_0 = 0.04667 * opacity - 2.967;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.3 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.3;
      }

      Kv_2_idx_3 *= tgt_vec_idx_0;

      /*  Based on experiments, instability due to gain for L1 is related to shoulder angle. */
      /*  Scale the shoulder proportional and derivative gains from a maximal value at shoulder */
      /*  angle == 60 degrees, to 50% of max at shoulder angle == 80 degrees.  */
      /* '<S311>:1:163' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      T[0] *= tgt_vec_idx_0;

      /* '<S311>:1:164' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      Kp_1_idx_0 = 0.0 * tgt_vec_idx_0;

      /* '<S311>:1:165' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      Kp_2_idx_0 *= tgt_vec_idx_0;

      /* '<S311>:1:167' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      Kv_idx_0 *= tgt_vec_idx_0;

      /* '<S311>:1:168' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      Kv_1_idx_0 = 0.0 * tgt_vec_idx_0;

      /* '<S311>:1:169' */
      tgt_vec_idx_0 = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 1.0;
      }

      if ((0.5 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
        tgt_vec_idx_0 = 0.5;
      }

      Kv_2_idx_0 *= tgt_vec_idx_0;
    } else {
      /* UTS version 2 */
      /*  Based on experiments, instability due to gain for L2 is related to elbow angle. */
      /*  Calculate the scale factor for the elbow proportional and derivative gains from a maximal value at elbow */
      /*  angle == 30 degrees, to 20% of max at elbow angle == 10 degrees.  */
      /* '<S311>:1:177' */
      stroke_width_col = 0.04 * hold_steps - 0.2;
      if ((1.0 <= stroke_width_col) || rtIsNaN(stroke_width_col)) {
        stroke_width_col = 1.0;
      }

      if ((0.2 >= stroke_width_col) || rtIsNaN(stroke_width_col)) {
        stroke_width_col = 0.2;
      }

      /*  Calculate the scale factor for the elbow proportional and derivative gains from a maximal value at elbow */
      /*  angle == 110 degrees, to 35% of max at elbow angle == 115 degrees.  */
      /* '<S311>:1:180' */
      Elbow_Max_Scale_Factor = -0.13 * hold_steps + 15.3;
      if ((1.0 <= Elbow_Max_Scale_Factor) || rtIsNaN(Elbow_Max_Scale_Factor)) {
        Elbow_Max_Scale_Factor = 1.0;
      }

      if ((0.35 >= Elbow_Max_Scale_Factor) || rtIsNaN(Elbow_Max_Scale_Factor)) {
        Elbow_Max_Scale_Factor = 0.35;
      }

      /*  Calculate the scale factor for the elbow proportional and derivative gains from a maximal value at forearm */
      /*  angle == 85 degrees, to 30% of max at forearm angle == 70 degrees.  */
      /* '<S311>:1:183' */
      Forearm_Min_Scale_Factor = 0.04667 * opacity - 2.967;
      if ((1.0 <= Forearm_Min_Scale_Factor) || rtIsNaN(Forearm_Min_Scale_Factor))
      {
        Forearm_Min_Scale_Factor = 1.0;
      }

      if ((0.3 >= Forearm_Min_Scale_Factor) || rtIsNaN(Forearm_Min_Scale_Factor))
      {
        Forearm_Min_Scale_Factor = 0.3;
      }

      /*  Calculate the scale factor for the elbow proportional and derivative gains from a maximal value at forearm */
      /*  angle == 155 degrees, to 30% of max at forearm angle == 170 degrees.  */
      /* '<S311>:1:186' */
      Forearm_Max_Scale_Factor = -0.04667 * opacity + 8.2339;
      if ((1.0 <= Forearm_Max_Scale_Factor) || rtIsNaN(Forearm_Max_Scale_Factor))
      {
        Forearm_Max_Scale_Factor = 1.0;
      }

      if ((0.3 >= Forearm_Max_Scale_Factor) || rtIsNaN(Forearm_Max_Scale_Factor))
      {
        Forearm_Max_Scale_Factor = 0.3;
      }

      /*  If the elbow angle is less then 30 degrees and the forerm angle is */
      /*  greater than 85 degrees, apply the elbow scale factor only.  Otherwise, */
      /*  apply the SMALLEST of the elbow and forearm scaling factors */
      if ((hold_steps < 30.0) && (opacity >= 85.0)) {
        /* '<S311>:1:191' */
        /* '<S311>:1:192' */
        T[3] *= stroke_width_col;

        /* '<S311>:1:193' */
        Kp_1_idx_3 = 0.0 * stroke_width_col;

        /* '<S311>:1:194' */
        Kp_2_idx_3 *= stroke_width_col;

        /* '<S311>:1:196' */
        Kv_idx_3 *= stroke_width_col;

        /* '<S311>:1:197' */
        Kv_1_idx_3 = 0.0 * stroke_width_col;

        /* '<S311>:1:198' */
        Kv_2_idx_3 *= stroke_width_col;
      } else {
        if ((hold_steps < 30.0) && (opacity < 85.0)) {
          /* '<S311>:1:200' */
          /* '<S311>:1:201' */
          if ((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
              (Forearm_Min_Scale_Factor)) {
            tgt_vec_idx_0 = stroke_width_col;
          } else {
            tgt_vec_idx_0 = Forearm_Min_Scale_Factor;
          }

          T[3] *= tgt_vec_idx_0;

          /* '<S311>:1:202' */
          if ((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
              (Forearm_Min_Scale_Factor)) {
            tgt_vec_idx_0 = stroke_width_col;
          } else {
            tgt_vec_idx_0 = Forearm_Min_Scale_Factor;
          }

          Kp_1_idx_3 = 0.0 * tgt_vec_idx_0;

          /* '<S311>:1:203' */
          if ((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
              (Forearm_Min_Scale_Factor)) {
            tgt_vec_idx_0 = stroke_width_col;
          } else {
            tgt_vec_idx_0 = Forearm_Min_Scale_Factor;
          }

          Kp_2_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:205' */
          if ((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
              (Forearm_Min_Scale_Factor)) {
            tgt_vec_idx_0 = stroke_width_col;
          } else {
            tgt_vec_idx_0 = Forearm_Min_Scale_Factor;
          }

          Kv_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:206' */
          if ((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
              (Forearm_Min_Scale_Factor)) {
            tgt_vec_idx_0 = stroke_width_col;
          } else {
            tgt_vec_idx_0 = Forearm_Min_Scale_Factor;
          }

          Kv_1_idx_3 = 0.0 * tgt_vec_idx_0;

          /* '<S311>:1:207' */
          if (!((stroke_width_col <= Forearm_Min_Scale_Factor) || rtIsNaN
                (Forearm_Min_Scale_Factor))) {
            stroke_width_col = Forearm_Min_Scale_Factor;
          }

          Kv_2_idx_3 *= stroke_width_col;
        }
      }

      /*  If the elbow angle is greater than 110 degrees and the forerm angle is */
      /*  less than 155 degrees, apply the elbow scale factor only.  Otherwise, */
      /*  apply the SMALLEST of the elbow and forearm scaling factors */
      if ((hold_steps > 110.0) && (opacity <= 155.0)) {
        /* '<S311>:1:214' */
        /* '<S311>:1:215' */
        T[3] *= Elbow_Max_Scale_Factor;

        /* '<S311>:1:216' */
        Kp_1_idx_3 *= Elbow_Max_Scale_Factor;

        /* '<S311>:1:217' */
        Kp_2_idx_3 *= Elbow_Max_Scale_Factor;

        /* '<S311>:1:219' */
        Kv_idx_3 *= Elbow_Max_Scale_Factor;

        /* '<S311>:1:220' */
        Kv_1_idx_3 *= Elbow_Max_Scale_Factor;

        /* '<S311>:1:221' */
        Kv_2_idx_3 *= Elbow_Max_Scale_Factor;
      } else {
        if ((hold_steps > 110.0) && (opacity > 155.0)) {
          /* '<S311>:1:223' */
          /* '<S311>:1:224' */
          if ((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
              (Forearm_Max_Scale_Factor)) {
            tgt_vec_idx_0 = Elbow_Max_Scale_Factor;
          } else {
            tgt_vec_idx_0 = Forearm_Max_Scale_Factor;
          }

          T[3] *= tgt_vec_idx_0;

          /* '<S311>:1:225' */
          if ((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
              (Forearm_Max_Scale_Factor)) {
            tgt_vec_idx_0 = Elbow_Max_Scale_Factor;
          } else {
            tgt_vec_idx_0 = Forearm_Max_Scale_Factor;
          }

          Kp_1_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:226' */
          if ((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
              (Forearm_Max_Scale_Factor)) {
            tgt_vec_idx_0 = Elbow_Max_Scale_Factor;
          } else {
            tgt_vec_idx_0 = Forearm_Max_Scale_Factor;
          }

          Kp_2_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:228' */
          if ((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
              (Forearm_Max_Scale_Factor)) {
            tgt_vec_idx_0 = Elbow_Max_Scale_Factor;
          } else {
            tgt_vec_idx_0 = Forearm_Max_Scale_Factor;
          }

          Kv_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:229' */
          if ((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
              (Forearm_Max_Scale_Factor)) {
            tgt_vec_idx_0 = Elbow_Max_Scale_Factor;
          } else {
            tgt_vec_idx_0 = Forearm_Max_Scale_Factor;
          }

          Kv_1_idx_3 *= tgt_vec_idx_0;

          /* '<S311>:1:230' */
          if (!((Elbow_Max_Scale_Factor <= Forearm_Max_Scale_Factor) || rtIsNaN
                (Forearm_Max_Scale_Factor))) {
            Elbow_Max_Scale_Factor = Forearm_Max_Scale_Factor;
          }

          Kv_2_idx_3 *= Elbow_Max_Scale_Factor;
        }
      }

      /*  If the forearm angle is greater than 155 degrees and the elbow angle is */
      /*  less than 110 degrees, apply the forearm scale factor only. */
      if ((opacity > 155.0) && (hold_steps < 110.0)) {
        /* '<S311>:1:236' */
        /* '<S311>:1:237' */
        T[3] *= Forearm_Max_Scale_Factor;

        /* '<S311>:1:238' */
        Kp_1_idx_3 *= Forearm_Max_Scale_Factor;

        /* '<S311>:1:239' */
        Kp_2_idx_3 *= Forearm_Max_Scale_Factor;

        /* '<S311>:1:241' */
        Kv_idx_3 *= Forearm_Max_Scale_Factor;

        /* '<S311>:1:242' */
        Kv_1_idx_3 *= Forearm_Max_Scale_Factor;

        /* '<S311>:1:243' */
        Kv_2_idx_3 *= Forearm_Max_Scale_Factor;
      }

      /*  If the forearm angle is less than 85 degrees and the elbow angle is */
      /*  greater than 30 degrees, apply the forearm scale factor only. */
      if ((opacity < 85.0) && (hold_steps > 30.0)) {
        /* '<S311>:1:249' */
        /* '<S311>:1:250' */
        T[3] *= Forearm_Min_Scale_Factor;

        /* '<S311>:1:251' */
        Kp_1_idx_3 *= Forearm_Min_Scale_Factor;

        /* '<S311>:1:252' */
        Kp_2_idx_3 *= Forearm_Min_Scale_Factor;

        /* '<S311>:1:254' */
        Kv_idx_3 *= Forearm_Min_Scale_Factor;

        /* '<S311>:1:255' */
        Kv_1_idx_3 *= Forearm_Min_Scale_Factor;

        /* '<S311>:1:256' */
        Kv_2_idx_3 *= Forearm_Min_Scale_Factor;
      }

      /*  Based on experiments, instability due to gain for L1 is related to shoulder angle. */
      /*  Calculate the scale factor for the shoulder proportional and derivative gains from a maximal value at shoulder */
      /*  angle == 60 degrees, to 50% of max at shoulder angle == 80 degrees.  */
      /* '<S311>:1:263' */
      hold_steps = -0.025 * stroke_colour_col + 2.5;
      if ((1.0 <= hold_steps) || rtIsNaN(hold_steps)) {
        hold_steps = 1.0;
      }

      if ((0.5 >= hold_steps) || rtIsNaN(hold_steps)) {
        hold_steps = 0.5;
      }

      /*  If the shoulder angle is greater than 60 degrees, apply the shoulder scale factor. */
      /* '<S311>:1:266' */
      T[0] *= hold_steps;

      /* '<S311>:1:267' */
      Kp_1_idx_0 = 0.0 * hold_steps;

      /* '<S311>:1:268' */
      Kp_2_idx_0 *= hold_steps;

      /* '<S311>:1:270' */
      Kv_idx_0 *= hold_steps;

      /* '<S311>:1:271' */
      Kv_1_idx_0 = 0.0 * hold_steps;

      /* '<S311>:1:272' */
      Kv_2_idx_0 *= hold_steps;
    }
  } else {
    /*  Based on experiments, instability due to gain for L2 is related to elbow angle. */
    /*  Scale the elbow proportional gain from a maximal value at elbow angle == 20 degrees,  */
    /*  to 20% of max at elbow angle == 10 degrees.  */
    /*  Taking the abs value handles left and right-handed KINARMs */
    /* '<S311>:1:279' */
    hold_steps = fabs(vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] -
                      vmr_rwd_fix_leftarm_B.RateTransition1_c2[0]) * 180.0 /
      3.1415926535897931;

    /* '<S311>:1:280' */
    tgt_vec_idx_0 = 0.08 * hold_steps - 0.6;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.2;
    }

    T[3] *= tgt_vec_idx_0;

    /* '<S311>:1:281' */
    tgt_vec_idx_0 = 0.08 * hold_steps - 0.6;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.2;
    }

    Kp_1_idx_3 = 0.0 * tgt_vec_idx_0;

    /* '<S311>:1:282' */
    tgt_vec_idx_0 = 0.08 * hold_steps - 0.6;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.2 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.2;
    }

    Kp_2_idx_3 *= tgt_vec_idx_0;

    /*  Scale the elbow derivative gain from a maximal value at elbow angle == 20 degrees,  */
    /*  to 10% of max at elbow angle == 10 degrees.  */
    /* '<S311>:1:286' */
    tgt_vec_idx_0 = 0.09 * hold_steps - 0.8;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.1 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.1;
    }

    Kv_idx_3 *= tgt_vec_idx_0;

    /* '<S311>:1:287' */
    tgt_vec_idx_0 = 0.09 * hold_steps - 0.8;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.1 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.1;
    }

    Kv_1_idx_3 = 0.0 * tgt_vec_idx_0;

    /* '<S311>:1:288' */
    tgt_vec_idx_0 = 0.09 * hold_steps - 0.8;
    if ((1.0 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 1.0;
    }

    if ((0.1 >= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = 0.1;
    }

    Kv_2_idx_3 *= tgt_vec_idx_0;
  }

  /* % calculate the positional errors */
  /* '<S311>:1:293' */
  tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 47];
  x2 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 50];
  state_idx_0 = vmr_rwd_fix_leftarm_B.RateTransition1_c2[0] - tgt_vec_idx_0;
  state_idx_1 = vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] - x2;

  /* '<S311>:1:294' */
  tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 53];
  x2 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 56];
  error_vel_idx_0 = vmr_rwd_fix_leftarm_B.RateTransition2_m[0] - tgt_vec_idx_0;
  error_vel_idx_1 = vmr_rwd_fix_leftarm_B.RateTransition2_m[1] - x2;

  /* '<S311>:1:296' */
  i = (int32_T)arm;
  opacity_idx_0 = vmr_rwd_fix_leftarm_B.RateTransition1_c2[0] -
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p[i - 1];
  opacity_idx_1 = vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] -
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p[i + 1];

  /* '<S311>:1:297' */
  i = (int32_T)arm;
  error_vel_primary_idx_0 = vmr_rwd_fix_leftarm_B.RateTransition2_m[0] -
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p[i + 3];
  error_vel_primary_idx_1 = vmr_rwd_fix_leftarm_B.RateTransition2_m[1] -
    vmr_rwd_fix_leftarm_B.DataTypeConversion_p[i + 5];

  /* % Estimate the inertias of the subject's arm segments */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type == 1.0) {
    /* '<S311>:1:302' */
    /* Human KINARM EXOSKELETON robot */
    /*  Estimate inertial properies of human arm, relative to M and L1 */
    /*  For human data, segments are modelled using CofM and radius of gyration data from */
    /*  Table A.2 and Fig 3.1 in Biomechancis of Human Movement, Winter D.A. */
    /*  (1979)  */
    /*   Note: although values for the combined forearm and hand are */
    /*   provided in these tables, the values do not make any sense.  So */
    /*   the combined forearm + hand values are calculated subsequently */
    /*   to this if statement */
    /* '<S311>:1:311' */
    prct_L1_L_h = 0.58;

    /* length of hand as percent of length of upper arm */
    /* '<S311>:1:312' */
    prct_L1_L_fa = 0.79;

    /* length of forearm as percent of length of upper arm */
    /* '<S311>:1:314' */
    prct_M_h = 0.006;

    /* mass of forearm+hand as percent of subject mass */
    /* '<S311>:1:315' */
    prct_M_fa = 0.016;

    /* mass of forearm+hand as percent of subject mass */
    /* '<S311>:1:316' */
    prct_M_ua = 0.028;

    /* mass of upper arm as percent of subject mass */
    /* '<S311>:1:318' */
    prct_L_h_C_h = 0.506;

    /* CofM of hand as percent of length of hand */
    /* '<S311>:1:319' */
    prct_L_fa_C_fa = 0.43;

    /* CofM of forearm as percent of length of forearm */
    /* '<S311>:1:320' */
    prct_L1_C_ua = 0.436;

    /* CofM of upper arm as percent of length of upper arm */
    /* '<S311>:1:322' */
    prct_L_h_rho_h = 0.297;

    /* radius of gyration (about CofM) of hand as percent of length of hand */
    /* '<S311>:1:323' */
    prct_L_fa_rho_fa = 0.303;

    /* radius of gyration (about CofM) of forearm as percent of length of forearm */
    /* '<S311>:1:324' */
    prct_L1_rho_ua = 0.322;

    /* radius of gyration (about CofM) of upper arm as percent of length of upper arm */
    /*  human subject mass is estimated based on L1. */
    /*  d = 0.69 + 0.9h/m^0.333; d ~ 1.06 from Winters, p48-49 */
    /*  where 0.4111 = h/m^0.333 */
    /*  m = 14.392h^3 */
    /*  and, L1 = 0.186h; from Winters, p48 */
    /*  therefore, m = 2237 * L1^3 */
    /* '<S311>:1:332' */
    /* '<S311>:1:333' */
    /* ensure that subject mass is never more than 2x expected, based on models */
    /* '<S311>:1:334' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.Convert8;
    M_sbj = rt_powd_snf(vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1], 3.0)
      * 2237.0 * 2.0;
    if ((tgt_vec_idx_1 <= M_sbj) || rtIsNaN(M_sbj)) {
      M_sbj = tgt_vec_idx_1;
    }

    if (!(M_sbj >= 0.0)) {
      M_sbj = 0.0;
    }

    /* ensure that subject mass is never < 0 */
  } else {
    /* NHP KINARM EXOSKELETON robot */
    /*  For NHP data, segments are modelled using CofM and radius of */
    /*  gyration data used in the study: Cheng and Scott, J. Morph (2000) */
    /*  245:206-224.  Some of the values here are different than those */
    /*  originally published following a re-analysis of the original raw */
    /*  data */
    /* '<S311>:1:343' */
    prct_L1_L_h = 0.72;

    /* length of hand as fraction of length of upper arm */
    /* '<S311>:1:344' */
    prct_L1_L_fa = 1.07;

    /* length of forearm as fraction of length of upper arm */
    /* '<S311>:1:346' */
    prct_M_h = 0.008;

    /* mass of hand as fraction of subject mass */
    /* '<S311>:1:347' */
    prct_M_fa = 0.024;

    /* mass of forearm as fraction of subject mass */
    /* '<S311>:1:348' */
    prct_M_ua = 0.036;

    /* mass of upper arm as fraction of subject mass */
    /* '<S311>:1:350' */
    prct_L_h_C_h = 0.4;

    /* CofM of hand as fraction of length of hand */
    /* '<S311>:1:351' */
    prct_L_fa_C_fa = 0.44;

    /* CofM of forearm as fraction of length of forearm */
    /* '<S311>:1:352' */
    prct_L1_C_ua = 0.49;

    /* CofM of upper arm as fraction of length of upper arm */
    /* '<S311>:1:354' */
    prct_L_h_rho_h = 0.251;

    /* radius of gyration (about CofM) of hand as fraction of length of hand */
    /* '<S311>:1:355' */
    prct_L_fa_rho_fa = 0.261;

    /* radius of gyration (about CofM) of forearm as fraction of length of forearm */
    /* '<S311>:1:356' */
    prct_L1_rho_ua = 0.249;

    /* radius of gyration (about CofM) of upper arm as fraction of length of upper arm */
    /*  From analysis of raw data from Cheng et al., the following relationship can be */
    /*  used to estimate NHP mass from L1 */
    /* '<S311>:1:360' */
    /* '<S311>:1:361' */
    /* ensure that subject mass is never more than 2x expected, based on models */
    /* '<S311>:1:362' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.Convert8;
    M_sbj = rt_powd_snf(vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1], 3.0)
      * 2587.0 * 2.0;
    if ((tgt_vec_idx_1 <= M_sbj) || rtIsNaN(M_sbj)) {
      M_sbj = tgt_vec_idx_1;
    }

    if (!(M_sbj >= 0.0)) {
      M_sbj = 0.0;
    }

    /* ensure that subject mass is never < 0 */
  }

  /* % Estimate the inertias of the robot's segments */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type == 1.0) {
    /* '<S311>:1:367' */
    /* Human KINARM EXOSKELETON robot */
    if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[(int32_T)arm
        - 1] != 0.0) {
      if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[(int32_T)
          arm - 1] == 1.0) {
        /* '<S311>:1:370' */
        /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE H-UTS ROBOT (Rev1) */
        /* '<S311>:1:372' */
        I1_prox = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.152 +
          0.051;

        /* inertia of KINARM segment 1, kg-m^2 at shoulder */
        /* '<S311>:1:373' */
        I2_5_prox = 0.012;

        /* inertia of KINARM segments 2&5, kg-m^2 at elbow */
        /* '<S311>:1:374' */
        I3_prox = 0.008;

        /* inertia of KINARM segment 3, kg-m^2 at elbow */
        /* '<S311>:1:375' */
        tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
          0.046 - 0.005;

        /* inertia of KINARM segment 4, kg-m^2 at shoulder */
        /* '<S311>:1:376' */
        tgt_vec_idx_1 = 0.0033;

        /* inertia of motor 1, after 5x gear ratio, kg-m^2 */
        /* '<S311>:1:377' */
        Im2 = 0.0033;

        /* inertia of motor 2, after 5x gear ratio, kg-m^2 */
        /* '<S311>:1:378' */
        M2 = (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
              vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 8.25 -
              vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 5.87) + 2.25;

        /* mass of KINARM segment2 and 5 (kg) */
        /* '<S311>:1:379' */
        M4 = 0.92;

        /* mass of segment 4 (kg) */
        /* '<S311>:1:380' */
        L3 = 0.14;

        /* crank length (m) */
        /* '<S311>:1:381' */
        delta = 2.757;

        /*  ~(175 - 17 = 158 degrees), angle between segments F1 and F7 - angle between F5 and U1 */
        /* '<S311>:1:382' */
        x2 = 0.005;

        /* center of mass of segment 2+5 (m) */
        /* '<S311>:1:383' */
        y2_anterior = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
          0.039 + 0.022;

        /* center of mass of segment 2+5 (m), anterior direction */
        /* '<S311>:1:384' */
        x4 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.217 + 0.003;

        /* center of mass of segment 4 (m) */
      } else {
        /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE H-UTS ROBOT (Rev2) */
        /* '<S311>:1:387' */
        I1_prox = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.158 +
          0.052;

        /* inertia of KINARM segment 1, kg-m^2 at shoulder */
        /* '<S311>:1:388' */
        I2_5_prox = 0.01;

        /* inertia of KINARM segments 2&5, kg-m^2 at elbow */
        /* '<S311>:1:389' */
        I3_prox = 0.005;

        /* inertia of KINARM segment 3, kg-m^2 at elbow */
        /* '<S311>:1:390' */
        tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
          0.063 - 0.006;

        /* inertia of KINARM segment 4, kg-m^2 at shoulder */
        /* '<S311>:1:391' */
        tgt_vec_idx_1 = 0.0033;

        /* inertia of motor 1, after 5x gear ratio, kg-m^2 */
        /* '<S311>:1:392' */
        Im2 = 0.0033;

        /* inertia of motor 2, after 5x gear ratio, kg-m^2 */
        /* '<S311>:1:393' */
        M2 = (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
              vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 2.52 -
              vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 2.31) + 1.47;

        /* mass of KINARM segment2 and 5 (kg) */
        /* '<S311>:1:394' */
        M4 = 2.267;

        /* mass of segment 4 (kg) */
        /* '<S311>:1:395' */
        L3 = 0.095;

        /* crank length (m) */
        /* '<S311>:1:396' */
        delta = 2.899;

        /*  ~(175 - 17 = 158 degrees), angle between segments F1 and F7 - angle between F5 and U1 */
        /* '<S311>:1:397' */
        x2 = 0.026;

        /* center of mass of segment 2+5 (m) */
        /* '<S311>:1:398' */
        y2_anterior = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
          0.023 + 0.018;

        /* center of mass of segment 2+5 (m), anterior direction */
        /* '<S311>:1:399' */
        x4 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.189 + 0.01;

        /* center of mass of segment 4 (m) */
      }

      /*  Estimates of human arm trough inertias */
      /* '<S311>:1:402' */
      Itr_ua = 0.0005;

      /* inertia of MEDIUM upper arm trough (about CofM), kg-m^2 */
      /* '<S311>:1:403' */
      stroke_width_col = 0.0005;

      /* inertia of MEDIUM forearm trough (about CofM), kg-m^2 */
      /* '<S311>:1:404' */
      Elbow_Max_Scale_Factor = 0.0017;

      /* inertia of LARGE hand trough (about CofM), kg-m^2 */
      /* '<S311>:1:405' */
      Mtr_ua = 0.37;

      /* mass of MEDIUM upper arm trough (kg) */
      /* '<S311>:1:406' */
      Forearm_Min_Scale_Factor = 0.247;

      /* mass of MEDIUM forearm trough (kg) */
      /* '<S311>:1:407' */
      Forearm_Max_Scale_Factor = 0.305;

      /* mass of LARGE hand trough (kg) */
      /*  Estimate the location of CofM of the human upper-arm, forearm and hand troughs. */
      /* '<S311>:1:410' */
      xtr_ua = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] / 2.0 - 0.026;

      /*  estimate of trough location's center-of-clamp + distance to CofM */
      /* '<S311>:1:411' */
      hold_steps = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.4 +
        0.002;

      /*  estimate of trough location's center-of-clamp + distance to CofM */
      /* '<S311>:1:412' */
      opacity = (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 1.5 -
                 0.19) + 0.06;

      /*  estimate of trough location's center-of-clamp (1 cm more proximal than classic Exo) + distance to CofM */
    } else {
      /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE HUMAN KINARM EXOSKELETON ROBOT (Rev2 - 9) */
      /* '<S311>:1:415' */
      I1_prox = 0.025;

      /* inertia of KINARM segment 1, kg-m^2 at shoulder */
      /* '<S311>:1:416' */
      I2_5_prox = 0.011;

      /* inertia of KINARM segments 2&5, kg-m^2 at elbow */
      /* '<S311>:1:417' */
      I3_prox = 0.017;

      /* inertia of KINARM segment 3, kg-m^2 at elbow */
      /* '<S311>:1:418' */
      tgt_vec_idx_0 = 0.01;

      /* inertia of KINARM segment 4, kg-m^2 at shoulder */
      /* '<S311>:1:419' */
      tgt_vec_idx_1 = 0.0021;

      /* inertia of motor 1, after 4x gear ratio, kg-m^2 */
      /* '<S311>:1:420' */
      Im2 = 0.0021;

      /* inertia of motor 2, after 4x gear ratio, kg-m^2 */
      /* '<S311>:1:421' */
      M2 = 0.55;

      /* mass of KINARM segment2 and 5 (kg) */
      /* '<S311>:1:422' */
      M4 = 0.34;

      /* mass of segment 4 (kg) */
      /* '<S311>:1:423' */
      L3 = 0.156;

      /* crank length (m) */
      /* '<S311>:1:424' */
      delta = 2.897;

      /* 166 degrees, angle between segments 2 and 5 */
      /* '<S311>:1:425' */
      x2 = -0.01;

      /* center of mass of segments 2+5 (m) */
      /* '<S311>:1:426' */
      y2_anterior = 0.0;

      /* LEGACY - PRIOR TO UTS WE ASSUMED y2_anterior = 0  */
      /* '<S311>:1:427' */
      x4 = 0.12;

      /* center of mass of segment 4 (m) */
      /*  Estimates of human arm trough inertias */
      /* '<S311>:1:430' */
      Itr_ua = 0.0005;

      /* inertia of MEDIUM upper arm trough (about CofM), kg-m^2 */
      /* '<S311>:1:431' */
      stroke_width_col = 0.0003;

      /* inertia of MEDIUM forearm trough (about CofM), kg-m^2 */
      /* '<S311>:1:432' */
      Elbow_Max_Scale_Factor = 0.0014;

      /* inertia of LARGE hand trough (about CofM), kg-m^2 */
      /* '<S311>:1:433' */
      Mtr_ua = 0.32;

      /* mass of MEDIUM upper arm trough (kg) */
      /* '<S311>:1:434' */
      Forearm_Min_Scale_Factor = 0.183;

      /* mass of MEDIUM forearm trough (kg) */
      /* '<S311>:1:435' */
      Forearm_Max_Scale_Factor = 0.221;

      /* mass of LARGE hand trough (kg) */
      /*  Estimate the location of CofM of the human upper-arm, forearm and hand troughs. */
      /* '<S311>:1:437' */
      xtr_ua = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] / 2.0 + 0.009;

      /*  estimate of trough location's center-of-clamp + distance to CofM */
      /* '<S311>:1:438' */
      hold_steps = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.4 +
        0.002;

      /*  estimate of trough location's scribe line + distance to CofM */
      /* '<S311>:1:439' */
      opacity = (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 1.5 - 0.2)
        + 0.074;

      /*  estimate of trough location's scribe line + distance to CofM */
    }

    /*  Combine the human forearm and hand trough inertias */
    /* '<S311>:1:444' */
    Mtr_fa_h = Forearm_Min_Scale_Factor + Forearm_Max_Scale_Factor;

    /* '<S311>:1:445' */
    xtr_fa_h = (Forearm_Min_Scale_Factor * hold_steps + Forearm_Max_Scale_Factor
                * opacity) / Mtr_fa_h;

    /* '<S311>:1:446' */
    stroke_colour_col = xtr_fa_h - hold_steps;
    hold_steps = xtr_fa_h - opacity;
    stroke_colour_col = ((stroke_colour_col * stroke_colour_col *
                          Forearm_Min_Scale_Factor + stroke_width_col) +
                         Elbow_Max_Scale_Factor) + hold_steps * hold_steps *
      Forearm_Max_Scale_Factor;

    /*  Prior to UTS, we assumed all off-axis center's of mass were ~0 */
    /* '<S311>:1:449' */
  } else {
    /* NHP KINARM EXOSKELETON robot */
    if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_KINARM_Type == 2.0)
    {
      /* '<S311>:1:454' */
      /* NHP KINARM robot */
      /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE NHP KINARM  EXOSKELETON ROBOT (Rev2 - 9) */
      /* '<S311>:1:457' */
      I1_prox = 0.0042;

      /* inertia of KINARM segment 1, kg-m^2 at shoulder */
      /* '<S311>:1:458' */
      I2_5_prox = 0.0023;

      /* inertia of KINARM segments 2&5, kg-m^2 at elbow */
      /* '<S311>:1:459' */
      I3_prox = 0.0062;

      /* inertia of KINARM segment 3, kg-m^2 at elbow */
      /* '<S311>:1:460' */
      tgt_vec_idx_0 = 0.0095;

      /* inertia of KINARM segment 4, kg-m^2 at shoulder */
      /* '<S311>:1:461' */
      tgt_vec_idx_1 = 0.0008;

      /* inertia of motor 1, after 4x gear ratio, kg-m^2 */
      /* '<S311>:1:462' */
      Im2 = 0.0002;

      /* inertia of motor 2, after 4x gear ratio, kg-m^2 */
      /* '<S311>:1:463' */
      M2 = 0.29;

      /* mass of KINARM segment2 and 5 (kg) */
      /* '<S311>:1:464' */
      M4 = 0.18;

      /* mass of segment 4 (kg) */
      /* '<S311>:1:465' */
      L3 = 0.07;

      /* crank length (m) */
      /* '<S311>:1:466' */
      delta = 2.525;

      /* 144.7 degrees, angle between segments 2 and 5 */
      /* '<S311>:1:467' */
      x2 = -0.015;

      /* center of mass of segments 2+5 (m) */
      /* '<S311>:1:468' */
      y2_anterior = 0.0;

      /* center of mass of segment 2+5 (m), anterior direction */
      /* '<S311>:1:469' */
      x4 = 0.05;

      /* center of mass of segment 4 (m) */
    } else {
      /*  NHP UTS */
      /* '<S311>:1:471' */
      I1_prox = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.0292 +
        0.0068;

      /* inertia of KINARM segment 1, kg-m^2 at shoulder */
      /* '<S311>:1:472' */
      I2_5_prox = 0.0023;

      /* inertia of KINARM segments 2&5, kg-m^2 at elbow */
      /* '<S311>:1:473' */
      I3_prox = 0.0006;

      /* inertia of KINARM segment 3, kg-m^2 at elbow */
      /* '<S311>:1:474' */
      tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
        0.0067 - 0.0004;

      /* inertia of KINARM segment 4, kg-m^2 at shoulder */
      /* '<S311>:1:475' */
      tgt_vec_idx_1 = 0.0008;

      /* inertia of motor 1, after 4x gear ratio, kg-m^2 */
      /* '<S311>:1:476' */
      Im2 = 0.0005;

      /* inertia of motor 2, after 3x gear ratio, kg-m^2 */
      /* '<S311>:1:477' */
      M2 = (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
            vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 5.44 -
            vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 1.84) + 0.527;

      /* mass of KINARM segment2 and 5 (kg) */
      /* '<S311>:1:478' */
      M4 = 0.074;

      /* mass of segment 4 (kg) */
      /* '<S311>:1:479' */
      L3 = 0.06;

      /* crank length (m) */
      /* '<S311>:1:480' */
      delta = 2.566;

      /*  ~(158 - 11 = 147 degrees), angle between segments F1 and F7 - angle between F5 and U1 */
      /* '<S311>:1:481' */
      x2 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.043 + 0.027;

      /* center of mass of segment 2+5 (m) */
      /* '<S311>:1:482' */
      y2_anterior = -0.022;

      /* center of mass of segment 2+5 (m), anterior direction */
      /* '<S311>:1:483' */
      x4 = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * 0.491 - 0.001;

      /* center of mass of segment 4 (m) */
    }

    /*  Estimates of NHP arm trough inertias */
    /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE NHP KINARM (Rev2 - 9) */
    /* '<S311>:1:489' */
    Itr_ua = 5.0E-5;

    /* inertia of MEDIUM upper arm trough (about CofM), kg-m^2 */
    /* '<S311>:1:490' */
    stroke_colour_col = 0.00019;

    /* inertia of MEDIUM forearm_hand trough (about CofM), kg-m^2 */
    /* '<S311>:1:491' */
    Mtr_ua = 0.13;

    /* mass of MEDIUM upper arm trough (kg) */
    /* '<S311>:1:492' */
    Mtr_fa_h = 0.22;

    /* mass of MEDIUM forearm_hand trough (kg) */
    /*  Estimate the location of CofM of the NHP upper-arm, forearm and hand troughs. */
    /*  THE FOLLOWING ARE TYPICAL VALUES FOR THE NHP KINARM (Rev2 - 9) */
    /* '<S311>:1:496' */
    xtr_ua = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] / 2.0;

    /* '<S311>:1:497' */
    xtr_fa_h = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
      prct_L1_L_fa - 0.038;

    /* Estimate of wrist location - 1.5"  */
    /*  The off-axis center of mass of the arm troughs is ~0 */
    /* '<S311>:1:500' */
  }

  /* % combine robot and subject inertias, if required */
  /*  Add estimate of trough inertia to robot inertia */
  hold_steps =
    vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF - 2.0;
  opacity = vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF
    - 2.0;
  if ((hold_steps == 2.0) || (opacity == 4.0)) {
    /* '<S311>:1:508' */
    /* '<S311>:1:509' */
    Elbow_Max_Scale_Factor = M2 + Mtr_fa_h;

    /* '<S311>:1:510' */
    x2 = (x2 * M2 + xtr_fa_h * Mtr_fa_h) / Elbow_Max_Scale_Factor;

    /* '<S311>:1:511' */
    y2_anterior = y2_anterior * M2 / Elbow_Max_Scale_Factor;

    /* '<S311>:1:512' */
    M2 = Elbow_Max_Scale_Factor;

    /* '<S311>:1:513' */
    I1_prox += xtr_ua * xtr_ua * Mtr_ua + Itr_ua;

    /* '<S311>:1:514' */
    I2_5_prox += xtr_fa_h * xtr_fa_h * Mtr_fa_h + stroke_colour_col;
  }

  /*  Calculate and Add estimate of subject arm inertia to robot inertia */
  hold_steps =
    vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF - 2.0;
  opacity = vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_inertias_for_FF
    - 2.0;
  if ((hold_steps == 3.0) || (opacity == 4.0)) {
    /* '<S311>:1:518' */
    /*  This section calculates upper arm inertia.   */
    /* '<S311>:1:520' */
    xtr_ua = prct_M_ua * M_sbj;

    /*  Estimated upper arm mass (kg) */
    /* '<S311>:1:521' */
    Mtr_fa_h = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
      prct_L1_C_ua;

    /*  Estimated upper arm CofM WRT proximal joint(m) */
    /* '<S311>:1:522' */
    Mtr_ua = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
      prct_L1_rho_ua;

    /*  Estimated upper arm radius of gyration (m) */
    /* '<S311>:1:523' */
    /*  Estimated upper arm inertia at CofM (kg.m^2) */
    /*  Combine relative inertial values for hand and forearm into combined forearm+hand */
    /* '<S311>:1:527' */
    stroke_width_col = prct_L1_L_h + prct_L1_L_fa;

    /* length of forearm+hand as percent of length of upper arm */
    /* '<S311>:1:528' */
    Itr_ua = prct_M_h + prct_M_fa;

    /* mass of forearm+hand as percent of subject mass */
    /* '<S311>:1:529' */
    hold_steps = prct_L1_L_h / stroke_width_col;

    /* length of hand as percent of length of forearm+hand */
    /* '<S311>:1:530' */
    /* length of hand as percent of length of forearm+hand */
    /* '<S311>:1:531' */
    opacity = prct_L_h_C_h * hold_steps + (1.0 - hold_steps);

    /* CofM of hand as percent of length of forearm+hand */
    /* '<S311>:1:532' */
    stroke_colour_col = (1.0 - hold_steps) * prct_L_fa_C_fa;

    /* CofM of forearm as percent of length of forearm+hand */
    /* '<S311>:1:533' */
    Forearm_Max_Scale_Factor = (prct_M_h * opacity + prct_M_fa *
      stroke_colour_col) / Itr_ua;

    /* CofM of forearm+hand as percent of length of forearm+hand */
    /* '<S311>:1:534' */
    prct_M_ua = prct_L_h_rho_h * hold_steps;

    /* radius of gyration (about CofM) of hand as percent of length of forearm+hand */
    /* '<S311>:1:535' */
    Forearm_Min_Scale_Factor = (1.0 - hold_steps) * prct_L_fa_rho_fa;

    /* radius of gyration (about CofM) of forearm as percent of length of forearm+hand */
    /* '<S311>:1:536' */
    Elbow_Max_Scale_Factor = Forearm_Max_Scale_Factor - opacity;
    stroke_colour_col = Forearm_Max_Scale_Factor - stroke_colour_col;

    /*  This section calculates forearm + hand inertia.   */
    /* '<S311>:1:540' */
    hold_steps = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
      stroke_width_col;

    /*  Estimated forearm + hand length (m) */
    /* '<S311>:1:541' */
    stroke_width_col = Itr_ua * M_sbj;

    /*  Estimated forearm + hand mass (kg) */
    /* '<S311>:1:542' */
    opacity = Forearm_Max_Scale_Factor * hold_steps;

    /*  Estimated forearm + hand CofM WRT proximal joint (m) */
    /* '<S311>:1:543' */
    hold_steps *= sqrt(((prct_M_ua * prct_M_ua + Elbow_Max_Scale_Factor *
                         Elbow_Max_Scale_Factor) * prct_M_h +
                        (Forearm_Min_Scale_Factor * Forearm_Min_Scale_Factor +
                         stroke_colour_col * stroke_colour_col) * prct_M_fa) /
                       Itr_ua);

    /*  Estimated forearm + hand radius of gyration (m) */
    /* '<S311>:1:544' */
    /*  Estimated forearm + hand inertia at CofM (kg.m^2) */
    /*  The off-axis center of mass of the forearm + hand is assumed ~0 */
    /* '<S311>:1:546' */
    /* This section adds the subject inertia to the robot */
    /* '<S311>:1:549' */
    I1_prox += Mtr_ua * Mtr_ua * xtr_ua + Mtr_fa_h * Mtr_fa_h * xtr_ua;

    /* '<S311>:1:550' */
    Elbow_Max_Scale_Factor = M2 + stroke_width_col;

    /* '<S311>:1:551' */
    x2 = (x2 * M2 + opacity) / Elbow_Max_Scale_Factor;

    /* '<S311>:1:552' */
    y2_anterior = y2_anterior * M2 / Elbow_Max_Scale_Factor;

    /* '<S311>:1:553' */
    M2 = Elbow_Max_Scale_Factor;

    /* '<S311>:1:554' */
    I2_5_prox += hold_steps * hold_steps * stroke_width_col + opacity * opacity *
      stroke_width_col;
  }

  /* % calculate the FB and FF torque contributions */
  /* '<S311>:1:559' */
  hold_steps = vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] -
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[0];
  if (vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm + 14] == 1.0) {
    /* '<S311>:1:560' */
    /*  right-handed */
    /* '<S311>:1:561' */
    opacity = hold_steps - delta;

    /* '<S311>:1:562' */
  } else {
    /*  left-handed... */
    /* '<S311>:1:564' */
    opacity = hold_steps + delta;

    /* '<S311>:1:565' */
    y2_anterior = -y2_anterior;
  }

  /* '<S311>:1:567' */
  stroke_colour_col = sin(hold_steps);

  /* '<S311>:1:568' */
  hold_steps = cos(hold_steps);

  /* '<S311>:1:569' */
  /* '<S311>:1:570' */
  /*  The following equations implement the equations of motion for the KINARM robot */
  /*  For simplicity, we have ignored the off-axis components of M4 due to their */
  /*  negligible contributions */
  /* '<S311>:1:575' */
  stroke_width_col = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
    vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1];

  /*  B = M2*L1*(x2*cos21) + M4*L3*(x4*cos51); */
  /* '<S311>:1:577' */
  Elbow_Max_Scale_Factor = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] *
    M2 * (x2 * hold_steps - y2_anterior * stroke_colour_col) + M4 * L3 * (x4 *
    cos(opacity));

  /* '<S311>:1:578' */
  /* '<S311>:1:579' */
  hold_steps = vmr_rwd_fix_leftarm_B.kinarm_data[(int32_T)arm - 1] * M2 * (x2 *
    stroke_colour_col + y2_anterior * hold_steps) + M4 * L3 * (x4 * sin(opacity));

  /*  C = M2*L1*(x2*sin21) + M4*L3*(x4*sin51); */
  /*  B = M2*L1*(x2*cos21 - y2_tr2*sin21) + M4*L3*(x4*cos51 + y4*sin51); */
  /*  C = M2*L1*(x2*sin21 + y2_tr2*cos21) + M4*L3*(x4*sin51 - y4*cos51); */
  /* '<S311>:1:584' */
  /* inertial matrix */
  /* '<S311>:1:585' */
  vmr_rwd_fix_leftarm_diag(vmr_rwd_fix_leftarm_B.RateTransition2_m, b);

  /* coriolis and centripetal forces */
  if (inertia_option_for_FF == 0.0) {
    /* '<S311>:1:587' */
    /* no feed-forward control */
    /* '<S311>:1:588' */
    y2_anterior = 0.0;
    x2 = 0.0;
  } else {
    /* '<S311>:1:590' */
    tgt_vec_idx_1 = ((I1_prox + tgt_vec_idx_0) + tgt_vec_idx_1) + M2 *
      stroke_width_col;
    tgt_vec_idx_0 = ((I2_5_prox + I3_prox) + Im2) + L3 * L3 * M4;
    tmp_a[0] = 0.0;
    tmp_a[2] = -hold_steps;
    tmp_a[1] = hold_steps;
    tmp_a[3] = 0.0;
    for (i_0 = 0; i_0 < 2; i_0++) {
      tmp_6[i_0] = 0.0;
      tmp_6[i_0] += tmp_a[i_0] * b[0];
      tmp_6[i_0] += tmp_a[i_0 + 2] * b[1];
      tmp_6[i_0 + 2] = 0.0;
      tmp_6[i_0 + 2] += tmp_a[i_0] * b[2];
      tmp_6[i_0 + 2] += tmp_a[i_0 + 2] * b[3];
    }

    I1_prox = tgt_vec_idx_1 * vmr_rwd_fix_leftarm_B.RateTransition4_n[0];
    I1_prox += Elbow_Max_Scale_Factor * vmr_rwd_fix_leftarm_B.RateTransition4_n
      [1];
    tgt_vec_idx_1 = I1_prox;
    I1_prox = Elbow_Max_Scale_Factor * vmr_rwd_fix_leftarm_B.RateTransition4_n[0];
    I1_prox += tgt_vec_idx_0 * vmr_rwd_fix_leftarm_B.RateTransition4_n[1];
    x2 = tmp_6[0] * vmr_rwd_fix_leftarm_B.RateTransition2_m[0];
    x2 += tmp_6[2] * vmr_rwd_fix_leftarm_B.RateTransition2_m[1];
    tgt_vec_idx_0 = x2;
    x2 = tmp_6[1] * vmr_rwd_fix_leftarm_B.RateTransition2_m[0];
    x2 += tmp_6[3] * vmr_rwd_fix_leftarm_B.RateTransition2_m[1];
    y2_anterior = tgt_vec_idx_1 + tgt_vec_idx_0;
    x2 += I1_prox;
  }

  if (vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport9[(int32_T)arm -
      1] == 0.0) {
    /* '<S311>:1:593' */
    /*  Only use primary encoder feedback */
    /* '<S311>:1:595' */
    M2 = T[0] * state_idx_0;
    M2 += 0.0 * state_idx_1;
    tgt_vec_idx_1 = M2;
    M2 = 0.0 * state_idx_0;
    M2 += T[3] * state_idx_1;
    tgt_vec_idx_0 = Kv_idx_0 * error_vel_idx_0;
    tgt_vec_idx_0 += 0.0 * error_vel_idx_1;
    Kv_idx_0 = tgt_vec_idx_0;
    tgt_vec_idx_0 = 0.0 * error_vel_idx_0;
    tgt_vec_idx_0 += Kv_idx_3 * error_vel_idx_1;
    delta = tgt_vec_idx_1 + Kv_idx_0;
    M2 += tgt_vec_idx_0;
  } else {
    /*  Use both primary and secondary encoders - note: secondary encoder information under these conditions is contained error and error_vel */
    /* '<S311>:1:598' */
    M2 = Kp_2_idx_0 * state_idx_0;
    M2 += 0.0 * state_idx_1;
    Kp_2_idx_0 = M2;
    M2 = 0.0 * state_idx_0;
    M2 += Kp_2_idx_3 * state_idx_1;
    tgt_vec_idx_0 = Kv_2_idx_0 * error_vel_idx_0;
    tgt_vec_idx_0 += 0.0 * error_vel_idx_1;
    Kv_2_idx_0 = tgt_vec_idx_0;
    tgt_vec_idx_0 = 0.0 * error_vel_idx_0;
    tgt_vec_idx_0 += Kv_2_idx_3 * error_vel_idx_1;
    tgt_vec_idx_1 = Kp_1_idx_0 * opacity_idx_0;
    tgt_vec_idx_1 += 0.0 * opacity_idx_1;
    Kp_2_idx_0 = (Kp_2_idx_0 + Kv_2_idx_0) + tgt_vec_idx_1;
    tgt_vec_idx_1 = 0.0 * opacity_idx_0;
    tgt_vec_idx_1 += Kp_1_idx_3 * opacity_idx_1;
    tgt_vec_idx_0 = (M2 + tgt_vec_idx_0) + tgt_vec_idx_1;
    tgt_vec_idx_1 = Kv_1_idx_0 * error_vel_primary_idx_0;
    tgt_vec_idx_1 += 0.0 * error_vel_primary_idx_1;
    Kv_1_idx_0 = tgt_vec_idx_1;
    tgt_vec_idx_1 = 0.0 * error_vel_primary_idx_0;
    tgt_vec_idx_1 += Kv_1_idx_3 * error_vel_primary_idx_1;
    delta = Kp_2_idx_0 + Kv_1_idx_0;
    M2 = tgt_vec_idx_0 + tgt_vec_idx_1;
  }

  /* apply the torques to the correct arm and in local shoulder/elbow coordinate frame */
  if (arm == 1.0) {
    /* '<S311>:1:602' */
    /* '<S311>:1:603' */
    vmr_rwd_fix_leftarm_B.TorqueFF[0] = y2_anterior + x2;
    vmr_rwd_fix_leftarm_B.TorqueFF[1] = x2;
    vmr_rwd_fix_leftarm_B.TorqueFF[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[3] = 0.0;

    /* '<S311>:1:604' */
    vmr_rwd_fix_leftarm_B.TorqueFB[0] = delta + M2;
    vmr_rwd_fix_leftarm_B.TorqueFB[1] = M2;
    vmr_rwd_fix_leftarm_B.TorqueFB[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[3] = 0.0;
  } else {
    /* '<S311>:1:606' */
    vmr_rwd_fix_leftarm_B.TorqueFF[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[2] = y2_anterior + x2;
    vmr_rwd_fix_leftarm_B.TorqueFF[3] = x2;

    /* '<S311>:1:607' */
    vmr_rwd_fix_leftarm_B.TorqueFB[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[2] = delta + M2;
    vmr_rwd_fix_leftarm_B.TorqueFB[3] = M2;
  }

  if (orientation == 2.0) {
    /* '<S311>:1:609' */
    /* if left-handed... */
    /* '<S311>:1:610' */
    vmr_rwd_fix_leftarm_B.TorqueFF[0] = -vmr_rwd_fix_leftarm_B.TorqueFF[0];
    vmr_rwd_fix_leftarm_B.TorqueFF[1] = -vmr_rwd_fix_leftarm_B.TorqueFF[1];
    vmr_rwd_fix_leftarm_B.TorqueFF[2] = -vmr_rwd_fix_leftarm_B.TorqueFF[2];
    vmr_rwd_fix_leftarm_B.TorqueFF[3] = -vmr_rwd_fix_leftarm_B.TorqueFF[3];

    /* '<S311>:1:611' */
    vmr_rwd_fix_leftarm_B.TorqueFB[0] = -vmr_rwd_fix_leftarm_B.TorqueFB[0];
    vmr_rwd_fix_leftarm_B.TorqueFB[1] = -vmr_rwd_fix_leftarm_B.TorqueFB[1];
    vmr_rwd_fix_leftarm_B.TorqueFB[2] = -vmr_rwd_fix_leftarm_B.TorqueFB[2];
    vmr_rwd_fix_leftarm_B.TorqueFB[3] = -vmr_rwd_fix_leftarm_B.TorqueFB[3];
  }

  /* MATLAB Function: '<S322>/arm switch' incorporates:
   *  Constant: '<S308>/use dominant hand'
   */
  /* MATLAB Function 'KINARM_Exo_Position_Controller/KINARM filter/get robot info/arm switch': '<S323>:1' */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_use_dom_hand == 1.0)
  {
    /* '<S323>:1:4' */
    /* '<S323>:1:5' */
    vmr_rwd_fix_leftarm_B.armIdx = vmr_rwd_fix_leftarm_B.active_arm;
  } else {
    /* '<S323>:1:7' */
    vmr_rwd_fix_leftarm_B.armIdx = 3.0 - vmr_rwd_fix_leftarm_B.active_arm;
  }

  /* End of MATLAB Function: '<S322>/arm switch' */

  /* Switch: '<S322>/Switch' */
  if (vmr_rwd_fix_leftarm_B.armIdx >= vmr_rwd_fix_leftarm_P.Switch_1_Threshold)
  {
    vmr_rwd_fix_leftarm_B.isEP = vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP;
  } else {
    vmr_rwd_fix_leftarm_B.isEP = vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP;
  }

  /* End of Switch: '<S322>/Switch' */

  /* Switch: '<S322>/Switch' */
  if (vmr_rwd_fix_leftarm_B.armIdx >= vmr_rwd_fix_leftarm_P.Switch_2_Threshold)
  {
    vmr_rwd_fix_leftarm_B.isHumanExo =
      vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isHumanEXO;
  } else {
    vmr_rwd_fix_leftarm_B.isHumanExo =
      vmr_rwd_fix_leftarm_B.sf_decoderobot.isHumanEXO;
  }

  /* End of Switch: '<S322>/Switch' */

  /* Switch: '<S322>/Switch' */
  if (vmr_rwd_fix_leftarm_B.armIdx >= vmr_rwd_fix_leftarm_P.Switch_3_Threshold)
  {
    vmr_rwd_fix_leftarm_B.isUTSExo =
      vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO;
  } else {
    vmr_rwd_fix_leftarm_B.isUTSExo =
      vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO;
  }

  /* End of Switch: '<S322>/Switch' */

  /* Switch: '<S322>/Switch' */
  if (vmr_rwd_fix_leftarm_B.armIdx >= vmr_rwd_fix_leftarm_P.Switch_4_Threshold)
  {
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc =
      vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;
  } else {
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc =
      vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;
  }

  /* End of Switch: '<S322>/Switch' */

  /* MATLAB Function: '<S313>/consts' incorporates:
   *  Constant: '<S313>/Constant'
   */
  /* MATLAB Function 'KINARM_Exo_Position_Controller/KINARM filter/consts': '<S320>:1' */
  /* These filter constants are from: http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
  /*  [GAIN, POLE1, POLE2] */
  /* butterworth 2nd order, 2Khz, 50Hz cutoff */
  /* '<S320>:1:5' */
  /* butterworth 2nd order, 4Khz, 50Hz cutoff */
  /* butterworth 2nd order, 2Khz, 40Hz cutoff */
  /* '<S320>:1:9' */
  /* butterworth 2nd order, 4Khz, 40Hz cutoff */
  /* butterworth 2nd order, 2Khz, 10Hz cutoff */
  /* '<S320>:1:13' */
  /* butterworth 2nd order, 4Khz, 10Hz cutoff */
  /* swtich between the 2Khz and 4Khz filters */
  /* '<S320>:1:19' */
  iy = 0;

  /* 2KHz filter version */
  if (vmr_rwd_fix_leftarm_P.Constant_Value_n == 0.00025) {
    /* '<S320>:1:20' */
    /* '<S320>:1:21' */
    iy = 1;

    /* 4KHz filter version */
  }

  if (vmr_rwd_fix_leftarm_B.isEP != 0.0) {
    /* '<S320>:1:25' */
    vmr_rwd_fix_leftarm_B.constants[0] = FILTER_50Hz[iy];
    vmr_rwd_fix_leftarm_B.constants[1] = FILTER_50Hz[iy + 2];
    vmr_rwd_fix_leftarm_B.constants[2] = FILTER_50Hz[iy + 4];
  } else if (vmr_rwd_fix_leftarm_B.isHumanExo != 0.0) {
    if (vmr_rwd_fix_leftarm_B.isUTSExo != 0.0) {
      /* '<S320>:1:29' */
      vmr_rwd_fix_leftarm_B.constants[0] = FILTER_40Hz[iy];
      vmr_rwd_fix_leftarm_B.constants[1] = FILTER_40Hz[iy + 2];
      vmr_rwd_fix_leftarm_B.constants[2] = FILTER_40Hz[iy + 4];
    } else {
      /* '<S320>:1:31' */
      vmr_rwd_fix_leftarm_B.constants[0] = FILTER_10Hz[iy];
      vmr_rwd_fix_leftarm_B.constants[1] = FILTER_10Hz[iy + 2];
      vmr_rwd_fix_leftarm_B.constants[2] = FILTER_10Hz[iy + 4];
    }
  } else {
    /* NHP EXO */
    if ((vmr_rwd_fix_leftarm_B.isUTSExo != 0.0) ||
        (vmr_rwd_fix_leftarm_B.HasSecondaryEnc != 0.0)) {
      /* '<S320>:1:35' */
      vmr_rwd_fix_leftarm_B.constants[0] = FILTER_50Hz[iy];
      vmr_rwd_fix_leftarm_B.constants[1] = FILTER_50Hz[iy + 2];
      vmr_rwd_fix_leftarm_B.constants[2] = FILTER_50Hz[iy + 4];
    } else {
      /* '<S320>:1:37' */
      vmr_rwd_fix_leftarm_B.constants[0] = FILTER_10Hz[iy];
      vmr_rwd_fix_leftarm_B.constants[1] = FILTER_10Hz[iy + 2];
      vmr_rwd_fix_leftarm_B.constants[2] = FILTER_10Hz[iy + 4];
    }
  }

  /* End of MATLAB Function: '<S313>/consts' */

  /* MATLAB Function: '<S313>/filter' */
  /* MATLAB Function 'KINARM_Exo_Position_Controller/KINARM filter/filter': '<S321>:1' */
  /* given any number of input values this will filter those values based */
  /* on a 2nd order Butterworth filter. You will need to get the constants */
  /* from http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
  /* '<S321>:1:14' */
  vmr_rwd_fix_leftarm_B.filteredVals[0] = 0.0;
  vmr_rwd_fix_leftarm_B.filteredVals[1] = 0.0;
  vmr_rwd_fix_leftarm_B.filteredVals[2] = 0.0;
  vmr_rwd_fix_leftarm_B.filteredVals[3] = 0.0;

  /* this code is roughly derrived from the example code given when you */
  /* generate filter constants at: http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
  /* '<S321>:1:18' */
  for (iy = 0; iy < 4; iy++) {
    /* '<S321>:1:18' */
    /* '<S321>:1:19' */
    /* '<S321>:1:20' */
    /* '<S321>:1:40' */
    /* '<S321>:1:41' */
    M2 = vmr_rwd_fix_leftarm_DW.rawVelocities[4 + iy];

    /* '<S321>:1:42' */
    delta = vmr_rwd_fix_leftarm_DW.rawVelocities[8 + iy];

    /* '<S321>:1:43' */
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.TorqueFB[iy] /
      vmr_rwd_fix_leftarm_B.constants[0];
    vmr_rwd_fix_leftarm_DW.rawVelocities[iy] = M2;
    vmr_rwd_fix_leftarm_DW.rawVelocities[iy + 4] = delta;
    vmr_rwd_fix_leftarm_DW.rawVelocities[iy + 8] = tgt_vec_idx_0;

    /* '<S321>:1:21' */
    /* '<S321>:1:40' */
    /* '<S321>:1:41' */
    M2 = vmr_rwd_fix_leftarm_DW.filtVelocities[4 + iy];

    /* '<S321>:1:42' */
    delta = vmr_rwd_fix_leftarm_DW.filtVelocities[8 + iy];

    /* '<S321>:1:43' */
    vmr_rwd_fix_leftarm_DW.filtVelocities[iy] = M2;
    vmr_rwd_fix_leftarm_DW.filtVelocities[iy + 4] = delta;
    vmr_rwd_fix_leftarm_DW.filtVelocities[iy + 8] = 0.0;

    /* '<S321>:1:22' */
    /* all filter constants from http://www-users.cs.york.ac.uk/~fisher/mkfilter/trad.html */
    /* '<S321>:1:29' */
    hold_steps = (((vmr_rwd_fix_leftarm_DW.rawVelocities[4 + iy] * 2.0 +
                    vmr_rwd_fix_leftarm_DW.rawVelocities[iy]) +
                   vmr_rwd_fix_leftarm_DW.rawVelocities[8 + iy]) +
                  vmr_rwd_fix_leftarm_DW.filtVelocities[iy] *
                  vmr_rwd_fix_leftarm_B.constants[1]) +
      vmr_rwd_fix_leftarm_DW.filtVelocities[4 + iy] *
      vmr_rwd_fix_leftarm_B.constants[2];
    if (rtIsNaN(hold_steps) || rtIsInf(hold_steps)) {
      /* '<S321>:1:36' */
      hold_steps = 0.0;
    }

    vmr_rwd_fix_leftarm_DW.filtVelocities[8 + iy] = hold_steps;

    /* '<S321>:1:23' */
    vmr_rwd_fix_leftarm_B.filteredVals[iy] =
      vmr_rwd_fix_leftarm_DW.filtVelocities[8 + iy];

    /* '<S321>:1:18' */
  }

  /* End of MATLAB Function: '<S313>/filter' */

  /* Sum: '<S308>/Sum' */
  vmr_rwd_fix_leftarm_B.Sum[0] = vmr_rwd_fix_leftarm_B.filteredVals[0] +
    vmr_rwd_fix_leftarm_B.TorqueFF[0];
  vmr_rwd_fix_leftarm_B.Sum[1] = vmr_rwd_fix_leftarm_B.filteredVals[1] +
    vmr_rwd_fix_leftarm_B.TorqueFF[1];
  vmr_rwd_fix_leftarm_B.Sum[2] = vmr_rwd_fix_leftarm_B.filteredVals[2] +
    vmr_rwd_fix_leftarm_B.TorqueFF[2];
  vmr_rwd_fix_leftarm_B.Sum[3] = vmr_rwd_fix_leftarm_B.filteredVals[3] +
    vmr_rwd_fix_leftarm_B.TorqueFF[3];

  /* Product: '<S22>/Product2' */
  vmr_rwd_fix_leftarm_B.Product2[0] = vmr_rwd_fix_leftarm_B.force_scale *
    vmr_rwd_fix_leftarm_B.Sum[0];
  vmr_rwd_fix_leftarm_B.Product2[1] = vmr_rwd_fix_leftarm_B.force_scale *
    vmr_rwd_fix_leftarm_B.Sum[1];
  vmr_rwd_fix_leftarm_B.Product2[2] = vmr_rwd_fix_leftarm_B.force_scale *
    vmr_rwd_fix_leftarm_B.Sum[2];
  vmr_rwd_fix_leftarm_B.Product2[3] = vmr_rwd_fix_leftarm_B.force_scale *
    vmr_rwd_fix_leftarm_B.Sum[3];

  /* MATLAB Function: '<S9>/Remove_NaNs_and_Inf1' */
  /* MATLAB Function 'KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf1': '<S284>:1' */
  /*  This function removes all infinite and NaN values from the input. */
  /* '<S284>:1:5' */
  vmr_rwd_fix_leftarm_B.out[0] = 0.0;
  vmr_rwd_fix_leftarm_B.out[1] = 0.0;
  vmr_rwd_fix_leftarm_B.out[2] = 0.0;
  vmr_rwd_fix_leftarm_B.out[3] = 0.0;

  /* default value of output */
  /* '<S284>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.Product2[0])) && (!rtIsNaN
       (vmr_rwd_fix_leftarm_B.Product2[0]))) {
    /* only pass the input to the output if it is finite */
    /* '<S284>:1:9' */
    vmr_rwd_fix_leftarm_B.out[0] = vmr_rwd_fix_leftarm_B.Product2[0];
  }

  /* '<S284>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.Product2[1])) && (!rtIsNaN
       (vmr_rwd_fix_leftarm_B.Product2[1]))) {
    /* only pass the input to the output if it is finite */
    /* '<S284>:1:9' */
    vmr_rwd_fix_leftarm_B.out[1] = vmr_rwd_fix_leftarm_B.Product2[1];
  }

  /* '<S284>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.Product2[2])) && (!rtIsNaN
       (vmr_rwd_fix_leftarm_B.Product2[2]))) {
    /* only pass the input to the output if it is finite */
    /* '<S284>:1:9' */
    vmr_rwd_fix_leftarm_B.out[2] = vmr_rwd_fix_leftarm_B.Product2[2];
  }

  /* '<S284>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.Product2[3])) && (!rtIsNaN
       (vmr_rwd_fix_leftarm_B.Product2[3]))) {
    /* only pass the input to the output if it is finite */
    /* '<S284>:1:9' */
    vmr_rwd_fix_leftarm_B.out[3] = vmr_rwd_fix_leftarm_B.Product2[3];
  }

  /* End of MATLAB Function: '<S9>/Remove_NaNs_and_Inf1' */

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Torque Limit'
   *  Constant: '<S9>/Torque Limit1'
   *  Constant: '<S9>/Torque Limit2'
   */
  /* '<S284>:1:7' */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_limit_motors >=
      vmr_rwd_fix_leftarm_P.Switch_Threshold_h) {
    vmr_rwd_fix_leftarm_B.Switch_i = vmr_rwd_fix_leftarm_P.TorqueLimit2_Value;
  } else {
    vmr_rwd_fix_leftarm_B.Switch_i =
      vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_max_torque;
  }

  /* End of Switch: '<S9>/Switch' */

  /* MATLAB Function: '<S9>/Torque_Cap' */
  /* MATLAB Function 'KINARM_Exo_Apply_Loads/Torque_Cap': '<S285>:1' */
  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details. */
  if (vmr_rwd_fix_leftarm_B.Switch_i == -1.0) {
    /* '<S285>:1:5' */
    /* '<S285>:1:6' */
    vmr_rwd_fix_leftarm_B.y[0] = vmr_rwd_fix_leftarm_B.out[0];
    vmr_rwd_fix_leftarm_B.y[1] = vmr_rwd_fix_leftarm_B.out[1];
    vmr_rwd_fix_leftarm_B.y[2] = vmr_rwd_fix_leftarm_B.out[2];
    vmr_rwd_fix_leftarm_B.y[3] = vmr_rwd_fix_leftarm_B.out[3];
  } else {
    /* '<S285>:1:10' */
    vmr_rwd_fix_leftarm_B.y[0] = 0.0;
    vmr_rwd_fix_leftarm_B.y[1] = 0.0;
    vmr_rwd_fix_leftarm_B.y[2] = 0.0;
    vmr_rwd_fix_leftarm_B.y[3] = 0.0;

    /* '<S285>:1:11' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.out[0];
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_1 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = tgt_vec_idx_1;
    }

    M2 = -vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_0 >= M2) || rtIsNaN(M2)) {
      M2 = tgt_vec_idx_0;
    }

    vmr_rwd_fix_leftarm_B.y[0] = M2;

    /* '<S285>:1:12' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.out[1];
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_1 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = tgt_vec_idx_1;
    }

    M2 = -vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_0 >= M2) || rtIsNaN(M2)) {
      M2 = tgt_vec_idx_0;
    }

    vmr_rwd_fix_leftarm_B.y[1] = M2;

    /* '<S285>:1:13' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.out[2];
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_1 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = tgt_vec_idx_1;
    }

    M2 = -vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_0 >= M2) || rtIsNaN(M2)) {
      M2 = tgt_vec_idx_0;
    }

    vmr_rwd_fix_leftarm_B.y[2] = M2;

    /* '<S285>:1:14' */
    tgt_vec_idx_1 = vmr_rwd_fix_leftarm_B.out[3];
    tgt_vec_idx_0 = vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_1 <= tgt_vec_idx_0) || rtIsNaN(tgt_vec_idx_0)) {
      tgt_vec_idx_0 = tgt_vec_idx_1;
    }

    M2 = -vmr_rwd_fix_leftarm_B.Switch_i;
    if ((tgt_vec_idx_0 >= M2) || rtIsNaN(M2)) {
      M2 = tgt_vec_idx_0;
    }

    vmr_rwd_fix_leftarm_B.y[3] = M2;
  }

  /* End of MATLAB Function: '<S9>/Torque_Cap' */

  /* Constant: '<S9>/up_duration(ms)' */
  vmr_rwd_fix_leftarm_B.up_durationms =
    vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_up_duration;

  /* Constant: '<S9>/down_duration(ms)' */
  vmr_rwd_fix_leftarm_B.down_durationms =
    vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_down_duration;

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion_a = vmr_rwd_fix_leftarm_B.robottype_e;

  /* Chart: '<S9>/Ramp_Up_Down' */
  vmr_rwd_fix_leftarm_Ramp_Up_Down(vmr_rwd_fix_leftarm_B.Convert17,
    vmr_rwd_fix_leftarm_B.motor_status_c, vmr_rwd_fix_leftarm_B.Convert16,
    vmr_rwd_fix_leftarm_B.up_durationms, vmr_rwd_fix_leftarm_B.down_durationms,
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a,
    &vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down,
    &vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down,
    &vmr_rwd_fix_leftarm_PrevZCX.sf_Ramp_Up_Down);

  /* Product: '<S9>/Product' */
  vmr_rwd_fix_leftarm_B.Product[0] = vmr_rwd_fix_leftarm_B.y[0] *
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down.scaling;
  vmr_rwd_fix_leftarm_B.Product[1] = vmr_rwd_fix_leftarm_B.y[1] *
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down.scaling;

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  vmr_rwd_fix_leftarm_B.DataTypeConversion1 = vmr_rwd_fix_leftarm_B.robottype_cs;

  /* Chart: '<S9>/Ramp_Up_Down1' */
  vmr_rwd_fix_leftarm_Ramp_Up_Down(vmr_rwd_fix_leftarm_B.Convert17,
    vmr_rwd_fix_leftarm_B.motor_status, vmr_rwd_fix_leftarm_B.Convert16,
    vmr_rwd_fix_leftarm_B.up_durationms, vmr_rwd_fix_leftarm_B.down_durationms,
    vmr_rwd_fix_leftarm_B.DataTypeConversion1,
    &vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1,
    &vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down1,
    &vmr_rwd_fix_leftarm_PrevZCX.sf_Ramp_Up_Down1);

  /* Product: '<S9>/Product1' */
  vmr_rwd_fix_leftarm_B.Product1[0] = vmr_rwd_fix_leftarm_B.y[2] *
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1.scaling;
  vmr_rwd_fix_leftarm_B.Product1[1] = vmr_rwd_fix_leftarm_B.y[3] *
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1.scaling;

  /* SignalConversion: '<S283>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S9>/Remove_NaNs_and_Inf'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[0] =
    vmr_rwd_fix_leftarm_B.Product[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[1] =
    vmr_rwd_fix_leftarm_B.Product[1];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[2] =
    vmr_rwd_fix_leftarm_B.Product1[0];
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[3] =
    vmr_rwd_fix_leftarm_B.Product1[1];

  /* MATLAB Function: '<S9>/Remove_NaNs_and_Inf' */
  /* MATLAB Function 'KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf': '<S283>:1' */
  /*  This function removes all infinite and NaN values from the input. */
  /* '<S283>:1:5' */
  vmr_rwd_fix_leftarm_B.out_e[0] = 0.0;
  vmr_rwd_fix_leftarm_B.out_e[1] = 0.0;
  vmr_rwd_fix_leftarm_B.out_e[2] = 0.0;
  vmr_rwd_fix_leftarm_B.out_e[3] = 0.0;

  /* default value of output */
  /* '<S283>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[0]))
      && (!rtIsNaN(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[0])))
  {
    /* only pass the input to the output if it is finite */
    /* '<S283>:1:9' */
    vmr_rwd_fix_leftarm_B.out_e[0] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[0];
  }

  /* '<S283>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[1]))
      && (!rtIsNaN(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[1])))
  {
    /* only pass the input to the output if it is finite */
    /* '<S283>:1:9' */
    vmr_rwd_fix_leftarm_B.out_e[1] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[1];
  }

  /* '<S283>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[2]))
      && (!rtIsNaN(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[2])))
  {
    /* only pass the input to the output if it is finite */
    /* '<S283>:1:9' */
    vmr_rwd_fix_leftarm_B.out_e[2] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[2];
  }

  /* '<S283>:1:7' */
  if ((!rtIsInf(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[3]))
      && (!rtIsNaN(vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[3])))
  {
    /* only pass the input to the output if it is finite */
    /* '<S283>:1:9' */
    vmr_rwd_fix_leftarm_B.out_e[3] =
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[3];
  }

  /* Switch: '<S286>/Switch1' incorporates:
   *  Constant: '<S286>/Torque Limit3'
   *  Constant: '<S286>/Torque Limit4'
   *  Constant: '<S286>/Torque Limit5'
   */
  /* '<S283>:1:7' */
  if (vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_limit_motors >=
      vmr_rwd_fix_leftarm_P.Switch1_Threshold_nq) {
    vmr_rwd_fix_leftarm_B.Switch1 =
      vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_max_torque;
  } else {
    vmr_rwd_fix_leftarm_B.Switch1 = vmr_rwd_fix_leftarm_P.TorqueLimit5_Value;
  }

  /* End of Switch: '<S286>/Switch1' */

  /* SignalConversion: '<S287>/TmpSignal ConversionAt SFunction Inport3' incorporates:
   *  MATLAB Function: '<S286>/clip_motor_torque'
   */
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[0] =
    vmr_rwd_fix_leftarm_B.ArmOrientation_b;
  vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[1] =
    vmr_rwd_fix_leftarm_B.ArmOrientation_l;

  /* MATLAB Function: '<S286>/clip_motor_torque' */
  /* MATLAB Function 'KINARM_Exo_Apply_Loads/clip motor torques/clip_motor_torque': '<S287>:1' */
  /* '<S287>:1:2' */
  vmr_rwd_fix_leftarm_B.clipped_torques[0] = vmr_rwd_fix_leftarm_B.out_e[0];
  vmr_rwd_fix_leftarm_B.clipped_torques[1] = vmr_rwd_fix_leftarm_B.out_e[1];
  vmr_rwd_fix_leftarm_B.clipped_torques[2] = vmr_rwd_fix_leftarm_B.out_e[2];
  vmr_rwd_fix_leftarm_B.clipped_torques[3] = vmr_rwd_fix_leftarm_B.out_e[3];
  if (vmr_rwd_fix_leftarm_B.Switch1 >= 0.0) {
    /* '<S287>:1:4' */
    /* '<S287>:1:5' */
    vmr_rwd_fix_leftarm_update_torques(*(real_T (*)[2])&
      vmr_rwd_fix_leftarm_B.out_e[0], vmr_rwd_fix_leftarm_B.Switch1,
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[0], *(real_T
      (*)[2])&vmr_rwd_fix_leftarm_B.clipped_torques[0]);

    /* '<S287>:1:6' */
    vmr_rwd_fix_leftarm_update_torques(*(real_T (*)[2])&
      vmr_rwd_fix_leftarm_B.out_e[2], vmr_rwd_fix_leftarm_B.Switch1,
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[1], *(real_T
      (*)[2])&vmr_rwd_fix_leftarm_B.clipped_torques[2]);
  }

  /* Sum: '<S2>/AddTorques' incorporates:
   *  Constant: '<S2>/ZeroEPTorque'
   */
  vmr_rwd_fix_leftarm_B.AddTorques[0] = vmr_rwd_fix_leftarm_B.clipped_torques[0]
    + vmr_rwd_fix_leftarm_P.ZeroEPTorque_Value[0];
  vmr_rwd_fix_leftarm_B.AddTorques[1] = vmr_rwd_fix_leftarm_B.clipped_torques[1]
    + vmr_rwd_fix_leftarm_P.ZeroEPTorque_Value[1];
  vmr_rwd_fix_leftarm_B.AddTorques[2] = vmr_rwd_fix_leftarm_B.clipped_torques[2]
    + vmr_rwd_fix_leftarm_P.ZeroEPTorque_Value[2];
  vmr_rwd_fix_leftarm_B.AddTorques[3] = vmr_rwd_fix_leftarm_B.clipped_torques[3]
    + vmr_rwd_fix_leftarm_P.ZeroEPTorque_Value[3];

  /* Memory: '<S2>/Memory1' */
  vmr_rwd_fix_leftarm_B.Memory1_p =
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_i;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.ArmOrientation =
    vmr_rwd_fix_leftarm_DW.Memory2_1_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M1orientation =
    vmr_rwd_fix_leftarm_DW.Memory2_2_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M2Orientation =
    vmr_rwd_fix_leftarm_DW.Memory2_3_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M1GearRatio =
    vmr_rwd_fix_leftarm_DW.Memory2_4_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M2GearRatio =
    vmr_rwd_fix_leftarm_DW.Memory2_5_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.torqueconstant =
    vmr_rwd_fix_leftarm_DW.Memory2_9_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.ArmOrientation_c =
    vmr_rwd_fix_leftarm_DW.Memory2_18_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M1orientation_f =
    vmr_rwd_fix_leftarm_DW.Memory2_19_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M2Orientation_c =
    vmr_rwd_fix_leftarm_DW.Memory2_20_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M1GearRatio_h =
    vmr_rwd_fix_leftarm_DW.Memory2_21_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.M2GearRatio_d =
    vmr_rwd_fix_leftarm_DW.Memory2_22_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.torqueconstant_m =
    vmr_rwd_fix_leftarm_DW.Memory2_26_PreviousInput;

  /* Outputs for Atomic SubSystem: '<S2>/apply loads' */
  vmr_rwd_fix_leftarm_applyloads();

  /* End of Outputs for SubSystem: '<S2>/apply loads' */

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isEP_o = vmr_rwd_fix_leftarm_DW.Memory2_10_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isHumanExo_f =
    vmr_rwd_fix_leftarm_DW.Memory2_11_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isNHPExo =
    vmr_rwd_fix_leftarm_DW.Memory2_12_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isClassicExo =
    vmr_rwd_fix_leftarm_DW.Memory2_13_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isUTSExo_o =
    vmr_rwd_fix_leftarm_DW.Memory2_14_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isPMAC = vmr_rwd_fix_leftarm_DW.Memory2_15_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isECAT = vmr_rwd_fix_leftarm_DW.Memory2_16_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robotRevision =
    vmr_rwd_fix_leftarm_DW.Memory2_17_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.HasSecondaryEnc_a =
    vmr_rwd_fix_leftarm_DW.Memory2_23_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robottype =
    vmr_rwd_fix_leftarm_DW.Memory2_24_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robotversion =
    vmr_rwd_fix_leftarm_DW.Memory2_25_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isEP_k = vmr_rwd_fix_leftarm_DW.Memory2_27_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isHumanExo_p =
    vmr_rwd_fix_leftarm_DW.Memory2_28_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isNHPExo_n =
    vmr_rwd_fix_leftarm_DW.Memory2_29_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isClassicExo_g =
    vmr_rwd_fix_leftarm_DW.Memory2_30_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isUTSExo_o3 =
    vmr_rwd_fix_leftarm_DW.Memory2_31_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isPMAC_n =
    vmr_rwd_fix_leftarm_DW.Memory2_32_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.isECAT_b =
    vmr_rwd_fix_leftarm_DW.Memory2_33_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robotRevision_k =
    vmr_rwd_fix_leftarm_DW.Memory2_34_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.HasSecondaryEnc_d =
    vmr_rwd_fix_leftarm_DW.Memory2_6_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robottype_c =
    vmr_rwd_fix_leftarm_DW.Memory2_7_PreviousInput;

  /* Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_B.robotversion_i =
    vmr_rwd_fix_leftarm_DW.Memory2_8_PreviousInput;

  /* DataStoreRead: '<S2>/read status' */
  memcpy(&vmr_rwd_fix_leftarm_B.readstatus[0],
         &vmr_rwd_fix_leftarm_DW.ECATStatus[0], sizeof(real_T) << 3U);

  /* DataStoreRead: '<S2>/read Digital diag' */
  vmr_rwd_fix_leftarm_B.readDigitaldiag[0] =
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[0];
  vmr_rwd_fix_leftarm_B.readDigitaldiag[1] =
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[1];
  vmr_rwd_fix_leftarm_B.readDigitaldiag[2] =
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[2];
  vmr_rwd_fix_leftarm_B.readDigitaldiag[3] =
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[3];

  /* MATLAB Function: '<S258>/MATLAB Function' */
  vmr_rwd_fix_leftarm_MATLABFunction(vmr_rwd_fix_leftarm_B.ArmOrientation_b,
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n,
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP,
    &vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o);

  /* MATLAB Function: '<S258>/MATLAB Function1' */
  vmr_rwd_fix_leftarm_MATLABFunction(vmr_rwd_fix_leftarm_B.ArmOrientation_l,
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f,
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP,
    &vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m);

  /* Constant: '<S38>/arm_count' */
  vmr_rwd_fix_leftarm_B.robot_count = vmr_rwd_fix_leftarm_P.arm_count_Value;

  /* Constant: '<S38>/fp1_present' */
  vmr_rwd_fix_leftarm_B.has_force_plate_1 =
    vmr_rwd_fix_leftarm_P.fp1_present_Value;

  /* Constant: '<S38>/fp2_present' */
  vmr_rwd_fix_leftarm_B.has_force_plate_2 =
    vmr_rwd_fix_leftarm_P.fp2_present_Value;

  /* Constant: '<S38>/gaze_tracker_present' */
  vmr_rwd_fix_leftarm_B.has_gaze_tracker =
    vmr_rwd_fix_leftarm_P.gaze_tracker_present_Value;

  /* Constant: '<S38>/robot_lift_present' */
  vmr_rwd_fix_leftarm_B.has_robot_lift =
    vmr_rwd_fix_leftarm_P.robot_lift_present_Value;

  /* MATLAB Function: '<S300>/MATLAB Function' incorporates:
   *  Constant: '<S13>/Constant'
   */
  hold_steps = vmr_rwd_fix_leftarm_P.Process_Video_CMD_video_delay;

  /* MATLAB Function 'Process_Video_CMD/Add_requested_Delay/MATLAB Function': '<S303>:1' */
  /* '<S303>:1:4' */
  opacity = vmr_rwd_fix_leftarm_B.handFF_Dex * 1000.0;
  if (vmr_rwd_fix_leftarm_P.Process_Video_CMD_video_delay < opacity) {
    /* '<S303>:1:6' */
    /* '<S303>:1:7' */
    hold_steps = opacity;
  }

  /* '<S303>:1:10' */
  vmr_rwd_fix_leftarm_B.delay = hold_steps - opacity;
  if (vmr_rwd_fix_leftarm_B.delay < 0.0) {
    /* '<S303>:1:12' */
    /* '<S303>:1:13' */
    vmr_rwd_fix_leftarm_B.delay = 0.0;
  } else {
    if (vmr_rwd_fix_leftarm_B.delay > 50.0) {
      /* '<S303>:1:14' */
      /* '<S303>:1:15' */
      vmr_rwd_fix_leftarm_B.delay = 50.0;
    }
  }

  /* End of MATLAB Function: '<S300>/MATLAB Function' */

  /* RateTransition: '<S300>/Rate Transition1' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_4) {
    vmr_rwd_fix_leftarm_B.RateTransition1_d = vmr_rwd_fix_leftarm_B.delay;
  }

  /* End of RateTransition: '<S300>/Rate Transition1' */
  /* ok to acquire for <S14>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S15>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_a.AcquireOK = 1;

  /* ok to acquire for <S16>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_m.AcquireOK = 1;

  /* ok to acquire for <S17>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_mo.AcquireOK = 1;

  /* ok to acquire for <S18>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* ok to acquire for <S19>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* SignalConversion: '<Root>/ConcatBufferAtVector ConcatenateIn2' */
  vmr_rwd_fix_leftarm_B.VectorConcatenate[1] =
    vmr_rwd_fix_leftarm_B.virtual_pos[0];
  vmr_rwd_fix_leftarm_B.VectorConcatenate[2] =
    vmr_rwd_fix_leftarm_B.virtual_pos[1];

  /* SignalConversion: '<Root>/ConcatBufferAtVector ConcatenateIn3' */
  vmr_rwd_fix_leftarm_B.VectorConcatenate[3] = vmr_rwd_fix_leftarm_B.VCODE_o[2];
  vmr_rwd_fix_leftarm_B.VectorConcatenate[4] = vmr_rwd_fix_leftarm_B.VCODE_o[3];

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  vmr_rwd_fix_leftarm_B.VectorConcatenate[0] =
    vmr_rwd_fix_leftarm_B.robot_enable_controller;

  /* Selector: '<S10>/Hand_Pos' */
  for (i_0 = 0; i_0 < 2; i_0++) {
    vmr_rwd_fix_leftarm_B.Hand_Pos_j[3 * i_0] =
      vmr_rwd_fix_leftarm_B.kinarm_data[(22 + i_0) * 3];
    vmr_rwd_fix_leftarm_B.Hand_Pos_j[1 + 3 * i_0] =
      vmr_rwd_fix_leftarm_B.kinarm_data[(22 + i_0) * 3 + 1];
    vmr_rwd_fix_leftarm_B.Hand_Pos_j[2 + 3 * i_0] =
      vmr_rwd_fix_leftarm_B.kinarm_data[(22 + i_0) * 3 + 2];
  }

  /* End of Selector: '<S10>/Hand_Pos' */

  /* MultiPortSwitch: '<S10>/Multiport Switch' */
  if ((int32_T)vmr_rwd_fix_leftarm_B.hand == 1) {
    /* Selector: '<S10>/Arm1' */
    vmr_rwd_fix_leftarm_B.Arm1[0] = vmr_rwd_fix_leftarm_B.Hand_Pos_j[0];
    vmr_rwd_fix_leftarm_B.Arm1[1] = vmr_rwd_fix_leftarm_B.Hand_Pos_j[3];
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[0] = vmr_rwd_fix_leftarm_B.Arm1[0];
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[1] = vmr_rwd_fix_leftarm_B.Arm1[1];
  } else {
    /* Selector: '<S10>/Arm2' */
    vmr_rwd_fix_leftarm_B.Arm2[0] = vmr_rwd_fix_leftarm_B.Hand_Pos_j[1];
    vmr_rwd_fix_leftarm_B.Arm2[1] = vmr_rwd_fix_leftarm_B.Hand_Pos_j[4];
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[0] = vmr_rwd_fix_leftarm_B.Arm2[0];
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[1] = vmr_rwd_fix_leftarm_B.Arm2[1];
  }

  /* End of MultiPortSwitch: '<S10>/Multiport Switch' */

  /* MATLAB Function: '<S12>/Play sound over and over' incorporates:
   *  Constant: '<S298>/Constant1'
   *  Constant: '<S299>/Constant1'
   */
  /* MATLAB Function 'Play Sound/Play sound over and over': '<S296>:1' */
  /* '<S296>:1:8' */
  zcEvent_idx_0 = (vmr_rwd_fix_leftarm_DW.last_tone_state !=
                   vmr_rwd_fix_leftarm_B.tone);
  if ((int32_T)zcEvent_idx_0 > 0) {
    /* '<S296>:1:9' */
    /* '<S296>:1:10' */
    vmr_rwd_fix_leftarm_DW.last_tone_state = vmr_rwd_fix_leftarm_B.tone;
  }

  /* '<S296>:1:13' */
  vmr_rwd_fix_leftarm_B.soundON = 0.0;

  /* '<S296>:1:14' */
  vmr_rwd_fix_leftarm_B.output = 0.0;

  /*  default */
  if ((vmr_rwd_fix_leftarm_DW.t == 0.0) && ((int32_T)zcEvent_idx_0 > 0)) {
    /* '<S296>:1:15' */
    /*  start the playing of the sound. */
    /* '<S296>:1:17' */
    vmr_rwd_fix_leftarm_DW.t = 1.0;

    /* '<S296>:1:18' */
    vmr_rwd_fix_leftarm_B.soundON = 1.0;
  }

  if (vmr_rwd_fix_leftarm_B.tone == 1.0) {
    /* '<S296>:1:21' */
    /* '<S296>:1:22' */
    i = 3781;
    memcpy(&vmr_rwd_fix_leftarm_B.data_data[0],
           &vmr_rwd_fix_leftarm_P.Constant1_Value_i[0], 3781U * sizeof(real_T));
  } else if (vmr_rwd_fix_leftarm_B.tone == 2.0) {
    /* '<S296>:1:23' */
    /* '<S296>:1:24' */
    i = 400;
    memcpy(&vmr_rwd_fix_leftarm_B.data_data[0],
           &vmr_rwd_fix_leftarm_P.Constant1_Value_cs[0], 400U * sizeof(real_T));
  } else {
    /* '<S296>:1:26' */
    vmr_rwd_fix_leftarm_DW.t = 0.0;

    /* '<S296>:1:27' */
    i = 1;
    vmr_rwd_fix_leftarm_B.data_data[0] = 0.0;
  }

  if (vmr_rwd_fix_leftarm_DW.t > 0.0) {
    /* '<S296>:1:30' */
    /* '<S296>:1:31' */
    vmr_rwd_fix_leftarm_B.output = vmr_rwd_fix_leftarm_B.data_data[(int32_T)
      vmr_rwd_fix_leftarm_DW.t - 1];
    if (vmr_rwd_fix_leftarm_DW.t == i) {
      /* '<S296>:1:32' */
      /* '<S296>:1:33' */
      vmr_rwd_fix_leftarm_DW.t = 0.0;

      /* '<S296>:1:34' */
      vmr_rwd_fix_leftarm_B.soundON = 0.0;
    } else {
      /* '<S296>:1:36' */
      vmr_rwd_fix_leftarm_DW.t++;
    }
  }

  /* End of MATLAB Function: '<S12>/Play sound over and over' */

  /* Level2 S-Function Block: '<S12>/PCI-6229 DA' (danipcim) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[44];
    sfcnOutputs(rts, 0);
  }

  /* ok to acquire for <S297>/S-Function */
  vmr_rwd_fix_leftarm_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* Switch: '<S24>/Switch2' */
  if (vmr_rwd_fix_leftarm_B.Subtract > vmr_rwd_fix_leftarm_P.Switch2_Threshold)
  {
    vmr_rwd_fix_leftarm_B.Switch2[0] = vmr_rwd_fix_leftarm_B.CursorPos_p[0];
    vmr_rwd_fix_leftarm_B.Switch2[1] = vmr_rwd_fix_leftarm_B.CursorPos_p[1];
    vmr_rwd_fix_leftarm_B.Switch2[2] = vmr_rwd_fix_leftarm_B.CursorPos_p[2];
    vmr_rwd_fix_leftarm_B.Switch2[3] = vmr_rwd_fix_leftarm_B.CursorPos_p[3];
  } else {
    vmr_rwd_fix_leftarm_B.Switch2[0] = vmr_rwd_fix_leftarm_B.CursorPos[0];
    vmr_rwd_fix_leftarm_B.Switch2[1] = vmr_rwd_fix_leftarm_B.CursorPos[1];
    vmr_rwd_fix_leftarm_B.Switch2[2] = vmr_rwd_fix_leftarm_B.CursorPos[2];
    vmr_rwd_fix_leftarm_B.Switch2[3] = vmr_rwd_fix_leftarm_B.CursorPos[3];
  }

  /* End of Switch: '<S24>/Switch2' */

  /* Reshape: '<Root>/Reshape' */
  vmr_rwd_fix_leftarm_B.Reshape_k[0] = vmr_rwd_fix_leftarm_B.Switch2[0];
  vmr_rwd_fix_leftarm_B.Reshape_k[1] = vmr_rwd_fix_leftarm_B.Switch2[1];
  vmr_rwd_fix_leftarm_B.Reshape_k[2] = vmr_rwd_fix_leftarm_B.Switch2[2];
  vmr_rwd_fix_leftarm_B.Reshape_k[3] = vmr_rwd_fix_leftarm_B.Switch2[3];

  /* Selector: '<Root>/Selector2' */
  for (i_0 = 0; i_0 < 70; i_0++) {
    vmr_rwd_fix_leftarm_B.Selector2[i_0] = vmr_rwd_fix_leftarm_B.Switch[i_0 << 1];
  }

  /* End of Selector: '<Root>/Selector2' */

  /* RateTransition: '<S308>/Rate Transition5' */
  if (vmr_rwd_fix_leftarm_M->Timing.RateInteraction.TID1_3) {
    vmr_rwd_fix_leftarm_B.RateTransition5_o =
      vmr_rwd_fix_leftarm_B.reset_controller;

    /* RateTransition: '<S308>/Rate Transition3' incorporates:
     *  Constant: '<S308>/use dominant hand'
     */
    vmr_rwd_fix_leftarm_B.RateTransition3_h =
      vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_use_dom_hand;

    /* RateTransition: '<S308>/Rate Transition6' */
    memcpy(&vmr_rwd_fix_leftarm_B.RateTransition6_a[0],
           &vmr_rwd_fix_leftarm_B.kinarm_data[0], 150U * sizeof(real_T));

    /* RateTransition: '<S312>/TmpRTBAtconvert_to_segment_anglesInport3' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[0] =
      vmr_rwd_fix_leftarm_B.virtual_pos[0];
    vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[1] =
      vmr_rwd_fix_leftarm_B.virtual_pos[1];

    /* RateTransition: '<S312>/TmpRTBAtxy_to_segment_angles_EXOInport3' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[0] =
      vmr_rwd_fix_leftarm_B.virtual_pos[0];
    vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[1] =
      vmr_rwd_fix_leftarm_B.virtual_pos[1];
  }

  /* End of RateTransition: '<S308>/Rate Transition5' */

  /* Constant: '<Root>/Constant' */
  vmr_rwd_fix_leftarm_B.Constant = vmr_rwd_fix_leftarm_P.Constant_Value_i;

  /* Constant: '<S290>/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;' */
  vmr_rwd_fix_leftarm_B.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone =
    vmr_rwd_fix_leftarm_P.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone_Value;

  /* Constant: '<S290>/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;' */
  vmr_rwd_fix_leftarm_B.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon
    =
    vmr_rwd_fix_leftarm_P.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon;

  /* Constant: '<S290>/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;' */
  vmr_rwd_fix_leftarm_B.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio
    =
    vmr_rwd_fix_leftarm_P.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio;

  /* Constant: '<S290>/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;' */
  vmr_rwd_fix_leftarm_B.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar
    =
    vmr_rwd_fix_leftarm_P.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar;

  /* Constant: '<S290>/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;' */
  vmr_rwd_fix_leftarm_B.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali
    =
    vmr_rwd_fix_leftarm_P.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali;

  /* Constant: '<S290>/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;' */
  vmr_rwd_fix_leftarm_B.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec
    =
    vmr_rwd_fix_leftarm_P.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec;

  /* Constant: '<S290>/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;' */
  vmr_rwd_fix_leftarm_B.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf
    =
    vmr_rwd_fix_leftarm_P.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf;

  /* Constant: '<S290>/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;' */
  vmr_rwd_fix_leftarm_B.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald
    =
    vmr_rwd_fix_leftarm_P.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald;

  /* Constant: '<S290>/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;' */
  vmr_rwd_fix_leftarm_B.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri
    =
    vmr_rwd_fix_leftarm_P.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri;

  /* Constant: '<S290>/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;' */
  vmr_rwd_fix_leftarm_B.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun
    =
    vmr_rwd_fix_leftarm_P.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun;

  /* Constant: '<S290>/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;' */
  vmr_rwd_fix_leftarm_B.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri
    =
    vmr_rwd_fix_leftarm_P.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri;

  /* Constant: '<S290>/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;' */
  vmr_rwd_fix_leftarm_B.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt
    =
    vmr_rwd_fix_leftarm_P.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt;

  /* Constant: '<S291>/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;' */
  vmr_rwd_fix_leftarm_B.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc
    =
    vmr_rwd_fix_leftarm_P.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc;

  /* Constant: '<S292>/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone
    =
    vmr_rwd_fix_leftarm_P.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone_Value;

  /* Constant: '<S292>/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi
    =
    vmr_rwd_fix_leftarm_P.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi;

  /* Constant: '<S292>/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan
    =
    vmr_rwd_fix_leftarm_P.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan;

  /* Constant: '<S292>/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust
    =
    vmr_rwd_fix_leftarm_P.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust;

  /* Constant: '<S292>/E_REWARD;Reward_On;;Reward is given;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_REWARDReward_OnRewardisgivennone =
    vmr_rwd_fix_leftarm_P.E_REWARDReward_OnRewardisgivennone_Value;

  /* Constant: '<S292>/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone
    =
    vmr_rwd_fix_leftarm_P.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone_Value;

  /* Constant: '<S292>/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone =
    vmr_rwd_fix_leftarm_P.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone_Value;

  /* Constant: '<S292>/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust
    =
    vmr_rwd_fix_leftarm_P.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust;

  /* Constant: '<S292>/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;' */
  vmr_rwd_fix_leftarm_B.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre
    =
    vmr_rwd_fix_leftarm_P.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre;

  /* Constant: '<S293>/COLOR;Color;colour;Color;;;none;;' */
  vmr_rwd_fix_leftarm_B.COLORColorcolourColornone =
    vmr_rwd_fix_leftarm_P.COLORColorcolourColornone_Value;

  /* Constant: '<S293>/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;' */
  vmr_rwd_fix_leftarm_B.HITCOLORHitColorcolourColorwhenthetargetishitnone =
    vmr_rwd_fix_leftarm_P.HITCOLORHitColorcolourColorwhenthetargetishitnone_Value;

  /* Constant: '<S293>/LABEL;Label text;label;Default label text;;;none;;' */
  vmr_rwd_fix_leftarm_B.LABELLabeltextlabelDefaultlabeltextnone =
    vmr_rwd_fix_leftarm_P.LABELLabeltextlabelDefaultlabeltextnone_Value;

  /* Constant: '<S293>/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;' */
  vmr_rwd_fix_leftarm_B.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone =
    vmr_rwd_fix_leftarm_P.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone_Value;

  /* Constant: '<S293>/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;' */
  vmr_rwd_fix_leftarm_B.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone =
    vmr_rwd_fix_leftarm_P.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone_Value;

  /* Constant: '<S293>/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;' */
  vmr_rwd_fix_leftarm_B.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone
    =
    vmr_rwd_fix_leftarm_P.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone_;

  /* Constant: '<S293>/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;' */
  vmr_rwd_fix_leftarm_B.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone
    =
    vmr_rwd_fix_leftarm_P.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone_Value;

  /* Constant: '<S293>/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;' */
  vmr_rwd_fix_leftarm_B.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone
    =
    vmr_rwd_fix_leftarm_P.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone_Value;

  /* Constant: '<S293>/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;' */
  vmr_rwd_fix_leftarm_B.col_xXfloatXPositioncmofthetargetrelativetolocal00none =
    vmr_rwd_fix_leftarm_P.col_xXfloatXPositioncmofthetargetrelativetolocal00none_Value;

  /* Constant: '<S293>/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;' */
  vmr_rwd_fix_leftarm_B.col_yYfloatYPositioncmofthetargetrelativetolocal00none =
    vmr_rwd_fix_leftarm_P.col_yYfloatYPositioncmofthetargetrelativetolocal00none_Value;

  /* Constant: '<S293>/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;' */
  vmr_rwd_fix_leftarm_B.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone =
    vmr_rwd_fix_leftarm_P.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone_Value;

  /* Constant: '<S294>/INSTRUCTIONS=' */
  vmr_rwd_fix_leftarm_B.INSTRUCTIONS = vmr_rwd_fix_leftarm_P.INSTRUCTIONS_Value;

  /* Constant: '<S294>/LOAD_FOR=EITHER' */
  vmr_rwd_fix_leftarm_B.LOAD_FOREITHER =
    vmr_rwd_fix_leftarm_P.LOAD_FOREITHER_Value;

  /* Constant: '<S295>/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot
    =
    vmr_rwd_fix_leftarm_P.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot;

  /* Constant: '<S295>/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi
    =
    vmr_rwd_fix_leftarm_P.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi;

  /* Constant: '<S295>/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe
    =
    vmr_rwd_fix_leftarm_P.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe;

  /* Constant: '<S295>/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet
    =
    vmr_rwd_fix_leftarm_P.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet;

  /* Constant: '<S295>/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht
    =
    vmr_rwd_fix_leftarm_P.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht;

  /* Constant: '<S295>/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen
    =
    vmr_rwd_fix_leftarm_P.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen;

  /* Constant: '<S295>/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd
    =
    vmr_rwd_fix_leftarm_P.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd;

  /* Constant: '<S295>/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous
    =
    vmr_rwd_fix_leftarm_P.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous;

  /* Constant: '<S295>/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;' */
  vmr_rwd_fix_leftarm_B.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati
    =
    vmr_rwd_fix_leftarm_P.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati;

  /* Constant: '<S295>/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt
    =
    vmr_rwd_fix_leftarm_P.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt;

  /* Constant: '<S295>/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba
    =
    vmr_rwd_fix_leftarm_P.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba;

  /* Constant: '<S295>/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen
    =
    vmr_rwd_fix_leftarm_P.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen;

  /* Constant: '<S295>/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft
    =
    vmr_rwd_fix_leftarm_P.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft;

  /* Constant: '<S295>/K_UNUSED;Unused;integer;Not currently used;;;none;;' */
  vmr_rwd_fix_leftarm_B.K_UNUSEDUnusedintegerNotcurrentlyusednone =
    vmr_rwd_fix_leftarm_P.K_UNUSEDUnusedintegerNotcurrentlyusednone_Value;

  /* Constant: '<S295>/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;' */
  vmr_rwd_fix_leftarm_B.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw
    =
    vmr_rwd_fix_leftarm_P.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw;
}

/* Model update function for TID0 */
static void vmr_rwd_fix_leftarm_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* Update for Atomic SubSystem: '<S5>/Task Execution Control Subsystem' */
  vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Update();

  /* End of Update for SubSystem: '<S5>/Task Execution Control Subsystem' */

  /* Update for Memory: '<Root>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[0] =
    vmr_rwd_fix_leftarm_B.Switch2[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[1] =
    vmr_rwd_fix_leftarm_B.Switch2[1];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[2] =
    vmr_rwd_fix_leftarm_B.Switch2[2];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[3] =
    vmr_rwd_fix_leftarm_B.Switch2[3];

  /* Update for Memory: '<S2>/Memory' */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[0] =
    vmr_rwd_fix_leftarm_B.AddTorques[0];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[1] =
    vmr_rwd_fix_leftarm_B.AddTorques[1];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[2] =
    vmr_rwd_fix_leftarm_B.AddTorques[2];
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[3] =
    vmr_rwd_fix_leftarm_B.AddTorques[3];

  /* Update for Memory: '<S13>/Memory' incorporates:
   *  Constant: '<S13>/Constant'
   */
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_a =
    vmr_rwd_fix_leftarm_P.Process_Video_CMD_video_delay;

  /* Update for Atomic SubSystem: '<S2>/Poll KINARM' */
  vmr_rwd_fix_leftarm_PollKINARM_Update();

  /* End of Update for SubSystem: '<S2>/Poll KINARM' */

  /* Update for Memory: '<Root>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput = vmr_rwd_fix_leftarm_B.soundON;

  /* Update for Memory: '<S24>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g =
    vmr_rwd_fix_leftarm_B.rotation_on;

  /* Update for Memory: '<S24>/Memory' */
  memcpy(&vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_j[0],
         &vmr_rwd_fix_leftarm_B.TPSelector[0], 50U * sizeof(real_T));

  /* Update for Memory: '<S24>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_o =
    vmr_rwd_fix_leftarm_B.e_ApplyNewRotation;

  /* Update for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID0();

  /* End of Update for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* Update for Memory: '<S2>/Memory1' */
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_i =
    vmr_rwd_fix_leftarm_B.force_scale_b;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_1_PreviousInput =
    vmr_rwd_fix_leftarm_B.ArmOrientation_b;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_2_PreviousInput =
    vmr_rwd_fix_leftarm_B.M1orientation_h;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_3_PreviousInput =
    vmr_rwd_fix_leftarm_B.M2Orientation_l;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_4_PreviousInput =
    vmr_rwd_fix_leftarm_B.M1GearRatio_b;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_5_PreviousInput =
    vmr_rwd_fix_leftarm_B.M2GearRatio_p;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_9_PreviousInput =
    vmr_rwd_fix_leftarm_B.torqueconstant_g;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_18_PreviousInput =
    vmr_rwd_fix_leftarm_B.ArmOrientation_l;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_19_PreviousInput =
    vmr_rwd_fix_leftarm_B.M1orientation_n;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_20_PreviousInput =
    vmr_rwd_fix_leftarm_B.M2Orientation_cw;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_21_PreviousInput =
    vmr_rwd_fix_leftarm_B.M1GearRatio_k;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_22_PreviousInput =
    vmr_rwd_fix_leftarm_B.M2GearRatio_l;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_26_PreviousInput =
    vmr_rwd_fix_leftarm_B.torqueconstant_i;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_10_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_11_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isHumanEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_12_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isNHPEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_13_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isClassicExo;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_14_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_15_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isPMAC;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_16_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isECAT;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_17_PreviousInput =
    vmr_rwd_fix_leftarm_B.Statusread1[0];

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_23_PreviousInput =
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_24_PreviousInput =
    vmr_rwd_fix_leftarm_B.robottype_cs;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_25_PreviousInput =
    vmr_rwd_fix_leftarm_B.robotversion_f;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_27_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_28_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isHumanEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_29_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isNHPEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_30_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isClassicExo;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_31_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_32_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isPMAC;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_33_PreviousInput =
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isECAT;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_34_PreviousInput =
    vmr_rwd_fix_leftarm_B.Statusread1_m[1];

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_6_PreviousInput =
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_7_PreviousInput =
    vmr_rwd_fix_leftarm_B.robottype_e;

  /* Update for Memory: '<S2>/Memory2' */
  vmr_rwd_fix_leftarm_DW.Memory2_8_PreviousInput =
    vmr_rwd_fix_leftarm_B.robotversion_g;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick0)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH0;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[0] = vmr_rwd_fix_leftarm_M->Timing.clockTick0 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize0 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH0 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick1)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH1;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[1] = vmr_rwd_fix_leftarm_M->Timing.clockTick1 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize1 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH1 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
static void vmr_rwd_fix_leftarm_output2(void) /* Sample time: [0.0005s, 0.0s] */
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.sendpoll1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(vmr_rwd_fix_leftarm_DW.sendpoll2_SubsysRanBC);

  /* Outputs for Atomic SubSystem: '<S2>/Poll Force Plates' */
  vmr_rwd_fix_leftarm_PollForcePlatesTID2();

  /* End of Outputs for SubSystem: '<S2>/Poll Force Plates' */

  /* Outputs for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID2();

  /* End of Outputs for SubSystem: '<S2>/Network Transfer Subsystem' */
}

/* Model update function for TID2 */
static void vmr_rwd_fix_leftarm_update2(void) /* Sample time: [0.0005s, 0.0s] */
{
  /* Update for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID2();

  /* End of Update for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick2)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH2;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[2] = vmr_rwd_fix_leftarm_M->Timing.clockTick2 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize2 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH2 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
static void vmr_rwd_fix_leftarm_output3(void) /* Sample time: [0.001s, 0.0s] */
{
  real_T arm;
  real_T L1Ang;
  real_T L2Ang;
  real_T x;
  real_T y;
  real_T L2_temp;
  real_T L2_ptr_angle_shift;
  real_T L2_L1Ang;

  /* UnitDelay: '<S43>/Output' */
  vmr_rwd_fix_leftarm_B.Output = vmr_rwd_fix_leftarm_DW.Output_DSTATE;

  /* DataTypeConversion: '<S29>/Timestamp' */
  vmr_rwd_fix_leftarm_B.Timestamp = vmr_rwd_fix_leftarm_B.Output;

  /* DataTypeConversion: '<S29>/conv' */
  vmr_rwd_fix_leftarm_B.conv = vmr_rwd_fix_leftarm_ConstB.Width;

  /* Outputs for Atomic SubSystem: '<S2>/Receive_Gaze' */
  vmr_rwd_fix_leftarm_Receive_GazeTID3();

  /* End of Outputs for SubSystem: '<S2>/Receive_Gaze' */

  /* RateTransition: '<S2>/Rate Transition1' incorporates:
   *  Constant: '<S29>/packet_version'
   */
  vmr_rwd_fix_leftarm_B.RateTransition1_i[0] = vmr_rwd_fix_leftarm_B.Timestamp;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[1] =
    vmr_rwd_fix_leftarm_P.packet_version_Value;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[2] = vmr_rwd_fix_leftarm_B.conv;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[3] =
    vmr_rwd_fix_leftarm_B.RateTransition10;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[4] =
    vmr_rwd_fix_leftarm_B.RateTransition9;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[5] =
    vmr_rwd_fix_leftarm_B.RateTransition8;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[6] =
    vmr_rwd_fix_leftarm_B.RateTransition7;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[7] =
    vmr_rwd_fix_leftarm_B.RateTransition6;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[8] =
    vmr_rwd_fix_leftarm_B.RateTransition5;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[9] =
    vmr_rwd_fix_leftarm_B.RateTransition4;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[10] =
    vmr_rwd_fix_leftarm_B.RateTransition12;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[11] =
    vmr_rwd_fix_leftarm_B.RateTransition3;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[12] =
    vmr_rwd_fix_leftarm_B.RateTransition2_e;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[13] =
    vmr_rwd_fix_leftarm_B.RateTransition1;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[14] =
    vmr_rwd_fix_leftarm_B.RateTransition;
  vmr_rwd_fix_leftarm_B.RateTransition1_i[15] =
    vmr_rwd_fix_leftarm_B.RateTransition11;

  /* DataTypeConversion: '<S28>/Kinarm Data Width' */
  vmr_rwd_fix_leftarm_B.KinarmDataWidth = vmr_rwd_fix_leftarm_ConstB.Width_d;

  /* DataTypeConversion: '<S28>/touint1' */
  vmr_rwd_fix_leftarm_B.touint1 = vmr_rwd_fix_leftarm_B.RateTransition1_n;

  /* DataTypeConversion: '<S28>/Arm Kinematics' */
  memcpy(&vmr_rwd_fix_leftarm_B.ArmKinematics[0],
         &vmr_rwd_fix_leftarm_B.RateTransition_k[0], 40U * sizeof(real_T));
  memcpy(&vmr_rwd_fix_leftarm_B.ArmKinematics[40],
         &vmr_rwd_fix_leftarm_B.RateTransition2_er[0], 13U * sizeof(real_T));
  memcpy(&vmr_rwd_fix_leftarm_B.ArmKinematics[53],
         &vmr_rwd_fix_leftarm_B.RateTransition3_n[0], 14U * sizeof(real_T));
  vmr_rwd_fix_leftarm_B.ArmKinematics[67] = vmr_rwd_fix_leftarm_B.touint1;

  /* Sum: '<S25>/Subtract' incorporates:
   *  Constant: '<S25>/Not Logging Analog Inputs'
   */
  vmr_rwd_fix_leftarm_B.Subtract_h = vmr_rwd_fix_leftarm_ConstB.Width_a -
    vmr_rwd_fix_leftarm_P.NotLoggingAnalogInputs_Value;

  /* DataTypeConversion: '<S25>/Analog Data Width' */
  vmr_rwd_fix_leftarm_B.AnalogDataWidth = vmr_rwd_fix_leftarm_B.Subtract_h;

  /* RateTransition: '<S25>/Rate Transition' */
  vmr_rwd_fix_leftarm_B.RateTransition_c = vmr_rwd_fix_leftarm_B.AnalogDataWidth;

  /* Outputs for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystemTID3();

  /* End of Outputs for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* Sum: '<S27>/Subtract' incorporates:
   *  Constant: '<S27>/Not Logging Event Codes'
   */
  vmr_rwd_fix_leftarm_B.Subtract_g = vmr_rwd_fix_leftarm_ConstB.Width_c -
    vmr_rwd_fix_leftarm_P.NotLoggingEventCodes_Value;

  /* DataTypeConversion: '<S27>/Number of Event Codes' */
  vmr_rwd_fix_leftarm_B.NumberofEventCodes = vmr_rwd_fix_leftarm_B.Subtract_g;

  /* Sum: '<S45>/FixPt Sum1' incorporates:
   *  Constant: '<S45>/FixPt Constant'
   */
  vmr_rwd_fix_leftarm_B.FixPtSum1 = vmr_rwd_fix_leftarm_B.Output +
    vmr_rwd_fix_leftarm_P.FixPtConstant_Value_g;

  /* Switch: '<S46>/FixPt Switch' incorporates:
   *  Constant: '<S46>/Constant'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtSum1 >
      vmr_rwd_fix_leftarm_P.WrapToZero_Threshold_c) {
    vmr_rwd_fix_leftarm_B.FixPtSwitch = vmr_rwd_fix_leftarm_P.Constant_Value_cq;
  } else {
    vmr_rwd_fix_leftarm_B.FixPtSwitch = vmr_rwd_fix_leftarm_B.FixPtSum1;
  }

  /* End of Switch: '<S46>/FixPt Switch' */

  /* UnitDelay: '<S315>/Delay Input1' */
  vmr_rwd_fix_leftarm_B.Uk1_e = vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_m;

  /* RelationalOperator: '<S315>/FixPt Relational Operator' */
  vmr_rwd_fix_leftarm_B.FixPtRelationalOperator = (uint8_T)((int32_T)
    vmr_rwd_fix_leftarm_B.RateTransition5_o > (int32_T)
    vmr_rwd_fix_leftarm_B.Uk1_e);

  /* MATLAB Function: '<S312>/convert_to_segment_angles' */
  /* MATLAB Function 'KINARM_Exo_Position_Controller/Get_kinematics_EXO/convert_to_segment_angles': '<S318>:1' */
  /*  This function converts local (elbow, shoulder) angles into global segment angles */
  /*  1=right	2=left */
  /* determine which arm to apply the load to */
  /* '<S318>:1:8' */
  /* kinarm_data(3,1) tells which arm is the dominant arm */
  if (vmr_rwd_fix_leftarm_B.RateTransition3_h == 1.0) {
    /* '<S318>:1:9' */
    /* '<S318>:1:10' */
    arm = vmr_rwd_fix_leftarm_B.RateTransition6_a[2];
  } else {
    /* '<S318>:1:12' */
    arm = 3.0 - vmr_rwd_fix_leftarm_B.RateTransition6_a[2];
  }

  /* '<S318>:1:15' */
  /* '<S318>:1:17' */
  L1Ang = vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[0];

  /* '<S318>:1:18' */
  L2Ang = vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[1] +
    vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[0];
  if (vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 14] == 2.0) {
    /* '<S318>:1:19' */
    /* left-handed KINARM Exoskeleton robot */
    /* '<S318>:1:20' */
    L1Ang = 3.1415926535897931 -
      vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[0];

    /* '<S318>:1:21' */
    L2Ang = 3.1415926535897931 - L2Ang;
  }

  /* '<S318>:1:24' */
  vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[0] = L1Ang;
  vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[1] = L2Ang;

  /* End of MATLAB Function: '<S312>/convert_to_segment_angles' */

  /* MATLAB Function: '<S312>/xy_to_segment_angles_EXO' */
  /* MATLAB Function 'KINARM_Exo_Position_Controller/Get_kinematics_EXO/xy_to_segment_angles_EXO': '<S319>:1' */
  /*  This function converts an endpoint finger-tip position or local joint angle (shoulder, elbow)  */
  /*  to (L1Ang, L2Ang) angles for a KINARM robot where L1Ang and L2Ang are the global angles of L1 and L2   */
  /*  Note: these equations were taken from a source which defined theta1 as the global angle of L1 (i.e. theta1 = L1Ang */
  /*  and L2_L1Ang = local angle of L2 WRT L1 (but always in a R.H. coordinate frame).  So L2_L1Ang = L2Ang - L1Ang. */
  /*  Also note that we need to correct for L2_ptr */
  /*  angles_or_XY sets the options for which coordinate system to use */
  /* 	1 - (x, y) coordinates */
  /* 	2 - local coordinate joint angles (shoulder, elbow) */
  /*  L1 (m) */
  /*  L2(m) */
  /*  L2ptr(m) */
  /*  shoulder origin, x position */
  /*  shoulder origin, y position */
  /*  1=right	2=left */
  /* determine which arm to apply the load to */
  /* '<S319>:1:22' */
  /* kinarm_data(3,1) tells which arm is the dominant arm */
  if (vmr_rwd_fix_leftarm_B.RateTransition3_h == 1.0) {
    /* '<S319>:1:23' */
    /* '<S319>:1:24' */
    arm = vmr_rwd_fix_leftarm_B.RateTransition6_a[2];
  } else {
    /* '<S319>:1:26' */
    arm = 3.0 - vmr_rwd_fix_leftarm_B.RateTransition6_a[2];
  }

  /* '<S319>:1:29' */
  /* initialization */
  /* input is assumed to be (x,y) position, global coordinates, (m) */
  /* '<S319>:1:36' */
  /*  calculate theta from (x,y) */
  /* '<S319>:1:45' */
  /* '<S319>:1:46' */
  /* '<S319>:1:47' */
  /* '<S319>:1:48' */
  /* '<S319>:1:49' */
  /* '<S319>:1:51' */
  x = vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[0] -
    vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 8];

  /* '<S319>:1:52' */
  y = vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[1] -
    vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 11];

  /* '<S319>:1:54' */
  L2_temp = sqrt(vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 2] *
                 vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 2] +
                 vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 5] *
                 vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 5]);

  /* '<S319>:1:55' */
  L2_ptr_angle_shift = rt_atan2d_snf(vmr_rwd_fix_leftarm_B.RateTransition6_a
    [(int32_T)arm + 5], vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 2]);

  /*  */
  /*  The following calculation assumes that the (local) elbow angle is  */
  /*  never less than 0 (i.e. L2_L1Ang > 0 for right-handed, and  */
  /*  L2_L1Ang < 0 for  left-handed).  These are always true if L2ptr > 0.   */
  /*  If L2ptr < 0, then two solutions exist, however, the one with (local)  */
  /*  elbow_angle > 0 is chosen.   */
  /*  In addition, temp is limited to +-1 to avoid an error using acos.   */
  /*  Originally this was simple clipping, but the infinite slope at acos(1) */
  /*  created instability problems, so tanh(temp + temp^3/3...) was added to  */
  /*  smooth out the transition.  The difference in angle is < 1 degree with  */
  /*  elbow angle > 30 degrees.  As the elbow extends further, the 'error'  */
  /*  is <20 degrees when full extension should theoretically happen.  For  */
  /*  L1 = 0.3m and L2 = 0.4m, the end-point error with an input point */
  /*  that in theory requires full extension is <1cm.  This end-point error */
  /*  is < 1mm when the desired endpoint is >66cm out. */
  /*  Note: tanh(temp + temp^3/3...) provides a sharper transition than  */
  /*  tanh(temp), which in turn provides a shaper one than atan(temp) */
  /*  The more terms in the tanh(temp...) series, the greater the cutoff */
  if (vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm - 1] * L2_temp == 0.0)
  {
    /* '<S319>:1:74' */
    /* avoid a divide by zero */
    /* '<S319>:1:75' */
    L2Ang = 0.0;
  } else {
    /* '<S319>:1:77' */
    L2Ang = (((x * x + y * y) - vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)
              arm - 1] * vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm -
              1]) - L2_temp * L2_temp) /
      (vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm - 1] * 2.0 * L2_temp);
  }

  /*  	temp = sign(temp) * min(abs(temp), 1);          %Not used to avoid infinite slope issue for subsequent acos */
  /* '<S319>:1:80' */
  /* '<S319>:1:81' */
  L2_L1Ang = acos(tanh(((((rt_powd_snf(L2Ang, 3.0) / 3.0 + L2Ang) + rt_powd_snf
    (L2Ang, 5.0) / 5.0) + rt_powd_snf(L2Ang, 7.0) / 7.0) + rt_powd_snf(L2Ang,
    9.0) / 9.0) + rt_powd_snf(L2Ang, 11.0) / 11.0));
  if (vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 14] == 2.0) {
    /* '<S319>:1:82' */
    /* left-handed KINARM robot */
    /* '<S319>:1:83' */
    L2_L1Ang = -L2_L1Ang;

    /* '<S319>:1:84' */
    L2_ptr_angle_shift = -L2_ptr_angle_shift;
  }

  /* '<S319>:1:86' */
  L2Ang = sin(L2_L1Ang);

  /* '<S319>:1:87' */
  L1Ang = cos(L2_L1Ang);

  /* '<S319>:1:88' */
  L1Ang = rt_atan2d_snf((vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm -
    1] + L2_temp * L1Ang) * y + -x * L2_temp * L2Ang,
                        (vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm -
    1] + L2_temp * L1Ang) * x + y * L2_temp * L2Ang);

  /*  Likewise, there are two solutions for the inverse kinematics for L1Ang as */
  /*  well. We know (based on possible arm configurations) which is the correct */
  /*  solution for right-handed versus left-handed KINARMs likewise, we know */
  /*  that -pi < L1Ang < pi for R.H KINARM Exo robots, but 0 < L1Ang < 2*pi for */
  /*  L.H. KINARM Exo robots.  This range is only important for later  */
  /*  calculations that compare two angles (and which cannot check for 2*pi  */
  /*  changes...)    */
  /*  NOTE: THIS ONLY WORKS IF THE EXOSKELETON ROBOTS ARE SETUP WITH 0 degrees  */
  /*  to the right (i.e. standard setup). */
  if ((vmr_rwd_fix_leftarm_B.RateTransition6_a[(int32_T)arm + 14] == 2.0) &&
      (L1Ang < 0.0)) {
    /* '<S319>:1:99' */
    /* left-handed KINARM robot */
    /* '<S319>:1:100' */
    /* '<S319>:1:101' */
    L1Ang += 6.2831853071795862;
  }

  /* '<S319>:1:105' */
  /* '<S319>:1:107' */
  vmr_rwd_fix_leftarm_B.SEGMENT_ANG[0] = L1Ang;
  vmr_rwd_fix_leftarm_B.SEGMENT_ANG[1] = (L1Ang + L2_L1Ang) - L2_ptr_angle_shift;

  /* End of MATLAB Function: '<S312>/xy_to_segment_angles_EXO' */

  /* Switch: '<S312>/Switch' incorporates:
   *  Constant: '<S308>/coordinate_system_option'
   */
  y = vmr_rwd_fix_leftarm_P.KINARM_Exo_Position_Controller_angles_or_XY - 1.0;
  if (y >= vmr_rwd_fix_leftarm_P.Switch_Threshold_a) {
    vmr_rwd_fix_leftarm_B.Switch_ir[0] = vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[0];
    vmr_rwd_fix_leftarm_B.Switch_ir[1] = vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[1];
  } else {
    vmr_rwd_fix_leftarm_B.Switch_ir[0] = vmr_rwd_fix_leftarm_B.SEGMENT_ANG[0];
    vmr_rwd_fix_leftarm_B.Switch_ir[1] = vmr_rwd_fix_leftarm_B.SEGMENT_ANG[1];
  }

  /* End of Switch: '<S312>/Switch' */

  /* SampleTimeMath: '<S316>/TSamp'
   *
   * About '<S316>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  vmr_rwd_fix_leftarm_B.TSamp[0] = vmr_rwd_fix_leftarm_B.Switch_ir[0] *
    vmr_rwd_fix_leftarm_P.TSamp_WtEt;
  vmr_rwd_fix_leftarm_B.TSamp[1] = vmr_rwd_fix_leftarm_B.Switch_ir[1] *
    vmr_rwd_fix_leftarm_P.TSamp_WtEt;

  /* UnitDelay: '<S316>/UD' */
  vmr_rwd_fix_leftarm_B.Uk1[0] = vmr_rwd_fix_leftarm_DW.UD_DSTATE[0];
  vmr_rwd_fix_leftarm_B.Uk1[1] = vmr_rwd_fix_leftarm_DW.UD_DSTATE[1];

  /* Sum: '<S316>/Diff' */
  vmr_rwd_fix_leftarm_B.Diff[0] = vmr_rwd_fix_leftarm_B.TSamp[0] -
    vmr_rwd_fix_leftarm_B.Uk1[0];
  vmr_rwd_fix_leftarm_B.Diff[1] = vmr_rwd_fix_leftarm_B.TSamp[1] -
    vmr_rwd_fix_leftarm_B.Uk1[1];

  /* Switch: '<S312>/Switch1' incorporates:
   *  Constant: '<S312>/Constant'
   */
  if (vmr_rwd_fix_leftarm_B.FixPtRelationalOperator >
      vmr_rwd_fix_leftarm_P.Switch1_Threshold_h) {
    vmr_rwd_fix_leftarm_B.Switch1_o[0] = vmr_rwd_fix_leftarm_P.Constant_Value_m
      [0];
    vmr_rwd_fix_leftarm_B.Switch1_o[1] = vmr_rwd_fix_leftarm_P.Constant_Value_m
      [1];
  } else {
    vmr_rwd_fix_leftarm_B.Switch1_o[0] = vmr_rwd_fix_leftarm_B.Diff[0];
    vmr_rwd_fix_leftarm_B.Switch1_o[1] = vmr_rwd_fix_leftarm_B.Diff[1];
  }

  /* End of Switch: '<S312>/Switch1' */

  /* SampleTimeMath: '<S317>/TSamp'
   *
   * About '<S317>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  vmr_rwd_fix_leftarm_B.TSamp_d[0] = vmr_rwd_fix_leftarm_B.Switch1_o[0] *
    vmr_rwd_fix_leftarm_P.TSamp_WtEt_o;
  vmr_rwd_fix_leftarm_B.TSamp_d[1] = vmr_rwd_fix_leftarm_B.Switch1_o[1] *
    vmr_rwd_fix_leftarm_P.TSamp_WtEt_o;

  /* UnitDelay: '<S317>/UD' */
  vmr_rwd_fix_leftarm_B.Uk1_d[0] = vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[0];
  vmr_rwd_fix_leftarm_B.Uk1_d[1] = vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[1];

  /* Sum: '<S317>/Diff' */
  vmr_rwd_fix_leftarm_B.Diff_p[0] = vmr_rwd_fix_leftarm_B.TSamp_d[0] -
    vmr_rwd_fix_leftarm_B.Uk1_d[0];
  vmr_rwd_fix_leftarm_B.Diff_p[1] = vmr_rwd_fix_leftarm_B.TSamp_d[1] -
    vmr_rwd_fix_leftarm_B.Uk1_d[1];
}

/* Model update function for TID3 */
static void vmr_rwd_fix_leftarm_update3(void) /* Sample time: [0.001s, 0.0s] */
{
  /* Update for UnitDelay: '<S43>/Output' */
  vmr_rwd_fix_leftarm_DW.Output_DSTATE = vmr_rwd_fix_leftarm_B.FixPtSwitch;

  /* Update for Atomic SubSystem: '<S2>/Receive_Gaze' */
  vmr_rwd_fix_leftarm_Receive_Gaze_UpdateTID3();

  /* End of Update for SubSystem: '<S2>/Receive_Gaze' */

  /* Update for RateTransition: '<S27>/TmpRTBAtNumber of Event CodesOutport1' */
  vmr_rwd_fix_leftarm_DW.TmpRTBAtNumberofEventCodesOutport1_Buffer0 =
    vmr_rwd_fix_leftarm_B.NumberofEventCodes;

  /* Update for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystem_UpdateTID3();

  /* End of Update for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* Update for RateTransition: '<S308>/Rate Transition1' */
  vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[0] =
    vmr_rwd_fix_leftarm_B.Switch_ir[0];
  vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[1] =
    vmr_rwd_fix_leftarm_B.Switch_ir[1];

  /* Update for RateTransition: '<S308>/Rate Transition2' */
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[0] =
    vmr_rwd_fix_leftarm_B.Switch1_o[0];
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[1] =
    vmr_rwd_fix_leftarm_B.Switch1_o[1];

  /* Update for RateTransition: '<S308>/Rate Transition4' */
  vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[0] =
    vmr_rwd_fix_leftarm_B.Diff_p[0];
  vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[1] =
    vmr_rwd_fix_leftarm_B.Diff_p[1];

  /* Update for UnitDelay: '<S315>/Delay Input1' */
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_m =
    vmr_rwd_fix_leftarm_B.RateTransition5_o;

  /* Update for UnitDelay: '<S316>/UD' */
  vmr_rwd_fix_leftarm_DW.UD_DSTATE[0] = vmr_rwd_fix_leftarm_B.TSamp[0];
  vmr_rwd_fix_leftarm_DW.UD_DSTATE[1] = vmr_rwd_fix_leftarm_B.TSamp[1];

  /* Update for UnitDelay: '<S317>/UD' */
  vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[0] = vmr_rwd_fix_leftarm_B.TSamp_d[0];
  vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[1] = vmr_rwd_fix_leftarm_B.TSamp_d[1];

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick3)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH3;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[3] = vmr_rwd_fix_leftarm_M->Timing.clockTick3 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize3 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH3 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output function for TID4 */
static void vmr_rwd_fix_leftarm_output4(void) /* Sample time: [0.002s, 0.0s] */
{
  int32_T yElIdx;
  int32_T uElOffset1;
  int32_T ntIdx1;
  int32_T uElOffset0;
  int32_T ntIdx0;

  /* PermuteDimensions: '<S13>/invert dim' */
  yElIdx = 0;
  uElOffset1 = 0;
  for (ntIdx1 = 0; ntIdx1 < 7; ntIdx1++) {
    uElOffset0 = uElOffset1;
    for (ntIdx0 = 0; ntIdx0 < 70; ntIdx0++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenate[yElIdx] =
        vmr_rwd_fix_leftarm_B.RateTransition2[uElOffset0];
      yElIdx++;
      uElOffset0 += 7;
    }

    uElOffset1++;
  }

  /* End of PermuteDimensions: '<S13>/invert dim' */

  /* Constant: '<S13>/GUI_VCODE' */
  memcpy(&vmr_rwd_fix_leftarm_B.MatrixConcatenate[490],
         &vmr_rwd_fix_leftarm_P.GUI_VCODE_Value[0], 630U * sizeof(real_T));

  /* Outputs for Atomic SubSystem: '<S13>/PVC_core' */
  vmr_rwd_fix_leftarm_PVC_coreTID4();

  /* End of Outputs for SubSystem: '<S13>/PVC_core' */

  /* RateTransition: '<S300>/Rate Transition2' incorporates:
   *  Constant: '<S300>/500 hz'
   */
  vmr_rwd_fix_leftarm_B.RateTransition2_j = vmr_rwd_fix_leftarm_P.u0hz_Value;

  /* S-Function (delay_vcodes): '<S300>/S-Function Builder' */
  delay_vcodes_Outputs_wrapper(&vmr_rwd_fix_leftarm_B.vis_cmd[0],
    &vmr_rwd_fix_leftarm_B.vis_cmd_len, &vmr_rwd_fix_leftarm_B.RateTransition1_d,
    &vmr_rwd_fix_leftarm_B.RateTransition2_j,
    &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o1[0],
    &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o2,
    &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o3[0] );

  /* Level2 S-Function Block: '<S13>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[43];
    sfcnOutputs(rts, 4);
  }
}

/* Model update function for TID4 */
static void vmr_rwd_fix_leftarm_update4(void) /* Sample time: [0.002s, 0.0s] */
{
  /* Update for Atomic SubSystem: '<S13>/PVC_core' */
  vmr_rwd_fix_leftarm_PVC_core_UpdateTID4();

  /* End of Update for SubSystem: '<S13>/PVC_core' */

  /* Update for RateTransition: '<S26>/Rate Transition2' */
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0 =
    vmr_rwd_fix_leftarm_B.vcode_err_id;

  /* Update absolute time */
  /* The "clockTick4" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick4"
   * and "Timing.stepSize4". Size of "clockTick4" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick4 and the high bits
   * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick4)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH4;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[4] = vmr_rwd_fix_leftarm_M->Timing.clockTick4 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize4 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH4 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize4 * 4294967296.0;
}

/* Model output function for TID5 */
static void vmr_rwd_fix_leftarm_output5(void) /* Sample time: [0.1s, 0.0s] */
{
  /* Outputs for Atomic SubSystem: '<S2>/Keep alive' */
  vmr_rwd_fix_leftarm_Keepalive();

  /* End of Outputs for SubSystem: '<S2>/Keep alive' */
}

/* Model update function for TID5 */
static void vmr_rwd_fix_leftarm_update5(void) /* Sample time: [0.1s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick5" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick5"
   * and "Timing.stepSize5". Size of "clockTick5" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick5 and the high bits
   * Timing.clockTickH5. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++vmr_rwd_fix_leftarm_M->Timing.clockTick5)) {
    ++vmr_rwd_fix_leftarm_M->Timing.clockTickH5;
  }

  vmr_rwd_fix_leftarm_M->Timing.t[5] = vmr_rwd_fix_leftarm_M->Timing.clockTick5 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize5 +
    vmr_rwd_fix_leftarm_M->Timing.clockTickH5 *
    vmr_rwd_fix_leftarm_M->Timing.stepSize5 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void vmr_rwd_fix_leftarm_output(int_T tid)
{
  switch (tid) {
   case 0 :
    vmr_rwd_fix_leftarm_output0();
    break;

   case 2 :
    vmr_rwd_fix_leftarm_output2();
    break;

   case 3 :
    vmr_rwd_fix_leftarm_output3();
    break;

   case 4 :
    vmr_rwd_fix_leftarm_output4();
    break;

   case 5 :
    vmr_rwd_fix_leftarm_output5();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void vmr_rwd_fix_leftarm_update(int_T tid)
{
  switch (tid) {
   case 0 :
    vmr_rwd_fix_leftarm_update0();
    break;

   case 2 :
    vmr_rwd_fix_leftarm_update2();
    break;

   case 3 :
    vmr_rwd_fix_leftarm_update3();
    break;

   case 4 :
    vmr_rwd_fix_leftarm_update4();
    break;

   case 5 :
    vmr_rwd_fix_leftarm_update5();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void vmr_rwd_fix_leftarm_initialize(void)
{
  {
    /* user code (Start function Header) */
    {
      int_T i;
      int_T idx;
      int_T idxSignalStart;
      int_T pdoSignalStringLength;
      char_T pdoListString[MAX_PDO_LIST_STRING_LENGTH];
      char_T pdoSignalString[MAX_PDO_SIGNAL_NAME_LENGTH];
      int_T slaveAddrStringLength;
      char_T slaveAddrListString[MAX_SLAVEADDR_LIST_STRING_LENGTH];
      char_T slaveAddrString[10];
      char_T delimiter = '!';
      g_pdoRxNumberSignals[1] = min(77, MAX_NUMBER_PDO_SIGNALS);
      g_pdoTxNumberSignals[1] = min(19, MAX_NUMBER_PDO_SIGNALS);
      strncpy(pdoListString,
              "!Drive 1 (Elmo Drive).Inputs.Position actual value!592!Drive 1 (Elmo Drive).Inputs.Digital Inputs!624!Drive 1 (Elmo Drive).Inputs.Status word!656!Drive 1 (Elmo Drive).Inputs_1.Mode of operation display!672!Drive 1 (Elmo Drive).Inputs_2.Velocity actual value!688!Drive 1 (Elmo Drive).Inputs_3.Torque actual value!720!Drive 1 (Elmo Drive).Inputs_4.Auxiliary position actual value!736!Drive 1 (Elmo Drive).Inputs_5.Elmo Status Reg!768!Drive 2 (Elmo Drive).Inputs.Position actual value!800!Drive 2 (Elmo Drive).Inputs.Digital Inputs!832!Drive 2 (Elmo Drive).Inputs.Status word!864!Drive 2 (Elmo Drive).Inputs_1.Mode of operation display!880!Drive 2 (Elmo Drive).Inputs_2.Velocity actual value!896!Drive 2 (Elmo Drive).Inputs_3.Torque actual value!928!Drive 2 (Elmo Drive).Inputs_4.Auxiliary position actual value!944!Drive 2 (Elmo Drive).Inputs_5.Elmo Status Reg!976!Drive 3 (Elmo Drive).Inputs.Position actual value!1008!Drive 3 (Elmo Drive).Inputs.Digital Inputs!1040!Drive 3 (Elmo Drive).Inputs.Status word!1072!Drive 3 (Elmo Drive).Inputs_1.Mode of operation display!1088!Drive 3 (Elmo Drive).Inputs_2.Velocity actual value!1104!Drive 3 (Elmo Drive).Inputs_3.Torque actual value!1136!Drive 3 (Elmo Drive).Inputs_4.Auxiliary position actual value!1152!Drive 3 (Elmo Drive).Inputs_5.Elmo Status Reg!1184!Drive 4 (Elmo Drive).Inputs.Position actual value!1216!Drive 4 (Elmo Drive).Inputs.Digital Inputs!1248!Drive 4 (Elmo Drive).Inputs.Status word!1280!Drive 4 (Elmo Drive).Inputs_1.Mode of operation display!1296!Drive 4 (Elmo Drive).Inputs_2.Velocity actual value!1312!Drive 4 (Elmo Drive).Inputs_3.Torque actual value!1344!Drive 4 (Elmo Drive).Inputs_4.Auxiliary position actual value!1360!Drive 4 (Elmo Drive).Inputs_5.Elmo Status Reg!1392!Inputs.Frm0State!12160!Inputs.Frm0WcState!12176!Drive 3 (Elmo Drive).WcState.WcState!12179!Drive 2 (Elmo Drive).WcState.WcState!12179!Drive 1 (Elmo Drive).WcState.WcState!12179!Drive 4 (Elmo Drive).WcState.WcState!12179!Inputs.Frm0InputToggle!12192!Drive 3 (Elmo Drive).WcState.InputToggle!12195!Drive 2 (Elmo Drive).WcState.InputToggle!12195!Drive 1 (Elmo Drive).WcState.InputToggle!12195!Drive 4 (Elmo Drive).WcState.InputToggle!12195!SyncUnits.Drive.<unreferenced>.WcState.WcState!12208!SyncUnits.Drive.Task 2.WcState.WcState!12209!Inputs.SlaveCount!12240!Inputs.DevState!12272!InfoData.ChangeCount!12288!InfoData.DevId!12304!InfoData.AmsNetId!12320!InfoData.CfgSlaveCount!12368!Drive 1 (Elmo Drive).InfoData.State!12384!Drive 1 (Elmo Drive).InfoData.AdsAddr!12400!Drive 1 (Elmo Drive).InfoData.Chn0!12464!Drive 1 (Elmo Drive).InfoData.DcOutputShift!12472!Drive 1 (Elmo Drive).InfoData.DcInputShift!12504!Drive 2 (Elmo Drive).InfoData.State!12536!Drive 2 (Elmo Drive).InfoData.AdsAddr!12552!Drive 2 (Elmo Drive).InfoData.Chn0!12616!Drive 2 (Elmo Drive).InfoData.DcOutputShift!12624!Drive 2 (Elmo Drive).InfoData.DcInputShift!12656!Drive 3 (Elmo Drive).InfoData.State!12688!Drive 3 (Elmo Drive).InfoData.AdsAddr!12704!Drive 3 (Elmo Drive).InfoData.Chn0!12768!Drive 3 (Elmo Drive).InfoData.DcOutputShift!12776!Drive 3 (Elmo Drive).InfoData.DcInputShift!12808!Drive 4 (Elmo Drive).InfoData.State!12840!Drive 4 (Elmo Drive).InfoData.AdsAddr!12856!Drive 4 (Elmo Drive).InfoData.Chn0!12920!Drive 4 (Elmo Drive).InfoData.DcOutputShift!12928!Drive 4 (Elmo Drive).InfoData.DcInputShift!12960!SyncUnits.Drive.<unreferenced>.InfoData.ObjectId!12992!SyncUnits.Drive.<unreferenced>.InfoData.State!13024!SyncUnits.Drive.<unreferenced>.InfoData.SlaveCount!13040!SyncUnits.Drive.Task 2.InfoData.ObjectId!13056!SyncUnits.Drive.Task 2.InfoData.State!13088!SyncUnits.Drive.Task 2.InfoData.SlaveCount!13104!",
              MAX_PDO_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < g_pdoRxNumberSignals[1]; i++ ) {
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        strcpy(g_pdoRxSignalList[1][i], pdoSignalString);
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        g_pdoRxSignalOffset[1][i] = atoi(pdoSignalString);
      }

      strncpy(pdoListString,
              "!Drive 1 (Elmo Drive).Outputs.Target Torque!592!Drive 1 (Elmo Drive).Outputs.Control word!608!Drive 1 (Elmo Drive).Outputs_1.Mode of operation!624!Drive 1 (Elmo Drive).Outputs_2.Digital Outputs!640!Drive 2 (Elmo Drive).Outputs.Target Torque!800!Drive 2 (Elmo Drive).Outputs.Control word!816!Drive 2 (Elmo Drive).Outputs_1.Mode of operation!832!Drive 2 (Elmo Drive).Outputs_2.Digital Outputs!848!Drive 3 (Elmo Drive).Outputs.Target Torque!1008!Drive 3 (Elmo Drive).Outputs.Control word!1024!Drive 3 (Elmo Drive).Outputs_1.Mode of operation!1040!Drive 3 (Elmo Drive).Outputs_2.Digital Outputs!1056!Drive 4 (Elmo Drive).Outputs.Target Torque!1216!Drive 4 (Elmo Drive).Outputs.Control word!1232!Drive 4 (Elmo Drive).Outputs_1.Mode of operation!1248!Drive 4 (Elmo Drive).Outputs_2.Digital Outputs!1264!Outputs.Frm0Ctrl!12160!Outputs.Frm0WcCtrl!12176!Outputs.DevCtrl!12272!",
              MAX_PDO_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < g_pdoTxNumberSignals[1]; i++ ) {
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        strcpy(g_pdoTxSignalList[1][i], pdoSignalString);
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        g_pdoTxSignalOffset[1][i] = atoi(pdoSignalString);
      }

      strncpy(slaveAddrListString, "!1001!1002!1003!1004!",
              MAX_SLAVEADDR_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < 4; i++ ) {
        idxSignalStart = ++idx;
        while (slaveAddrListString[idx] != delimiter && idx <
               MAX_SLAVEADDR_LIST_STRING_LENGTH)
          idx++;
        slaveAddrStringLength = idx - idxSignalStart;
        strncpy(slaveAddrString, slaveAddrListString + idxSignalStart,
                slaveAddrStringLength );
        slaveAddrString[slaveAddrStringLength] = '\0';
        g_ecatSlaveAddressList[1][i] = (int_T)atoi(slaveAddrString);
      }
    }

    {
      int_T i;
      int_T idx;
      int_T idxSignalStart;
      int_T pdoSignalStringLength;
      char_T pdoListString[MAX_PDO_LIST_STRING_LENGTH];
      char_T pdoSignalString[MAX_PDO_SIGNAL_NAME_LENGTH];
      int_T slaveAddrStringLength;
      char_T slaveAddrListString[MAX_SLAVEADDR_LIST_STRING_LENGTH];
      char_T slaveAddrString[10];
      char_T delimiter = '!';
      g_pdoRxNumberSignals[0] = min(47, MAX_NUMBER_PDO_SIGNALS);
      g_pdoTxNumberSignals[0] = min(11, MAX_NUMBER_PDO_SIGNALS);
      strncpy(pdoListString,
              "!Drive 1 (Elmo Drive).Inputs.Position actual value!592!Drive 1 (Elmo Drive).Inputs.Digital Inputs!624!Drive 1 (Elmo Drive).Inputs.Status word!656!Drive 1 (Elmo Drive).Inputs_1.Mode of operation display!672!Drive 1 (Elmo Drive).Inputs_2.Velocity actual value!688!Drive 1 (Elmo Drive).Inputs_3.Torque actual value!720!Drive 1 (Elmo Drive).Inputs_4.Auxiliary position actual value!736!Drive 1 (Elmo Drive).Inputs_5.Elmo Status Reg!768!Drive 2 (Elmo Drive).Inputs.Position actual value!800!Drive 2 (Elmo Drive).Inputs.Digital Inputs!832!Drive 2 (Elmo Drive).Inputs.Status word!864!Drive 2 (Elmo Drive).Inputs_1.Mode of operation display!880!Drive 2 (Elmo Drive).Inputs_2.Velocity actual value!896!Drive 2 (Elmo Drive).Inputs_3.Torque actual value!928!Drive 2 (Elmo Drive).Inputs_4.Auxiliary position actual value!944!Drive 2 (Elmo Drive).Inputs_5.Elmo Status Reg!976!Inputs.Frm0State!12160!Inputs.Frm0WcState!12176!Drive 1 (Elmo Drive).WcState.WcState!12179!Drive 2 (Elmo Drive).WcState.WcState!12179!Inputs.Frm0InputToggle!12192!Drive 1 (Elmo Drive).WcState.InputToggle!12195!Drive 2 (Elmo Drive).WcState.InputToggle!12195!SyncUnits.Drive.<unreferenced>.WcState.WcState!12208!SyncUnits.Drive.Task 2.WcState.WcState!12209!Inputs.SlaveCount!12240!Inputs.DevState!12272!InfoData.ChangeCount!12288!InfoData.DevId!12304!InfoData.AmsNetId!12320!InfoData.CfgSlaveCount!12368!Drive 1 (Elmo Drive).InfoData.State!12384!Drive 1 (Elmo Drive).InfoData.AdsAddr!12400!Drive 1 (Elmo Drive).InfoData.Chn0!12464!Drive 1 (Elmo Drive).InfoData.DcOutputShift!12472!Drive 1 (Elmo Drive).InfoData.DcInputShift!12504!Drive 2 (Elmo Drive).InfoData.State!12536!Drive 2 (Elmo Drive).InfoData.AdsAddr!12552!Drive 2 (Elmo Drive).InfoData.Chn0!12616!Drive 2 (Elmo Drive).InfoData.DcOutputShift!12624!Drive 2 (Elmo Drive).InfoData.DcInputShift!12656!SyncUnits.Drive.<unreferenced>.InfoData.ObjectId!12688!SyncUnits.Drive.<unreferenced>.InfoData.State!12720!SyncUnits.Drive.<unreferenced>.InfoData.SlaveCount!12736!SyncUnits.Drive.Task 2.InfoData.ObjectId!12752!SyncUnits.Drive.Task 2.InfoData.State!12784!SyncUnits.Drive.Task 2.InfoData.SlaveCount!12800!",
              MAX_PDO_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < g_pdoRxNumberSignals[0]; i++ ) {
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        strcpy(g_pdoRxSignalList[0][i], pdoSignalString);
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        g_pdoRxSignalOffset[0][i] = atoi(pdoSignalString);
      }

      strncpy(pdoListString,
              "!Drive 1 (Elmo Drive).Outputs.Target Torque!592!Drive 1 (Elmo Drive).Outputs.Control word!608!Drive 1 (Elmo Drive).Outputs_1.Mode of operation!624!Drive 1 (Elmo Drive).Outputs_2.Digital Outputs!640!Drive 2 (Elmo Drive).Outputs.Target Torque!800!Drive 2 (Elmo Drive).Outputs.Control word!816!Drive 2 (Elmo Drive).Outputs_1.Mode of operation!832!Drive 2 (Elmo Drive).Outputs_2.Digital Outputs!848!Outputs.Frm0Ctrl!12160!Outputs.Frm0WcCtrl!12176!Outputs.DevCtrl!12272!",
              MAX_PDO_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < g_pdoTxNumberSignals[0]; i++ ) {
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        strcpy(g_pdoTxSignalList[0][i], pdoSignalString);
        idxSignalStart = ++idx;
        while (pdoListString[idx] != delimiter && idx <
               MAX_PDO_LIST_STRING_LENGTH)
          idx++;
        pdoSignalStringLength = min( (idx - idxSignalStart ),
          MAX_PDO_SIGNAL_NAME_LENGTH - 1);
        strncpy(pdoSignalString, pdoListString + idxSignalStart,
                pdoSignalStringLength );
        pdoSignalString[pdoSignalStringLength] = '\0';
        g_pdoTxSignalOffset[0][i] = atoi(pdoSignalString);
      }

      strncpy(slaveAddrListString, "!1001!1002!",
              MAX_SLAVEADDR_LIST_STRING_LENGTH);
      idx = 0;
      for (i = 0 ; i < 2; i++ ) {
        idxSignalStart = ++idx;
        while (slaveAddrListString[idx] != delimiter && idx <
               MAX_SLAVEADDR_LIST_STRING_LENGTH)
          idx++;
        slaveAddrStringLength = idx - idxSignalStart;
        strncpy(slaveAddrString, slaveAddrListString + idxSignalStart,
                slaveAddrStringLength );
        slaveAddrString[slaveAddrStringLength] = '\0';
        g_ecatSlaveAddressList[0][i] = (int_T)atoi(slaveAddrString);
      }
    }

    /* Level2 S-Function Block: '<S5>/ICH7' (ich10) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[40];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Block Definitions' */
    memcpy(&vmr_rwd_fix_leftarm_B.BlockDefinitions[0],
           &vmr_rwd_fix_leftarm_P.BlockDefinitions_Value[0], 25000U * sizeof
           (real_T));

    /* Start for Constant: '<S5>/Block Sequence' */
    memcpy(&vmr_rwd_fix_leftarm_B.BlockSequence[0],
           &vmr_rwd_fix_leftarm_P.BlockSequence_Value[0], 2000U * sizeof(real_T));

    /* Level2 S-Function Block: '<S267>/Run Command Receive' (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[41];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Pause Type' */
    vmr_rwd_fix_leftarm_B.PauseType = vmr_rwd_fix_leftarm_P.PauseType_Value;

    /* Start for Constant: '<S5>/Use Task Protocol Block Sequence Flag' */
    vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag =
      vmr_rwd_fix_leftarm_P.UseTaskProtocolBlockSequenceFlag_Value;

    /* Start for Constant: '<S5>/Next Block' */
    vmr_rwd_fix_leftarm_B.NextBlock = vmr_rwd_fix_leftarm_P.NextBlock_Value;

    /* Start for Atomic SubSystem: '<S5>/Task Execution Control Subsystem' */
    vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Start();

    /* End of Start for SubSystem: '<S5>/Task Execution Control Subsystem' */

    /* Start for Constant: '<S5>/Task wide param' */
    memcpy(&vmr_rwd_fix_leftarm_B.Taskwideparam[0],
           &vmr_rwd_fix_leftarm_P.Taskwideparam_Value[0], 50U * sizeof(real_T));

    /* Start for Atomic SubSystem: '<S2>/Receive_Gaze' */
    vmr_rwd_fix_leftarm_Receive_Gaze_Start();

    /* End of Start for SubSystem: '<S2>/Receive_Gaze' */

    /* Start for Atomic SubSystem: '<S2>/Poll KINARM' */
    vmr_rwd_fix_leftarm_PollKINARM_Start();

    /* End of Start for SubSystem: '<S2>/Poll KINARM' */

    /* Start for Atomic SubSystem: '<S13>/PVC_core' */
    vmr_rwd_fix_leftarm_PVC_core_Start();

    /* End of Start for SubSystem: '<S13>/PVC_core' */

    /* Level2 S-Function Block: '<S13>/Receive' (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[42];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for RateTransition: '<S27>/TmpRTBAtNumber of Event CodesOutport1' */
    vmr_rwd_fix_leftarm_B.TmpRTBAtNumberofEventCodesOutport1 =
      vmr_rwd_fix_leftarm_P.TmpRTBAtNumberofEventCodesOutport1_X0;

    /* Start for Atomic SubSystem: '<S2>/Poll Force Plates' */
    vmr_rwd_fix_leftarm_PollForcePlates_Start();

    /* End of Start for SubSystem: '<S2>/Poll Force Plates' */

    /* Start for RateTransition: '<S26>/Rate Transition2' */
    vmr_rwd_fix_leftarm_B.RateTransition2_eo =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_o;

    /* Start for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
    vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Start();

    /* End of Start for SubSystem: '<S2>/Network Transfer Subsystem' */

    /* Start for RateTransition: '<S308>/Rate Transition1' */
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[0] =
      vmr_rwd_fix_leftarm_P.RateTransition1_X0_l;
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] =
      vmr_rwd_fix_leftarm_P.RateTransition1_X0_l;

    /* Start for RateTransition: '<S308>/Rate Transition2' */
    vmr_rwd_fix_leftarm_B.RateTransition2_m[0] =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_m;
    vmr_rwd_fix_leftarm_B.RateTransition2_m[1] =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_m;

    /* Start for RateTransition: '<S308>/Rate Transition4' */
    vmr_rwd_fix_leftarm_B.RateTransition4_n[0] =
      vmr_rwd_fix_leftarm_P.RateTransition4_X0;
    vmr_rwd_fix_leftarm_B.RateTransition4_n[1] =
      vmr_rwd_fix_leftarm_P.RateTransition4_X0;

    /* Start for Constant: '<S9>/up_duration(ms)' */
    vmr_rwd_fix_leftarm_B.up_durationms =
      vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_up_duration;

    /* Start for Constant: '<S9>/down_duration(ms)' */
    vmr_rwd_fix_leftarm_B.down_durationms =
      vmr_rwd_fix_leftarm_P.KINARM_Exo_Apply_Loads_down_duration;

    /* Start for Atomic SubSystem: '<S2>/apply loads' */
    vmr_rwd_fix_leftarm_applyloads_Start();

    /* End of Start for SubSystem: '<S2>/apply loads' */

    /* Start for Atomic SubSystem: '<S2>/Keep alive' */
    vmr_rwd_fix_leftarm_Keepalive_Start();

    /* End of Start for SubSystem: '<S2>/Keep alive' */

    /* Start for DataStoreMemory: '<S2>/ECAT Dig Diagnostic' */
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[0] =
      vmr_rwd_fix_leftarm_P.ECATDigDiagnostic_InitialValue[0];
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[1] =
      vmr_rwd_fix_leftarm_P.ECATDigDiagnostic_InitialValue[1];
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[2] =
      vmr_rwd_fix_leftarm_P.ECATDigDiagnostic_InitialValue[2];
    vmr_rwd_fix_leftarm_DW.ECATDigDiagnostic[3] =
      vmr_rwd_fix_leftarm_P.ECATDigDiagnostic_InitialValue[3];

    /* Start for DataStoreMemory: '<S2>/ECAT Status' */
    memcpy(&vmr_rwd_fix_leftarm_DW.ECATStatus[0],
           &vmr_rwd_fix_leftarm_P.ECATStatus_InitialValue[0], sizeof(real_T) <<
           3U);

    /* Start for DataStoreMemory: '<S2>/ECAT hardware' */
    memcpy(&vmr_rwd_fix_leftarm_DW.ECATHardware[0],
           &vmr_rwd_fix_leftarm_P.ECAThardware_InitialValue[0], 14U * sizeof
           (real_T));

    /* Level2 S-Function Block: '<S13>/Send' (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[43];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* S-Function Block: <S14>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(6)) == 0) {
        if ((i = rl32eDefScope(6,2)) != 0) {
          printf("Error creating scope 6\n");
        } else {
          rl32eAddSignal(6, rl32eGetSignalNo("Reshape/s1"));
          rl32eAddSignal(6, rl32eGetSignalNo("Reshape/s2"));
          rl32eAddSignal(6, rl32eGetSignalNo("Reshape/s3"));
          rl32eAddSignal(6, rl32eGetSignalNo("Reshape/s4"));
          rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Reshape/s1"),"%15.6f");
          rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Reshape/s2"),"%15.6f");
          rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Reshape/s3"),"%15.6f");
          rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Reshape/s4"),"%15.6f");
          rl32eSetScope(6, 4, 250);
          rl32eSetScope(6, 5, 0);
          rl32eSetScope(6, 6, 1);
          rl32eSetScope(6, 0, 0);
          rl32eSetScope(6, 3, rl32eGetSignalNo("Reshape/s1"));
          rl32eSetScope(6, 1, 0.0);
          rl32eSetScope(6, 2, 0);
          rl32eSetScope(6, 9, 0);
          rl32eSetTargetScope(6, 1, 0.0);
          rl32eSetTargetScope(6, 11, 0.0);
          rl32eSetTargetScope(6, 10, 0.0);
          xpceScopeAcqOK(6, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(6);
      }
    }

    /* S-Function Block: <S15>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(1)) == 0) {
        if ((i = rl32eDefScope(1,2)) != 0) {
          printf("Error creating scope 1\n");
        } else {
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s2"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s3"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s4"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s5"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s6"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s7"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s8"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s9"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s10"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s11"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s12"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s13"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s14"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s15"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s16"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s17"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s18"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s19"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s20"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s21"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s22"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s23"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s24"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s25"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s26"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s27"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s28"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s29"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s30"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s31"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s32"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s33"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s34"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s35"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s36"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s37"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s38"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s39"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s40"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s41"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s42"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s43"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s44"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s45"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s46"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s47"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s48"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s49"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s50"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s51"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s52"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s53"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s54"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s55"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s56"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s57"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s58"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s59"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s60"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s61"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s62"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s63"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s64"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s65"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s66"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s67"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s68"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s69"));
          rl32eAddSignal(1, rl32eGetSignalNo("DisplayText/MATLAB Function/s70"));
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s1"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s2"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s3"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s4"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s5"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s6"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s7"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s8"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s9"),"%15.6f");
          rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
            "DisplayText/MATLAB Function/s10"),"%15.6f");
          rl32eSetScope(1, 4, 250);
          rl32eSetScope(1, 5, 0);
          rl32eSetScope(1, 6, 1);
          rl32eSetScope(1, 0, 0);
          rl32eSetScope(1, 3, rl32eGetSignalNo("DisplayText/MATLAB Function/s1"));
          rl32eSetScope(1, 1, 0.0);
          rl32eSetScope(1, 2, 0);
          rl32eSetScope(1, 9, 0);
          rl32eSetTargetScope(1, 1, 0.0);
          rl32eSetTargetScope(1, 11, 0.0);
          rl32eSetTargetScope(1, 10, 0.0);
          xpceScopeAcqOK(1, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_a.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(1);
      }
    }

    /* S-Function Block: <S16>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(3)) == 0) {
        if ((i = rl32eDefScope(3,2)) != 0) {
          printf("Error creating scope 3\n");
        } else {
          rl32eAddSignal(3, rl32eGetSignalNo("Trial_Control/p8"));
          rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Trial_Control/p8"),
            "%15.6f");
          rl32eSetScope(3, 4, 250);
          rl32eSetScope(3, 5, 0);
          rl32eSetScope(3, 6, 1);
          rl32eSetScope(3, 0, 0);
          rl32eSetScope(3, 3, rl32eGetSignalNo("Trial_Control/p8"));
          rl32eSetScope(3, 1, 0.0);
          rl32eSetScope(3, 2, 0);
          rl32eSetScope(3, 9, 0);
          rl32eSetTargetScope(3, 1, 0.0);
          rl32eSetTargetScope(3, 11, 0.0);
          rl32eSetTargetScope(3, 10, 0.0);
          xpceScopeAcqOK(3, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_m.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(3);
      }
    }

    /* S-Function Block: <S17>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(5)) == 0) {
        if ((i = rl32eDefScope(5,2)) != 0) {
          printf("Error creating scope 5\n");
        } else {
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s1"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s2"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s3"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s4"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s5"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s6"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s7"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s8"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s9"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s10"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s11"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s12"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s13"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s14"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s15"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s16"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s17"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s18"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s19"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s20"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s21"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s22"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s23"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s24"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s25"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s26"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s27"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s28"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s29"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s30"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s31"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s32"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s33"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s34"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s35"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s36"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s37"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s38"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s39"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s40"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s41"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s42"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s43"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s44"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s45"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s46"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s47"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s48"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s49"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s50"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s51"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s52"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s53"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s54"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s55"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s56"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s57"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s58"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s59"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s60"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s61"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s62"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s63"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s64"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s65"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s66"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s67"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s68"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s69"));
          rl32eAddSignal(5, rl32eGetSignalNo("Selector2/s70"));
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s1"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s2"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s3"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s4"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s5"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s6"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s7"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s8"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s9"),"%15.6f");
          rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Selector2/s10"),"%15.6f");
          rl32eSetScope(5, 4, 250);
          rl32eSetScope(5, 5, 0);
          rl32eSetScope(5, 6, 1);
          rl32eSetScope(5, 0, 0);
          rl32eSetScope(5, 3, rl32eGetSignalNo("Selector2/s1"));
          rl32eSetScope(5, 1, 0.0);
          rl32eSetScope(5, 2, 0);
          rl32eSetScope(5, 9, 0);
          rl32eSetTargetScope(5, 1, 0.0);
          rl32eSetTargetScope(5, 11, 0.0);
          rl32eSetTargetScope(5, 10, 0.0);
          xpceScopeAcqOK(5, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_mo.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(5);
      }
    }

    /* S-Function Block: <S18>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(2)) == 0) {
        if ((i = rl32eDefScope(2,2)) != 0) {
          printf("Error creating scope 2\n");
        } else {
          rl32eAddSignal(2, rl32eGetSignalNo("Vector Concatenate/s1"));
          rl32eAddSignal(2, rl32eGetSignalNo("Vector Concatenate/s2"));
          rl32eAddSignal(2, rl32eGetSignalNo("Vector Concatenate/s3"));
          rl32eAddSignal(2, rl32eGetSignalNo("Vector Concatenate/s4"));
          rl32eAddSignal(2, rl32eGetSignalNo("Vector Concatenate/s5"));
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Vector Concatenate/s1"),
            "%15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Vector Concatenate/s2"),
            "%15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Vector Concatenate/s3"),
            "%15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Vector Concatenate/s4"),
            "%15.6f");
          rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Vector Concatenate/s5"),
            "%15.6f");
          rl32eSetScope(2, 4, 250);
          rl32eSetScope(2, 5, 0);
          rl32eSetScope(2, 6, 1);
          rl32eSetScope(2, 0, 0);
          rl32eSetScope(2, 3, rl32eGetSignalNo("Vector Concatenate/s1"));
          rl32eSetScope(2, 1, 0.0);
          rl32eSetScope(2, 2, 0);
          rl32eSetScope(2, 9, 0);
          rl32eSetTargetScope(2, 1, 0.0);
          rl32eSetTargetScope(2, 11, 0.0);
          rl32eSetTargetScope(2, 10, 0.0);
          xpceScopeAcqOK(2, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_h.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(2);
      }
    }

    /* S-Function Block: <S19>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(4)) == 0) {
        if ((i = rl32eDefScope(4,2)) != 0) {
          printf("Error creating scope 4\n");
        } else {
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s1"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s2"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s3"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s4"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s5"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s6"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s7"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s8"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s9"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s10"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s11"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s12"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s13"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s14"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s15"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s16"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s17"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s18"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s19"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s20"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s21"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s22"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s23"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s24"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s25"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s26"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s27"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s28"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s29"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s30"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s31"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s32"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s33"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s34"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s35"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s36"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s37"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s38"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s39"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s40"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s41"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s42"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s43"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s44"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s45"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s46"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s47"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s48"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s49"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s50"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s51"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s52"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s53"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s54"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s55"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s56"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s57"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s58"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s59"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s60"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s61"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s62"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s63"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s64"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s65"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s66"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s67"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s68"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s69"));
          rl32eAddSignal(4, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s70"));
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s1"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s2"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s3"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s4"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s5"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s6"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s7"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s8"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s9"),"%15.6f");
          rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s10"),"%15.6f");
          rl32eSetScope(4, 4, 250);
          rl32eSetScope(4, 5, 0);
          rl32eSetScope(4, 6, 1);
          rl32eSetScope(4, 0, 0);
          rl32eSetScope(4, 3, rl32eGetSignalNo(
            "Show_Target/Embedded MATLAB Function/s1"));
          rl32eSetScope(4, 1, 0.0);
          rl32eSetScope(4, 2, 0);
          rl32eSetScope(4, 9, 0);
          rl32eSetTargetScope(4, 1, 0.0);
          rl32eSetTargetScope(4, 11, 0.0);
          rl32eSetTargetScope(4, 10, 0.0);
          xpceScopeAcqOK(4, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_j.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(4);
      }
    }

    /* Level2 S-Function Block: '<S12>/PCI-6229 DA' (danipcim) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[44];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* S-Function Block: <S297>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(7)) == 0) {
        if ((i = rl32eDefScope(7,2)) != 0) {
          printf("Error creating scope 7\n");
        } else {
          rl32eAddSignal(7, rl32eGetSignalNo(
            "Play Sound/Play sound over and over/p1"));
          rl32eSetScope(7, 4, 4000);
          rl32eSetScope(7, 5, 0);
          rl32eSetScope(7, 6, 1);
          rl32eSetScope(7, 0, 0);
          rl32eSetScope(7, 3, rl32eGetSignalNo(
            "Play Sound/Play sound over and over/p1"));
          rl32eSetScope(7, 1, 0.0);
          rl32eSetScope(7, 2, 0);
          rl32eSetScope(7, 9, 0);
          rl32eSetTargetScope(7, 11, 0.0);
          rl32eSetTargetScope(7, 10, 0.0);
          xpceScopeAcqOK(7, &vmr_rwd_fix_leftarm_DW.SFunction_IWORK_c.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(7);
      }
    }

    /* user code (Start function Trailer) */
    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043257,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_hj[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043265,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_b[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370043277,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g1[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1002 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043341,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1002 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_j[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1002 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043352,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1002 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_a[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1002 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370043361,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1002);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_g[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(35101310,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_a[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(37004580,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_e[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(35081310,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_p[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043381,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_n[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043393,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_i[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370043403,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_o[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1004 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043419,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1004 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_d[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1004 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370043431,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1004 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_p[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1004 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370043441,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1004);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(35471299,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK_h[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370043537,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(35091299,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload1_IWORK[7] = 0;
      }
    }

    {
      if (1 == g_firstInitBlockToRunPlusOne - 1 ) {
        switch (vmr_rwd_fix_leftarm_P.activation_Value[0]) {
         case MC_TYPE_SIMULATION:
          {
            printf("Simulation mode requested and enabled.\n");
            break;
          }

         case MC_TYPE_PMAC:
          {
            if (vmr_rwd_fix_leftarm_B.BKINEtherCATinit1_o3 == MC_TYPE_PMAC)
              printf("PMAC mode requested and enabled");
            else
              printf("PMAC mode requested, but not enabled.");
            break;
          }

         case MC_TYPE_ETHERCAT:
          {
            if (g_deviceIndex == NO_ETHERCAT &&
                vmr_rwd_fix_leftarm_P.activation_Value[1] <
                MAX_NUMBER_ECAT_NETWORK_DEVICES)
              printf("The EtherCAT Network device ( = %d) requested is not specified in the code.\n",
                     vmr_rwd_fix_leftarm_P.activation_Value[1]);
            break;
          }

         default:
          printf("Unknown Motion Control type ( = %d) requested.\n",
                 vmr_rwd_fix_leftarm_P.activation_Value[0]);
        }
      }
    }

    {
      if (0 == g_firstInitBlockToRunPlusOne - 1 ) {
        switch (vmr_rwd_fix_leftarm_P.activation_Value[0]) {
         case MC_TYPE_SIMULATION:
          {
            printf("Simulation mode requested and enabled.\n");
            break;
          }

         case MC_TYPE_PMAC:
          {
            if (vmr_rwd_fix_leftarm_B.BKINEtherCATinit_o3 == MC_TYPE_PMAC)
              printf("PMAC mode requested and enabled");
            else
              printf("PMAC mode requested, but not enabled.");
            break;
          }

         case MC_TYPE_ETHERCAT:
          {
            if (g_deviceIndex == NO_ETHERCAT &&
                vmr_rwd_fix_leftarm_P.activation_Value[1] <
                MAX_NUMBER_ECAT_NETWORK_DEVICES)
              printf("The EtherCAT Network device ( = %d) requested is not specified in the code.\n",
                     vmr_rwd_fix_leftarm_P.activation_Value[1]);
            break;
          }

         default:
          printf("Unknown Motion Control type ( = %d) requested.\n",
                 vmr_rwd_fix_leftarm_P.activation_Value[0]);
        }
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370041113,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_j[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1001 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370041114,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1001 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_h[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1002 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370044267,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1002);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_a0[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1002 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370044268,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1002 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_f[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370044277,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_m[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1003 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370044278,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1003 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK_o[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1004 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDODownload(370044287,1*(uint32_T)4,(uint32_T)
              deviceIndex);
            printf("SDO Download. Register device %d, slave addr: %d\n",
                   deviceIndex, 1004);
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k[0] =
          deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDODownload_IWORK_k[7] = 0;
      }
    }

    {
      int_T deviceIndex;
      int_T i;
      int_T slaveIsInSlaveAddressList;
      deviceIndex = g_deviceIndex;
      if (!xpcIsModelInit()) {
        if (deviceIndex != NO_ETHERCAT) {
          slaveIsInSlaveAddressList = 0;// default value
          for (i = 0; i < MAX_NUMBER_ECAT_SLAVES; i++) {
            if (1004 == g_ecatSlaveAddressList[deviceIndex][i])
              slaveIsInSlaveAddressList = 1;
          }

          if (slaveIsInSlaveAddressList == 0) {
            deviceIndex = NO_ETHERCAT;
          } else {
            registerAsyncSDOUpload(370044288,1*(uint32_T)4,(uint32_T)deviceIndex);
            printf("SDO Upload. Register device %d, slave addr: %d\n",
                   deviceIndex, 1004 );
          }
        }

        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK[0] = deviceIndex;
        vmr_rwd_fix_leftarm_DW.BKINEtherCATAsyncSDOUpload_IWORK[7] = 0;
      }
    }
  }

  vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[0] =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[1] =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.SendControlMachine_Trig_ZCE[2] =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.TaskExecutionControlMachine_Trig_ZCE[0] =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.TaskExecutionControlMachine_Trig_ZCE[1] =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[0] = UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[1] = UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.Trial_Control_Trig_ZCE[2] = UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.sf_Ramp_Up_Down1.Ramp_Up_Down_Trig_ZCE =
    UNINITIALIZED_ZCSIG;
  vmr_rwd_fix_leftarm_PrevZCX.sf_Ramp_Up_Down.Ramp_Up_Down_Trig_ZCE =
    UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for MATLAB Function: '<S267>/Embedded MATLAB Function' */
    vmr_rwd_fix_leftarm_DW.u = 0.0;
    vmr_rwd_fix_leftarm_DW.v = 0.0;

    /* InitializeConditions for Atomic SubSystem: '<S5>/Task Execution Control Subsystem' */
    vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem_Init();

    /* End of InitializeConditions for SubSystem: '<S5>/Task Execution Control Subsystem' */

    /* InitializeConditions for MATLAB Function: '<S267>/Hold_to_1Khz' */
    /* this does not need to be a vector 8 elements long. Simulink just */
    /* doesn't like variable sized arrays here. So I make it twice as long as */
    /* required in case we decide to run faster some day. */
    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_DW.held_value[i] = 0.0;
    }

    /* End of InitializeConditions for MATLAB Function: '<S267>/Hold_to_1Khz' */

    /* InitializeConditions for MATLAB Function: '<S269>/Count trials' */
    vmr_rwd_fix_leftarm_DW.trials_per_block_not_empty = false;

    /* InitializeConditions for UnitDelay: '<S43>/Output' */
    vmr_rwd_fix_leftarm_DW.Output_DSTATE =
      vmr_rwd_fix_leftarm_P.Output_InitialCondition_a;

    /* InitializeConditions for Memory: '<Root>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[0] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gn;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[1] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gn;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[2] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gn;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[3] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gn;

    /* InitializeConditions for Atomic SubSystem: '<S2>/Receive_Gaze' */
    vmr_rwd_fix_leftarm_Receive_Gaze_Init();

    /* End of InitializeConditions for SubSystem: '<S2>/Receive_Gaze' */

    /* InitializeConditions for Memory: '<S2>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[0] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gv;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[1] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gv;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[2] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gv;
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[3] =
      vmr_rwd_fix_leftarm_P.Memory_X0_gv;

    /* InitializeConditions for Memory: '<S13>/Memory' */
    vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_a =
      vmr_rwd_fix_leftarm_P.Memory_X0_h;

    /* InitializeConditions for Atomic SubSystem: '<S2>/Poll KINARM' */
    vmr_rwd_fix_leftarm_PollKINARM_Init();

    /* End of InitializeConditions for SubSystem: '<S2>/Poll KINARM' */

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory1_X0_i;

    /* InitializeConditions for Chart: '<Root>/Trial_Control' */
    vmr_rwd_fix_leftarm_DW.is_Main_Trial =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
    vmr_rwd_fix_leftarm_DW.temporalCounter_i1 = 0U;
    vmr_rwd_fix_leftarm_DW.is_active_c1_vmr_rwd_fix_leftarm = 0U;
    vmr_rwd_fix_leftarm_DW.is_c1_vmr_rwd_fix_leftarm =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
    vmr_rwd_fix_leftarm_DW.tickCount = 0.0;
    vmr_rwd_fix_leftarm_DW.reward_type = 0.0;
    vmr_rwd_fix_leftarm_DW.dist = 0.0;
    vmr_rwd_fix_leftarm_DW.tick = 0.0;
    vmr_rwd_fix_leftarm_B.logging_enable = false;
    vmr_rwd_fix_leftarm_B.event_code = 0.0;
    vmr_rwd_fix_leftarm_B.targetA_row = 0.0;
    vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
    vmr_rwd_fix_leftarm_B.targetB_row = 0.0;
    vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
    vmr_rwd_fix_leftarm_B.reward_state = 0.0;
    vmr_rwd_fix_leftarm_B.score = 0;
    vmr_rwd_fix_leftarm_B.reward = 0;
    vmr_rwd_fix_leftarm_B.fdbk_text = 0;
    vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
    vmr_rwd_fix_leftarm_B.tone = 0.0;
    vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
    vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
    vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
    vmr_rwd_fix_leftarm_B.robot_enable_controller = false;
    vmr_rwd_fix_leftarm_DW.e_ApplyNewRotationEventCounter = 0U;
    vmr_rwd_fix_leftarm_B.e_ApplyNewRotation = false;
    vmr_rwd_fix_leftarm_DW.e_Trial_EndEventCounter = 0U;
    vmr_rwd_fix_leftarm_B.e_Trial_End = false;

    /* InitializeConditions for Memory: '<S24>/Memory1' */
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g =
      vmr_rwd_fix_leftarm_P.Memory1_X0_c;

    /* InitializeConditions for Memory: '<S24>/Memory' */
    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_j[i] =
        vmr_rwd_fix_leftarm_P.Memory_X0_fw;
    }

    /* End of InitializeConditions for Memory: '<S24>/Memory' */

    /* InitializeConditions for Memory: '<S24>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_o =
      vmr_rwd_fix_leftarm_P.Memory2_X0_l;

    /* InitializeConditions for Triggered SubSystem: '<S24>/Triggered Subsystem' */
    /* InitializeConditions for MATLAB Function: '<S332>/Embedded MATLAB Function' */
    vmr_rwd_fix_leftarm_DW.rotation_memory = 0.0;

    /* End of InitializeConditions for SubSystem: '<S24>/Triggered Subsystem' */

    /* InitializeConditions for Chart: '<S22>/Chart' */
    vmr_rwd_fix_leftarm_DW.is_EnableState =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
    vmr_rwd_fix_leftarm_DW.is_AutoMoveToPos =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
    vmr_rwd_fix_leftarm_DW.temporalCounter_i1_o = 0U;
    vmr_rwd_fix_leftarm_DW.is_active_c11_vmr_rwd_fix_leftarm = 0U;
    vmr_rwd_fix_leftarm_DW.is_c11_vmr_rwd_fix_leftarm =
      vmr_rwd_fix_leftarm_IN_NO_ACTIVE_CHILD_a;
    vmr_rwd_fix_leftarm_DW.tickCount_m = 0.0;
    vmr_rwd_fix_leftarm_DW.StartPos[0] = 0.0;
    vmr_rwd_fix_leftarm_DW.StartPos[1] = 0.0;
    vmr_rwd_fix_leftarm_DW.TgtPos[0] = 0.0;
    vmr_rwd_fix_leftarm_DW.TgtPos[1] = 0.0;
    vmr_rwd_fix_leftarm_DW.updatepos = false;
    vmr_rwd_fix_leftarm_DW.CurHandPos[0] = 0.0;
    vmr_rwd_fix_leftarm_DW.CurHandPos[1] = 0.0;
    vmr_rwd_fix_leftarm_DW.ramp_time = 0.0;
    vmr_rwd_fix_leftarm_DW.scale_increment = 0.0;
    vmr_rwd_fix_leftarm_DW.tick_d = 0.0;
    vmr_rwd_fix_leftarm_DW.trajectory_shape = 0.0;
    vmr_rwd_fix_leftarm_B.force_scale = 0.0;
    vmr_rwd_fix_leftarm_B.virtual_pos[0] = 0.0;
    vmr_rwd_fix_leftarm_B.virtual_pos[1] = 0.0;
    vmr_rwd_fix_leftarm_B.state = 0.0;
    vmr_rwd_fix_leftarm_DW.reset_controllerEventCounter = 0U;
    vmr_rwd_fix_leftarm_B.reset_controller = false;

    /* InitializeConditions for Atomic SubSystem: '<S13>/PVC_core' */
    vmr_rwd_fix_leftarm_PVC_core_Init();

    /* End of InitializeConditions for SubSystem: '<S13>/PVC_core' */

    /* InitializeConditions for MATLAB Function: '<S13>/MATLAB Function' */
    vmr_rwd_fix_leftarm_DW.last_valid_frame_ack = 0.0;
    vmr_rwd_fix_leftarm_DW.last_perm_frame_ack = 0.0;

    /* InitializeConditions for RateTransition: '<S27>/TmpRTBAtNumber of Event CodesOutport1' */
    vmr_rwd_fix_leftarm_DW.TmpRTBAtNumberofEventCodesOutport1_Buffer0 =
      vmr_rwd_fix_leftarm_P.TmpRTBAtNumberofEventCodesOutport1_X0;

    /* InitializeConditions for RateTransition: '<S26>/Rate Transition2' */
    vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0 =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_o;

    /* InitializeConditions for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
    vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Init();

    /* End of InitializeConditions for SubSystem: '<S2>/Network Transfer Subsystem' */

    /* InitializeConditions for RateTransition: '<S308>/Rate Transition1' */
    vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[0] =
      vmr_rwd_fix_leftarm_P.RateTransition1_X0_l;
    vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[1] =
      vmr_rwd_fix_leftarm_P.RateTransition1_X0_l;

    /* InitializeConditions for RateTransition: '<S308>/Rate Transition2' */
    vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[0] =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_m;
    vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[1] =
      vmr_rwd_fix_leftarm_P.RateTransition2_X0_m;

    /* InitializeConditions for RateTransition: '<S308>/Rate Transition4' */
    vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[0] =
      vmr_rwd_fix_leftarm_P.RateTransition4_X0;
    vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[1] =
      vmr_rwd_fix_leftarm_P.RateTransition4_X0;

    /* InitializeConditions for MATLAB Function: '<S313>/filter' */
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.rawVelocities[i] = 0.0;
      vmr_rwd_fix_leftarm_DW.filtVelocities[i] = 0.0;
    }

    /* End of InitializeConditions for MATLAB Function: '<S313>/filter' */

    /* InitializeConditions for Chart: '<S9>/Ramp_Up_Down' */
    vmr_rwd_fix_leftarm_Ramp_Up_Down_Init(&vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down,
      &vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down);

    /* InitializeConditions for Chart: '<S9>/Ramp_Up_Down1' */
    vmr_rwd_fix_leftarm_Ramp_Up_Down_Init
      (&vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1,
       &vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down1);

    /* InitializeConditions for Memory: '<S2>/Memory1' */
    vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_i =
      vmr_rwd_fix_leftarm_P.Memory1_X0_b;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_1_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_1_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_2_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_2_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_3_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_3_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_4_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_4_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_5_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_5_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_9_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_9_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_18_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_18_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_19_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_19_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_20_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_20_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_21_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_21_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_22_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_22_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_26_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_26_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_10_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_10_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_11_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_11_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_12_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_12_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_13_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_13_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_14_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_14_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_15_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_15_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_16_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_16_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_17_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_17_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_23_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_23_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_24_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_24_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_25_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_25_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_27_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_27_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_28_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_28_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_29_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_29_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_30_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_30_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_31_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_31_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_32_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_32_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_33_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_33_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_34_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_34_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_6_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_6_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_7_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_7_X0;

    /* InitializeConditions for Memory: '<S2>/Memory2' */
    vmr_rwd_fix_leftarm_DW.Memory2_8_PreviousInput =
      vmr_rwd_fix_leftarm_P.Memory2_8_X0;

    /* InitializeConditions for MATLAB Function: '<S12>/Play sound over and over' */
    vmr_rwd_fix_leftarm_DW.t = 0.0;
    vmr_rwd_fix_leftarm_DW.last_tone_state = 0.0;

    /* InitializeConditions for UnitDelay: '<S315>/Delay Input1' */
    vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_m =
      vmr_rwd_fix_leftarm_P.DetectIncrease_vinit;

    /* InitializeConditions for UnitDelay: '<S316>/UD' */
    vmr_rwd_fix_leftarm_DW.UD_DSTATE[0] =
      vmr_rwd_fix_leftarm_P.DiscreteDerivative_ICPrevScaledInput;
    vmr_rwd_fix_leftarm_DW.UD_DSTATE[1] =
      vmr_rwd_fix_leftarm_P.DiscreteDerivative_ICPrevScaledInput;

    /* InitializeConditions for UnitDelay: '<S317>/UD' */
    vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[0] =
      vmr_rwd_fix_leftarm_P.DiscreteDerivative1_ICPrevScaledInput;
    vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[1] =
      vmr_rwd_fix_leftarm_P.DiscreteDerivative1_ICPrevScaledInput;
  }
}

/* Model terminate function */
static void vmr_rwd_fix_leftarm_terminate(void)
{
  /* Level2 S-Function Block: '<S5>/ICH7' (ich10) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[40];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S267>/Run Command Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[41];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S2>/Receive_Gaze' */
  vmr_rwd_fix_leftarm_Receive_Gaze_Term();

  /* End of Terminate for SubSystem: '<S2>/Receive_Gaze' */

  /* Terminate for Atomic SubSystem: '<S2>/Poll KINARM' */
  vmr_rwd_fix_leftarm_PollKINARM_Term();

  /* End of Terminate for SubSystem: '<S2>/Poll KINARM' */

  /* Level2 S-Function Block: '<S13>/Receive' (xpcudpbytereceive) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[42];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S2>/Poll Force Plates' */
  vmr_rwd_fix_leftarm_PollForcePlates_Term();

  /* End of Terminate for SubSystem: '<S2>/Poll Force Plates' */

  /* Terminate for Atomic SubSystem: '<S2>/Network Transfer Subsystem' */
  vmr_rwd_fix_leftarm_NetworkTransferSubsystem_Term();

  /* End of Terminate for SubSystem: '<S2>/Network Transfer Subsystem' */

  /* Terminate for Atomic SubSystem: '<S2>/apply loads' */
  vmr_rwd_fix_leftarm_applyloads_Term();

  /* End of Terminate for SubSystem: '<S2>/apply loads' */

  /* Terminate for Atomic SubSystem: '<S2>/Keep alive' */
  vmr_rwd_fix_leftarm_Keepalive_Term();

  /* End of Terminate for SubSystem: '<S2>/Keep alive' */

  /* Level2 S-Function Block: '<S13>/Send' (xpcudpbytesend) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[43];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S12>/PCI-6229 DA' (danipcim) */
  {
    SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[44];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */

  /*------------ S-Function Block: <S63>/BKIN EtherCATinit1 Process Shutdown Network ------------*/
  {
    int_T status;
    if (!xpcIsModelInit()) {
      status = xpcEtherCATstop(1, 1000 /* 1 second timeout */
        );
    }
  }

  /*------------ S-Function Block: <S63>/BKIN EtherCATinit Process Shutdown Network ------------*/
  {
    int_T status;
    if (!xpcIsModelInit()) {
      status = xpcEtherCATstop(0, 1000 /* 1 second timeout */
        );
    }
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  if (tid == 1)
    tid = 0;
  vmr_rwd_fix_leftarm_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  vmr_rwd_fix_leftarm_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  vmr_rwd_fix_leftarm_initialize();
}

void MdlTerminate(void)
{
  vmr_rwd_fix_leftarm_terminate();
}

/* Registration function */
RT_MODEL_vmr_rwd_fix_leftarm_T *vmr_rwd_fix_leftarm(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)vmr_rwd_fix_leftarm_M, 0,
                sizeof(RT_MODEL_vmr_rwd_fix_leftarm_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&vmr_rwd_fix_leftarm_M->solverInfo,
                          &vmr_rwd_fix_leftarm_M->Timing.simTimeStep);
    rtsiSetTPtr(&vmr_rwd_fix_leftarm_M->solverInfo, &rtmGetTPtr
                (vmr_rwd_fix_leftarm_M));
    rtsiSetStepSizePtr(&vmr_rwd_fix_leftarm_M->solverInfo,
                       &vmr_rwd_fix_leftarm_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&vmr_rwd_fix_leftarm_M->solverInfo,
                          (&rtmGetErrorStatus(vmr_rwd_fix_leftarm_M)));
    rtsiSetRTModelPtr(&vmr_rwd_fix_leftarm_M->solverInfo, vmr_rwd_fix_leftarm_M);
  }

  rtsiSetSimTimeStep(&vmr_rwd_fix_leftarm_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&vmr_rwd_fix_leftarm_M->solverInfo,"FixedStepDiscrete");
  vmr_rwd_fix_leftarm_M->solverInfoPtr = (&vmr_rwd_fix_leftarm_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = vmr_rwd_fix_leftarm_M->Timing.sampleTimeTaskIDArray;
    int_T i;
    for (i = 0; i < 6; i++) {
      mdlTsMap[i] = i;
    }

    vmr_rwd_fix_leftarm_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes =
      (&vmr_rwd_fix_leftarm_M->Timing.sampleTimesArray[0]);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes =
      (&vmr_rwd_fix_leftarm_M->Timing.offsetTimesArray[0]);

    /* task periods */
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[0] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[1] = (0.00025);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[2] = (0.0005);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[3] = (0.001);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[4] = (0.002);
    vmr_rwd_fix_leftarm_M->Timing.sampleTimes[5] = (0.1);

    /* task offsets */
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[0] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[1] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[2] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[3] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[4] = (0.0);
    vmr_rwd_fix_leftarm_M->Timing.offsetTimes[5] = (0.0);
  }

  rtmSetTPtr(vmr_rwd_fix_leftarm_M, &vmr_rwd_fix_leftarm_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = vmr_rwd_fix_leftarm_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHitsArray;
    vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    vmr_rwd_fix_leftarm_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(vmr_rwd_fix_leftarm_M, -1);
  vmr_rwd_fix_leftarm_M->Timing.stepSize0 = 0.00025;
  vmr_rwd_fix_leftarm_M->Timing.stepSize1 = 0.00025;
  vmr_rwd_fix_leftarm_M->Timing.stepSize2 = 0.0005;
  vmr_rwd_fix_leftarm_M->Timing.stepSize3 = 0.001;
  vmr_rwd_fix_leftarm_M->Timing.stepSize4 = 0.002;
  vmr_rwd_fix_leftarm_M->Timing.stepSize5 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    vmr_rwd_fix_leftarm_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(vmr_rwd_fix_leftarm_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(vmr_rwd_fix_leftarm_M->rtwLogInfo, (NULL));
    rtliSetLogT(vmr_rwd_fix_leftarm_M->rtwLogInfo, "");
    rtliSetLogX(vmr_rwd_fix_leftarm_M->rtwLogInfo, "");
    rtliSetLogXFinal(vmr_rwd_fix_leftarm_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(vmr_rwd_fix_leftarm_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(vmr_rwd_fix_leftarm_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(vmr_rwd_fix_leftarm_M->rtwLogInfo, 0);
    rtliSetLogDecimation(vmr_rwd_fix_leftarm_M->rtwLogInfo, 1);
    rtliSetLogY(vmr_rwd_fix_leftarm_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(vmr_rwd_fix_leftarm_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(vmr_rwd_fix_leftarm_M->rtwLogInfo, (NULL));
  }

  vmr_rwd_fix_leftarm_M->solverInfoPtr = (&vmr_rwd_fix_leftarm_M->solverInfo);
  vmr_rwd_fix_leftarm_M->Timing.stepSize = (0.00025);
  rtsiSetFixedStepSize(&vmr_rwd_fix_leftarm_M->solverInfo, 0.00025);
  rtsiSetSolverMode(&vmr_rwd_fix_leftarm_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  vmr_rwd_fix_leftarm_M->ModelData.blockIO = ((void *) &vmr_rwd_fix_leftarm_B);
  (void) memset(((void *) &vmr_rwd_fix_leftarm_B), 0,
                sizeof(B_vmr_rwd_fix_leftarm_T));

  {
    int32_T i;
    for (i = 0; i < 25000; i++) {
      vmr_rwd_fix_leftarm_B.BlockDefinitions[i] = 0.0;
    }

    for (i = 0; i < 2000; i++) {
      vmr_rwd_fix_leftarm_B.BlockSequence[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.TPSelector[i] = 0.0;
    }

    for (i = 0; i < 5000; i++) {
      vmr_rwd_fix_leftarm_B.Convert1[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.Convert11[i] = 0.0;
    }

    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_B.LoadTable[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Taskwideparam[i] = 0.0;
    }

    for (i = 0; i < 32; i++) {
      vmr_rwd_fix_leftarm_B.ArraySelector[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Hand_Pos[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_b[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_i[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_a[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_o[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_e[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_e[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Memory_d[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_ec[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.Reshape[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.Reshape1[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Selector_l[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_n0[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_p[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_l[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.Switch[i] = 0.0;
    }

    for (i = 0; i < 25; i++) {
      vmr_rwd_fix_leftarm_B.Selector_j[i] = 0.0;
    }

    for (i = 0; i < 55; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation1_d[i] = 0.0;
    }

    for (i = 0; i < 490; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenation_b[i] = 0.0;
    }

    for (i = 0; i < 490; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition2[i] = 0.0;
    }

    for (i = 0; i < 1120; i++) {
      vmr_rwd_fix_leftarm_B.MatrixConcatenate[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition1_i[i] = 0.0;
    }

    for (i = 0; i < 40; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition_k[i] = 0.0;
    }

    for (i = 0; i < 13; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition2_er[i] = 0.0;
    }

    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition3_n[i] = 0.0;
    }

    for (i = 0; i < 68; i++) {
      vmr_rwd_fix_leftarm_B.ArmKinematics[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.CustomData1[i] = 0.0;
    }

    for (i = 0; i < 18; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition_d[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_p[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_B.readstatus[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.SFunctionBuilder_o3[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Hand_Pos_j[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.Selector2[i] = 0.0;
    }

    for (i = 0; i < 150; i++) {
      vmr_rwd_fix_leftarm_B.RateTransition6_a[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.VectorConcatenate[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODE[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_e[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_n[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODES[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODES_k[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.Switch1_ot[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_o[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_MOD[i] = 0.0;
    }

    for (i = 0; i < 128; i++) {
      vmr_rwd_fix_leftarm_B.intarget[i] = 0.0;
    }

    for (i = 0; i < 32; i++) {
      vmr_rwd_fix_leftarm_B.distance[i] = 0.0;
    }

    for (i = 0; i < 1024; i++) {
      vmr_rwd_fix_leftarm_B.distance_e[i] = 0.0;
    }

    for (i = 0; i < 140; i++) {
      vmr_rwd_fix_leftarm_B.VCODES_out[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Selector_n[i] = 0.0;
    }

    for (i = 0; i < 500; i++) {
      vmr_rwd_fix_leftarm_B.Selector1[i] = 0.0;
    }

    for (i = 0; i < 1000; i++) {
      vmr_rwd_fix_leftarm_B.Selector2_l[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.Concatenation1[i] = 0.0;
    }

    for (i = 0; i < 352; i++) {
      vmr_rwd_fix_leftarm_B.target_vector[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_l[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.VCODE_mod[i] = 0.0;
    }

    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_B.DataStoreRead[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_B.convert[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Selector_c[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Selector1_m[i] = 0.0;
    }

    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_B.Selector2_o[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Selector1_a[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Selector2_i[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      vmr_rwd_fix_leftarm_B.Read[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.ReadHW[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.ReadKinematics[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.Primaryread[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_B.torquefeedback1[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.ErrMsgs[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.newMessage[i] = 0.0;
    }

    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_e[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10_l[i] = 0.0;
    }

    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport12[i] = 0.0;
    }

    for (i = 0; i < 150; i++) {
      vmr_rwd_fix_leftarm_B.kinarm_data[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.primary_encoder_data_out[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      vmr_rwd_fix_leftarm_B.DataStore[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.DataStore1[i] = 0.0;
    }

    for (i = 0; i < 16; i++) {
      vmr_rwd_fix_leftarm_B.calibrationsOut[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.settingsOut[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.outMem[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.kinematicsOut[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.kinematicsOutPrimary[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.outVals[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.kinematics[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.primary[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Conversion1[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.Conversion2[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion3_d[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion4_g[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.robot1DataOut[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.robot2DataOut[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.robot1DataOut_p[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.robot2DataOut_g[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.robot1PrimaryEncDataOut[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.robot2PrimaryEncDataOut[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      vmr_rwd_fix_leftarm_B.Switch_p[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      vmr_rwd_fix_leftarm_B.Switch1_b[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_g[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_e[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.intAddresses[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.floatAddresses[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.errVals[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.DCErrVals[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.R2M2_EMCY_codes[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.R2M1_EMCY_codes[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.writeData[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.A2M2Convert[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.A2M1Convert[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.R1M2_EMCY_codes[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.R1M1_EMCY_codes[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.writeData_e[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.A1M2Convert[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.A1M1Convert[i] = 0.0;
    }

    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_B.Convert19_e[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_a1[i] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq[i] = 0.0F;
    }

    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_B.Reshape_i[i] = 0.0F;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_a5[i] = 0.0F;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1[i] = 0.0F;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.SFunction_o1[i] = 0.0F;
    }

    for (i = 0; i < 10; i++) {
      vmr_rwd_fix_leftarm_B.SFunction_o2[i] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.SFunction_o5[i] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_B.SFunction_o6[i] = 0.0F;
    }

    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_B.TmpRTBAtSendControlMachineInport1[i] = 0.0F;
    }

    for (i = 0; i < 410; i++) {
      vmr_rwd_fix_leftarm_B.data_out[i] = 0.0F;
    }

    for (i = 0; i < 108; i++) {
      vmr_rwd_fix_leftarm_B.DataTypeConversion_p1[i] = 0.0F;
    }

    for (i = 0; i < 108; i++) {
      vmr_rwd_fix_leftarm_B.t2[i] = 0.0F;
    }

    for (i = 0; i < 108; i++) {
      vmr_rwd_fix_leftarm_B.t1[i] = 0.0F;
    }

    for (i = 0; i < 724; i++) {
      vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSelectorInport1[i] = 0.0F;
    }

    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_B.Selector_eu[i] = 0.0F;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_k.VCODE[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_p.VCODE[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_l.VCODE[i] = 0.0;
    }

    for (i = 0; i < 70; i++) {
      vmr_rwd_fix_leftarm_B.sf_EmbeddedMATLABFunction_h.VCODE[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.sf_SDOreadmachine_h.floatSDOValues[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValues[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValues[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValues[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValues[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.sf_faultmonitor1_h.EMCYMsg[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.sf_faultmonitor1_c.EMCYMsg[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_B.sf_SDOreadmachine.floatSDOValues[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValues[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValues[i] = 0.0;
    }

    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValues[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValues[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.sf_faultmonitor1_l.EMCYMsg[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_B.sf_faultmonitor1.EMCYMsg[i] = 0.0;
    }

    vmr_rwd_fix_leftarm_B.RunCommandReceive_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion = 0.0;
    vmr_rwd_fix_leftarm_B.PauseType = 0.0;
    vmr_rwd_fix_leftarm_B.Convert18 = 0.0;
    vmr_rwd_fix_leftarm_B.UseTaskProtocolBlockSequenceFlag = 0.0;
    vmr_rwd_fix_leftarm_B.NextBlock = 0.0;
    vmr_rwd_fix_leftarm_B.Convert16 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert17 = 0.0;
    vmr_rwd_fix_leftarm_B.MinMax = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert10[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert10[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert12 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert13[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert13[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert13[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert14[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert14[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert15 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert7 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert8 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert9[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert9[1] = 0.0;
    vmr_rwd_fix_leftarm_B.frame_of_reference_center[0] = 0.0;
    vmr_rwd_fix_leftarm_B.frame_of_reference_center[1] = 0.0;
    vmr_rwd_fix_leftarm_B.LibraryPatchVersion = 0.0;
    vmr_rwd_fix_leftarm_B.LibraryVersion = 0.0;
    vmr_rwd_fix_leftarm_B.TaskVersion = 0.0;
    vmr_rwd_fix_leftarm_B.xPCVersion = 0.0;
    vmr_rwd_fix_leftarm_B.dlmbuildtime = 0.0;
    vmr_rwd_fix_leftarm_B.Timestamp = 0.0;
    vmr_rwd_fix_leftarm_B.conv = 0.0;
    vmr_rwd_fix_leftarm_B.RunStatus = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition10 = 0.0;
    vmr_rwd_fix_leftarm_B.Memory[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_n[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_n[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_n[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_n[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_e = 0.0;
    vmr_rwd_fix_leftarm_B.Gain = 0.0;
    vmr_rwd_fix_leftarm_B.Dominant_Arm = 0.0;
    vmr_rwd_fix_leftarm_B.Array_Selector1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Array_Selector1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Dominant_Arm_j = 0.0;
    vmr_rwd_fix_leftarm_B.MultiportSwitch[0] = 0.0;
    vmr_rwd_fix_leftarm_B.MultiportSwitch[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory1 = 0.0;
    vmr_rwd_fix_leftarm_B.LoggingEnable = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition9 = 0.0;
    vmr_rwd_fix_leftarm_B.CurrentTPIndex = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition8 = 0.0;
    vmr_rwd_fix_leftarm_B.CurrentBlockIndex = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition7 = 0.0;
    vmr_rwd_fix_leftarm_B.CurrentTrialNumberinBlock = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition6 = 0.0;
    vmr_rwd_fix_leftarm_B.CurrentBlockNumberinSet = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition5 = 0.0;
    vmr_rwd_fix_leftarm_B.CurrentTrialNumberinSet = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition4 = 0.0;
    vmr_rwd_fix_leftarm_B.LastFrameSent1 = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition12 = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_j = 0.0;
    vmr_rwd_fix_leftarm_B.Add = 0.0;
    vmr_rwd_fix_leftarm_B.Abs = 0.0;
    vmr_rwd_fix_leftarm_B.Sign = 0.0;
    vmr_rwd_fix_leftarm_B.Memory1_m = 0.0;
    vmr_rwd_fix_leftarm_B.Subtract = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_c = 0.0;
    vmr_rwd_fix_leftarm_B.Switch_o[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch_o[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_d = 0.0;
    vmr_rwd_fix_leftarm_B.Convert = 0.0;
    vmr_rwd_fix_leftarm_B.LastFrameSent = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition3 = 0.0;
    vmr_rwd_fix_leftarm_B.Receive_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert1_m = 0.0;
    vmr_rwd_fix_leftarm_B.LastFrameAcknowledged = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_e = 0.0;
    vmr_rwd_fix_leftarm_B.ButtonStatus = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1 = 0.0;
    vmr_rwd_fix_leftarm_B.Servoupdatecount = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition = 0.0;
    vmr_rwd_fix_leftarm_B.TaskControlButton = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition11 = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtNumberofEventCodesOutport1 = 0.0;
    vmr_rwd_fix_leftarm_B.EventCodes = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_ea[1] = 0.0;
    vmr_rwd_fix_leftarm_B.KinarmDataWidth = 0.0;
    vmr_rwd_fix_leftarm_B.touint1 = 0.0;
    vmr_rwd_fix_leftarm_B.Subtract_h = 0.0;
    vmr_rwd_fix_leftarm_B.AnalogDataWidth = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_c = 0.0;
    vmr_rwd_fix_leftarm_B.VectorConcatenate1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.VectorConcatenate1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.AnalogData[0] = 0.0;
    vmr_rwd_fix_leftarm_B.AnalogData[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_c[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_c[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_b[2] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_b[3] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_b = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_eo = 0.0;
    vmr_rwd_fix_leftarm_B.Subtract_g = 0.0;
    vmr_rwd_fix_leftarm_B.NumberofEventCodes = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_c2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition4_n[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition4_n[1] = 0.0;
    vmr_rwd_fix_leftarm_B.isEP = 0.0;
    vmr_rwd_fix_leftarm_B.isHumanExo = 0.0;
    vmr_rwd_fix_leftarm_B.isUTSExo = 0.0;
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc = 0.0;
    vmr_rwd_fix_leftarm_B.Sum[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Sum[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Sum[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Sum[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Product2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Product2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Product2[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Product2[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch_i = 0.0;
    vmr_rwd_fix_leftarm_B.up_durationms = 0.0;
    vmr_rwd_fix_leftarm_B.down_durationms = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_a = 0.0;
    vmr_rwd_fix_leftarm_B.Product[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Product[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1 = 0.0;
    vmr_rwd_fix_leftarm_B.Product1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Product1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch1 = 0.0;
    vmr_rwd_fix_leftarm_B.AddTorques[0] = 0.0;
    vmr_rwd_fix_leftarm_B.AddTorques[1] = 0.0;
    vmr_rwd_fix_leftarm_B.AddTorques[2] = 0.0;
    vmr_rwd_fix_leftarm_B.AddTorques[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory1_p = 0.0;
    vmr_rwd_fix_leftarm_B.ArmOrientation = 0.0;
    vmr_rwd_fix_leftarm_B.M1orientation = 0.0;
    vmr_rwd_fix_leftarm_B.M2Orientation = 0.0;
    vmr_rwd_fix_leftarm_B.M1GearRatio = 0.0;
    vmr_rwd_fix_leftarm_B.M2GearRatio = 0.0;
    vmr_rwd_fix_leftarm_B.torqueconstant = 0.0;
    vmr_rwd_fix_leftarm_B.ArmOrientation_c = 0.0;
    vmr_rwd_fix_leftarm_B.M1orientation_f = 0.0;
    vmr_rwd_fix_leftarm_B.M2Orientation_c = 0.0;
    vmr_rwd_fix_leftarm_B.M1GearRatio_h = 0.0;
    vmr_rwd_fix_leftarm_B.M2GearRatio_d = 0.0;
    vmr_rwd_fix_leftarm_B.torqueconstant_m = 0.0;
    vmr_rwd_fix_leftarm_B.isEP_o = 0.0;
    vmr_rwd_fix_leftarm_B.isHumanExo_f = 0.0;
    vmr_rwd_fix_leftarm_B.isNHPExo = 0.0;
    vmr_rwd_fix_leftarm_B.isClassicExo = 0.0;
    vmr_rwd_fix_leftarm_B.isUTSExo_o = 0.0;
    vmr_rwd_fix_leftarm_B.isPMAC = 0.0;
    vmr_rwd_fix_leftarm_B.isECAT = 0.0;
    vmr_rwd_fix_leftarm_B.robotRevision = 0.0;
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_a = 0.0;
    vmr_rwd_fix_leftarm_B.robottype = 0.0;
    vmr_rwd_fix_leftarm_B.robotversion = 0.0;
    vmr_rwd_fix_leftarm_B.isEP_k = 0.0;
    vmr_rwd_fix_leftarm_B.isHumanExo_p = 0.0;
    vmr_rwd_fix_leftarm_B.isNHPExo_n = 0.0;
    vmr_rwd_fix_leftarm_B.isClassicExo_g = 0.0;
    vmr_rwd_fix_leftarm_B.isUTSExo_o3 = 0.0;
    vmr_rwd_fix_leftarm_B.isPMAC_n = 0.0;
    vmr_rwd_fix_leftarm_B.isECAT_b = 0.0;
    vmr_rwd_fix_leftarm_B.robotRevision_k = 0.0;
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_d = 0.0;
    vmr_rwd_fix_leftarm_B.robottype_c = 0.0;
    vmr_rwd_fix_leftarm_B.robotversion_i = 0.0;
    vmr_rwd_fix_leftarm_B.robot_count = 0.0;
    vmr_rwd_fix_leftarm_B.has_force_plate_1 = 0.0;
    vmr_rwd_fix_leftarm_B.has_force_plate_2 = 0.0;
    vmr_rwd_fix_leftarm_B.has_gaze_tracker = 0.0;
    vmr_rwd_fix_leftarm_B.has_robot_lift = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_d = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_j = 0.0;
    vmr_rwd_fix_leftarm_B.SFunctionBuilder_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.MultiportSwitch_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch2[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch2[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Reshape_k[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Reshape_k[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Reshape_k[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Reshape_k[3] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition3_h = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconvert_to_segment_anglesInport3[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtxy_to_segment_angles_EXOInport3[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch_ir[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch_ir[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TSamp[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TSamp[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Diff[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Diff[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch1_o[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Switch1_o[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TSamp_d[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TSamp_d[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1_d[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1_d[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Diff_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Diff_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Constant = 0.0;
    vmr_rwd_fix_leftarm_B.CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone
      = 0.0;
    vmr_rwd_fix_leftarm_B.DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon
      = 0.0;
    vmr_rwd_fix_leftarm_B.DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio
      = 0.0;
    vmr_rwd_fix_leftarm_B.DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar
      = 0.0;
    vmr_rwd_fix_leftarm_B.END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali
      = 0.0;
    vmr_rwd_fix_leftarm_B.HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec
      = 0.0;
    vmr_rwd_fix_leftarm_B.MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf
      = 0.0;
    vmr_rwd_fix_leftarm_B.ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald
      = 0.0;
    vmr_rwd_fix_leftarm_B.ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri
      = 0.0;
    vmr_rwd_fix_leftarm_B.ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun
      = 0.0;
    vmr_rwd_fix_leftarm_B.START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri
      = 0.0;
    vmr_rwd_fix_leftarm_B.WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt
      = 0.0;
    vmr_rwd_fix_leftarm_B.INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_REWARDReward_OnRewardisgivennone = 0.0;
    vmr_rwd_fix_leftarm_B.E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone =
      0.0;
    vmr_rwd_fix_leftarm_B.E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust
      = 0.0;
    vmr_rwd_fix_leftarm_B.E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre
      = 0.0;
    vmr_rwd_fix_leftarm_B.COLORColorcolourColornone = 0.0;
    vmr_rwd_fix_leftarm_B.HITCOLORHitColorcolourColorwhenthetargetishitnone =
      0.0;
    vmr_rwd_fix_leftarm_B.LABELLabeltextlabelDefaultlabeltextnone = 0.0;
    vmr_rwd_fix_leftarm_B.LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone = 0.0;
    vmr_rwd_fix_leftarm_B.LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone =
      0.0;
    vmr_rwd_fix_leftarm_B.ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone
      = 0.0;
    vmr_rwd_fix_leftarm_B.STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone
      = 0.0;
    vmr_rwd_fix_leftarm_B.STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone
      = 0.0;
    vmr_rwd_fix_leftarm_B.col_xXfloatXPositioncmofthetargetrelativetolocal00none
      = 0.0;
    vmr_rwd_fix_leftarm_B.col_yYfloatYPositioncmofthetargetrelativetolocal00none
      = 0.0;
    vmr_rwd_fix_leftarm_B.VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone = 0.0;
    vmr_rwd_fix_leftarm_B.INSTRUCTIONS = 0.0;
    vmr_rwd_fix_leftarm_B.LOAD_FOREITHER = 0.0;
    vmr_rwd_fix_leftarm_B.K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft
      = 0.0;
    vmr_rwd_fix_leftarm_B.K_UNUSEDUnusedintegerNotcurrentlyusednone = 0.0;
    vmr_rwd_fix_leftarm_B.K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw
      = 0.0;
    vmr_rwd_fix_leftarm_B.rotation = 0.0;
    vmr_rwd_fix_leftarm_B.cursstate = 0.0;
    vmr_rwd_fix_leftarm_B.fbswitch = 0.0;
    vmr_rwd_fix_leftarm_B.ringstate = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos[0] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos[1] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos[2] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos[3] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos_p[2] = 0.0;
    vmr_rwd_fix_leftarm_B.CursorPos_p[3] = 0.0;
    vmr_rwd_fix_leftarm_B.event_code = 0.0;
    vmr_rwd_fix_leftarm_B.targetA_row = 0.0;
    vmr_rwd_fix_leftarm_B.targetA_state = 0.0;
    vmr_rwd_fix_leftarm_B.targetB_row = 0.0;
    vmr_rwd_fix_leftarm_B.targetB_state = 0.0;
    vmr_rwd_fix_leftarm_B.reward_state = 0.0;
    vmr_rwd_fix_leftarm_B.instruct_num = 0.0;
    vmr_rwd_fix_leftarm_B.tone = 0.0;
    vmr_rwd_fix_leftarm_B.rotation_on = 0.0;
    vmr_rwd_fix_leftarm_B.handvis_state = 0.0;
    vmr_rwd_fix_leftarm_B.do_clamp = 0.0;
    vmr_rwd_fix_leftarm_B.armIdx = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVals[0] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVals[1] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVals[2] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVals[3] = 0.0;
    vmr_rwd_fix_leftarm_B.constants[0] = 0.0;
    vmr_rwd_fix_leftarm_B.constants[1] = 0.0;
    vmr_rwd_fix_leftarm_B.constants[2] = 0.0;
    vmr_rwd_fix_leftarm_B.SEGMENT_ANG[0] = 0.0;
    vmr_rwd_fix_leftarm_B.SEGMENT_ANG[1] = 0.0;
    vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.SEGMENT_ANG_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport7[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport9[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport9[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport10[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFB[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TorqueFF[3] = 0.0;
    vmr_rwd_fix_leftarm_B.force_scale = 0.0;
    vmr_rwd_fix_leftarm_B.virtual_pos[0] = 0.0;
    vmr_rwd_fix_leftarm_B.virtual_pos[1] = 0.0;
    vmr_rwd_fix_leftarm_B.state = 0.0;
    vmr_rwd_fix_leftarm_B.Convert_j = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_p = 0.0;
    vmr_rwd_fix_leftarm_B.vis_cmd_len = 0.0;
    vmr_rwd_fix_leftarm_B.vis_cmd_cropped = 0.0;
    vmr_rwd_fix_leftarm_B.vcode_err_id = 0.0;
    vmr_rwd_fix_leftarm_B.last_frame_ack = 0.0;
    vmr_rwd_fix_leftarm_B.last_perm_ack = 0.0;
    vmr_rwd_fix_leftarm_B.delay = 0.0;
    vmr_rwd_fix_leftarm_B.output = 0.0;
    vmr_rwd_fix_leftarm_B.soundON = 0.0;
    vmr_rwd_fix_leftarm_B.hand = 0.0;
    vmr_rwd_fix_leftarm_B.cursor = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_o[1] = 0.0;
    vmr_rwd_fix_leftarm_B.clipped_torques[0] = 0.0;
    vmr_rwd_fix_leftarm_B.clipped_torques[1] = 0.0;
    vmr_rwd_fix_leftarm_B.clipped_torques[2] = 0.0;
    vmr_rwd_fix_leftarm_B.clipped_torques[3] = 0.0;
    vmr_rwd_fix_leftarm_B.y[0] = 0.0;
    vmr_rwd_fix_leftarm_B.y[1] = 0.0;
    vmr_rwd_fix_leftarm_B.y[2] = 0.0;
    vmr_rwd_fix_leftarm_B.y[3] = 0.0;
    vmr_rwd_fix_leftarm_B.out[0] = 0.0;
    vmr_rwd_fix_leftarm_B.out[1] = 0.0;
    vmr_rwd_fix_leftarm_B.out[2] = 0.0;
    vmr_rwd_fix_leftarm_B.out[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1[3] = 0.0;
    vmr_rwd_fix_leftarm_B.out_e[0] = 0.0;
    vmr_rwd_fix_leftarm_B.out_e[1] = 0.0;
    vmr_rwd_fix_leftarm_B.out_e[2] = 0.0;
    vmr_rwd_fix_leftarm_B.out_e[3] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_k = 0.0;
    vmr_rwd_fix_leftarm_B.Arm1_j[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm1_j[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm2_c[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Arm2_c[1] = 0.0;
    vmr_rwd_fix_leftarm_B.total_trials = 0.0;
    vmr_rwd_fix_leftarm_B.trials_in_block = 0.0;
    vmr_rwd_fix_leftarm_B.total_blocks = 0.0;
    vmr_rwd_fix_leftarm_B.Delay1 = 0.0;
    vmr_rwd_fix_leftarm_B.Product3 = 0.0;
    vmr_rwd_fix_leftarm_B.TaskClock = 0.0;
    vmr_rwd_fix_leftarm_B.Product_i = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_g = 0.0;
    vmr_rwd_fix_leftarm_B.Product2_n = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_n = 0.0;
    vmr_rwd_fix_leftarm_B.repeat_last_trial = 0.0;
    vmr_rwd_fix_leftarm_B.extra_trials[0] = 0.0;
    vmr_rwd_fix_leftarm_B.extra_trials[1] = 0.0;
    vmr_rwd_fix_leftarm_B.value = 0.0;
    vmr_rwd_fix_leftarm_B.y_b = 0.0;
    vmr_rwd_fix_leftarm_B.z = 0.0;
    vmr_rwd_fix_leftarm_B.target_vector_length = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_f[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2[3] = 0.0;
    vmr_rwd_fix_leftarm_B.deltas[0] = 0.0;
    vmr_rwd_fix_leftarm_B.deltas[1] = 0.0;
    vmr_rwd_fix_leftarm_B.deltas[2] = 0.0;
    vmr_rwd_fix_leftarm_B.deltas[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Product_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Product_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Product_m[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Product_m[3] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3[2] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3[3] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion4 = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion5 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert1_p = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_i = 0.0;
    vmr_rwd_fix_leftarm_B.Convert19[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert19[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert19[2] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_l[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport1[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtconverttoseconds2Inport2 = 0.0;
    vmr_rwd_fix_leftarm_B.Convert2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert2[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert3 = 0.0;
    vmr_rwd_fix_leftarm_B.Gain_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Gain_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Gain_b[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert4[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert4[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Convert4[2] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_kg[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_kg[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_kg[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Receive_o2_j = 0.0;
    vmr_rwd_fix_leftarm_B.event_data_out[0] = 0.0;
    vmr_rwd_fix_leftarm_B.event_data_out[1] = 0.0;
    vmr_rwd_fix_leftarm_B.event_data_out[2] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeXYCalculated[1] = 0.0;
    vmr_rwd_fix_leftarm_B.pupil_area_GLOBAL = 0.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gaze_unit_vector_GLOBAL[2] = 0.0;
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[0] = 0.0;
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[1] = 0.0;
    vmr_rwd_fix_leftarm_B.pupil_GLOBAL[2] = 0.0;
    vmr_rwd_fix_leftarm_B.timestamp_out = 0.0;
    vmr_rwd_fix_leftarm_B.start_time_out = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_h = 0.0;
    vmr_rwd_fix_leftarm_B.systemtype = 0.0;
    vmr_rwd_fix_leftarm_B.ReadHasFT[0] = 0.0;
    vmr_rwd_fix_leftarm_B.ReadHasFT[1] = 0.0;
    vmr_rwd_fix_leftarm_B.ArmOrientation_b = 0.0;
    vmr_rwd_fix_leftarm_B.M1orientation_h = 0.0;
    vmr_rwd_fix_leftarm_B.M2Orientation_l = 0.0;
    vmr_rwd_fix_leftarm_B.M1GearRatio_b = 0.0;
    vmr_rwd_fix_leftarm_B.M2GearRatio_p = 0.0;
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_n = 0.0;
    vmr_rwd_fix_leftarm_B.ArmOrientation_l = 0.0;
    vmr_rwd_fix_leftarm_B.M1orientation_n = 0.0;
    vmr_rwd_fix_leftarm_B.M2Orientation_cw = 0.0;
    vmr_rwd_fix_leftarm_B.M1GearRatio_k = 0.0;
    vmr_rwd_fix_leftarm_B.M2GearRatio_l = 0.0;
    vmr_rwd_fix_leftarm_B.HasSecondaryEnc_f = 0.0;
    vmr_rwd_fix_leftarm_B.shoulderangleoffset = 0.0;
    vmr_rwd_fix_leftarm_B.elbowangleoffset = 0.0;
    vmr_rwd_fix_leftarm_B.ShoulderX = 0.0;
    vmr_rwd_fix_leftarm_B.ShoulderY = 0.0;
    vmr_rwd_fix_leftarm_B.L1 = 0.0;
    vmr_rwd_fix_leftarm_B.L2 = 0.0;
    vmr_rwd_fix_leftarm_B.Pointeroffset = 0.0;
    vmr_rwd_fix_leftarm_B.L3Error = 0.0;
    vmr_rwd_fix_leftarm_B.robottype_e = 0.0;
    vmr_rwd_fix_leftarm_B.torqueconstant_g = 0.0;
    vmr_rwd_fix_leftarm_B.robotversion_g = 0.0;
    vmr_rwd_fix_leftarm_B.shoulderangleoffset_b = 0.0;
    vmr_rwd_fix_leftarm_B.elbowangleoffset_a = 0.0;
    vmr_rwd_fix_leftarm_B.ShoulderX_a = 0.0;
    vmr_rwd_fix_leftarm_B.ShoulderY_b = 0.0;
    vmr_rwd_fix_leftarm_B.L1_c = 0.0;
    vmr_rwd_fix_leftarm_B.L2_f = 0.0;
    vmr_rwd_fix_leftarm_B.Pointeroffset_b = 0.0;
    vmr_rwd_fix_leftarm_B.L3Error_f = 0.0;
    vmr_rwd_fix_leftarm_B.robottype_cs = 0.0;
    vmr_rwd_fix_leftarm_B.torqueconstant_i = 0.0;
    vmr_rwd_fix_leftarm_B.robotversion_f = 0.0;
    vmr_rwd_fix_leftarm_B.Statusread1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Statusread1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Statusread1_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Statusread1_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.active_arm = 0.0;
    vmr_rwd_fix_leftarm_B.delayEstimates[0] = 0.0;
    vmr_rwd_fix_leftarm_B.delayEstimates[1] = 0.0;
    vmr_rwd_fix_leftarm_B.delayEstimates[2] = 0.0;
    vmr_rwd_fix_leftarm_B.delayEstimates[3] = 0.0;
    vmr_rwd_fix_leftarm_B.servoCounter = 0.0;
    vmr_rwd_fix_leftarm_B.calibrationButtonBits = 0.0;
    vmr_rwd_fix_leftarm_B.handFF = 0.0;
    vmr_rwd_fix_leftarm_B.handFF_Dex = 0.0;
    vmr_rwd_fix_leftarm_B.handFBArm = 0.0;
    vmr_rwd_fix_leftarm_B.handFBRadius = 0.0;
    vmr_rwd_fix_leftarm_B.handFBControl = 0.0;
    vmr_rwd_fix_leftarm_B.handFBColor = 0.0;
    vmr_rwd_fix_leftarm_B.hasGaze = 0.0;
    vmr_rwd_fix_leftarm_B.gazeFB = 0.0;
    vmr_rwd_fix_leftarm_B.gazeLocation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeLocation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeTimestamp = 0.0;
    vmr_rwd_fix_leftarm_B.gazePupilArea = 0.0;
    vmr_rwd_fix_leftarm_B.gazeEvent[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeEvent[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeEvent[2] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeVector[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeVector[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gazeVector[2] = 0.0;
    vmr_rwd_fix_leftarm_B.gazePupilLoc[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gazePupilLoc[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gazePupilLoc[2] = 0.0;
    vmr_rwd_fix_leftarm_B.link_lengths[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_lengths[1] = 0.0;
    vmr_rwd_fix_leftarm_B.pointer_offset = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_loc[0] = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_loc[1] = 0.0;
    vmr_rwd_fix_leftarm_B.arm_orientation = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_ang = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_ang = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_velocity = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_velocity = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_acceleration = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_acceleration = 0.0;
    vmr_rwd_fix_leftarm_B.joint_torque_cmd[0] = 0.0;
    vmr_rwd_fix_leftarm_B.joint_torque_cmd[1] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_torque_cmd[0] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_torque_cmd[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_angle[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_angle[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_velocity[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_velocity[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_acceleration[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_acceleration[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_position[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_position[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_velocity[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_velocity[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_acceleration[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_acceleration[1] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_status = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_timestamp = 0.0;
    vmr_rwd_fix_leftarm_B.link_lengths_o[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_lengths_o[1] = 0.0;
    vmr_rwd_fix_leftarm_B.pointer_offset_k = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_loc_o[0] = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_loc_o[1] = 0.0;
    vmr_rwd_fix_leftarm_B.arm_orientation_o = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_ang_h = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_ang_k = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_velocity_k = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_velocity_j = 0.0;
    vmr_rwd_fix_leftarm_B.shoulder_acceleration_c = 0.0;
    vmr_rwd_fix_leftarm_B.elbow_acceleration_j = 0.0;
    vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[0] = 0.0;
    vmr_rwd_fix_leftarm_B.joint_torque_cmd_k[1] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_torque_cmd_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_angle_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_angle_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_velocity_k[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_velocity_k[1] = 0.0;
    vmr_rwd_fix_leftarm_B.link_acceleration_c[0] = 0.0;
    vmr_rwd_fix_leftarm_B.link_acceleration_c[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_position_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_position_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_velocity_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_velocity_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_acceleration_e[0] = 0.0;
    vmr_rwd_fix_leftarm_B.hand_acceleration_e[1] = 0.0;
    vmr_rwd_fix_leftarm_B.motor_status_c = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_uvw_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_uvw_d[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_force_xyz_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_torque_xyz_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.force_sensor_timestamp_k = 0.0;
    vmr_rwd_fix_leftarm_B.DelayRead[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DelayRead[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DelayRead[2] = 0.0;
    vmr_rwd_fix_leftarm_B.DelayRead[3] = 0.0;
    vmr_rwd_fix_leftarm_B.sentMessageCount = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[2] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion3_l[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_l[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_h[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_i[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_p[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport2_bj[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport3_g[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport4_b[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport6[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport8_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.delays[0] = 0.0;
    vmr_rwd_fix_leftarm_B.delays[1] = 0.0;
    vmr_rwd_fix_leftarm_B.delays[2] = 0.0;
    vmr_rwd_fix_leftarm_B.delays[3] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[0] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[1] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[2] = 0.0;
    vmr_rwd_fix_leftarm_B.TmpSignalConversionAtSFunctionInport1_l[3] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVels[0] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVels[1] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVels[2] = 0.0;
    vmr_rwd_fix_leftarm_B.filteredVels[3] = 0.0;
    vmr_rwd_fix_leftarm_B.Receive_o2_o = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_k[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_k[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_a[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_i = 0.0;
    vmr_rwd_fix_leftarm_B.UnitDelay = 0.0;
    vmr_rwd_fix_leftarm_B.DPRAMReadValue = 0.0;
    vmr_rwd_fix_leftarm_B.UnitDelay1 = 0.0;
    vmr_rwd_fix_leftarm_B.Conversion7[0] = 0.0;
    vmr_rwd_fix_leftarm_B.Conversion7[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Conversion7[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Conversion7[3] = 0.0;
    vmr_rwd_fix_leftarm_B.force_scale_b = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_j = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1_o = 0.0;
    vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.Uk1_p = 0.0;
    vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_m = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_i = 0.0;
    vmr_rwd_fix_leftarm_B.Memory1_e = 0.0;
    vmr_rwd_fix_leftarm_B.Memory2 = 0.0;
    vmr_rwd_fix_leftarm_B.offsetrads = 0.0;
    vmr_rwd_fix_leftarm_B.encorient = 0.0;
    vmr_rwd_fix_leftarm_B.L2select2 = 0.0;
    vmr_rwd_fix_leftarm_B.L2select3 = 0.0;
    vmr_rwd_fix_leftarm_B.L2select4 = 0.0;
    vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque[1] = 0.0;
    vmr_rwd_fix_leftarm_B.L2select5 = 0.0;
    vmr_rwd_fix_leftarm_B.R2_constantsReady = 0.0;
    vmr_rwd_fix_leftarm_B.L2select = 0.0;
    vmr_rwd_fix_leftarm_B.L2select1 = 0.0;
    vmr_rwd_fix_leftarm_B.L2select2_p = 0.0;
    vmr_rwd_fix_leftarm_B.L2select3_c = 0.0;
    vmr_rwd_fix_leftarm_B.L2select4_b = 0.0;
    vmr_rwd_fix_leftarm_B.L2select5_a = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_LinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_LinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_PrimaryLinkVelocity = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_RecordedTorque = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_digitalInputs[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2M2_digitalDiagnostics = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_PrimaryLinkVelocity = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_RecordedTorque = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_digitalInputs[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2M1_digitalDiagnostics = 0.0;
    vmr_rwd_fix_leftarm_B.R2_calibrationButton = 0.0;
    vmr_rwd_fix_leftarm_B.R2_RobotType = 0.0;
    vmr_rwd_fix_leftarm_B.R2_absAngleOffset[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_absAngleOffset[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_LinkLength[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_LinkLength[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_L2CalibPinOffset = 0.0;
    vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_maxContinuousTorque_e[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_gearRatios[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_gearRatios[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_isCalibrated = 0.0;
    vmr_rwd_fix_leftarm_B.R2_OffsetRads[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_OffsetRads[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_OffsetRadsPrimary[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_OffsetRadsPrimary[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_RobotRevision = 0.0;
    vmr_rwd_fix_leftarm_B.R2_constantsReady_j = 0.0;
    vmr_rwd_fix_leftarm_B.R2_hasSecondary = 0.0;
    vmr_rwd_fix_leftarm_B.R2_hasFT = 0.0;
    vmr_rwd_fix_leftarm_B.R2_robotOrientation = 0.0;
    vmr_rwd_fix_leftarm_B.R2_motorOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_motorOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_encOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_encOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_encodercounts[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_encodercounts[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_FTSensorAngleOffset = 0.0;
    vmr_rwd_fix_leftarm_B.R2_calibPinAngle[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R2_calibPinAngle[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_ds = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_jr = 0.0;
    vmr_rwd_fix_leftarm_B.encoderCounts[0] = 0.0;
    vmr_rwd_fix_leftarm_B.encoderCounts[1] = 0.0;
    vmr_rwd_fix_leftarm_B.FTSensorOffset = 0.0;
    vmr_rwd_fix_leftarm_B.calibPinAngles[0] = 0.0;
    vmr_rwd_fix_leftarm_B.calibPinAngles[1] = 0.0;
    vmr_rwd_fix_leftarm_B.absAngOffsets[0] = 0.0;
    vmr_rwd_fix_leftarm_B.absAngOffsets[1] = 0.0;
    vmr_rwd_fix_leftarm_B.linkLengths[0] = 0.0;
    vmr_rwd_fix_leftarm_B.linkLengths[1] = 0.0;
    vmr_rwd_fix_leftarm_B.L2CalibPinOffset = 0.0;
    vmr_rwd_fix_leftarm_B.continuousTorques[0] = 0.0;
    vmr_rwd_fix_leftarm_B.continuousTorques[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gearRatios[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gearRatios[1] = 0.0;
    vmr_rwd_fix_leftarm_B.isCalibrated = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRads[0] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRads[1] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRadsPrimary[0] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRadsPrimary[1] = 0.0;
    vmr_rwd_fix_leftarm_B.robotRevision_o = 0.0;
    vmr_rwd_fix_leftarm_B.constantsReady = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_iq = 0.0;
    vmr_rwd_fix_leftarm_B.status = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr[0] = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr[1] = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_ip = 0.0;
    vmr_rwd_fix_leftarm_B.convert_l = 0.0;
    vmr_rwd_fix_leftarm_B.convert1 = 0.0;
    vmr_rwd_fix_leftarm_B.status_e = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_d = 0.0;
    vmr_rwd_fix_leftarm_B.LinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkVel = 0.0;
    vmr_rwd_fix_leftarm_B.torque = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs[0] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs[1] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalDiagnostics = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_ju = 0.0;
    vmr_rwd_fix_leftarm_B.driveID = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_i1[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_l = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_c = 0.0;
    vmr_rwd_fix_leftarm_B.isPermFaulted = 0.0;
    vmr_rwd_fix_leftarm_B.LinkAngle_l = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_f = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkVel_i = 0.0;
    vmr_rwd_fix_leftarm_B.torque_f = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalDiagnostics_c = 0.0;
    vmr_rwd_fix_leftarm_B.calibrationButton = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_b = 0.0;
    vmr_rwd_fix_leftarm_B.driveID_n = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_nh[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_pr[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_g = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_k = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_j = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_f = 0.0;
    vmr_rwd_fix_leftarm_B.Memory1_o = 0.0;
    vmr_rwd_fix_leftarm_B.Memory2_n = 0.0;
    vmr_rwd_fix_leftarm_B.L2select_i = 0.0;
    vmr_rwd_fix_leftarm_B.L2select1_h = 0.0;
    vmr_rwd_fix_leftarm_B.L2select2_o = 0.0;
    vmr_rwd_fix_leftarm_B.L2select3_cn = 0.0;
    vmr_rwd_fix_leftarm_B.L2select4_o = 0.0;
    vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque[1] = 0.0;
    vmr_rwd_fix_leftarm_B.L2select5_c = 0.0;
    vmr_rwd_fix_leftarm_B.R1_constantsReady = 0.0;
    vmr_rwd_fix_leftarm_B.L2select_e = 0.0;
    vmr_rwd_fix_leftarm_B.L2select1_hf = 0.0;
    vmr_rwd_fix_leftarm_B.L2select2_d = 0.0;
    vmr_rwd_fix_leftarm_B.L2select3_p = 0.0;
    vmr_rwd_fix_leftarm_B.L2select4_g = 0.0;
    vmr_rwd_fix_leftarm_B.L2select5_f = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_LinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_LinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_PrimaryLinkVelocity = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_RecordedTorque = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_digitalInputs[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1M2_digitalDiagnostics = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkAngle = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_PrimaryLinkVelocity = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_RecordedTorque = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_digitalInputs[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1M1_digitalDiagnostics = 0.0;
    vmr_rwd_fix_leftarm_B.R1_calibrationButton = 0.0;
    vmr_rwd_fix_leftarm_B.R1_RobotType = 0.0;
    vmr_rwd_fix_leftarm_B.R1_absAngleOffset[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_absAngleOffset[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_LinkLength[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_LinkLength[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_L2CalibPinOffset = 0.0;
    vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_maxContinuousTorque_d[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_gearRatios[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_gearRatios[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_isCalibrated = 0.0;
    vmr_rwd_fix_leftarm_B.R1_OffsetRads[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_OffsetRads[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_OffsetRadsPrimary[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_OffsetRadsPrimary[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_RobotRevision = 0.0;
    vmr_rwd_fix_leftarm_B.R1_constantsReady_p = 0.0;
    vmr_rwd_fix_leftarm_B.R1_hasSecondary = 0.0;
    vmr_rwd_fix_leftarm_B.R1_hasFT = 0.0;
    vmr_rwd_fix_leftarm_B.R1_robotOrientation = 0.0;
    vmr_rwd_fix_leftarm_B.R1_motorOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_motorOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_encOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_encOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_encodercounts[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_encodercounts[1] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_FTSensorAngleOffset = 0.0;
    vmr_rwd_fix_leftarm_B.R1_calibPinAngle[0] = 0.0;
    vmr_rwd_fix_leftarm_B.R1_calibPinAngle[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_dsj = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_d = 0.0;
    vmr_rwd_fix_leftarm_B.encoderCounts_h[0] = 0.0;
    vmr_rwd_fix_leftarm_B.encoderCounts_h[1] = 0.0;
    vmr_rwd_fix_leftarm_B.FTSensorOffset_j = 0.0;
    vmr_rwd_fix_leftarm_B.calibPinAngles_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.calibPinAngles_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.absAngOffsets_c[0] = 0.0;
    vmr_rwd_fix_leftarm_B.absAngOffsets_c[1] = 0.0;
    vmr_rwd_fix_leftarm_B.linkLengths_j[0] = 0.0;
    vmr_rwd_fix_leftarm_B.linkLengths_j[1] = 0.0;
    vmr_rwd_fix_leftarm_B.L2CalibPinOffset_c = 0.0;
    vmr_rwd_fix_leftarm_B.continuousTorques_j[0] = 0.0;
    vmr_rwd_fix_leftarm_B.continuousTorques_j[1] = 0.0;
    vmr_rwd_fix_leftarm_B.gearRatios_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.gearRatios_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.isCalibrated_p = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRads_f[0] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRads_f[1] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[0] = 0.0;
    vmr_rwd_fix_leftarm_B.offsetRadsPrimary_h[1] = 0.0;
    vmr_rwd_fix_leftarm_B.robotRevision_n = 0.0;
    vmr_rwd_fix_leftarm_B.constantsReady_j = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_f = 0.0;
    vmr_rwd_fix_leftarm_B.status_n = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.readAddr_p[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_ns = 0.0;
    vmr_rwd_fix_leftarm_B.convert_b = 0.0;
    vmr_rwd_fix_leftarm_B.convert1_f = 0.0;
    vmr_rwd_fix_leftarm_B.status_d = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_ba = 0.0;
    vmr_rwd_fix_leftarm_B.LinkAngle_g = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_b = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkVel_d = 0.0;
    vmr_rwd_fix_leftarm_B.torque_g = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_h[0] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_h[1] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalDiagnostics_a = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_kb = 0.0;
    vmr_rwd_fix_leftarm_B.driveID_a = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_dj[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_m[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_m[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_dt = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_i = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump[0] = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump[1] = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump[2] = 0.0;
    vmr_rwd_fix_leftarm_B.LinkAngle_c = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkAngle_m = 0.0;
    vmr_rwd_fix_leftarm_B.PrimaryLinkVel_m = 0.0;
    vmr_rwd_fix_leftarm_B.torque_d = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_e[0] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalInputs_e[1] = 0.0;
    vmr_rwd_fix_leftarm_B.digitalDiagnostics_e = 0.0;
    vmr_rwd_fix_leftarm_B.calibrationButton_e = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_c3 = 0.0;
    vmr_rwd_fix_leftarm_B.driveID_n2 = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_j[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[0] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion_hm[1] = 0.0;
    vmr_rwd_fix_leftarm_B.Memory_dp = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_av = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.emcyValPump_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.isPermFaulted_i = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition_g = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition1_h = 0.0;
    vmr_rwd_fix_leftarm_B.Receive1_o2 = 0.0;
    vmr_rwd_fix_leftarm_B.forces[0] = 0.0;
    vmr_rwd_fix_leftarm_B.forces[1] = 0.0;
    vmr_rwd_fix_leftarm_B.forces[2] = 0.0;
    vmr_rwd_fix_leftarm_B.moments[0] = 0.0;
    vmr_rwd_fix_leftarm_B.moments[1] = 0.0;
    vmr_rwd_fix_leftarm_B.moments[2] = 0.0;
    vmr_rwd_fix_leftarm_B.timer = 0.0;
    vmr_rwd_fix_leftarm_B.Receive_o2_m = 0.0;
    vmr_rwd_fix_leftarm_B.forces_g[0] = 0.0;
    vmr_rwd_fix_leftarm_B.forces_g[1] = 0.0;
    vmr_rwd_fix_leftarm_B.forces_g[2] = 0.0;
    vmr_rwd_fix_leftarm_B.moments_p[0] = 0.0;
    vmr_rwd_fix_leftarm_B.moments_p[1] = 0.0;
    vmr_rwd_fix_leftarm_B.moments_p[2] = 0.0;
    vmr_rwd_fix_leftarm_B.timer_c = 0.0;
    vmr_rwd_fix_leftarm_B.trigger = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_js[0] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_js[1] = 0.0;
    vmr_rwd_fix_leftarm_B.RateTransition2_js[2] = 0.0;
    vmr_rwd_fix_leftarm_B.Pckt_Recd = 0.0;
    vmr_rwd_fix_leftarm_B.Pckt_Recd2 = 0.0;
    vmr_rwd_fix_leftarm_B.doublereads = 0.0;
    vmr_rwd_fix_leftarm_B.UDPReceive_o6 = 0.0;
    vmr_rwd_fix_leftarm_B.TmpRTBAtforcestrobeOutport1 = 0.0;
    vmr_rwd_fix_leftarm_B.TaskClock_a = 0.0;
    vmr_rwd_fix_leftarm_B.queue_size = 0.0;
    vmr_rwd_fix_leftarm_B.timeouts = 0.0;
    vmr_rwd_fix_leftarm_B.RqstUDPReset = 0.0;
    vmr_rwd_fix_leftarm_B.UDPResets = 0.0;
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[0] = 0.0;
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[1] = 0.0;
    vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2[2] = 0.0;
    vmr_rwd_fix_leftarm_B.strobe_out = 0.0;
    vmr_rwd_fix_leftarm_B.resetUDP = 0.0;
    vmr_rwd_fix_leftarm_B.queue_size_e = 0.0;
    vmr_rwd_fix_leftarm_B.total_timeouts = 0.0;
    vmr_rwd_fix_leftarm_B.UnitDelay_h = 0.0;
    vmr_rwd_fix_leftarm_B.Sum_j = 0.0;
    vmr_rwd_fix_leftarm_B.Width = 0.0;
    vmr_rwd_fix_leftarm_B.IdealFramesPerPacket = 0.0;
    vmr_rwd_fix_leftarm_B.MinMax_k = 0.0;
    vmr_rwd_fix_leftarm_B.MathFunction = 0.0;
    vmr_rwd_fix_leftarm_B.Subtract_o = 0.0;
    vmr_rwd_fix_leftarm_B.Product_l = 0.0;
    vmr_rwd_fix_leftarm_B.dd_out[0] = 0.0;
    vmr_rwd_fix_leftarm_B.dd_out[1] = 0.0;
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[2] = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion6[3] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilX[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilX[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilY[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilY[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.HREFX[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.HREFX[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.HREFY[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.HREFY[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilarea[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.pupilarea[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.screengazeX[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.screengazeX[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.screengazeY[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.screengazeY[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.resolutionX = 0.0F;
    vmr_rwd_fix_leftarm_B.resolutionY = 0.0F;
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[2] = 0.0F;
    vmr_rwd_fix_leftarm_B.SelectorLeftEye[3] = 0.0F;
    vmr_rwd_fix_leftarm_B.Unpack_o1[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.Unpack_o1[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.Unpack_o2[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.Unpack_o2[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_h = 0.0F;
    vmr_rwd_fix_leftarm_B.SFunction_o4[0] = 0.0F;
    vmr_rwd_fix_leftarm_B.SFunction_o4[1] = 0.0F;
    vmr_rwd_fix_leftarm_B.SFunction_o4[2] = 0.0F;
    vmr_rwd_fix_leftarm_B.SFunction_o4[3] = 0.0F;
    vmr_rwd_fix_leftarm_B.SFunction_o10 = 0.0F;
    vmr_rwd_fix_leftarm_B.y_j = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion1_o = 0.0F;
    vmr_rwd_fix_leftarm_B.Read_h = 0.0F;
    vmr_rwd_fix_leftarm_B.DataTypeConversion2_k = 0.0F;
    vmr_rwd_fix_leftarm_B.Unpack = 0.0F;
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down1.scaling = 0.0;
    vmr_rwd_fix_leftarm_B.sf_Ramp_Up_Down.scaling = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.is_right_arm = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.isExo = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction1_m.has_high_res_encoders = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.is_right_arm = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.isExo = 0.0;
    vmr_rwd_fix_leftarm_B.sf_MATLABFunction_o.has_high_res_encoders = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_angles[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_velocities[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_velocities[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_acceleration[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary1.link_acceleration[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_angles[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_velocities[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_velocities[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_acceleration[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_split_primary.link_acceleration[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isEP = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isHumanEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isNHPEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isClassicExo = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isUTSEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isPMAC = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot_p.isECAT = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isEP = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isHumanEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isNHPEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isClassicExo = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isUTSEXO = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isPMAC = 0.0;
    vmr_rwd_fix_leftarm_B.sf_decoderobot.isECAT = 0.0;
    vmr_rwd_fix_leftarm_B.sf_Createtimestamp_b.timestamp_out = 0.0;
    vmr_rwd_fix_leftarm_B.sf_Createtimestamp.timestamp_out = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasSecondary = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.hasFT = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.robotOrientation = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.motorOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1_o.encOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_size1_e.count = 0.0;
    vmr_rwd_fix_leftarm_B.sf_size_d.count = 0.0;
    vmr_rwd_fix_leftarm_B.sf_converter_jl.doubleOut = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.TmpSignalConversionAtSFunctionInport5
      [0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.TmpSignalConversionAtSFunctionInport5
      [1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable_k.forceMotorState = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.TmpSignalConversionAtSFunctionInport1[0] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.TmpSignalConversionAtSFunctionInport1[1] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.TmpSignalConversionAtSFunctionInport1[2] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.outVal[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.outVal[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values_n.outVal[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_converter_j.doubleOut = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_g.setupValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_g.pollValues[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_g.encoderValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_k.setupValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_k.pollValues[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_k.encoderValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_FindRobottype_d.robotType = 0.0;
    vmr_rwd_fix_leftarm_B.sf_faultmonitor_i.triggerFaultRead = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_p.emcyValPump[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_faultmonitor_f.triggerFaultRead = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ReadEMCY_i.emcyValPump[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.isPermFaulted = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasSecondary = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.hasFT = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.robotOrientation = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.motorOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_splitoutconstants1.encOrientation[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_size1.count = 0.0;
    vmr_rwd_fix_leftarm_B.sf_size.count = 0.0;
    vmr_rwd_fix_leftarm_B.sf_converter_p.doubleOut = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.TmpSignalConversionAtSFunctionInport5
      [0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.TmpSignalConversionAtSFunctionInport5
      [1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_forceEnableDisable.forceMotorState = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values.TmpSignalConversionAtSFunctionInport1[0] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values.TmpSignalConversionAtSFunctionInport1[1] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values.TmpSignalConversionAtSFunctionInport1[2] =
      0.0;
    vmr_rwd_fix_leftarm_B.sf_values.outVal[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values.outVal[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_values.outVal[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_converter.doubleOut = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_p.setupValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_p.pollValues[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues_p.encoderValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues.setupValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues[0] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues[1] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues.pollValues[2] = 0.0;
    vmr_rwd_fix_leftarm_B.sf_setupvalues.encoderValuesCount = 0.0;
    vmr_rwd_fix_leftarm_B.sf_FindRobottype.robotType = 0.0;
    vmr_rwd_fix_leftarm_B.sf_faultmonitor_k.triggerFaultRead = 0.0;
    vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.isPermFaulted = 0.0;
    vmr_rwd_fix_leftarm_B.sf_faultmonitor.triggerFaultRead = 0.0;
    vmr_rwd_fix_leftarm_B.Width_j = 50U;
    vmr_rwd_fix_leftarm_B.Width2 = 1000U;
  }

  /* parameters */
  vmr_rwd_fix_leftarm_M->ModelData.defaultParam = ((real_T *)
    &vmr_rwd_fix_leftarm_P);

  /* states (dwork) */
  vmr_rwd_fix_leftarm_M->ModelData.dwork = ((void *) &vmr_rwd_fix_leftarm_DW);
  (void) memset((void *)&vmr_rwd_fix_leftarm_DW, 0,
                sizeof(DW_vmr_rwd_fix_leftarm_T));
  vmr_rwd_fix_leftarm_DW.UD_DSTATE[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.UD_DSTATE[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.UD_DSTATE_n[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE = 0.0;
  vmr_rwd_fix_leftarm_DW.UnitDelay1_DSTATE = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayInput1_DSTATE_n = 0.0;
  vmr_rwd_fix_leftarm_DW.UnitDelay_DSTATE_a = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_a = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_g = 0.0;

  {
    int32_T i;
    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_j[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.TmpRTBAtNumberofEventCodesOutport1_Buffer0 = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0 = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_i[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition4_Buffer0[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_i = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_1_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_2_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_3_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_4_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_5_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_9_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_18_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_19_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_20_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_21_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_22_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_26_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_10_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_11_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_12_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_13_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_14_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_15_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_16_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_17_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_23_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_24_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_25_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_27_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_28_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_29_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_30_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_31_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_32_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_33_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_34_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_6_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_7_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_8_PreviousInput = 0.0;

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_DW.ECATStatus[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 14; i++) {
      vmr_rwd_fix_leftarm_DW.ECATHardware[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.rotation_memory = 0.0;
  vmr_rwd_fix_leftarm_DW.tickCount = 0.0;
  vmr_rwd_fix_leftarm_DW.reward_type = 0.0;
  vmr_rwd_fix_leftarm_DW.dist = 0.0;
  vmr_rwd_fix_leftarm_DW.tick = 0.0;

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.rawVelocities[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.filtVelocities[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.tickCount_m = 0.0;
  vmr_rwd_fix_leftarm_DW.StartPos[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.StartPos[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.TgtPos[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.TgtPos[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.CurHandPos[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.CurHandPos[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.ramp_time = 0.0;
  vmr_rwd_fix_leftarm_DW.scale_increment = 0.0;
  vmr_rwd_fix_leftarm_DW.tick_d = 0.0;
  vmr_rwd_fix_leftarm_DW.trajectory_shape = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition1_Buffer0_h = 0.0;
  vmr_rwd_fix_leftarm_DW.last_valid_frame_ack = 0.0;
  vmr_rwd_fix_leftarm_DW.last_perm_frame_ack = 0.0;
  vmr_rwd_fix_leftarm_DW.t = 0.0;
  vmr_rwd_fix_leftarm_DW.last_tone_state = 0.0;

  {
    int32_T i;
    for (i = 0; i < 50; i++) {
      vmr_rwd_fix_leftarm_DW.trials_per_block[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.total_trials_saved = 0.0;
  vmr_rwd_fix_leftarm_DW.total_blocks_saved = 0.0;
  vmr_rwd_fix_leftarm_DW.Delay1_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Subtract_DWORK1 = 0.0;

  {
    int32_T i;
    for (i = 0; i < 499; i++) {
      vmr_rwd_fix_leftarm_DW.trial_queue[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 499; i++) {
      vmr_rwd_fix_leftarm_DW.repeat_list[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.EXAM = 0.0;
  vmr_rwd_fix_leftarm_DW.BLOCK = 0.0;

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_DW.held_value[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.u = 0.0;
  vmr_rwd_fix_leftarm_DW.v = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition_Buffer0[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.start_time = 0.0;
  vmr_rwd_fix_leftarm_DW.last_time = 0.0;
  vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK2 = 0.0;
  vmr_rwd_fix_leftarm_DW.BKINEtherCATinit1_DWORK4 = 0.0;
  vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK2 = 0.0;
  vmr_rwd_fix_leftarm_DW.BKINEtherCATinit_DWORK4 = 0.0;

  {
    int32_T i;
    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_DW.ECATErrMsgs[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      vmr_rwd_fix_leftarm_DW.ECATExtraData[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 24; i++) {
      vmr_rwd_fix_leftarm_DW.HardwareSettings[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_DW.Kinematics[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.PrimaryEncoderData[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      vmr_rwd_fix_leftarm_DW.RobotCalibrations[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.RobotRevision[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RobotRevision[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayEstimates[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayEstimates[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayEstimates[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.DelayEstimates[3] = 0.0;
  vmr_rwd_fix_leftarm_DW.ArmForceSensors[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.ArmForceSensors[1] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 20; i++) {
      vmr_rwd_fix_leftarm_DW.lastECATMessages[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.outCount = 0.0;

  {
    int32_T i;
    for (i = 0; i < 300; i++) {
      vmr_rwd_fix_leftarm_DW.memoryBuffer[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.waitingMsgCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sentCount = 0.0;

  {
    int32_T i;
    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_DW.secondaryPosData_data[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_DW.secondaryVelData_data[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_DW.primaryVelData_data[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_DW.primaryVelDataFiltered_data[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.rawVelocities_g[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.filtVelocities_f[i] = 0.0;
    }
  }

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

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_DW.servoValuesR1[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      vmr_rwd_fix_leftarm_DW.servoValuesR2[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.no_update_count = 0.0;

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.latchedErrors[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      vmr_rwd_fix_leftarm_DW.latchedDCErrors[i] = 0.0;
    }
  }

  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_l = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_hp = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_c = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_n[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_f = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_m = 0.0;
  vmr_rwd_fix_leftarm_DW.permFaulted = 0.0;
  vmr_rwd_fix_leftarm_DW.countFaultSteps = 0.0;
  vmr_rwd_fix_leftarm_DW.frameCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_p = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_g = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_pv = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory1_PreviousInput_ip = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_p = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_i[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory3_PreviousInput_l = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_d = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_h3 = 0.0;
  vmr_rwd_fix_leftarm_DW.currReadIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.valuesToRead = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory_PreviousInput_lw = 0.0;
  vmr_rwd_fix_leftarm_DW.currReadIdx_j = 0.0;
  vmr_rwd_fix_leftarm_DW.valuesToRead_b = 0.0;
  vmr_rwd_fix_leftarm_DW.permFaulted_l = 0.0;
  vmr_rwd_fix_leftarm_DW.countFaultSteps_d = 0.0;
  vmr_rwd_fix_leftarm_DW.frameCounter_e = 0.0;
  vmr_rwd_fix_leftarm_DW.Memory2_PreviousInput_a = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[0] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[1] = 0.0;
  vmr_rwd_fix_leftarm_DW.RateTransition2_Buffer0_p[2] = 0.0;
  vmr_rwd_fix_leftarm_DW.TmpRTBAtforcestrobeOutport1_Buffer0 = 0.0;
  vmr_rwd_fix_leftarm_DW.counter = 0.0;
  vmr_rwd_fix_leftarm_DW.packet_queue_sz = 0.0;
  vmr_rwd_fix_leftarm_DW.outstanding_packet_index = 0.0;

  {
    int32_T i;
    for (i = 0; i < 6; i++) {
      vmr_rwd_fix_leftarm_DW.PCI6229DA_RWORK[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 400; i++) {
      vmr_rwd_fix_leftarm_DW.TmpRTBAtSendControlMachineInport1_Buffer0[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 20500000; i++) {
      vmr_rwd_fix_leftarm_DW.packet_queue[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 108; i++) {
      vmr_rwd_fix_leftarm_DW.t2_PreviousInput[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 108; i++) {
      vmr_rwd_fix_leftarm_DW.t1_PreviousInput[i] = 0.0F;
    }
  }

  vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down1.tick = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down1.tickCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down.tick = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_Ramp_Up_Down.tickCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable_k.lastRunningState = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable_k.faultResetCycles = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine_h.valueCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_k.encoderIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_i.encoderIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_h.underVoltageCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor_i.preOpCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_p.currReadIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_p.valuesToRead = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_c.underVoltageCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor_f.preOpCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_i.currReadIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ReadEMCY_i.valuesToRead = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_p.permFaulted = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_p.countFaultSteps = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_p.frameCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable.lastRunningState = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_forceEnableDisable.faultResetCycles = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_SDOreadmachine.valueCount = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine_b.encoderIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_AbsEncodermachine.encoderIdx = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor1_l.underVoltageCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor_k.preOpCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_f.permFaulted = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_f.countFaultSteps = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_ControlGDCWhistleState_f.frameCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor1.underVoltageCounter = 0.0;
  vmr_rwd_fix_leftarm_DW.sf_faultmonitor.preOpCounter = 0.0;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  vmr_rwd_fix_leftarm_InitializeDataMapInfo(vmr_rwd_fix_leftarm_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.sfcnInfo;
    vmr_rwd_fix_leftarm_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(vmr_rwd_fix_leftarm_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &vmr_rwd_fix_leftarm_M->Sizes.numSampTimes);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[0]);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[1]);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[2]);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[3]);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[4] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[4]);
    vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs[5] = &(rtmGetTPtr
      (vmr_rwd_fix_leftarm_M)[5]);
    rtssSetTPtrPtr(sfcnInfo,vmr_rwd_fix_leftarm_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(vmr_rwd_fix_leftarm_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(vmr_rwd_fix_leftarm_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (vmr_rwd_fix_leftarm_M));
    rtssSetStepSizePtr(sfcnInfo, &vmr_rwd_fix_leftarm_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(vmr_rwd_fix_leftarm_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &vmr_rwd_fix_leftarm_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &vmr_rwd_fix_leftarm_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &vmr_rwd_fix_leftarm_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &vmr_rwd_fix_leftarm_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &vmr_rwd_fix_leftarm_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &vmr_rwd_fix_leftarm_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &vmr_rwd_fix_leftarm_M->solverInfoPtr);
  }

  vmr_rwd_fix_leftarm_M->Sizes.numSFcns = (45);

  /* register each child */
  {
    (void) memset((void *)
                  &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.childSFunctions[0], 0,
                  45*sizeof(SimStruct));
    vmr_rwd_fix_leftarm_M->childSfunctions =
      (&vmr_rwd_fix_leftarm_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 45; i++) {
        vmr_rwd_fix_leftarm_M->childSfunctions[i] =
          (&vmr_rwd_fix_leftarm_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S30>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, vmr_rwd_fix_leftarm_B.Pack_g);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/DataLogging/Keep alive/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK_p[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK_p);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK_p[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK_p);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 5;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 40);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S50>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, vmr_rwd_fix_leftarm_B.Pack_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1640);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size_i);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size_e);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK_e[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK_hr);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK_e[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK_hr);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1640);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S49>/UDP Receive (BKINUDPReceiveRead) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.trigger);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, vmr_rwd_fix_leftarm_B.RateTransition2_js);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 3);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 21);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) vmr_rwd_fix_leftarm_B.Data));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Pckt_Recd));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 21);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *) vmr_rwd_fix_leftarm_B.Data2));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Pckt_Recd2));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &vmr_rwd_fix_leftarm_B.doublereads));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            &vmr_rwd_fix_leftarm_B.UDPReceive_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Receive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceive_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceive_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.UDPReceive_IWORK[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.UDPReceive_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.UDPReceive_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.UDPReceive_PWORK);
      }

      /* registration */
      BKINUDPReceiveRead(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S49>/UDP Receive Port Reset (BKINUDPReceiveInit) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.RqstUDPReset);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &vmr_rwd_fix_leftarm_B.UDPResets));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 3);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            vmr_rwd_fix_leftarm_B.UDPReceivePortReset_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "UDP Receive Port Reset");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Receiver/UDP Receive Port Reset");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.UDPReceivePortReset_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.UDPReceivePortReset_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.UDPReceivePortReset_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.UDPReceivePortReset_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.UDPReceivePortReset_PWORK);
      }

      /* registration */
      BKINUDPReceiveInit(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S57>/Receive (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.Receive_o1_k));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Receive_o2_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate1/Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Receive_IWORK_d[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Receive_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Receive_IWORK_d[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Receive_PWORK_l);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S58>/Receive1 (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 64);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate2/Receive1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Receive1_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S59>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               vmr_rwd_fix_leftarm_B.TmpRTBAtConvert1Outport1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 34);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/send poll 1/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size_es);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK_dv[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK_dv[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK_l);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 34);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S60>/Send1 (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               vmr_rwd_fix_leftarm_B.TmpRTBAtConvert1Outport1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 34);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/send poll 2/Send1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send1_IWORK[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send1_PWORK);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0005);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 34);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S98>/BKIN PDO Receive ElmoDrive (BKINethercatpdorxElmoDrive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.Statusword_k));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.statusregister_c4));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryposition_l));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.secondaryposition_n));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryvelocity_d));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.torque_ky));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.digitalinputs_j));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((int8_T *)
            &vmr_rwd_fix_leftarm_B.actualmodeofoperation_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN PDO Receive ElmoDrive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/BKIN PDO Receive ElmoDrive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_f[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_i);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_f[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_i);
      }

      /* registration */
      BKINethercatpdorxElmoDrive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S111>/BKIN PDO Receive ElmoDrive (BKINethercatpdorxElmoDrive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.Statusword_b));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.statusregister_c));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryposition_e));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.secondaryposition_d));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryvelocity_p));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.torque_h));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.digitalinputs));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((int8_T *)
            &vmr_rwd_fix_leftarm_B.actualmodeofoperation_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN PDO Receive ElmoDrive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/BKIN PDO Receive ElmoDrive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_Size_o);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_Size_o);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_ct[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_b);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_ct[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_b);
      }

      /* registration */
      BKINethercatpdorxElmoDrive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S74>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.TorqueMode_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_f[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S74>/BKIN EtherCAT PDO Transmit 1 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.TorqueMode_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/BKIN EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_j[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S84>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ControlWord_o);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_i);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_a[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S85>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_f.ControlWord);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_n);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_p5[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_p5[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S150>/BKIN PDO Receive ElmoDrive (BKINethercatpdorxElmoDrive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.Statusword));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.statusregister_i));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryposition));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.secondaryposition));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.primaryvelocity));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.torque_g5));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.digitalinput_d));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((int8_T *)
            &vmr_rwd_fix_leftarm_B.actualmodeofoperation_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN PDO Receive ElmoDrive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/BKIN PDO Receive ElmoDrive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_Size_n);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_Size_d);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_Size_n);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_c[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_d);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK_c[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK_d);
      }

      /* registration */
      BKINethercatpdorxElmoDrive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S163>/BKIN PDO Receive ElmoDrive (BKINethercatpdorxElmoDrive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.statusword));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.statusregister));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.positionprimary));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.positionsecondary));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.velocityprimary));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.torque_k));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((int32_T *)
            &vmr_rwd_fix_leftarm_B.digitalinput));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((int8_T *)
            &vmr_rwd_fix_leftarm_B.actualmodeofoperation));
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN PDO Receive ElmoDrive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/BKIN PDO Receive ElmoDrive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINPDOReceiveElmoDrive_P7_Size_c);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.BKINPDOReceiveElmoDrive_PWORK);
      }

      /* registration */
      BKINethercatpdorxElmoDrive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S75>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.TorqueMode);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_f1);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_o);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_a);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_l);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_d);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_p[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S75>/BKIN EtherCAT PDO Transmit 1 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.TorqueMode);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/BKIN EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_Size_a);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_Size_i);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_Size_h);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_p[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S136>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &vmr_rwd_fix_leftarm_B.sf_ControlGDCWhistleState_p.ControlWord);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_od);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_f);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_h);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_m[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S137>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ControlWord);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_mb);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_h);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_iz);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_j);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK_h[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S205>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, vmr_rwd_fix_leftarm_B.Pack_f);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size_b4);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size_d);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size_lq);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size_j);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK_d[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK_f);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK_d[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK_f);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 8);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S207>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, vmr_rwd_fix_leftarm_B.Pack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size_hn);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK_l[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK_h);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK_l[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK_h);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 8);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S201>/Receive from Robot 1 Force Sensor (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 36);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.ReceivefromRobot1ForceSensor_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive from Robot 1 Force Sensor");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Receive from Robot 1 Force Sensor");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot1ForceSensor_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.ReceivefromRobot1ForceSensor_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.ReceivefromRobot1ForceSensor_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.ReceivefromRobot1ForceSensor_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &vmr_rwd_fix_leftarm_DW.ReceivefromRobot1ForceSensor_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S202>/Receive from Robot 2 Force Sensor (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [23]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 36);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.ReceivefromRobot2ForceSensor_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive from Robot 2 Force Sensor");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Receive from Robot 2 Force Sensor");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.ReceivefromRobot2ForceSensor_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.ReceivefromRobot2ForceSensor_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &vmr_rwd_fix_leftarm_DW.ReceivefromRobot2ForceSensor_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.ReceivefromRobot2ForceSensor_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &vmr_rwd_fix_leftarm_DW.ReceivefromRobot2ForceSensor_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S216>/Read (mcc_readmem) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [24]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.DataTypeConversion_pj;
          sfcnUPtrs[1] = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_pm;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &vmr_rwd_fix_leftarm_B.Read_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM/Read");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Read_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Read_PWORK);
      }

      /* registration */
      mcc_readmem(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S218>/Write (mcc_writemem) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [25]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.DataTypeConversion_dd;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.UPtrs1;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.DataTypeConversion1_o;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM/Write");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Write_PWORK_i);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Write_PWORK_i);
      }

      /* registration */
      mcc_writemem(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S209>/S-Function (mcc_pollall) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [26]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);

        /* port 0 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.UPtrs0;

          {
            int_T i1;
            const real32_T *u0 = vmr_rwd_fix_leftarm_B.DataTypeConversion_a5;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 10);
        }

        /* port 1 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.UPtrs1;

          {
            int_T i1;
            const real32_T *u1 = vmr_rwd_fix_leftarm_B.DataTypeConversion1_i1;
            for (i1=0; i1 < 10; i1++) {
              sfcnUPtrs[i1] = &u1[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 10);
        }

        /* port 2 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.UPtrs2;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.DataTypeConversion2_h;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 10);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 10);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 10);
          ssSetOutputPortSignal(rts, 1, ((real32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 2);
          ssSetOutputPortSignal(rts, 2, ((uint32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 4);
          ssSetOutputPortSignal(rts, 3, ((real32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 6);
          ssSetOutputPortSignal(rts, 4, ((real32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 6);
          ssSetOutputPortSignal(rts, 5, ((real32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.SFunction_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.SFunction_o8));
        }

        /* port 8 */
        {
          _ssSetOutputPortNumDimensions(rts, 8, 1);
          ssSetOutputPortWidth(rts, 8, 3);
          ssSetOutputPortSignal(rts, 8, ((uint32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o9));
        }

        /* port 9 */
        {
          _ssSetOutputPortNumDimensions(rts, 9, 1);
          ssSetOutputPortWidth(rts, 9, 1);
          ssSetOutputPortSignal(rts, 9, ((real32_T *)
            &vmr_rwd_fix_leftarm_B.SFunction_o10));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/S-Function");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.SFunction_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.SFunction_PWORK);
      }

      /* registration */
      mcc_pollall(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortConnected(rts, 8, 1);
      _ssSetOutputPortConnected(rts, 9, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 8, 0);
      _ssSetOutputPortBeingMerged(rts, 9, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S211>/Write (mcc_writemem) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [27]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);

        /* port 0 */
        {
          uint32_T const **sfcnUPtrs = (uint32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.UPtrs0;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.DataTypeConversion_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.UPtrs1;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.y_j;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Write_PWORK);
      }

      /* registration */
      mcc_writemem(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S222>/Receive (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [28]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[28]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.Receive_o1_n));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Receive_o2_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P3_Size_k);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P4_Size_o);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P5_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Receive_IWORK_f[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Receive_PWORK_n);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Receive_IWORK_f[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Receive_PWORK_n);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S78>/BKIN EtherCAT PDO Transmit  (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [29]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.drive1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit ");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit ");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P4_Size_fk);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P5_Size_g);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit_P7_Size_gy);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit_IWORK[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S78>/BKIN EtherCAT PDO Transmit 1 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [30]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.drive2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_Size_p);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_m[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S78>/BKIN EtherCAT PDO Transmit 2 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [31]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.drive3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK_d[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK_d[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S78>/BKIN EtherCAT PDO Transmit 3 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [32]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.drive4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 3");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/BKIN EtherCAT PDO Transmit 3");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit3_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit3_IWORK[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S34>/S-Function (eyelink_unpack) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [33]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);

        /* port 0 */
        {
          uint8_T const **sfcnUPtrs = (uint8_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.UPtrs0;

          {
            int_T i1;
            const uint8_T *u0 = vmr_rwd_fix_leftarm_B.pack_out;
            for (i1=0; i1 < 512; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 512);
        }

        /* port 1 */
        {
          int32_T const **sfcnUPtrs = (int32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.UPtrs1;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.len_out;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn33.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 18);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &vmr_rwd_fix_leftarm_B.SFunction_o1_n));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.SAMPE_TYPE));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.ContentFlags));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 2);
          ssSetOutputPortSignal(rts, 3, ((real32_T *)
            vmr_rwd_fix_leftarm_B.pupilX));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 2);
          ssSetOutputPortSignal(rts, 4, ((real32_T *)
            vmr_rwd_fix_leftarm_B.pupilY));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 2);
          ssSetOutputPortSignal(rts, 5, ((real32_T *)
            vmr_rwd_fix_leftarm_B.HREFX));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 2);
          ssSetOutputPortSignal(rts, 6, ((real32_T *)
            vmr_rwd_fix_leftarm_B.HREFY));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 2);
          ssSetOutputPortSignal(rts, 7, ((real32_T *)
            vmr_rwd_fix_leftarm_B.pupilarea));
        }

        /* port 8 */
        {
          _ssSetOutputPortNumDimensions(rts, 8, 1);
          ssSetOutputPortWidth(rts, 8, 2);
          ssSetOutputPortSignal(rts, 8, ((real32_T *)
            vmr_rwd_fix_leftarm_B.screengazeX));
        }

        /* port 9 */
        {
          _ssSetOutputPortNumDimensions(rts, 9, 1);
          ssSetOutputPortWidth(rts, 9, 2);
          ssSetOutputPortSignal(rts, 9, ((real32_T *)
            vmr_rwd_fix_leftarm_B.screengazeY));
        }

        /* port 10 */
        {
          _ssSetOutputPortNumDimensions(rts, 10, 1);
          ssSetOutputPortWidth(rts, 10, 1);
          ssSetOutputPortSignal(rts, 10, ((real32_T *)
            &vmr_rwd_fix_leftarm_B.resolutionX));
        }

        /* port 11 */
        {
          _ssSetOutputPortNumDimensions(rts, 11, 1);
          ssSetOutputPortWidth(rts, 11, 1);
          ssSetOutputPortSignal(rts, 11, ((real32_T *)
            &vmr_rwd_fix_leftarm_B.resolutionY));
        }

        /* port 12 */
        {
          _ssSetOutputPortNumDimensions(rts, 12, 1);
          ssSetOutputPortWidth(rts, 12, 1);
          ssSetOutputPortSignal(rts, 12, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.statusflags));
        }

        /* port 13 */
        {
          _ssSetOutputPortNumDimensions(rts, 13, 1);
          ssSetOutputPortWidth(rts, 13, 1);
          ssSetOutputPortSignal(rts, 13, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.extrainput));
        }

        /* port 14 */
        {
          _ssSetOutputPortNumDimensions(rts, 14, 1);
          ssSetOutputPortWidth(rts, 14, 1);
          ssSetOutputPortSignal(rts, 14, ((uint16_T *)
            &vmr_rwd_fix_leftarm_B.buttons));
        }

        /* port 15 */
        {
          _ssSetOutputPortNumDimensions(rts, 15, 1);
          ssSetOutputPortWidth(rts, 15, 1);
          ssSetOutputPortSignal(rts, 15, ((int16_T *)
            &vmr_rwd_fix_leftarm_B.htype));
        }

        /* port 16 */
        {
          _ssSetOutputPortNumDimensions(rts, 16, 1);
          ssSetOutputPortWidth(rts, 16, 8);
          ssSetOutputPortSignal(rts, 16, ((int16_T *)
            vmr_rwd_fix_leftarm_B.hdata));
        }

        /* port 17 */
        {
          _ssSetOutputPortNumDimensions(rts, 17, 1);
          ssSetOutputPortWidth(rts, 17, 3);
          ssSetOutputPortSignal(rts, 17, ((uint32_T *)
            vmr_rwd_fix_leftarm_B.SFunction_o18));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/S-Function");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* registration */
      eyelink_unpack(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortConnected(rts, 8, 0);
      _ssSetOutputPortConnected(rts, 9, 0);
      _ssSetOutputPortConnected(rts, 10, 0);
      _ssSetOutputPortConnected(rts, 11, 0);
      _ssSetOutputPortConnected(rts, 12, 1);
      _ssSetOutputPortConnected(rts, 13, 0);
      _ssSetOutputPortConnected(rts, 14, 0);
      _ssSetOutputPortConnected(rts, 15, 0);
      _ssSetOutputPortConnected(rts, 16, 1);
      _ssSetOutputPortConnected(rts, 17, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 8, 0);
      _ssSetOutputPortBeingMerged(rts, 9, 0);
      _ssSetOutputPortBeingMerged(rts, 10, 0);
      _ssSetOutputPortBeingMerged(rts, 11, 0);
      _ssSetOutputPortBeingMerged(rts, 12, 0);
      _ssSetOutputPortBeingMerged(rts, 13, 0);
      _ssSetOutputPortBeingMerged(rts, 14, 0);
      _ssSetOutputPortBeingMerged(rts, 15, 0);
      _ssSetOutputPortBeingMerged(rts, 16, 0);
      _ssSetOutputPortBeingMerged(rts, 17, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S34>/Receive (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [34]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[34]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 512);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.Receive_o1_i));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Receive_o2_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.Receive_P3_Size_ky);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P5_Size_k);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Receive_IWORK_n[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Receive_PWORK_o);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn34.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Receive_IWORK_n[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Receive_PWORK_o);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S254>/BKIN EtherCAT PDO Transmit 1 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [35]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ecatTorques[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_Size_l);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_Size_d);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn35.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S254>/BKIN EtherCAT PDO Transmit 2 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [36]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ecatTorques[1]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques/BKIN EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3_Size_e);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7_Size_j);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn36.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S255>/BKIN EtherCAT PDO Transmit 1 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [37]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ecatTorques[2]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P5_Size_io);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P6_Size_ht);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit1_P7_Size_d);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn37.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit1_IWORK_c[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S255>/BKIN EtherCAT PDO Transmit 2 (BKINethercatpdotx) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [38]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[38]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &vmr_rwd_fix_leftarm_B.ecatTorques[3]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "BKIN EtherCAT PDO Transmit 2");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques/BKIN EtherCAT PDO Transmit 2");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P6_Size_a);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       vmr_rwd_fix_leftarm_P.BKINEtherCATPDOTransmit2_P7_Size_o);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn38.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 23);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &vmr_rwd_fix_leftarm_DW.BKINEtherCATPDOTransmit2_IWORK_g[0]);
      }

      /* registration */
      BKINethercatpdotx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S251>/S-Function1 (mcc_apply_loads) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [39]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[39]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.inputPortInfo[0]);

        /* port 0 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.UPtrs0;
          sfcnUPtrs[0] = vmr_rwd_fix_leftarm_B.DataTypeConversion6;
          sfcnUPtrs[1] = &vmr_rwd_fix_leftarm_B.DataTypeConversion6[1];
          sfcnUPtrs[2] = &vmr_rwd_fix_leftarm_B.DataTypeConversion6[2];
          sfcnUPtrs[3] = &vmr_rwd_fix_leftarm_B.DataTypeConversion6[3];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }

        /* port 1 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.UPtrs1;

          {
            int_T i1;
            const real32_T *u1 = vmr_rwd_fix_leftarm_B.DataTypeConversion_a1;
            for (i1=0; i1 < 6; i1++) {
              sfcnUPtrs[i1] = &u1[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 6);
        }

        /* port 2 */
        {
          real32_T const **sfcnUPtrs = (real32_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.UPtrs2;

          {
            int_T i1;
            const real32_T *u2 = vmr_rwd_fix_leftarm_B.DataTypeConversion1_cq;
            for (i1=0; i1 < 6; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 6);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function1");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/DataLogging/apply loads/apply pmac loads/S-Function1");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.SFunction1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn39.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.SFunction1_PWORK);
      }

      /* registration */
      mcc_apply_loads(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S5>/ICH7 (ich10) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[40];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn40.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn40.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn40.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [40]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[40]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[40]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[40]);
      }

      /* path info */
      ssSetModelName(rts, "ICH7");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/GUI Control/ICH7");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.ICH7_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn40.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn40.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.ICH7_IWORK[0]);
      }

      /* registration */
      ich10(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S267>/Run Command Receive (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[41];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [41]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[41]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[41]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[41]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            &vmr_rwd_fix_leftarm_B.RunCommandReceive_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.RunCommandReceive_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Run Command Receive");
      ssSetPath(rts,
                "vmr_rwd_fix_leftarm/GUI Control/Run Command Subsystem/Run Command Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       vmr_rwd_fix_leftarm_P.RunCommandReceive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       vmr_rwd_fix_leftarm_P.RunCommandReceive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       vmr_rwd_fix_leftarm_P.RunCommandReceive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       vmr_rwd_fix_leftarm_P.RunCommandReceive_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       vmr_rwd_fix_leftarm_P.RunCommandReceive_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.RunCommandReceive_IWORK
                 [0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.RunCommandReceive_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn41.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.RunCommandReceive_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.RunCommandReceive_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S13>/Receive (xpcudpbytereceive) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[42];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [42]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[42]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[42]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[42]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            vmr_rwd_fix_leftarm_B.Receive_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &vmr_rwd_fix_leftarm_B.Receive_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/Process_Video_CMD/Receive");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Receive_P5_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Receive_IWORK[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Receive_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn42.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Receive_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Receive_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S13>/Send (xpcudpbytesend) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[43];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [43]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[43]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[43]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[43]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, vmr_rwd_fix_leftarm_B.SFunctionBuilder_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 27240);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &vmr_rwd_fix_leftarm_B.SFunctionBuilder_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Send");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/Process_Video_CMD/Send");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P3_Size_ar);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.Send_P5_Size_k);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.Send_IWORK[0]);
      ssSetPWork(rts, (void **) &vmr_rwd_fix_leftarm_DW.Send_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn43.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.Send_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.Send_PWORK);
      }

      /* registration */
      xpcudpbytesend(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 27240);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: vmr_rwd_fix_leftarm/<S12>/PCI-6229 DA (danipcim) */
    {
      SimStruct *rts = vmr_rwd_fix_leftarm_M->childSfunctions[44];

      /* timing info */
      time_T *sfcnPeriod =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.sfcnPeriod;
      time_T *sfcnOffset =
        vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.sfcnOffset;
      int_T *sfcnTsMap = vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.blkInfo2
                         [44]);
      }

      ssSetRTWSfcnInfo(rts, vmr_rwd_fix_leftarm_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods2[44]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &vmr_rwd_fix_leftarm_M->
                           NonInlinedSFcns.methods3[44]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.statesInfo2[44]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.UPtrs0;
          sfcnUPtrs[0] = &vmr_rwd_fix_leftarm_B.output;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6229 DA");
      ssSetPath(rts, "vmr_rwd_fix_leftarm/Play Sound/PCI-6229 DA");
      ssSetRTModel(rts,vmr_rwd_fix_leftarm_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)vmr_rwd_fix_leftarm_P.PCI6229DA_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &vmr_rwd_fix_leftarm_DW.PCI6229DA_RWORK[0]);
      ssSetIWork(rts, (int_T *) &vmr_rwd_fix_leftarm_DW.PCI6229DA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &vmr_rwd_fix_leftarm_M->NonInlinedSFcns.Sfcn44.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &vmr_rwd_fix_leftarm_DW.PCI6229DA_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 41);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &vmr_rwd_fix_leftarm_DW.PCI6229DA_IWORK[0]);
      }

      /* registration */
      danipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00025);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  vmr_rwd_fix_leftarm_M->Sizes.numContStates = (0);/* Number of continuous states */
  vmr_rwd_fix_leftarm_M->Sizes.numY = (0);/* Number of model outputs */
  vmr_rwd_fix_leftarm_M->Sizes.numU = (0);/* Number of model inputs */
  vmr_rwd_fix_leftarm_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  vmr_rwd_fix_leftarm_M->Sizes.numSampTimes = (6);/* Number of sample times */
  vmr_rwd_fix_leftarm_M->Sizes.numBlocks = (1549);/* Number of blocks */
  vmr_rwd_fix_leftarm_M->Sizes.numBlockIO = (1352);/* Number of block outputs */
  vmr_rwd_fix_leftarm_M->Sizes.numBlockPrms = (46636);/* Sum of parameter "widths" */
  return vmr_rwd_fix_leftarm_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
