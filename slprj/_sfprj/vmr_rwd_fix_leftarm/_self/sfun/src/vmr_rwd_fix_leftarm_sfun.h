#ifndef __vmr_rwd_fix_leftarm_sfun_h__
#define __vmr_rwd_fix_leftarm_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "sf_runtime/sf_runtime_errors.h"
#include "rtwtypes.h"
#include "simtarget/slClientServerAPIBridge.h"
#include "multiword_types.h"
#include "sf_runtime/sfcdebug.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

struct SfDebugInstanceStruct;
extern struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct;

/* Type Definitions */
#ifndef typedef_SFvmr_rwd_fix_leftarmLocalData
#define typedef_SFvmr_rwd_fix_leftarmLocalData

typedef struct {
  real_T m_m_col_x;
  real_T m_m_col_y;
  real_T m_m_E_TARGET_ON;
  real_T m_m_LOGICAL_RADIUS;
  real_T m_m_START_TARGET_COL;
  real_T m_m_END_TARGET_COL;
  real_T m_m_ROTATION_CENTER;
  real_T m_m_MAXREACHTIME_COL;
  real_T m_m_ROTATION_TYPE;
  real_T m_m_ROTATION;
  real_T m_m_DELAY_POSTTRIAL_COL;
  real_T m_m_E_STAY_CENTER;
  real_T m_m_VISUAL_RADIUS;
  real_T m_m_COLOR;
  real_T m_m_K_SCORETEXT_ROW;
  real_T m_m_LABEL_HEIGHT;
  real_T m_m_HITCOLOR;
  real_T m_m_E_HIT_TARGET;
  real_T m_m_E_MISS_TARGET;
  real_T m_m_K_REWARD_VAL;
  real_T m_m_K_TONE_HIT_DURATION;
  real_T m_m_K_TONE_HIT_FREQUENCY;
  real_T m_m_K_VIS_RAD;
  real_T m_m_E_REWARD;
  real_T m_m_WAIT_AT_START_COL;
  real_T m_m_LABEL;
  real_T m_m_K_RETURN_RING_ROW;
  real_T m_m_STROKE_WIDTH;
  real_T m_m_STROKE_COLOR;
  real_T m_m_K_SCORE_TIME;
  real_T m_m_HAND_VIS_COL;
  real_T m_m_CLAMP_COL;
  real_T m_m_DO_REWARD_COL;
  real_T m_m_K_TONE_NEUTRAL_DURATION;
  real_T m_m_K_TONE_NEUTRAL_FREQUENCY;
  real_T m_m_E_NEUTRAL_FDBK;
  real_T m_m_E_SHOW_SCORE;
  real_T m_m_DISPLAY_TRIAL_COL;
  real_T m_m_K_INSTRUCT_TIME;
  real_T m_m_E_SHOW_INSTRUCT;
  real_T m_m_INSTRUCT_PAUSE_BTN;
  real_T m_m_K_LEFTHAND_TGT;
  real_T m_m_K_ROBOT_RAMP_TIME;
  real_T m_m_K_ROBOT_MOVE_TIME;
  real_T m_m_K_FIX_LEFTHAND;
  real_T m_m_E_NO_EVENT;
  real_T m_m_K_UNUSED;
  real_T m_m_ROTATED_COLOR;
} SFvmr_rwd_fix_leftarmLocalData;

#endif                                 /*typedef_SFvmr_rwd_fix_leftarmLocalData*/

/* Named Constants */
#define m_m_const_col_x                (1.0)
#define m_m_const_col_y                (2.0)
#define m_m_const_E_TARGET_ON          (3.0)
#define m_m_const_LOGICAL_RADIUS       (4.0)
#define m_m_const_START_TARGET_COL     (1.0)
#define m_m_const_END_TARGET_COL       (2.0)
#define m_m_const_ROTATION_CENTER      (3.0)
#define m_m_const_MAXREACHTIME_COL     (5.0)
#define m_m_const_ROTATION_TYPE        (7.0)
#define m_m_const_ROTATION             (8.0)
#define m_m_const_DELAY_POSTTRIAL_COL  (6.0)
#define m_m_const_E_STAY_CENTER        (2.0)
#define m_m_const_VISUAL_RADIUS        (3.0)
#define m_m_const_COLOR                (5.0)
#define m_m_const_K_SCORETEXT_ROW      (1.0)
#define m_m_const_LABEL_HEIGHT         (8.0)
#define m_m_const_HITCOLOR             (6.0)
#define m_m_const_E_HIT_TARGET         (5.0)
#define m_m_const_E_MISS_TARGET        (9.0)
#define m_m_const_K_REWARD_VAL         (2.0)
#define m_m_const_K_TONE_HIT_DURATION  (4.0)
#define m_m_const_K_TONE_HIT_FREQUENCY (5.0)
#define m_m_const_K_VIS_RAD            (6.0)
#define m_m_const_E_REWARD             (6.0)
#define m_m_const_WAIT_AT_START_COL    (4.0)
#define m_m_const_LABEL                (7.0)
#define m_m_const_K_RETURN_RING_ROW    (7.0)
#define m_m_const_STROKE_WIDTH         (9.0)
#define m_m_const_STROKE_COLOR         (10.0)
#define m_m_const_K_SCORE_TIME         (8.0)
#define m_m_const_HAND_VIS_COL         (9.0)
#define m_m_const_CLAMP_COL            (10.0)
#define m_m_const_DO_REWARD_COL        (11.0)
#define m_m_const_K_TONE_NEUTRAL_DURATION (10.0)
#define m_m_const_K_TONE_NEUTRAL_FREQUENCY (11.0)
#define m_m_const_E_NEUTRAL_FDBK       (10.0)
#define m_m_const_E_SHOW_SCORE         (17.0)
#define m_m_const_DISPLAY_TRIAL_COL    (12.0)
#define m_m_const_K_INSTRUCT_TIME      (9.0)
#define m_m_const_E_SHOW_INSTRUCT      (18.0)
#define m_m_const_INSTRUCT_PAUSE_BTN   (2.0)
#define m_m_const_K_LEFTHAND_TGT       (12.0)
#define m_m_const_K_ROBOT_RAMP_TIME    (14.0)
#define m_m_const_K_ROBOT_MOVE_TIME    (15.0)
#define m_m_const_K_FIX_LEFTHAND       (13.0)
#define m_m_const_E_NO_EVENT           (0.0)
#define m_m_const_K_UNUSED             (3.0)
#define m_m_const_ROTATED_COLOR        (11.0)

/* Variable Declarations */
extern uint32_T _vmr_rwd_fix_leftarmMachineNumber_;
extern SFvmr_rwd_fix_leftarmLocalData svmr_rwd_fix_leftarmLocalData;

/* Variable Definitions */

/* Function Declarations */
extern void vmr_rwd_fix_leftarm_initializer(void);
extern void vmr_rwd_fix_leftarm_terminator(void);

/* Function Definitions */

/* We load infoStruct for rtw_optimation_info on demand in mdlSetWorkWidths and
   free it immediately in mdlStart. Given that this is machine-wide as
   opposed to chart specific, we use NULL check to make sure it gets loaded
   and unloaded once per machine even though the  methods mdlSetWorkWidths/mdlStart
   are chart/instance specific. The following methods abstract this out. */
extern mxArray* load_vmr_rwd_fix_leftarm_optimization_info(void);
extern void unload_vmr_rwd_fix_leftarm_optimization_info(void);

#endif
