/*
 * vmr_rwd_fix_leftarm_private.h
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

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_private_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_private_h_
#include <stdio.h>
#include <stdlib.h>
#include <crc32.h>
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#define col_x                          (1.0)
#define col_y                          (2.0)
#define E_TARGET_ON                    (3.0)
#define LOGICAL_RADIUS                 (4.0)
#define START_TARGET_COL               (1.0)
#define END_TARGET_COL                 (2.0)
#define ROTATION_CENTER                (3.0)
#define MAXREACHTIME_COL               (5.0)
#define ROTATION_TYPE                  (7.0)
#define ROTATION                       (8.0)
#define DELAY_POSTTRIAL_COL            (6.0)
#define E_STAY_CENTER                  (2.0)
#define VISUAL_RADIUS                  (3.0)
#define COLOR                          (5.0)
#define K_SCORETEXT_ROW                (1.0)
#define LABEL_HEIGHT                   (8.0)
#define HITCOLOR                       (6.0)
#define E_HIT_TARGET                   (5.0)
#define E_MISS_TARGET                  (9.0)
#define K_REWARD_VAL                   (2.0)
#define K_TONE_HIT_DURATION            (4.0)
#define K_TONE_HIT_FREQUENCY           (5.0)
#define K_VIS_RAD                      (6.0)
#define E_REWARD                       (6.0)
#define WAIT_AT_START_COL              (4.0)
#define LABEL                          (7.0)
#define K_RETURN_RING_ROW              (7.0)
#define STROKE_WIDTH                   (9.0)
#define STROKE_COLOR                   (10.0)
#define K_SCORE_TIME                   (8.0)
#define HAND_VIS_COL                   (9.0)
#define CLAMP_COL                      (10.0)
#define DO_REWARD_COL                  (11.0)
#define K_TONE_NEUTRAL_DURATION        (10.0)
#define K_TONE_NEUTRAL_FREQUENCY       (11.0)
#define E_NEUTRAL_FDBK                 (10.0)
#define E_SHOW_SCORE                   (17.0)
#define DISPLAY_TRIAL_COL              (12.0)
#define K_INSTRUCT_TIME                (9.0)
#define E_SHOW_INSTRUCT                (18.0)
#define INSTRUCT_PAUSE_BTN             (2.0)
#define K_LEFTHAND_TGT                 (12.0)
#define K_ROBOT_RAMP_TIME              (14.0)
#define K_ROBOT_MOVE_TIME              (15.0)
#define K_FIX_LEFTHAND                 (13.0)
#define E_NO_EVENT                     (0.0)
#define K_UNUSED                       (3.0)
#define ROTATED_COLOR                  (11.0)
#define col_x                          (1.0)
#define col_y                          (2.0)

/* Used to reverse endianness */
#define SWAP16(x)                      (((x) >> 8) | (((x) & 0xff) << 8))
#define SWAP32(x)                      (SWAP16((x) >> 16) | (SWAP16((x) & 0xffff) << 16))

extern void delay_vcodes_Outputs_wrapper(const int32_T *VCode,
  const real_T *VCode_len,
  const real_T *delay_ms,
  const real_T *step_time_ms,
  uint8_T *VCode_out,
  real_T *VCode_len_out,
  real_T *debug_out);
extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_modd_snf(real_T u0, real_T u1);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern int32_T div_s32_floor(int32_T numerator, int32_T denominator);
extern void xpcudpbytesend(SimStruct *rts);
extern void BKINUDPReceiveRead(SimStruct *rts);
extern void BKINUDPReceiveInit(SimStruct *rts);
extern void xpcudpbytereceive(SimStruct *rts);
extern void BKINethercatpdorxElmoDrive(SimStruct *rts);
extern void BKINethercatpdotx(SimStruct *rts);
extern void mcc_readmem(SimStruct *rts);
extern void mcc_writemem(SimStruct *rts);
extern void mcc_pollall(SimStruct *rts);
extern void eyelink_unpack(SimStruct *rts);
extern void mcc_apply_loads(SimStruct *rts);
extern void ich10(SimStruct *rts);
extern void danipcim(SimStruct *rts);
extern void vmr_rwd_fix_leftarm_MATLABFunction(real_T rtu_orientation, real_T
  rtu_has_secondary, real_T rtu_isEP, B_MATLABFunction_vmr_rwd_fix_leftarm_T
  *localB);
extern void vmr_rwd_fix_leftarm_EmbeddedMATLABFunction(const real_T rtu_target
  [25], real_T rtu_state_in, real_T rtu_target_type, real_T rtu_opacity_in,
  real_T rtu_target_display, real_T rtu_x_index, real_T rtu_y_index, real_T
  rtu_num_states, const real_T rtu_stateindices[55],
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T *localB);
extern void vmr_rwd_fix_leftarm_Ramp_Up_Down_Init
  (B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localB,
   DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localDW);
extern void vmr_rwd_fix_leftarm_Ramp_Up_Down(real_T rtu_e_clk, real_T
  rtu_Motors_Disabled, real_T rtu_Run_Status, real_T rtu_up_duration, real_T
  rtu_down_duration, real_T rtu_robot_type, B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T
  *localB, DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localDW,
  ZCE_Ramp_Up_Down_vmr_rwd_fix_leftarm_T *localZCE);

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_private_h_ */
